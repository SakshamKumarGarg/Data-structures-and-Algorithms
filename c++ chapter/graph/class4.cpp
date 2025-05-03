#include<bits/stdc++.h>
using namespace std;

class Graph{
    public:
        unordered_map<int,list<pair<int,int>>> adj;

        void addEdge(int u,int v,int wt,bool direction){
            if(direction == 0){
                adj[u].push_back({v,wt});
                adj[v].push_back({u,wt});
            }
            else{
                adj[u].push_back({v,wt});
            }
        }

        // void printadjlist(int n){
        //     for(int i=0;i<n;i++){
        //         cout<<i<<": {";
        //         for(auto j:adj[i]){
        //             cout<<j<<", ";
        //         }
        //         cout<<"}"<<endl;
        //     }
        // }

        // void shortestpathBFS(int src,int dest){
        //     unordered_map<int,bool> visited;
        //     unordered_map<int,int> parent;

        //     queue<int> q;
        //     q.push(src);
        //     visited[src] = true;
        //     parent[src] = -1;

        //     while(!q.empty()){
        //         int frontnode = q.front();
        //         q.pop();

        //         for(auto nbr:adj[frontnode]){
        //             if(!visited[nbr]){
        //                 q.push(nbr);
        //                 visited[nbr] = true;
        //                 parent[nbr] = frontnode;
        //             }
        //         }
        //     }
        //     vector<int> path;
        //     int node = dest;
        //     while(node != -1){
        //         path.push_back(node);
        //         node = parent[node];
        //     }

        //     reverse(path.begin(),path.end());

        //     cout<<"Printing Path"<<endl;
        //     for(auto i:path){
        //         cout<<i<<"->";
        //     }
        //     cout<<endl;
        // }

        void topoSortDFS(int src,unordered_map<int,bool> &visited, stack<int> &ans){
            visited[src] = true;
            for(auto nbr:adj[src]){
                if(!visited[nbr.first]){
                    topoSortDFS(nbr.first,visited,ans);
                }
            }
            ans.push(src);
        }
        void shortestpathDFS(int src){
            stack<int> topoOrder;
            unordered_map<int,bool> vis;

            topoSortDFS(src,vis,topoOrder);

            int n= topoOrder.size();
            vector<int> dist(n,INT_MAX);

            src = topoOrder.top();
            topoOrder.pop();
            dist[src] =0;
            for(auto nbr:adj[src]){
                int node = nbr.first;
                int wtdistance = nbr.second;
                if(dist[src] + wtdistance < dist[node]){
                    dist[node] = dist[src] + wtdistance; 
                }
            }

            while(!topoOrder.empty()){
                int frontnode = topoOrder.top();
                topoOrder.pop();

                for(auto nbr:adj[frontnode]){
                    int node = nbr.first;
                    int wtdistance = nbr.second;
                    if(dist[frontnode] + wtdistance < dist[node]){
                        dist[node] = dist[frontnode] + wtdistance; 
                    }
                }
            }

            cout<<"Printing distance array"<<endl;
            for(auto i:dist){
                cout<<i<<" ";
            }
            cout<<endl;

        }
};
int main(){
    Graph g;

    g.addEdge(0,1,5,1);
    g.addEdge(0,2,13,1);
    g.addEdge(0,4,3,1);
    g.addEdge(1,2,7,1);
    g.addEdge(1,4,1,1);
    g.addEdge(4,3,6,1);
    g.addEdge(3,2,2,1);

    g.shortestpathDFS(0);

    // g.addEdge(0,1,0);
    // g.addEdge(1,2,0);
    // g.addEdge(2,3,0);
    // g.addEdge(2,4,0);
    // g.addEdge(4,5,0);
    // g.addEdge(5,3,0);
    
    // int src = 0;
    // int dest = 3;
    // g.shortestpathBFS(src,dest);
   
    return 0;

}