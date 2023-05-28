// Processing each element of an array is traverse
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



// <---------------MIN OUT OF ARRAY------------------>
int arrayMin(int arr[],int n){
    int min=arr[0];
    for (int i =1;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    return min;
}
// <------------------------------------------------->



// <---------------MAX OUT OF ARRAY------------------>
int arrayMax(int arr[],int n){
    int max=arr[0];
    for (int i =1;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}
// <------------------------------------------------->

int main(){
    int a[10]={5,65,47,4,321,54,651,51,10,8};
    cout<<"printing all elements \n";
    arrayTraverse(a,10);
    cout<<"\nMAX element\t"<<arrayMax(a,10);

    cout<<"\nMIN element\t"<<arrayMin(a,10);
}