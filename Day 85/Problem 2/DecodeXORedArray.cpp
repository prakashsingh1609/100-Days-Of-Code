class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        vector<int>ans;
        ans.push_back(first);
        int element = first ^ encoded[0];
         ans.push_back(element);
        for(int i=1;i<encoded.size();i++){
            ans.push_back(encoded[i]^ans[i]);
        }
        return ans;
    }
};