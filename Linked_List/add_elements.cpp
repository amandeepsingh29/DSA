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
int sumll(struct Node *p){
    int sum=0;
    while(p){
        sum=sum+p->data;
        p=p->next;
    }
    return(sum);
}

int Radd(struct Node *p){
    if(p==0){
        return 0;
    }
    else{
        return Radd(p->next)+ p->data;
    }
}


int main(){



    int a[5]={0,55,88,44,66};
    createll(a,5);
    cout<< "sun is "<<sumll(first)<<endl;
    cout<< "sun is "<<Radd(first);
    
}
