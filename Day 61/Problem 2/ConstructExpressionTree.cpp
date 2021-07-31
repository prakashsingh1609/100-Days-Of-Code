#include<bits/stdc++.h>
using namespace std;

struct et
{
	char value;
	et* left, *right;
	
	et(char x){
	    value = x;
	    left = right = NULL;
	}
};

bool isOperator(char c)
{
	if (c == '+' || c == '-' ||
			c == '*' || c == '/' ||
			c == '^')
		return true;
	return false;
}

void inorder(et *t)
{
	if(t)
	{
		inorder(t->left);
		printf("%c ", t->value);
		inorder(t->right);
	}
}

et* constructTree(char []);

int main()
{   
    int t;
    cin>>t;
    while(t--){
    char postfix[25];
	cin>>postfix;
	et* r = constructTree(postfix);
	inorder(r);
	cout<<endl;
}
return 0;
}// } Driver Code Ends


/*struct et
{
	char value;
	et* left, *right;
};*/

//function to construct expression tree
et* BuildET(string s,int &curr)
{
if(curr<0) return NULL;
et* root=new et(s[curr]);
curr--;
if(isalpha(root->value))
{
return root;
}
else
{
root->right=BuildET(s,curr);
root->left=BuildET(s,curr);
}
return root;
}
et* constructTree(char post[])
{
//code here
string s="";
int i=0;
while(post[i]!='\0')
{
s.push_back(post[i]);
i++;
}
int curr=s.length()-1;
return BuildET(s,curr);
}