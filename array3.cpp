#include<iostream>
using namespace std; 

int main(){
     int arr[100];
    int n;
    int duplicate;
    int found;
    cout<<"enter the size of the array"<<endl;
    cin>>n;
    
    cout<<"enter the array of "<<n<<" length"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<"the array entered is "<<endl;

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i];
    }
    cout<<endl;


    for (int i = 0; i < n; i++)
    {
    
        for (int j = i+1; j< n; j++)
        {
            if (arr[i]==arr[j])
            {
              cout<<arr[i];
              found=1;
            }
            else
            found=0;
            
        }
        
    }
    



   
     if (found)
     {
        cout<<"found";
     }
     else{
        cout<<"nopes";
     }
     









    return 0;
}