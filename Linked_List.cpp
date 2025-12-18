// //Creating the linked list(basic leval).......

// #include<iostream>
// using namespace std;

// class Node{
//    public:
//     int data;
//     Node * next;

//     Node(){
//       this->data=0;
//       this->next=NULL;
//     }
//     Node(int data){
//         this->data=data;
//         this->next=NULL;
//     }
// };
// void print(Node* &head){
//     Node*temp=head;
//     while(temp!=NULL){
//         cout<< temp->data<<" ";
//         temp=temp->next;
//     }
// }

// int main(){
//   Node*first=new Node(10);
//   Node*second=new Node(20);
//   Node*third=new Node(30);
//   Node*fourth=new Node(40);
//   Node*fifth=new Node(50);

//   first->next=second;
//   second->next=third;
//   third->next=fourth;
//   fourth->next=fifth;

//    cout<<"printing linked list"<<endl;
//    print(first);
 

//  return 0;
// }
















// //                           SINGLE LINKED LIST
// //Inserting and Deleting the node at the head,Tail and Middle.......

// #include<iostream>
// using namespace std;
// class Node{
// public:
//     int data;
//     Node * next;

//     Node(){
//         this->data=0;
//         this->next=NULL;
//     }
//     Node(int data){
//         this->data=data;
//         this->next=NULL;
//     }
//     ~Node(){
//         cout<<"deleting node "<<this->data;
//     }
// };




// //to insert the data at the start(head) of the LL....
// void insertAtHead(Node* &head,Node* &tail,int data){
//     //check if LL is empty....
//     if(head==NULL){
//         Node*newnode=new Node(data);
//         head=newnode;
//         tail=newnode;
//         return;
//     }
//      //step 1..
//      Node*newnode=new Node(data);
//      //step 2...
//      newnode->next =head;
//      //step 3...
//     head=newnode;
// }

 



// //to insert data at the end(tail) of the LL...
// void insertAtTail(Node*&head,Node*&tail,int data){
//     //check if LL is empty.....
//     if(head==NULL){
//         Node*newnode=new Node(data);
//         head=newnode;
//         tail=newnode;
//         return;
//     }
//     //step 1....
//     Node*newnode=new Node(data);
//     //step 2....
//     tail->next=newnode;
//     //step 3...
//     tail=newnode;
// }






// //to insert data at any position....
// int findLeng(Node*&head){
//     Node* temp=head;
//     int len=0;
//     while(temp!=NULL){
//         temp=temp->next;
//         len++;
//     }
//     return len;
// }





// void insertAtPosition(int data, int position, Node*&head, Node*tail){
   
//    //check if LL is empty...
//    if(head==NULL){
//     Node* newnode= new Node(data);
//     head=newnode;
//     tail=newnode;
//     return;
//    }
//     //check if position is head...
//     if(position==1){
//         insertAtHead(head,tail,data);
//         return;
//     }
//     //check if position is tail...
//     int len=findLeng(head);
//     if(position > len){
//          insertAtTail(head,tail,data);
//          return;
//     }

//     //check if position is middle....

//     //step 1: find pre and curr node....
//     int i=1;
//     Node*pre=head;
//     while(i < position-1){
//         pre=pre->next;
//         i++;
//     }
//     Node* curr=pre->next;
//     //step 2: create new node...
//     Node * newnode= new Node(data);
//     //step 3: attach newnode to curr node...
//     newnode->next= curr;
//     //step 4: attach pre node to newnode...
//     pre->next=newnode;

// }




 
// void deleteNode(int position,Node*&head,Node*&tail){
//     if(head==NULL){
//         cout<<"cannot delete from LL"<<endl;
//         return;
//     }
//     //delete from start...
//      if(position==1){
//         Node*temp=head;
//     head=head->next;
//     delete temp;
//      }

//      //delete from end...
//      int len=findLeng(head);
//      if(position==len){
//         Node*pre= head;
//         //find prev
//         int i=1;
//         while(i<position-1){
//           pre=pre->next;
//           i++;
//         }
//         //step 2...
//         pre->next=NULL;
//         //step 3...
//         Node*temp=tail;
//         //step 4...
//         tail=pre;
//         //step 5..
//         delete temp;
//   }
//     //deleting from middle...
//     int i=1;
//     Node*pre=head;
//     while(i<position-1){
//         pre=pre->next;
//         i++;
//     }
//     //step 2...
//     Node*curr=pre->next;
//     //step 3...
//     pre->next=curr->next;
//     //step 4...
//     curr->next=NULL;
//     //step 5...
//     delete curr;

// }
// void print(Node*&head){
//     Node*temp=head;
//     while(temp!=NULL){
//         cout<<temp->data<<" ";
//         temp=temp->next;
//     }
// }






// int main(){
//     Node*tail=NULL;
//     Node*head= NULL;
//      insertAtHead(head,tail,20);
//      insertAtHead(head,tail,30);
//      insertAtTail(head,tail,77);
//      insertAtTail(head,tail,40); 
//      print(head);
//      cout<<endl;
//      insertAtPosition(101,3,head,tail);
//      print(head);
//     // deleteNode(3,head,tail);
//      //cout<<endl;
//      //print(head);
//     return 0;

// }










// //                            DOUBLE LINKED LIST

// //insert and delete the node....
// #include<iostream>
// using namespace std;


// class Node{
//  public:
//     int data;
//     Node*pre;
//     Node*next;
//     Node(){
//         this->data=0;
//         this->pre=NULL;
//         this->next=NULL;
//     }
//     Node(int data){
//         this->data=data;
//         this->pre=NULL;
//         this->next=NULL;
//     }
//     ~Node(){

//     }
// };





// void print(Node*&head){
//     Node* temp=head;
//     while(temp!=NULL){
//         cout<<temp->data<<" ";
//         temp=temp->next;
//     }
// }





// int getLeng(Node*&head){
//     int i=0;
//     Node*temp=head;
//     while(temp!=NULL){
//         temp=temp->next;
//         i++;
//     }
//     return i;
// }






// //insert at head...
// void insertAtHead(Node*&head,Node*&tail,int data){
//     if(head==NULL){
//        Node*newnode=new Node(data);
//        head=newnode;
//        tail=newnode;
//        return;
//     }
//     //creating new node..
//     Node*newnode=new Node(data);
//     //s1
//     newnode->next=head;
//     //s2
//     head->pre=newnode;
//     //s3
//     head=newnode;
// }







// //insert node at tail...
// void insertAtTail(Node*&head,Node*&tail,int data){
//      if(head==NULL){
//         Node*newnode=new Node(data);
//         head=newnode;
//         tail=newnode;
//         return;
//      }
//      //create new node..
//      Node*newnode=new Node(data);
//      //s1..
//      tail->next=newnode;
//      //s2...
//      newnode->pre= tail;
//      //s3...
//      tail=newnode;
// }




// void insertAtPosition(int position,Node*&head,Node*&tail,int data){
//     //check if LL is empty...
//     if(head==NULL){
//         Node*newnode= new Node(data);
//         head=newnode;
//         tail=newnode;
//         return;
//     }
//     //for starting position...
//     if(position==1){
//        insertAtHead(head,tail,data);
//        return;
//     }
//     //for last position...
//     int len=getLeng(head);
//     if(position >= len){
//         insertAtTail(head,tail,data);
//         return;
//     }
//     //for any middle position...
//     int i=1;
//     Node*prevnode=head;
//     while(i < position-1){
//         prevnode=prevnode->next;
//         i++;
//     }
//     //creating current node...
//     Node*curr=prevnode->next;
//     //step 1:newnode...
//     Node*newnode=new Node(data);
//     //step 2:
//     prevnode->next=newnode;
//     newnode->pre=prevnode;
//     //step 3:
//     curr->pre=newnode;
//     newnode->next=curr;

// }







// void deleteNode(int position,Node*&head,Node*&tail){
//       if(head==NULL){
//         cout<<"bhai empty hai"<<endl;
//         return;
//       }
//       if(head->next==NULL){
//         Node*temp=head;
//         head=NULL;
//         tail=NULL;
//         delete temp;
//         return;
//       }
//       int len=getLeng(head);
//       if(position>len){
//         cout<<"enter the valid position"<<endl;
//         return;
//       }
//       if(position==1){
//         Node*temp=head;
//         head=head->next;
//         temp->next=NULL;
//         head->pre=NULL;
//         delete temp;
//         return; 
//       }
//       if(position==len){
//         int i=1;
//         Node*pre=head;
//         while(i<position-1){
//             pre=pre->next;
//             i++;
//         }
//         Node*temp=tail;
//         tail=tail->pre;
//         tail->next=NULL;
//         temp->pre=NULL;
//         delete temp;
//         return;
//     }
//     //deleting from middle...
//     int i=1;
//     Node*left=head;
//     while(i < position-1){
//         left=left->next;
//         i++;
//     }
//     Node*curr=left->next;
//     Node*right=curr->next;
    
//     //step1..
//     left->next=right;
//     right->pre=left;
//     //step 2..
//     curr->next=NULL;
//     curr->pre=NULL;
//     //step 3..
//     delete curr;
// }



// int main(){
   
//    Node*first=new Node(10);
//    Node*second=new Node(20);
//    Node*third=new Node(19);
//    Node*head=first;
//    Node*tail=third;

//    first->next=second;
//    second->pre=first;

//    second->next=third;
//    third->pre=second;
   
//   // print(head);
//    cout<<endl;
//    insertAtHead(head,tail,101);
//   // print(head);
//    cout<<endl; 
//    insertAtTail(head,tail,200);
//    //print(head);
//    cout<<endl;
//    insertAtPosition(3,head,tail,400);
//    print(head);
//    cout<<endl;
//    deleteNode(3,head,tail);
//    print(head);

//    return 0;
// }







//             FIND MIDDLE OF THE LINKED LIST.....

#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node*next;
    Node(){
        this->data=0;
        this->next=NULL;
    }
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
    };

void print(Node*&head){
    Node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

Node*middleNode(Node*&head){
    //empty ll
    if(head==NULL){
        return head;
    }
    //only one Node
    if(head->next==NULL){
        return head;
    }
    //Node>1...
    Node*fast=head;
   // Node*fast=head->next;....//according to even case...
    Node*slow=head;
    while(slow!=NULL && fast!=NULL){
        fast=fast->next;
        if(fast!=NULL){
           fast=fast->next;
           slow=slow->next; 
        }
    }
    return(slow);
}

int main(){
    Node*head=new Node(10);
    Node*first=new Node(20);
    Node*second=new Node(30);
    Node*third=new Node(40);
    Node*fourth=new Node(50);
    Node*fifth=new Node(60);
    

    head->next=first;
    first->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=fifth;
    fifth->next=NULL;

    print(head);
    cout<<endl;
    cout<<"Middle node is: "<<middleNode(head)->data;
    
}