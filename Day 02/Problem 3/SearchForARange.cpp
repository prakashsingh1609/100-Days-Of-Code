vector<int> Solution::searchRange(const vector<int> &A, int B)
{
    bool present = binary_search(A.begin(), A.end(), B);
    vector<int> v;
    if (present == false)
    {
        v.push_back(-1);
        v.push_back(-1);
        return v;
    }
    else
    {
        auto it1 = lower_bound(A.begin(), A.end(), B);
        auto it2 = upper_bound(A.begin(), A.end(), B);
        v.push_back(it1 - A.begin());
        v.push_back(it2 - A.begin() - 1);
        return v;
    }
}
