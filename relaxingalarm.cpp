#include<iostream>
#include<windows.h>
using namespace std;
int main(){
    cout<<"Relaxing Alarm started"<<endl;
    int relaxinterval;
    int time;
    cout<<"How mutch time you want to work!"<<endl;
    cin>>time;
    relaxinterval=time*60;
    while(true){
        cout<<"time started"<<endl;
        Sleep(relaxinterval*1000);
        cout<<"Time to relax your eyes!"<<endl;
        Beep(750,1000); // beep sound for eye relaxation reminder
        MessageBox(NULL,"Time to relax your eyes!","Eye Relaxation Reminder",MB_OK|MB_ICONEXCLAMATION);
        

    }
    return 0;
}