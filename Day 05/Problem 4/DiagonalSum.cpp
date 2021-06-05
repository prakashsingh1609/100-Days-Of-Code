class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        vector<int>ans;
        for(int i = 0;i<mat.size();i++){
            for(int j=0;j<mat[i].size();j++){
                if(i==j or (i+j==mat[0].size()-1)){
                    ans.push_back(mat[i][j]);
                }
            }
        }
        int sum=accumulate(ans.begin(),ans.end(),0);
        return sum;
    }
};