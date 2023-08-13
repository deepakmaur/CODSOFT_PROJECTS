#include<iostream>
using namespace std;
int main(){

    jump:  //label

    system("cls");
    cout << "\n\t\t\tWelcome to GuessTheNumber game!"<< endl;


    int lb ,ub;
    cout<<"\t\t Enter upper bound number : ";
    cin>>ub;
    cout<<"\t\t Enter lower bound number : ";
    cin>>lb;

    int gu;
    
    int number=(rand() % (ub - lb + 1)) + lb ;
    //cout<<number<<endl;

    cout<<"\t\t You have Three chance to guess the number : "<<endl;
    int t=3;
    //system("cls");
    while(t--){
        cin>>gu;
        if(gu == number){
            cout<<"\t\t  WON  "<<endl;
            cout << "\t\t\t Thanks for playing...."<< endl;
            cout << "Play the game again with us!!\n\n "<< endl;
            break;
        }
        else{
            cout<<"\t\t *NOPES \t\t   "<<endl;
            if(gu > number){
                cout<<"\t You guessed to high "<<endl;
            }
            else{
                cout<<"\t You guessed to low "<<endl;
            }
            cout<<"\t Number of choices left is : "<<t<<endl;
            if(t==0){
                goto start;
            }

        }
    }

    char ch;
    if(t==0 && gu != number){
        start:
        cout<<"/t/t  Actual Number is "<<number<<endl;
        cout<<"you want to play again  [Y/N]  : ";
        cin>>ch;
    }
    if (ch=='Y' || ch=='y'){
        goto jump;
    }
    else{
        cout<<endl;
        cout<<"/t /t Thankyou ";
        system("pause");
    }
    return 0;
}