class Solution {
public:
    int maxDepth(string s) {
         int cont=0;
        int best=0;
        for(int i=0;i<s.size();++i){
            if(s[i]=='(')cont++;
            else if(s[i]==')')cont--;
            best = max(cont,best);
        }
        return best;
    }
};