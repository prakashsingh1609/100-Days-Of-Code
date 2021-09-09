class Solution {
public:
    int oddCells(int m, int n, vector<vector<int>>& indices) {
        vector<int> rows_add(m);
        vector<int> cols_add(n);
        vector<vector<int>> mat(m, vector<int>(n));
        for (auto el: indices){
            rows_add[el[0]]++;
            cols_add[el[1]]++;
        }
        int odd_count = 0;
        for (int i = 0;i < m;i++)
            for (int j = 0;j < n;j++){
                mat[i][j] += rows_add[i] + cols_add[j];
                if (mat[i][j] % 2 != 0)
                    odd_count += 1;
            }
        return odd_count;
    }
};