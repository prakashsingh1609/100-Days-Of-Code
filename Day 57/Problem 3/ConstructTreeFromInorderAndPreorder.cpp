//

#include<bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	struct Node *left;
	struct Node *right;
	
	Node(int x){
	    data = x;
	    left = NULL;
	    right = NULL;
	}
};


void printPostOrder(Node *root)
{
	if(root==NULL)
		return;
	printPostOrder(root->left);
	printPostOrder(root->right);
	cout<<root->data<<" ";
}

 // } Driver Code Ends


/*Complete the code here.
Node is as follows:
struct Node
{
  int data;
  Node* left;
  Node* right;
};
*/
class Solution{
    public:
    int search(int in[], int ins , int ine, int x){
        for(int i=ins;i<ine;i++){
            if(in[i]==x)return i;
        }
    }
    Node* makeTree(int in[],int pre[],int &start, int ins,int ine){
        if(ins>ine)return NULL;
        Node* root = new Node(pre[start]);
        int mid = search(in,ins,ine,pre[start]);
        start++;
        root->left = makeTree(in,pre,start,ins,mid-1);
        root->right = makeTree(in,pre,start,mid+1,ine);
        return root;
    }
    Node* buildTree(int in[],int pre[], int n)
    {
        // Code here
        int ins = 0;
        int ine = n-1;
        int start = 0;
        return makeTree(in,pre,start,ins,ine);
    }
};

// { Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		
		int inorder[n], preorder[n];
		for(int i=0; i<n; i++)
			cin>> inorder[i];
		for(int i=0; i<n; i++)
			cin>> preorder[i];
		Solution obj;
		Node *root = obj.buildTree(inorder, preorder, n);
		printPostOrder(root);
		cout<< endl;
	}
}
  // } Driver Code Ends