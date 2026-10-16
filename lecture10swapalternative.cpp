#include <iostream>
using namespace std;

void swapalternative (int arry[],int size) {

    for ( int i=0; i<=size;i+=2) {
        
        if(i + 1 < size) {
            swap (arry[i] ,arry[i+1]) ;

        }
    }
}

void printarray (int arry[],int n) {

    for (int i =0; i<n; i++) {
        cout << arry[i] <<" ";

    }
    cout << endl;

}



int main () {

    int arry[6] = {2,4,7,9,0,8 };

    swapalternative(arry,6);

    printarray(arry,6);

}