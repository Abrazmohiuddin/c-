#include<iostream>
using namespace std; 
/*
void swap(int* a, int* b){
    int temp=*a;
    *a=*b;
    *b=temp;

  */


  void swap(int &a, int &b){
     int temp=a;
    a=b;
    b=temp;


  }



int main(){
 int a=4, b=5;

 // 1 method
 /*
 swap(&a, &b);
  cout<<a<<b;*/

  swap(a, b);
  cout<<a<<b;



    return 0;
}