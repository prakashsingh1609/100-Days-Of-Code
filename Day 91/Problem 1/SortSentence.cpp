class Solution {
public:
    string sortSentence(string s) {
        stringstream ss(s);
        string word;
        vector<string>v(10);  
        int count=0;
        while(ss>>word){
            v[word.back()-'0'] = word.substr(0,word.size()-1);
            count++;
        }
        string res="";
        for(int i=0;i<count;i++){
            res += v[i+1];
            res+=" ";
        }
        return res.substr(0,res.size()-1);
    }
};