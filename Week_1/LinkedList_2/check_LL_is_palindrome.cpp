/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

class Solution{
    private:
    Node *reverseList(Node *root)
    {
        Node *pre=NULL;
        Node *nextNode=NULL;
        while(root!=NULL)
        {
            nextNode=root->next;
            root->next=pre;
            pre=root;
            root=nextNode;
            
        }
        return pre;
    }
  public:
    //Function to check whether the list is palindrome.
    bool isPalindrome(Node *head)
    {
        Node *slow=head;
        Node *fast =head;
        while(fast->next!=NULL && fast->next->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        slow->next=reverseList(slow->next);
        slow=slow->next;
        
        while(slow!=NULL)
        {
            if(head->data!=slow->data)
                return false;
            head=head->next;
            slow=slow->next;
        }
        return true;
    }
};
