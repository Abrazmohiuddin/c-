#include<iostream>
using namespace std; 

int main(){

    // reverse an array

    int arr[100], n;
    cout<<"enter the array sixe :"<<endl;
    cin>>n;

    cout<<"enter the array :"<<endl;
    
    for (int i = 0; i < n; i++)
    {
       
        cin>>arr[i];

    }
    

     cout<<"the input array is :"<<endl;
    
    for (int i = 0; i < n; i++)
    {
       
        cout<<arr[i];
        
    }

    cout<<"the reversed  array is :"<<endl;

    for (int i = 0; i < n/2; i++)
    {
        int temp= arr[i];
        arr[i]= arr[n-1-i];
        arr[n-i-1]= temp;
    }

      for (int i = 0; i < n; i++)
    {
       
        cout<<arr[i];
        
    }

    





    return 0;
}