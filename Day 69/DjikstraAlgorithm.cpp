class Solution
{
	public:
	//Function to find the shortest distance of all the vertices
    //from the source vertex S.
    int min(vector<bool>proc,vector<int>dis,int V){
        int m = INT_MAX;
        int m_index;
        for(int i=0;i<V;i++){
            if(!proc[i] and dis[i]<m){
                m = dis[i];
                m_index = i;
            }
        }
        return m_index;
    }
    vector <int> dijkstra(int V, vector<vector<int>> adj[], int S)
    {
        // Code here
        vector<bool>proc(V,false);
        vector<int>dis(V,INT_MAX);
        dis[S] = 0;
        for(int i=0;i<V-1;i++){
            int u = min(proc,dis,V);
            proc[u] = true;
            for(auto v: adj[u]){
                //if(adj[u][v]!=0){
                   // if((dis[u]+adj[u][v])<dis[v])dis[v]=dis[u]+adj[u][v];
                //}
                if(!proc[v[0]]   && (dis[u] + v[1]) < dis[v[0]])
                {
                    dis[v[0]] = dis[u] + v[1];
                }
            }
        }
        return dis;
    }
};