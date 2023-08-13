#include<iostream>
#include"calcuheader.cpp"
using namespace std;
int main(){
    welcome();
    int a,b;

    cin>>a>>b;
    
    char str;
    cout<<endl;
    cout<<"      Enter the operation '+', '-', '*', '/', :  ";
    cin>>str;
    operation(a,b,str);
    
    return 0;
}