class KthLargest {
public:
    priority_queue<int, vector<int>, greater<int> > heap;
    int curr = INT_MIN;
    int x;
    KthLargest(int k, vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        x = k;
        if(k <= n)
        {
            for(int i = n-k; i < n; i ++)
            heap.push(nums[i]);
        curr = nums[n-k];
        }
        else if(n != 0){
            for(int i = 0; i< n ; i ++)
                heap.push(nums[i]);
                curr = heap.top();
        }
        
        
    
    }
    
    int add(int val) {
                
       // return -1;
        if(heap.size() <x or val > curr){
            heap.push(val); 
            if(heap.size() >x)
            heap.pop();
            curr = heap.top();
        }
            return curr;
    }
};
/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */