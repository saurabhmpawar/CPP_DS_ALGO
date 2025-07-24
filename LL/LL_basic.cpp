//LL
#include <iostream>
using namespace std;
class Node{
public:
    int data;
    Node* next;
    Node(int val){
        data = val;
        next = NULL;
    }
};


class List{
    Node* head;
    Node* tail;
    
public:
List()
{    head = tail = NULL;
}


void push_front(int val){
    //if LL empty-> create new node and point head and tail to that
    //if LL not empty-> create new node 
                    // store head in new node next
                    // newnode add will be head
                    
    Node* newNode = new Node(val);
    if(head==NULL){
        head = tail = newNode;
        return;
    }else{
      newNode->next = head;
      head = newNode;
    }
}   

void printLL(){
    //create temp ptr and store head
    // traverse till temp==null
                    
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<< " -> ";
        temp=temp->next;
    }
    cout<<"NULL" <<endl;;
}    

void push_back(int val){
    //if LL empty-> create new node and point head and tail to that
    //if LL not empty-> create new node 
                    // store newnode in tail next
                    // newnode  will be tail
                    
    Node* newNode = new Node(val);
    if(head==NULL){
        head = tail = newNode;
    }else{
      tail->next = newNode;
      tail=newNode;
    }
} 


void pop_front(){
    if(head==NULL){
        return;
    }else{
        
      Node* temp = head;
      head= head->next;
      temp->next = NULL;
      delete temp;
    }
} 

void pop_back(){
    if(head==NULL){
        return;
    }else{
      Node* temp = head;
      while(temp->next->next == NULL){
        temp = temp->next;  
      }
      
      temp->next = NULL;
      delete tail;
      tail = temp;
    }
} 


};

int main() {
    List ll;
    ll.push_front(1);
    ll.push_front(2);
    ll.push_front(4);
    ll.push_back(3);
    ll.pop_front();
    ll.pop_back();
    ll.printLL();
    
    return 0;
}
