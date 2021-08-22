class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle.length()==0) return 0;
        int p= haystack.find(needle);
        return p;
    }
};