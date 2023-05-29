
void display(struct Node *p){
    while(p){
         cout<<p->data<<"\t";
         p=p->next;
    }
}
