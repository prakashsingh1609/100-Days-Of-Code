class Solution 
{
    public:
    //Function to detect cycle in an undirected graph.
    bool dfs(vector<int>adj[],bool vis[],int start,int parent){
        vis[start] = true;
        for(auto x:adj[start]){
            if(!vis[x])
            {
                if(dfs(adj,vis,x,start))return true;
            }
            else if(x!=parent || x==start)return true;
        
        }
        
        return false;
        
    }
	bool isCycle(int V, vector<int>adj[])
	{
	    // Code here
	    bool vis[V];
	    for(int i=0;i<V;i++){
	        vis[i]=false;
	    }
	    for(int i=0;i<V;i++){
	        if(!vis[i]){
	           if(dfs(adj,vis,i,-1))return true;
	        }
	    }
	    return false;
	    
	}
};