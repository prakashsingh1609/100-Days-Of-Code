class Solution {
public:
    string freqAlphabets(string s) {
    string res,tmp;
    int n = s.length();
    int i=0;
    
    if(n<=2) {
        for(i=0;i<n;i++)
            res+=string(1,char('a'+ s[i] - '1'));
    } else {
        for(i=0;i<n;i++) {
            if(i+2<n && s[i+2]=='#') {
                tmp=""; tmp+=s[i]; tmp+=s[i+1]; 
                res+= string(1,char('a'+stoi(tmp)-1));
                i+=2;                    
            }else { 
                res+=string(1,char('a'+s[i])-'1');
            }
            
        }
    }
    
    return res;
}
};