struct Node {
  int data;
  struct Node * next;
  Node(int x) {
    data = x;
    next = NULL;
  }
}; 

class Solution{
  public:
    //Function to insert a node at the beginning of the linked list.
    Node *insertAtBegining(Node *head, int x) {
       // Your code here
       Node*new_node=new Node(x);
       new_node->data=x;
       new_node->next=head;
       head=new_node;
    }
    
    
    //Function to insert a node at the end of the linked list.
    Node *insertAtEnd(Node *head, int x)  {
       // Your code here
       Node*new_node=new Node(x);
       new_node->data=x;
       new_node->next=NULL;
       if(head==NULL)
       {
           head=new_node;
           return new_node;
       }
       Node*temp=head;
       while(temp->next!=NULL)
       {
           temp=temp->next;
       }
       temp->next=new_node;
       return head;
    }
};
