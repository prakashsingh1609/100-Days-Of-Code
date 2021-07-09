*/
class Solution{
  public:
    //Function to find triplets with zero sum.
    bool findTriplets(int arr[], int n)
    { 
        //Your code here
                int l, r;


	sort(arr, arr + n);


	for (int i = 0; i < n - 2; i++) {


		l = i + 1; // index of the first element in the


		r = n - 1; // index of the last element
		while (l < r) {
			if (arr[i] + arr[l] + arr[r] == 0) {
			//	printf("%d, %d, %d", arr[i],
				//	arr[l], arr[r]);
				return 1;
			}
			else if (arr[i] + arr[l] + arr[r] < 0)
				l++;
			else 
				r--;
		}
	}


	return 0;
    }
};
