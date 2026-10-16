#include <iostream>
using namespace std;

void printarray( int arry[],int size) {

    cout << " print the array " << endl;
     
    for (int i =0; i<size; i++) {
        cout<< arry[i] <<" ";
    }

        cout<<"printing done " << endl;

}



int main () {
 int n = 15;
    int second [15] = {2,7} ;
       
    printarray(second,15);
 


    n=10;
    int third [10] = {0};
        
     cout << "print the array" <<endl;
    for (int i =0;i<n;i++) {
        cout<< third [i] <<" ";

    }
     cout << "printing is done" << endl;


     n=12;

     int fourth [12] = {1};
     printarray(fourth,12) ;


     int fifth [5] = {1,2,3,4,5};

     cout  << " value at 4 index " << fifth[4] << endl; 

     
}