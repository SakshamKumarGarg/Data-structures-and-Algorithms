#include<bits/stdc++.h>
using namespace std;

class Graph{
    public:
        unordered_map<int,list<pair<int,int>>> adjlist;
        void addEdge(int u,int v,int weight,bool direction){
            //direction =0 -> undirected graph
            //direction = 1 -> directed graph
            if(direction == 0){
                adjlist[u].push_back({v,weight});
                adjlist[v].push_back({u,weight});
            }
            else{
                adjlist[u].push_back({v,weight});
            }
        }

        void printadjlist(int n){
            for(int i=0;i<n;i++){
                cout<<i<<": ";
                cout<<" {";
                list<pair<int,int>> temp = adjlist[i];
                for(auto j:temp){
                    cout<<"("<<j.first<<","<<j.second<<"), "; 
                }
                cout<<"}"<<endl;
            }
        }

        void bfstrversal(int src){
            queue<int> q;
            unordered_map<int,bool>visited;

            q.push(src);
            visited[src] = true;
            while(!q.empty()){
                int frontnode = q.front();
                cout<<frontnode<<", ";
                q.pop();
                for(auto neighbour:adjlist[frontnode]){
                    int node = neighbour.first;
                    int weight = neighbour.second;
                    if(!visited[node]){
                        q.push(node);
                        visited[node] = true;
                    }
                }
            }
            cout<<endl;
        }

        void dfstraversal(int n){
            int src = 0;
            unordered_map<int,bool> visited;
            for(int src=0;src<n;src++){
                if(!visited[src]){
                    dfsHelper(src,visited);
                }
            }
            
        }
        

        void dfsHelper(int src,unordered_map<int,bool> &visited){
            visited[src] = true;
            cout<<src<<", ";
            for(auto nbr:adjlist[src]){
                int node = nbr.first;
                if(!visited[node]){
                    dfsHelper(node,visited);
                }
            }
        }
        
};

int main(){
    Graph g;
    g.addEdge(0,3,3,1);
    g.addEdge(0,5,3,1);
    g.addEdge(0,2,3,1);
    g.addEdge(2,5,3,1);
    g.addEdge(3,5,3,1);
    g.addEdge(5,4,3,1);
    g.addEdge(5,6,3,1);
    g.addEdge(4,1,3,1);
    g.addEdge(6,1,3,1);
   
    int n=7;
    g.printadjlist(n);
    cout<<endl<<"BFS: ";
    g.bfstrversal(0);

    cout<<endl<<"DFS: ";
    g.dfstraversal(n);

    return 0;

}