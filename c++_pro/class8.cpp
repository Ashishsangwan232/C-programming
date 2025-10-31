// #include <iostream>
// using namespace std;
// class linkedlist{
//     public:
//         int data;
//         linkedlist* next;

//         linkedlist(int d){
//             this->data=d;
//             this->next=nullptr;   
//         }
// };

// int main(){
//     linkedlist* head =new linkedlist(10);
//     linkedlist* l1 =new linkedlist(20);
//     linkedlist* l2 =new linkedlist(30);
//     linkedlist* l3 =new linkedlist(40);
//     linkedlist* l4 =new linkedlist(50);

//     head->next=l1;//here arrow fuction is represting ((*head).next) to simplify this we used (->);
//     l1->next=l2;
//     l2->next=l3;
//     l3->next=l4;
//     linkedlist * inst=new linkedlist(80);

//     //                                                               0004
//     //                                                              [data,nullptr]
//     // [data,0001]--->[data,0002]--->[data,0003]-->[data,nullptr]-->
    
//     //inst end
//     // linkedlist* temp=head;
//     // while(temp->next!=nullptr){
//     //     temp=temp->next;
//     // }
//     // temp->next=inst;
    
//     //inst start;

//     inst->next=head;
//     linkedlist* temp=inst;

    
//     while(temp->next!=nullptr){
//         cout<<" "<<(temp->data)<<endl;
//         temp=temp->next;
//     }
// }



#include <iostream>
using namespace std;
class linkedlist{
    public:
        int data;
        linkedlist* next;

        linkedlist(int d){
            this->data=d;
            this->next=nullptr;   
        }
};

int main(){
    linkedlist* head =new linkedlist(10);
    for(int i=0;i<7;i++){
        int n
        cout<<"Enter values: "<<i;
        cin>>n; 
        linkedlist* l[i] =new linkedlist();
    }
    
    head->next=l[0];
    for(int i=0;i<7;i++){
        
    }
    

}