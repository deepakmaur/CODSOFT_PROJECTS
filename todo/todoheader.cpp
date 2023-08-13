#include<iostream>
using namespace std;
class Todo{
    public:
    string progress;
    string data;
    Todo* next;
    

    Todo(string task,string mark){
        this->data=task;
        this->progress=mark;
        this->next=NULL;
    }
    // ~Todo(){

    // }
};

void addTask(Todo* &tail,string st,string mar ){
    Todo* temp=new Todo (st,mar);
    tail->next=temp;
    tail=temp;

}

void print(Todo* &head){

    system("cls");
    if(head == NULL) {
        cout << "List is empty "<< endl;
        return ;
    }
    Todo* temp=head;
    while(temp != NULL){
        cout<<temp->data<<"                 ";
        cout<<temp->progress<<"  "<<endl;
        temp=temp->next;
    }
    cout<<endl;
    system("pause");
}

void deleteTask(Todo* tail,string task,string pro){
    system("CLS");
    if(tail == NULL){
        cout<<"List is Empty "<<endl;
        return;
    }
    else{
        Todo* prev=tail;
        Todo* curr=prev->next;
        while(curr->data != task){
            prev=curr;
            curr=curr->next;
        }
        prev->next=curr->next;
        if(curr== prev){
            tail=NULL;
        }

        if(tail == curr){
            tail=prev;
        }
        curr->next=NULL;
        delete curr;
        


    }
    system("pause");
}