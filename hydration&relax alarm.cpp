#include<iostream>
#include<windows.h>
using namespace std;
int main(){
    cout<<"Hydration & Relaxing Alarm started"<<endl;
    int hydrationinterval=30*60; //30 minutes
    int relaxinterval=45*60; //45 minutes
    while(true){
        Sleep(hydrationinterval*1000);
        cout<<"Time to drink water , stay hydrated!"<<endl;
        Beep(750,1000); // Beep sound for hydration reminder
        MessageBox(NULL,"Time to drink water , stay hydrated!","Hydration Reminder",MB_OK|MB_ICONEXCLAMATION);
        
        Sleep(relaxinterval*1000);
        cout<<"Time to relax your eyes!"<<endl;
        Beep(750,1000); // beep sound for eye relaxation reminder
        MessageBox(NULL,"Time to relax your eyes!","Eye Relaxation Reminder",MB_OK|MB_ICONEXCLAMATION);
        

    }
    return 0;
}