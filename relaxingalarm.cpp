#include<iostream>
#include<windows.h>
#include<string>
using namespace std;
int main()
{
  system("cls");// clear the console screen
    cout<<"Relaxing Alarm started"<<endl;
    int relaxinterval;
    int time;
    char answer;
    while(true)// infinite loop to keep the program running until the user decides to quit
    {
    cout<<"How much time you want to work (minutes)?"<<endl;
    cin>>time;
    relaxinterval=time*60;
    cout<<"Relaxing Alarm set for "<<time<<" minutes.press s to start"<<endl;
    cin>>answer;
    if(answer=='s' || answer=='S')// if the user chooses to start the alarm
    {   int totalseconds=relaxinterval;
        int elapsed=0;
        cout<<"time started"<<endl;
        while(elapsed<totalseconds)
        {
           char title[256];
           HWND window=GetForegroundWindow();// get the handle of the currently active window
        if(GetWindowTextA(window,title,sizeof(title))){// get the title of the active window
            string windowTitle(title);// convert the title to a string for easier manipulation
            if(windowTitle.find("YouTube")!=string::npos || windowTitle.find("Telegram")!=string::npos || windowTitle.find("Facebook")!=string::npos || windowTitle.find("Instagram")!=string::npos){
              cout<<"\a";// if the title contains any of the specified keywords, play a beep sound to alert the user
              cout<<"\n[WARNING] Close "<<windowTitle<<" and focus on your work!"<<endl;// display a warning message to the user to close the distracting window
                PostMessage(window, WM_CLOSE, 0, 0);// send a message to close the window
            }
            else
            {
                cout<<"\rTime Remaining:"<<(totalseconds-elapsed)/60<<" minutes "<<(totalseconds-elapsed)%60<<" seconds. Keep up the good work!"<<flush;
            }
        }
        Sleep(1000); // wait for 1 second before checking again
        elapsed++;
        } 
        cout<<"\n\nTime is up! you did a great job."<<endl;
        Beep(750,1000); // beep sound for eye relaxation reminder
        MessageBox(NULL,"Time to relax your eyes!","Eye Relaxation Reminder",MB_OK|MB_ICONEXCLAMATION);
    }
   else if (answer=='q' || answer=='Q')// if the user chooses to quit the program
        {
            cout<<"Exiting the program. Take care of your eyes!"<<endl;
            break;// exit the loop and end the program
        }

    
        }
    return 0;
}