int Solution::perfectPeak(vector<int> &A)
{
    int cnt = 0;
    int N = A.size();
    for (int i = 1; i < N - 1; i++)
    {
        int key = A[i];
        int max = A[0];
        int min = A[i + 1];
        for (int j = 0; j < i; j++)
        {
            if (max < A[j])
            {
                max = A[j];
            }
        }
        for (int k = i + 1; k < N; k++)
        {
            if (min > A[k])
            {
                min = A[k];
            }
        }
        if (key > max && key < min)
        {
            cnt++;
        }
    }
    if (cnt > 0)
    {
        return 1;
    }
    return cnt;
}
