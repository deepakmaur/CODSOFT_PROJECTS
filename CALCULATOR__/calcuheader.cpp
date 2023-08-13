#include<iostream>
using namespace std;
void welcome(){
    
    
    cout<<endl<<endl;
    cout<<"            ** Simple Calculator **        "<<endl;
    cout<<endl<<endl<<endl<<endl
    <<"       Enter the two Operands     ";
   
}

int operation(int a,int b,char st){
    switch(st){
        
        case '+': cout<<endl<<"      Addition of Numbers is ;   "<<a+b<<endl<<endl;
                  break;
        case '-': cout<<endl<<"      SUbtraction of Numbers is ;   "<<a-b<<endl<<endl;
                  break;
        case '*': cout<<endl<<"      Multiplication of Numbers is ;   "<<a*b<<endl<<endl;
                break;
        case '/': cout<<endl<<"      Division of Numbers is ;   "<<a/b<<endl<<endl;
                 break;
        default :
                  cout<<endl<<"        --Entered Operation is not valid --    "<<endl;
    }
    
}
