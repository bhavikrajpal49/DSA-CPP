#include <iostream>
#include <unordered_map>
#include <list>
using namespace std;

class graph{
    public:
        unordered_map<int,list<int>>adj;

        void addEdge(int u,int v,bool direction){
            //direction 0 => undirected
            //direction 1 => directed

            //adding u->v
            adj[u].push_back(v);
            if(direction==0){
                adj[v].push_back(u);
            }
        }

        void printGraph(){
            for(auto i:adj){
                cout<<i.first<<"=>";
                for(auto it:i.second){
                    cout<<it<<", ";
                }
                cout<<endl;
            }
        }

};

int main(){
    int n;
    cout<<"enter no of nodes"<<endl;
    cin>>n;

    int m;
    cout<<"enter no of edges"<<endl;
    cin>>m;

    //creating new graph
    graph g;

    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        // creating new graph
        g.addEdge(u,v,0);
    }

    //printing graph
    g.printGraph();



}
