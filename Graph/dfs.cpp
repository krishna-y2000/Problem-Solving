#include<iostream>
#include<vector>
using namespace std;
	//Function to return a list containing the DFS traversal of the graph.
	
	void dfs(int node ,   vector<int> adj[] , vector<int> &arr , vector<bool> &visited )
	{ 
	    visited[node] = true ;
	    arr.push_back(node);
	    for(int i : adj[node] )
	    {
	        if( !visited[i] )
	            dfs(i , adj , arr , visited );
	    }
	}
    
vector<int>dfsOfGraph(int V, vector<int> adj[])
	{
	    // Code here
	    vector<int> arr;
        vector<bool> visited(V,false);
	    dfs(0 , adj  , arr , visited);
	    
	    return arr ;
	}
	

	
    int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int V, E;
    	cin >> V >> E;

    	vector<int> adj[V];

    	for(int i = 0; i < E; i++)
    	{
    		int u, v;
    		cin >> u >> v;
    		adj[u].push_back(v);
    		adj[v].push_back(u);
    	}
        // string s1;
        // cin>>s1;
        vector<int>ans=dfsOfGraph(V, adj);
        for(int i=0;i<ans.size();i++){
        	cout<<ans[i]<<" ";
        }
        cout<<endl;
	}
	return 0;
    };

	