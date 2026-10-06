#include<iostream>
using namespace std; 

int main(){
    int arr[50];
    int n;
    cout<<"eneter the size";
    cin>>n;
    cout<<"enter the array";

    for (int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

     cout<<"the array is ";

    for (int i=0; i<n; i++)
    {
        cout<<arr[i];
    }
    

    for (int i=0;i<n; i++)
    {
     for (int j=0;j<n-1;j++)
     {
        if(arr[j]<arr[j+1]){

            int temp= arr[j];
            arr[j+1]=arr[j];
            arr[j+1]= temp;


        }
     }
     
    }

    
     cout<<"the sorted array is :";

    for (int i=0; i<n; i++)
    {
        cout<<arr[i];
    }
    
    







    return 0;
}