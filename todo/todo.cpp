#include<iostream>
#include <windows.h>
#include"todoheader.cpp"
using namespace std;

string common="Number of task ";
    string progress="Y/N";
    Todo* node1=new Todo(common,progress);
    Todo* node2=new Todo("Added_Task","Progress");

    Todo* tail1=node1;
    Todo* tail2=node2;



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

void addSomemore (){
    system("CLS");
    Todo* tail2=node2;
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
                    addTask(tail2,task,prog);
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

    

    
    int n;
    cin>>n;
    switch(n){
        case 1: addmore();
                goto jump;
                break;

        case 2: addSomemore();
                goto jump;
                break;

        case 3: cout<<"    %%%%%   YOUR LIST   %%%%%%%%    "<<endl;
                print(tail1);
                print(tail2);
                goto jump;
                break;
        case 4: int number;
                cout<<"Enter [2] if your task was added "<<endl;
                cin>>number;
                cout<<"Enter the task you want to delete and its progress : ";
                string str,p;
                cin>>str>>p;

                if(number==2){
                    cout<<"   / DELETING TASK /    ";
                    deleteTask(tail2,str,p);

                }
                else{
                    cout<<"   / DELETING TASK /    ";
                    deleteTask(tail1,str,p);
                }
                print(tail1);
                print(tail2);
                
                goto jump;
                break;
        deafault :
                cout<<" INVALID ENTRY "<<endl;
                system("pause");
                //goto jump;
                break;
    }
    return 0;
    }
    
}
