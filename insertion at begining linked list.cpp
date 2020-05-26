
#include <iostream>
using namespace std;
struct Node { 
   int data; 
    struct Node *next; //Node* next
}; 
//Node* head = NULL;   
 struct Node* insert(int new_data , Node* head) { 
   Node* new_node = (Node*) malloc(sizeof(Node)); 
   new_node->data = new_data; 
   new_node->next = head; 
   head = new_node; 
   return head;
} 
void display(Node* head) { 
   Node* ptr;
   ptr = head;
   while (ptr != NULL) { 
      cout<< ptr->data <<" "; 
      ptr = ptr->next; 
   } 
} 
int main() { 
   struct Node* head = NULL;  //Node* head=NULL
  int n,x;
  cout<<"enter the no of element add at beg= "<<endl;
  cin>>n;
  for(int i=0;i<n;i++){
       cout<<"enter the "<<i+1<<" element= "<<endl;
  cin>>x; 
  head=insert(x,head);
  }
   cout<<"The linked list is: ";
   display(head); 
   return 0; 
} 