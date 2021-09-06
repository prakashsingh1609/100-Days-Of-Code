class Solution {
public:
    int minOperations(int n) {
        return n&1?(n*n-1)/4:(n*n)/4;
    }
};