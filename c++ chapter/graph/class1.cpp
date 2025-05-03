#include<bits/stdc++.h>
using namespace std;

class Graph{
    public:
        unordered_map<int,list<int>> adjlist;
        void addEdge(int u,int v,bool direction){
            //direction =0 -> undirected graph
            //direction = 1 -> directed graph
            if(direction == 0){
                adjlist[u].push_back(v);
                adjlist[v].push_back(u);
            }
            else{
                adjlist[u].push_back(v);
            }
        }

        void printadjlist(int n){
            for(int i=0;i<n;i++){
                cout<<i<<": ";
                cout<<" {";
                list<int> temp = adjlist[i];
                for(auto j:temp){
                    cout<<j<<", ";
                }
                cout<<"}"<<endl;
            }
        }

        bool cycledetectionUndirectedBFS(int src,unordered_map<int,bool>&visited){
            queue<int> q;
            unordered_map<int,int> parent;
        
            q.push(src);
            visited[src] = true;
            parent[src] = -1;

            while(!q.empty()){
                int frontnode = q.front();
                q.pop();
                for(auto nbr:adjlist[frontnode]){
                    if(!visited[nbr]){
                        q.push(nbr);
                        visited[nbr] = true;
                        parent[nbr] = frontnode;
                    }
                    else if(visited[nbr] == true && nbr != parent[frontnode]){
                        return true;
                    }
                }
            }
            return false;
        }

        bool cycledetectionUndirectedDFS(int src,unordered_map<int,bool> &visited,int parent){
            visited[src] = true;

            for(auto nbr:adjlist[src]){
                if(!visited[nbr]){
                    bool ans = cycledetectionUndirectedDFS(nbr,visited,src);
                    if(ans == true) return true;
                }
                else if(visited[nbr] == true && nbr!=parent){
                    return true;
                }
            }
            return false;
        }

        bool cycledetectionDirectedDFS(int src,unordered_map<int,bool> &visited,unordered_map<int,bool> &dfstracker){
            visited[src] = true;
            dfstracker[src] = true;

            for(auto nbr:adjlist[src]){

                if(!visited[nbr]){
                    bool ans = cycledetectionDirectedDFS(nbr,visited,dfstracker);
                    if(ans==true) return true;
                }
                else if(visited[nbr] == true && dfstracker[nbr] == true){
                    return true;
                }
            }
            
            //backtrack
            dfstracker[src] = false;
            return false;
        }
};

int main(){
    Graph g;
    g.addEdge(0,1,1);
    g.addEdge(1,2,1);
    g.addEdge(3,0,1);
    g.addEdge(2,3,1);
    int n=4;
    g.printadjlist(n);

    bool ans = false;
    unordered_map<int,bool> visited;
    unordered_map<int,bool> dfstracker; //for directed cycle detection
    int parent = -1;
 
    for(int i=0;i<n;i++){
        if(!visited[i]){   
            // bool ans = g.cycledetectionUndirectedBFS(i,visited);
            // bool ans = g.cycledetectionUndirectedDFS(i,visited,parent);
            ans = g.cycledetectionDirectedDFS(i,visited,dfstracker);
            if(ans == true){
                break;
            }
        }
    }
    if(ans == true){
        cout<<"cycle present"<<endl;
    }
    else{
        cout<<"cycle absent"<<endl;
    }
    return 0;

}