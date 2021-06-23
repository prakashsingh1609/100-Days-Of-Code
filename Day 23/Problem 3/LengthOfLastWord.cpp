class Solution {
public:
    int lengthOfLastWord(string s) {
        int space=0,c=0,a;
        reverse(s.begin(),s.end());
        for(int i=0;i<s.length();i++){
            if(s[i]==' ')space++;
            else {
                a=i;
                break;
            }
        }
        for(int i=a;i<s.length();i++){
            if(s[i]==' ')break;
            else c++;
        }
        return c;
        
        
        
    }
};