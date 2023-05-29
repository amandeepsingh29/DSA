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
// <---------ITERATIVLY COUNTING LENGTH OR NODES OF Linked List------------>
int count(struct Node *p){
    int c=0;
    while(p!=NULL){
        c++;
        p=p->next;
    }
    return c;
}
// <------------------------------------------------------------>

// <---------RECURSIVLY COUNTING LENGTH OR NODES OF Linked List------------>
int Rcount (struct Node *p){
    if(p==0)
        return 0;
    else 
        return count(p->next)+1;
}




// <----------------------------------------------------------------------->

int main(){



    int a[5]={0,55,88,44,66};
    createll(a,5);
    int  k = Rcount(first);
    cout<<k;
}
