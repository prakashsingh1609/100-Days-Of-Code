class Solution {
public:
     bool isPalindrome(string s) {
        string strcap;
        for(int i = 0;i<s.length();i++)
            if((s[i]>='a' and s[i]<='z')  or (s[i]>='A' and s[i]<='Z' or (s[i]>='0' and s[i]<='9'))){
                strcap+=toupper(s[i]);
            }
        s = strcap;
        reverse(strcap.begin(),strcap.end());
        if(s == strcap)return true;
        return false;
    }
};