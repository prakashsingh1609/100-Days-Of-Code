class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        
       
        vector <string> v;
        for(auto ch: words[0]){
             int i = 1;
            string temp = "";
            while(i < words.size()){
                int index = words[i].find(ch);
                
                if(index != -1)
                {
                   words[i].erase(index, 1);
                    i++;
                }
                else break;
            }
            if(i==words.size()){
                v.push_back(temp+ch);
                temp.erase();
            }
        }
        return v;
    }
};