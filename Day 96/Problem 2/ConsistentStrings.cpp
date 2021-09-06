class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        unordered_set<char> s;
        for(int i = 0 ; i < allowed.size() ;i++)
            s.insert(allowed[i]);
        
        int ans =0 ;
        for(int i = 0 ; i <words.size() ;i++)
        {
            int j = 0;
            while(j<words[i].size())
            {
                if(s.find(words[i][j]) == s.end())
                    break;
                j++;
            }
            
            if(j==words[i].size())
                ans++;
        }
        
        return ans;
    }
};