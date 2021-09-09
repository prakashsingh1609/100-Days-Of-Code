class Solution {
public:
    int countGoodRectangles(vector<vector<int>>& rectangles) {
        int n=rectangles.size();
        vector<int> v(n);
        for(int i=0;i<n;i++)
        {
            v[i]=min(rectangles[i][0],rectangles[i][1]);
        }
        auto m=max_element(v.begin(),v.end());
        return count(v.begin(),v.end(),*m);
    }
};