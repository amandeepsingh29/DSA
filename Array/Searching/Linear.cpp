#include<iostream>
using namespace std;


// <------------------LINEAR SEARCH----------------->
void Linear(int arr[],int n,int element){
    
    int count =0;
    for (int i =0;i<n;i++){
        if(element == arr[i]){
            count++;
        }    }

        if(count==0){
            cout<<"Can't find the element in thr array"<<endl;
        }
        else {
            cout<<"Element found and repeat "<<count<<" number of times";
cout<<endl;
        }


}
// <------------------------------------------------>


int main(){
    int a[10]={5,65,47,4,321,54,651,51,10,8};
    Linear(a,10,5);
    
}