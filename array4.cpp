#include<iostream>
using namespace std; 

int main(){
  
   /*
    //travrse an array 
    int arr[50];
    int n;
    cout<<"enter the size of the array  :";
    cin>>n;
cout<<"enter the array of size "<<n<<" ";
for (int i = 0; i < n; i++)
{
     cin>>arr[i];
}

cout<<"the entered array of size "<<n<<" is";
for (int i = 0; i < n; i++)
{
     cout<<arr[i]<<" ";
}
*/



// 2. find the sum


/*
  int arr[50];
    int n,sum=0;
    cout<<"enter the size of the array  :";
    cin>>n;
cout<<"enter the array of size "<<n<<" ";
for (int i = 0; i < n; i++)
{
     cin>>arr[i];
}

cout<<"the entered array of size "<<n<<" is";
for (int i = 0; i < n; i++)
{
     cout<<arr[i]<<" ";
}


cout<<"the sum is :";
for (int i = 0; i < n; i++)
{
     sum= sum + arr[i];
}

cout<<sum;
*/


// max and min


/*

 int arr[50];
    int n,sum=0;
    cout<<"enter the size of the array  :"<<endl;
    cin>>n;
cout<<"enter the array of size "<<n<<" ";
for (int i = 0; i < n; i++)
{
     cin>>arr[i];
}
cout<<endl;
cout<<"the entered array of size "<<n<<" is "<<endl;
for (int i = 0; i < n; i++)
{
     cout<<arr[i]<<" ";
}

int max=arr[0];

for (int i = 0; i < n; i++)
{
     if(max<arr[i]){

        max=arr[i];
     }




}

cout<<"the max is :"<<max;


// in min we just say int min= arr[i]
//if min>arr[i], then min shifts to arr[i], so similar code, and similar logic
*/



// count even and odd

/*
int arr[50];
    int n,sum=0;
    cout<<"enter the size of the array  :"<<endl;
    cin>>n;
cout<<"enter the array of size "<<n<<" ";
for (int i = 0; i < n; i++)
{
     cin>>arr[i];
}
cout<<endl;
cout<<"the entered array of size "<<n<<" is "<<endl;
for (int i = 0; i < n; i++)
{
     cout<<arr[i]<<" ";
}

int even=0, odd=0;




for (int i = 0; i < n; i++)
{
    if(arr[i]%2==0){


        even++;



    }


else {
    odd++;
}

}


cout<<"the no. of even numbers is "<<even<<endl;
cout<<"the no. of odd numbers is "<<odd<<endl;

*/




// linear search:
/*
int arr[50];
    int n,sum=0;
    cout<<"enter the size of the array  :"<<endl;
    cin>>n;
cout<<"enter the array of size "<<n<<" "<<endl;
for (int i = 0; i < n; i++)
{
     cin>>arr[i];
}
cout<<endl;
 
int key;
cout<<"enter the key "<<endl;
cin>>key;

int found=0;

for (int i = 0; i < n; i++)
{
     if(arr[i]==key){
        cout<<"found at "<<i+1<<endl;
        found=1;
     }
}
if(found==0){
    cout<<"not found";
}
*/

// bubble sort


int arr[50];
    int n,sum=0;
    cout<<"enter the size of the array  :"<<endl;
    cin>>n;
cout<<"enter the array with "<<n<<" size"<<endl;
for (int i = 0; i < n; i++)
{
     cin>>arr[i];
}
cout<<endl;


for(int i=0; i<n;i++){
    for (int j = 0; j < n-i-1; j++)// j stops early
    {
        if(arr[j]>arr[j+1]){

            int temp= arr[j];

            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
    }
}   

cout<<"sorted array is";
for (int i = 0; i < n; i++)
{
     cout<<arr[i]<<" ";
}



int high= n-1;    
int low= 0;      
int key, found=0, place;
cout<<"enter the key"<<endl;
cin>>key;
cout<<endl;


while(low<=high){

int mid= (high + low)/2;
    if(key<arr[mid] ){
        high= mid-1;

    }

    else if (key>arr[mid] )
    {
        low=mid+1;
    }
    else if (key==arr[mid])
    {
        found=1;
        break;
    }
    
    
    }

if(found==1){
    cout<<"found they key ";

}
else{
    cout<<"not found";
}

















    return 0;
}