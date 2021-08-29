class Solution {
public:
   int findCenter(vector<vector<int>>& edges) {
        int n=edges.size();
        
        vector<int>degree(n+2,0);
        for(auto it:edges){
            for(auto i:it){
                degree[i]++;
            }
        }
        for(int i=1;i<=n+1;i++){
            if(degree[i]==n){
                return i;
            }
        }
        return 0;
    }
};