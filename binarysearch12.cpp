#include <iostream>
using namespace std ;

int binarysearch (int arry[],int size,int key) {
    int start = 0;
    int end = size - 1;
       
    int mid = (start + end)/ 2;
   while (start<=end) {
    
    if (arry[mid]== key ) {
        return mid ;
    }
     else if (key > arry [mid]) {
        start = mid + 1;
    
    }
    else  if (key < arry[mid]){
        end= mid-1;
    }
    mid = (start + end)/2;
   }
   return -1;
}



int main (){ 
   
 int arry[6] = {2,3,5,6,8,9} ;

  int index = binarysearch(arry,6,2);
  cout << "INDEX OF 2 IS"<<" "<< index <<endl;
}