class Solution {
public:
    vector<int> sumZero(int n) {
        if(n%2!=0){
            vector<int>v;
            int a = n/2 - n/2 - n/2;
            int b = n/2;
            for(int i =a;i<=b;i++){
                v.push_back(i);
            }
            return v;
        }
        else{
            vector<int>v;
            int a = n/2 - n/2 - n/2;
            int b = n/2;
            for(int i=a;i<=b;i++){
                if(i==0)continue;
                else{
                    v.push_back(i);
                }
            }
            return v;
        }
    }
};