class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int>s;vector<int>v;
        for(int i=0;i<nums1.size();i++){
            for(int j=0;j<nums2.size();j++){
                if(nums1[i]==nums2[j]){
                    s.insert(nums1[i]);
                }
            }
        }
        for(auto it=s.begin();it!=s.end();++it){
            v.push_back(*it);
        }
        return v;
        
    }
};