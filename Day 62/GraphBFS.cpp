
class Solution
{
    public:
    //Function to return Breadth First Traversal of given graph.
	vector<int>bfsOfGraph(int V, vector<int> adj[])
	{
	    // Code here
	     vector<int>v;
	    bool vis[V];
	    for(int i=0;i<V;i++){
	        vis[i] = false;
	    }
	    queue<int>q;
	    q.push(0);
	    vis[0]=true;
	    while(!q.empty()){
	        int temp = q.front();
	        q.pop();
	        v.push_back(temp);
	        for(int i=0;i<adj[temp].size();i++){
	            if(!vis[adj[temp][i]]){
	                q.push(adj[temp][i]);
	                vis[adj[temp][i]]=true;
	            }
	        }
	    }
	    return v;
	}
};