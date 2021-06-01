int Solution::solve(vector<int> &A) {
    sort(A.begin(),A.end());
    int N =A.size();
    return A[0]+A[N-1];
}
