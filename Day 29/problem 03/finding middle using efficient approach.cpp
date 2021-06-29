int getMiddle(Node *head)
{
   // Your code here
 
     if(head==NULL)return 0;
    
    Node *slow=head,*fast=head;
    while(fast!=NULL && fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow->data;
}
