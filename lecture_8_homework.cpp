#include <iostream>
using namespace std ;

int main () {

    int amount = 1330;
    int note;
    cout << "entre the note which you want "<<endl;
    cin >> note ;
    switch (note) {
                   
                // hae mi extra cha add kart ah karnki  count << notes of 100 mhtl tr
                // output madhe changla disun padte


        case 100: cout << "notes of 100 is " << endl;
                  cout<< amount/100 << endl ;
                  amount = amount % 100;

        case 50 : cout << "notes of 50 is " << endl;
                  cout<< amount/50 << endl;
                  amount = amount % 50;

         
        case 20 : cout << " notes of 20 is " << endl;
                  cout<< amount/20 << endl;
                  amount = amount % 20 ;

        case 1 : cout <<" notes of 1 is " << endl;
                cout << amount/1 << endl;
                amount = amount % 1 ;

                break;
         
         defult :  cout <<" plz entre write code " << endl;
         
    }
    cout << endl;
    
}