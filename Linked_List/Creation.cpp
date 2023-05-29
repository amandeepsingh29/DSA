#include<iostream>
using namespace std;

struct Node{
    int data ;
    struct Node * next;
}*first=NULL;
    

void createll(int A[],int n){
    struct Node *t ,*last;
    first = new Node;
    first->data=A[0];
    first->next=NULL;
    last=first;

    for (int i =1;i<n;i++){
        t=new Node;
        t->data=A[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }

}



// <------------------------------------------>
// void display(struct Node *p){
//     while(p){
//          cout<<p->data<<"\t";
//          p=p->next;
//     }
// }
// <------------------------------------------>



// <-------------VIA RECURSSION REVERSE PRINTING--------------->
void display(struct Node *p){
    if(p!=NULL){
         display(p->next);
         cout<<p->data<<"\t";
    }
}
// <------------------------------------------>




int main(){



    int a[5]={0,55,88,44,66};
    createll(a,5);
    display(first);
}
