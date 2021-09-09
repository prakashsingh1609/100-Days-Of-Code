class Solution {
public:
  bool areOccurrencesEqual(string s) {
        unordered_map<char,int> mp;
        for(int i=0;i<s.size();i++)
            mp[s[i]]++;
        int cnt= mp[s[0]];
        for(auto &it : mp){
            if(cnt!=it.second)
                return false;
        }
        return true;
    }
};