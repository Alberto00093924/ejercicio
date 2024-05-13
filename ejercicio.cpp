#include <iostream>
using namespace std;
int main(){
    
    string nombre;
    cout<<"ingrese su nombre:";
    cin>> nombre;
    
    int h=0,s=0,i=0;
    cout<<"ingrese sus horas de trabajo:";
    cin >> h;
        if ( h <= 160){ 
            s = h*10;
            cout <<s << endl; 
        }
        else if(h > 160) {
            s = 1600 + ((h-160)*15);
            
        }
         

           if ( s <=2000) {i = s;}
            else if(s < 2200) {
                i = s - (s*20/100);
                cout << s << endl;
            }
            else if (s > 2200) { 
                i = s - (s*30/100);
                cout<< s <<endl;
            }
            
            cout <<nombre << "Su salario total es de:"<< i << endl;
            return 0;
            
            }