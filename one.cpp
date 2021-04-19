Node *removeDuplicates(Node *head)
{
 Node *root=head;
 
 if(root==NULL)
 return root;
 
 while(root->next!=NULL)
 {
     if(root->data==root->next->data)
     root->next=root->next->next;
     
     else
     root=root->next;
 }
 return head;
}