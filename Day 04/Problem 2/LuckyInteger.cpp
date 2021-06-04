class Solution {
public:
    int findLucky(vector<int>& arr) {
        vector<int>a;
        vector<int>::iterator it;
        sort(arr.begin(),arr.end());
        for(it=arr.begin();it!=arr.end();++it){
            auto it1 = lower_bound(arr.begin(),arr.end(),*it);
            auto it2 = upper_bound(arr.begin(),arr.end(),*it);
            if(it2-it1 == (*it)){
                a.push_back(*it);
            }
        }
        if(a.size()==0){
            return -1;
        }
        else{
            return *max_element(a.begin(),a.end());
        }
    }
};