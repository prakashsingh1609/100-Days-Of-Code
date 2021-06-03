class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int n = items.size(),c=0;
        for(int i=0;i<n;i++)
        {
            if(ruleKey=="type")
            {
                if(items[i][0]==ruleValue){
                    c++;
                }
            }
            else if(ruleKey=="color"){
                if(items[i][1]==ruleValue){
                    c++;
                }
            }
            else{
                if(items[i][2]==ruleValue){
                    c++;
                }
            }
        }
        return c;
    }
};