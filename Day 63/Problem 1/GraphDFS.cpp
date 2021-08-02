class Solution 
{
    public:
	//Function to return a list containing the DFS traversal of the graph.
	void dfs(vector<int>adj[],int start,vector<int>&v,bool vis[]){
	    v.push_back(start);
	    vis[start] = true;
	    for(auto x: adj[start]){
	        if(!vis[x])dfs(adj,x,v,vis);
	    }
	}
	vector<int>dfsOfGraph(int V, vector<int> adj[])
	{
	    // Code here
	    vector<int>v;
	    bool vis[V];
	    for(int i=0;i<V;i++){
	        vis[i]=false;
	    }
	    dfs(adj,0,v,vis);
	    return v;
	}
};