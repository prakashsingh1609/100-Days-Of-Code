class Solution
{
	public:
	//Function to return list containing vertices in Topological order. 
	void dfs(int start, bool vis[], stack<int>& s,vector<int> adj[]){
	    
	    vis[start] = true;
	    for(auto x: adj[start]){
	        if(!vis[x])dfs(x,vis,s,adj);
	    }
	    s.push(start);
	}
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    // code here
	    vector<int>v;
	    stack<int>s;
	    bool vis[V];
	    for(int i=0;i<V;i++){
	        vis[i]=false;
	    }
	    //dfs(adj,0,s,vis);
	    
	    for (int i = 0; i < V; i++)
        if (vis[i] == false)
            dfs(i, vis, s,adj);
            
	    while(!s.empty()){
	        v.push_back(s.top());
	        s.pop();
	    }
	    //reverse(v.begin(),v.end());
	    return v;
	}
};