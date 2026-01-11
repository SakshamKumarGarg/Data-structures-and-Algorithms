#include<iostream>
#include<unordered_map>
#include<queue>
#include<list>

using namespace std;

class Graph{
    public:
        unordered_map<int,list<int>> adj_list;
        void add_edge(int u, int v, bool direction){
            // 0 -> undirected
            //1 -> directed
            if(direction == 0){
                adj_list[u].push_back(v);
                adj_list[v].push_back(u);

            }
            else{
                adj_list[u].push_back(v);
            }
        }
        
        bool cycledetection_undirected_bfs(int src,unordered_map<int, bool> &visited){
            queue<int> q;
            unordered_map<int,int> parent;
            

            q.push(src);
            visited[src] = true;
            parent[src] = -1;

            while(!q.empty()){
                int frontnode = q.front();
                q.pop();
                for(auto nbr:adj_list[frontnode]){
                    if(!visited[nbr]){
                        q.push(nbr);
                        visited[nbr] = true;
                        parent[nbr] = frontnode;
                    }
                    // cycle detection case
                    else if(visited[nbr]==true && nbr != parent[frontnode]){
                        return true;
                    }
                }
            }

            return false;
        }

        void print_adj_list(int n){
            for(int i=0;i<n;i++){
                cout<<i<<": ";
                cout<<"{";
                list<int> temp = adj_list[i];
                for(auto j : temp){
                    cout<<j<<", ";
                }
                cout<<"}"<<"\n";
            }
        }

};
int main(){
    Graph g;
    g.add_edge(0,1,0);
    g.add_edge(1,2,0);
    g.add_edge(3,0,0);
    g.add_edge(2,3,0);
    int n = 4;
    g.print_adj_list(n);

    bool ans = false;
    unordered_map<int, bool> visited;

    for(int i=0;i<n;i++){
        if(!visited[i]){
            ans = g.cycledetection_undirected_bfs(i,visited);
        }
        if(ans == true){
            break;
        }
    }

    if(ans == true){
        cout<<"cycle present"<<endl;
    }
    else{
        cout<<"cycle not present"<<"\n";
    }

    return 0;

}