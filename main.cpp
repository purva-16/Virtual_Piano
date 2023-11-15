#include <cstdlib>
#include <iostream>
#include <conio.h>
#include <windows.h>
using namespace std;
class piano
{
        public: 
        bool play=true;
        char note;
        void music()
        {
        while(play==true){
                cout<<"Input note: ";
                note = getch();
                
                
                //full notes(white keys)
                if(note == 'q'){
                        Beep(261,100);
                        }
                if(note == 'w'){
                        Beep(293,100);
                        }
                if(note == 'e'){
                        Beep(329,100);
                        }
                if(note == 'r'){
                        Beep(349,100);
                        }
                if(note == 't'){
                        Beep(392,100);
                        }
                if(note == 'y'){
                        Beep(440,100);
                        }
                if(note == 'u'){
                        Beep(493,100);
                        }                      
                if(note == 'i'){
                        Beep(523,100);
                        }                      
                if(note == 'o'){
                        Beep(587,100);
                        }
                if(note == 'p'){
                        Beep(659,100);
                        }  
                if(note == '['){
                        Beep(698,100);
                        } 
                if(note == ']'){
                        Beep(784,100);
                        } 
                        
                //sharp notes(black keys)
                        if(note == '2'){
                        Beep(277,100);
                        } 
                        if(note == '3'){
                        Beep(311,100);
                        }
                        if(note == '5'){
                        Beep(370,100);
                        }
                        if(note == '6'){
                        Beep(415,100);
                        }
                        if(note == '7'){
                        Beep(466,100);
                        }
                        if(note == '9'){
                        Beep(554,100);
                        }
                        if(note == '0'){
                        Beep(622,100);
                        }
                        if(note == '='){
                        Beep(740,100);
                        }    
                        if(note == '`'){
                                play=false;
                        }
                        system("cls");  
                        }
                        
            

  
    
                
        }
};
class login: public piano
{
        public:
        bool log=false;
        void userlogin()
     {  string username = "most_secure";
    string password = "1234567890";
    string user;
    string pass;
    
    cout << "Hello, Welcome to the VirtualPiano!" << endl;
    cout << "Enter Your username: ";
    cin >> user;
    if (user == username){
        cout << "Enter password: " << endl;
        cin >> pass;
        if (pass == password){
            cout << "Successful Login!" << endl;
            log=true;
        }
        else {
            cout << "Incorrect Password!" << endl;
        }
    }
    else {
        cout << "Incorrect Username!" << endl;
    }
        }
};
int main()
{
        login p1;

        p1.userlogin();
        if(p1.log==true)
        {
             p1.music();
             return 0;
       
        }

        
        return 0;
}


