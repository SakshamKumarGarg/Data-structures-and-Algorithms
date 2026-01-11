#include<iostream>
#include<unordered_map>
#include<list>
#include<queue>


using namespace std;

class Graph{
    public:
    
        // for unweighted graph
        // unordered_map<int,list<int>> adj_list;
        // void add_edge(int u, int v, bool direction){
        //     // 0 -> undirected
        //     //1 -> directed
        //     if(direction == 0){
        //         adj_list[u].push_back(v);
        //         adj_list[v].push_back(u);

        //     }
        //     else{
        //         adj_list[u].push_back(v);
        //     }
        // }

        //for weighted graph
        unordered_map<int,list<pair<int,int>>> adj_list;
        void add_edge(int u, int v, bool direction,int weight){
            // 0 -> undirected
            //1 -> directed
            if(direction == 0){
                adj_list[u].push_back({v,weight});
                adj_list[v].push_back({u,weight});

            }
            else{
                adj_list[u].push_back({v,weight});
            }
        }

        void print_adj_list(int n){
            for(int i=0;i<n;i++){
                cout<<i<<": ";
                cout<<"{";
                list<pair<int,int>> temp = adj_list[i];
                for(auto j : temp){
                    cout<<"("<<j.first<<","<<j.second<<"), ";
                }
                cout<<"}"<<"\n";
            }
        // void print_adj_list(int n){
        //     for(int i=0;i<n;i++){
        //         cout<<i<<": ";
        //         cout<<"{";
        //         list<int> temp = adj_list[i];
        //         for(auto j : temp){
        //             cout<<j<<", ";
        //         }
        //         cout<<"}"<<"\n";
        //     }
            // for(auto i: adj_list){
            //     cout<<i.first<<": ";
            //     cout<<"{";
            //     for(auto j:i.second){
            //         cout<<j<<", ";
            //     }
            //     cout<<"}"<<"\n";
            // }
        }

        void bfs_traversal(int src){
            queue<int> q;
            unordered_map<int,bool> visited;

            //initial state
            q.push(src);
            visited[src] = true;
            while(!q.empty()){
                int frontnode = q.front();
                cout<<frontnode<<", ";
                q.pop();
                for(auto neighbour : adj_list[frontnode]){
                    // neighbor = pair
                    // first = node
                    //second = wt
                    int node = neighbour.first;
                    int weight = neighbour.second;
                    if(!visited[node]){
                        q.push(node);
                        visited[node] = true;
                    }
                }
            }
        }

        void dfs_traversal(int n){
            unordered_map<int,bool> visited;

            // for disconnected components
            for(int src=0;src<n;src++){
                if(![visited[src]]){
                    dfsHelper(src,visited);
                }
            }
        }

        void dfsHelper(int src,unordered_map<int,bool> &visited){
            visited[src] = true;
            cout<< src<<", ";

            for(auto neighbour: adj_list[src]){
                //nbr = pair , fist = node, second = wt
                int node = neighbour.first;
                if(!visited[node]){
                    dfsHelper(node,visited);
                }
            }
        }
        
};
int main(){
    Graph g;

    g.add_edge(0,3,1,3);
    g.add_edge(0,5,1,4);
    g.add_edge(0,2,1,1);
    g.add_edge(2,5,1,16);
    g.add_edge(3,5,1,3);
    g.add_edge(5,4,1,4);
    g.add_edge(5,6,1,1);
    g.add_edge(4,1,1,16);
    g.add_edge(6,1,1,16);
    g.dfs_traversal(7);
    // g.bfs_traversal(0);


    // g.add_edge(0,1,1,3);
    // g.add_edge(0,2,1,4);
    // g.add_edge(1,2,1,1);
    // g.add_edge(2,3,1,16);

    
    // g.add_edge(0,1,1);
    // g.add_edge(0,2,1);
    // g.add_edge(1,2,1);
    // g.add_edge(2,3,1);
    // g.print_adj_list();
    // g.print_adj_list(7);
    return 0;

}