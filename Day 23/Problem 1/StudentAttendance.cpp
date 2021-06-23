class Solution {
public:
    bool checkRecord(string s) {
        int c=0,a=0,b=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='A'){
                c++;
            }
        }
        for(int i=0;i<s.length();i++){
            if(s[i]=='L'){
                a++;
                b=a;
            }
            else a=0;
            if(b>2)return false;
        }
        if(c>=2)return false;
        return true;
    }
};