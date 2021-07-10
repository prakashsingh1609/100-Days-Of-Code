class Solution{   
public:
    int getOddOccurrence(int arr[], int n) {
        
        int hash[1000000]={0};
        for(int i=0;i<n;i++)
        {
            hash[arr[i]]++;
        }
        for(int i=0;i<1000000;i++)
        {
            if(hash[i]%2!=0)
            {
                return i;
            }
        }
    }
};
