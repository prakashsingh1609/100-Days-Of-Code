int Solution::searchInsert(vector<int> &A, int B) {
    bool present = binary_search(A.begin(),A.end(),B);
    if(present==true){
        vector<int>::iterator it = lower_bound(A.begin(),A.end(),B);
        return it-A.begin();
    }
    else{
         vector<int>::iterator it = upper_bound(A.begin(),A.end(),B);
         return it-A.begin();
    }
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
}
