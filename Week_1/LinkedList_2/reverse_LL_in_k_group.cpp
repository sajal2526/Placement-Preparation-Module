/*
  Reverse a linked list
  The input list will have at least one element  
  Return the node which points to the head of the new LinkedList
  Node is defined as 
    struct node
    {
        int data;
        struct node* next;
    
        node(int x){
            data = x;
            next = NULL;
        }
    
    }*head;
*/

class Solution
{
    public:
    struct node *reverse (struct node *head, int k)
    { 
        // Complete this method
          if (head==NULL)

     return NULL;

     

        node * prev=NULL;

        node* curr=head;

        node * forward=NULL;

        int count=0;

        while (curr != NULL && count< k){

            forward=curr-> next;

            curr->next=prev;

            prev=curr;

            curr= forward;

            count++;

        }

        if (forward!= NULL){

            head->next= reverse (forward,k);

        }

        return prev;
    }
};