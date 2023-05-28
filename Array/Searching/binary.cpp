#include<iostream>
using namespace std;

// <-----------------BINARY SEARCH --------------------->
int binsearch(int arr[],int lb, int ub,int element ){
    int min=arr[lb];
    int max=arr[ub];
    int mid,m;


    while(min<=max ){
        min=arr[lb];
        max=arr[ub];
        m=(lb+ub)/2;
        
        if(arr[m]==element ){
            cout<<"element found";
            return 0;
            
        }
        else if (arr[m]>element){
            ub=m-1;
        }
        else if (arr[m]<element){
            lb=m+1;
        }
    }
return 1;
     
}
// <---------------------------------------------------->

    int main()
    {
            int a[]={1,2,3,4,5,6,7,8,9,10};
            if(binsearch(a,0,9,0) == 1)
        {
            cout<<"can't find element";
        }  

    }