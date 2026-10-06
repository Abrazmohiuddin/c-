#include<iostream>
using namespace std; 
struct atm
{
    int id;
  char name[100];
  int pass;
  int amount;



};


int main(){
    int pin;

  atm a={01, "abraz mohiuddin",121, 1000};
  atm b={02, "john",122, 1000};
  atm c={03, "mike",129, 1000};
 // atm d={04, "don",120, 1000};
  cout<<"welcome to the atm:"<<endl;
  cout<<"enter your pin";
  cin>>pin;


int no;
int witdrawl, deposite;
 switch (pin)
 {
 case 121:
    cout<<"wellcome mr."<<a.name<<endl<<"id= "<<a.id<<endl;
    cout<<"please enter an option: \n 1.  check balance \n 2. withdraw\n 3. Deposit";
    cin>>no;



    switch (no)
    {
    case 1:
       cout<<"your balance is "<<a.amount;
        break;
    case 2:
        cout<<"enter the withdrawal amout:";
        cin>>witdrawl;
        if(witdrawl<=a.amount){
        cout<<witdrawl<<" amount taken from the balance ("<<a.amount<<") remaining balance is "<<a.amount - witdrawl<<endl;
        a.amount=a.amount - witdrawl;
    
    }

        else
        cout<<"insufficient balance";
        break;
    case 3:
        cout<<"enter the deposite amout:";
        cin>>deposite;
        if(deposite>0){
        cout<<deposite<<" amount added to the balance ("<<a.amount<<") remaining balance is "<<a.amount + deposite<<endl;
        a.amount=a.amount+deposite;
    }
        else
        cout<<"invalid amount";
        break;
    
    default:
    cout<<"invalid option";
        break;
    }

    break;
 





    case 122:
     cout<<"wellcome mr "<<b.name<<endl<<"id= "<<b.id<<endl;

     cout<<"please enter an option: \n 1.  check balance \n 2. withdraw\n 3. Deposit";
    cin>>no;



    switch (no)
    {
    case 1:
      cout<<"your balance is "<<b.amount;
        break;
    case 2:
        cout<<"enter the withdrawal amout:";
        cin>>witdrawl;
        if(witdrawl<=b.amount){
        cout<<witdrawl<<" amount taken from the balance ("<<b.amount<<") remaining balance is "<<b.amount - witdrawl<<endl;
        b.amount= b.amount- witdrawl;
    
    }
        else
        cout<<"insufficient balance";
        break;
    case 3:
        cout<<"enter the deposite amout:";
        cin>>deposite;
        if(deposite>0){
        cout<<deposite<<" amount added to the balance ("<<b.amount<<") remaining balance is "<<b.amount + deposite<<endl;
        b.amount=b.amount+deposite;
    }

        else
        cout<<"invalid amount";
        break;
    
    default:
    cout<<"invalid option";
        break;
    }






    break;
 
     case 129:
     cout<<"wellcome mr. "<<c.name<<endl<<"id= "<<c.id<<endl;


     cout<<"please enter an option: \n 1.  check balance \n 2. withdraw\n 3. Deposit";
    cin>>no;



    switch (no)
    {
    case 1:
       cout<<"your balance is "<<c.amount;
        break;
    case 2:
        cout<<"enter the withdrawal amout:";
        cin>>witdrawl;
        if(witdrawl<=c.amount){
        cout<<witdrawl<<" amount taken from the balance ("<<c.amount<<") remaining balance is "<<c.amount - witdrawl<<endl;
        c.amount=c.amount-witdrawl;
    
    }
        else
        cout<<"insufficient balance";
        break;
    case 3:
        cout<<"enter the deposite amout:";
        cin>>deposite;
        if(deposite>0){

        
        cout<<deposite<<" amount added to the balance ("<<c.amount<<") remaining balance is "<<c.amount + deposite<<endl;
        c.amount=c.amount+deposite;
    }
        else
        cout<<"invalid amount";
        break;
    
    default:
    cout<<"invalid option";
        break;
    }



    break;
 
 default:
  cout<<"invalid key";
    break;
 }
 



    return 0;
}