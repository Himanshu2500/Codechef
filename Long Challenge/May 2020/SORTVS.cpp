#include<bits/stdc++.h>
using namespace std;

#define rep(i,a,b) for(int i=a;i<(b);i++)
#define trav(a,x) for(auto & a :x)
#define all(x) begin(x),end(x)

typedef long long ll;
typedef vector<int> vi;

const int M=1e9+7;
vector<int> concom[10];
int k;
class Graph 
{ 
    int V;    // No. of vertices 
  
    // Pointer to an array containing adjacency lists 
    list<int> *adj; 
  
    // A function used by DFS 
    void DFSUtil(int v, bool visited[]); 
public: 
    Graph(int V);   // Constructor 
    ~Graph(); 
    void addEdge(int v, int w); 
    void connectedComponents(); 
}; 
  
// Method to print connected components in an 
// undirected graph 
void Graph::connectedComponents() 
{ 
    // Mark all the vertices as not visited 
    bool *visited = new bool[V]; 
    for(int v = 0; v < V; v++) 
        visited[v] = false; 
  
    for (int v=0; v<V; v++) 
    { 
        if (visited[v] == false) 
        { 
            // print all reachable vertices 
            // from v 
            DFSUtil(v, visited); 
            
            k++;
            if(concom[k-1].size()==1)
            break;
            
        } 
    } 
    delete[] visited; 
} 
  
void Graph::DFSUtil(int v, bool visited[]) 
{ 
    // Mark the current node as visited and print it 
    visited[v] = true;
	if(v!=0) 
    concom[k].push_back(v); 
  
    // Recur for all the vertices 
    // adjacent to this vertex 
    list<int>::iterator i; 
    for(i = adj[v].begin(); i != adj[v].end(); ++i) 
        if(!visited[*i]) 
            DFSUtil(*i, visited); 
} 
  
Graph::Graph(int V) 
{ 
    this->V = V; 
    adj = new list<int>[V]; 
} 
  
Graph::~Graph() 
{ 
    delete[] adj; 
} 
  
// method to add an undirected edge 
void Graph::addEdge(int v, int w) 
{ 
    adj[v].push_back(w); 
    adj[w].push_back(v); 
} 

int arr[19];

void solve()
{  
int n,m;
cin>>n>>m;

for(int i=1;i<=n;i++)
cin>>arr[i];

Graph g(n+1);
int a,b;
for(int i=0;i<10;i++)
concom[i].clear();

k=0;
for(int i=1;i<=m;i++)
{
	cin>>a>>b;
	
	g.addEdge(a,b); 
}

for(int i=0;i<k;i++)
{
for(int j=0;j<concom[i].size();j++)
cout<<concom[i][j]<<" ";

cout<<"\n";

}
}
int main() 
{   
    ios::sync_with_stdio(0);
	cin.tie(0);
  
   int test;
   cin>>test;
   while(test--)
     solve();
  return 0;
}
