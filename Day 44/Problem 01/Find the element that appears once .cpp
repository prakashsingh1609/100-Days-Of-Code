class Solution{
public:	
	int search(int A[], int N){
	    //code
	   
	    for(int i=0;i<N;i=i+2)
	    {
	       if(A[i]!=A[i+1])
	       {   
	         //  break;
	           return A[i];
	       }
	       else{
	           continue;
	       }
	    }
	   
	  return 0;
	}
};
