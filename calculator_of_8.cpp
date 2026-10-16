#include <iostream>
using namespace std ;


int main () {

    int a,b ;
     
    cout <<"enter the value of a"<< endl;
    cin >> a;

    cout << "enter the value of a " << endl;
    cin >>b;

    char op;
    cout << "what operater you have to add" << endl;
    cin >> op;

    switch(op) {

        case '+' : cout << a+b <<endl;
        break;

        case '-': cout << a-b<< endl ;
        break;

        case '*': cout << a*b<< endl;
        break;

        case '/': cout << a/b << endl;
        break ;
        
        

        default : cout << "nothing calculate" << endl;
        

    }

        
    }