#include<iostream>
#include<windows.h>
using namespace std;
int main()
{
    cout<<"Relaxing Alarm started"<<endl;
    int relaxinterval;
    int time;
    char answer;
    while(true)
    {
        system("cls");// clear the console screen
    cout<<"How much time you want to work?"<<endl;
    cin>>time;
    relaxinterval=time*60;
    cout<<"Relaxing Alarm set for "<<time<<" minutes.press s to start"<<endl;
    cin>>answer;
    if(answer=='s' || answer=='S')
    {
        cout<<"time started"<<endl;
        Sleep(relaxinterval*1000);
        cout<<"Time to relax your eyes!"<<endl;
        Beep(750,1000); // beep sound for eye relaxation reminder
        MessageBox(NULL,"Time to relax your eyes!","Eye Relaxation Reminder",MB_OK|MB_ICONEXCLAMATION);
    }
        else if (answer=='q' || answer=='Q')
        {
            cout<<"Exiting the program. Take care of your eyes!"<<endl;
            break;
        }

    
        }
    return 0;
}