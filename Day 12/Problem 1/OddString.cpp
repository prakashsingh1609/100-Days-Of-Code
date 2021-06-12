class Solution {
public:
    string generateTheString(int n) {
        if(n%2==0){
            string s = "b";
            for(int i=1;i<n;i++){
                s=s+'a';
            }
            return s;
        }
        else{
            string s="a";
            for(int i=1;i<n;i++){
                s=s+'a';
            }
            return s;
        }
    }
};