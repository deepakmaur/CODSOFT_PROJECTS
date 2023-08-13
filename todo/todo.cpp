#include<iostream>
#include <windows.h>
#include"todoheader.cpp"
using namespace std;

string common="Number of task ";
    string progress="Y/N";
    Todo* node1=new Todo(common,progress);

    Todo* tail1=node1;



void addmore (){
    system("CLS");
    Todo* tail1=node1;
    cout<<"  Adding task  "<<endl;
                int n;
                //string task,prog;
                cout<<"How many task you wan to add up : ";
                cin>>n;
                while(n>0){
                    string task,prog;
                    cout<<"Enter task [enter _ for space ]: ";
                    cin>>task;
                    cout<<"Enter it's progress : ";
                    cin>>prog;
                    addTask(tail1,task,prog);
                    n--;
        
                }
                system("pause");
                //goto main;
}

int main(){
    
    //choice();
    int no;
    //interface();
    while(1){
        
    jump:
    system("CLS");
        cout<<"  **********Welcome to todo list**********  "<<endl;
        cout<<" 1. Task Input and Mark it's Progress "<<endl;
        cout<<" 2. Add task and Mark it's Progress "<<endl;
        cout<<" 3. View task "<<endl;
        cout<<" 4. Remove task "<<endl;

    

    

    Todo* tail1=node1;

    int n;
    cin>>n;
    switch(n){
        case 1: addmore();
                goto jump;
                break;

        case 2: addmore();
                goto jump;
                break;

        case 3: cout<<"    %%%%%   YOUR LIST   %%%%%%%%    "<<endl;
                print(tail1);
                goto jump;
                break;
        case 4: cout<<"Enter the task you want to delete and its progress : ";
                string str,p;
                cin>>str>>p;
        
                cout<<"   / DELETING TASK /    ";
                deleteTask(tail1,str,p);
                print(tail1);
                goto jump;
                break;
        deafault :
                cout<<" INVALID ENTRY "<<endl;
                system("pause");
                
                break;
    }
    return 0;
    }
    
}
