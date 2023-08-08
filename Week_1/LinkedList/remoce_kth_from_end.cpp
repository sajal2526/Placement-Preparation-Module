

/* struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

//Function to find the data of nth node from the end of a linked list.
int getNthFromLast(Node *head, int n)
{
       // Your code here
       Node* start=new Node(NULL);
       start->next=head;
       Node *fast=start;
       Node *slow=start;
       for(int i=0;i<n;i++)
       {
           if(fast->next==NULL)
            return -1;
            fast=fast->next;
       }
       while(fast->next!=NULL)
       {
           fast=fast->next;
           slow =slow->next;
       }
       return 
       slow->next->data;
}