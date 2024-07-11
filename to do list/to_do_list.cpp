#include<iostream>
using namespace std;

const int MAX_TASKS=100;
struct task{
    string description;
    bool isdone;
};
int main()
{
   task tasks[MAX_TASKS];
   int numtasks=0;
   while(true)
   {
    cout<<"to do list application"<<endl;
    cout<<"1.add task"<<endl;
    cout<<"2.list task"<<endl;
    cout<<"3.mark task as done"<<endl;
    cout<<"4.quit"<<endl;

    int choice;
    cout<<"enter your choice"<<endl;
    cin>>choice;
    if(choice==1)
    {
        if(numtasks<MAX_TASKS)
        {
            cout<<"enter task description"<<endl;
            cin.ignore();
            getline(cin,tasks[numtasks].description);
            tasks[numtasks].isdone=false;
            numtasks++;
            cout<<"task add"<<endl;

        }
        else{
            cout<<"task list is full.cannot add more task"<<endl;
        }
        cout<<endl;
    }
    else if(choice==2)
    {
        cout<<"tasks"<<endl;
        for(int i=0;i<numtasks;i++)
        {
            cout<<(i+1)<<".";
            if(tasks[i].isdone)
            {
                cout<<"[x]";
            }
            else{
                cout<<"[]";
            }
            cout<<tasks[i].description<<endl;
        }
        cout<<endl;
    }
    else if(choice==3)
    {
        cout<<"enter the task number to mark as done"<<endl;
        int tasknumber;
        cin>>tasknumber;
        if(tasknumber> 0 && tasknumber<=numtasks)
        {
            tasks[tasknumber-1].isdone=true;
            cout<<"task marked as done"<<endl;
        }
        else{
            cout<<"invalid task number"<<endl;
        }
        cout<<endl;
    }
    else if(choice==4)
    {
        cout<<"goodbye"<<endl;
        break;
    }
    else{
        cout<<"invalid choice.please try again"<<endl;
    }
    }
    return 0;
}
