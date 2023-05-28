#include<iostream>
using namespace std;



// <----------DELETION------------->
void deletion(int arr[],int n, int indx)
{
    for (int i =indx+1;i<n;i++){
        arr[i-1]=arr[i];
    }
}
// <------------------------------->

// <---------------PRINTING ARRAY------------------>
void arrayTraverse(int arr[],int n){
    for (int i =0; i<n;i++)
    {
        cout<<arr[i]<<"\t";
    }
}
// <----------------------------------------------->




int main(){
    int a[5]={1,2,3,0,4};
    deletion(a,5,2);
    arrayTraverse(a,4);

}