#include<iostream>
using namespace std;


// <---------------PRINTING ARRAY------------------>
void arrayTraverse(int arr[],int n){
    for (int i =0; i<n;i++)
    {
        cout<<arr[i]<<"\t";
    }
}
// <----------------------------------------------->


// <------------------INSERTION----------------->
void INSERT(int arr[],int n,int element,int INDEX){
    for(int i=n-1;i>INDEX;i--){
// total 10 elements mean index of last is 9
// toh i ko 9 se satrt and till index as element of index eg. 3 is made of 4
    arr[i+1]=arr[i];

    }
    arr[INDEX]=element;
    arrayTraverse(arr,11);
}
// <------------------------------------------------>




int main(){
    int a[10]={5,65,47,4,321,54,651,51,10,8};
    arrayTraverse(a,10);
    cout<<endl;
    INSERT(a,10,5,3);
    cout<<endl;
    arrayTraverse(a,11);
}