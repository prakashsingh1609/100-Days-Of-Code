int Solution::firstMissingPositive(vector<int> &A) {
    int N = A.size();
    sort(A.begin(),A.end());
    if(A[0]>0 && A[0]!=1)
    {
        return 1;
    }
    else{
    for(int i=0;i<N;i++)
    {
        if(A[i]<0 && A[i+1]!=1 && A[i+1]>0)
        {
            return 1;
        }
        if(A[i]>=0){
            if(A[i+1]!=A[i]+1 or i+1==N)
            {
                return A[i]+1;
            }
        }
    }
    }
}
