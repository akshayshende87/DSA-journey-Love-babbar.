#include <iostream> 
using namespace std;
    
int firstocc (int arry[],int size,int key) {
    int start = 0;
    int end = size - 1;
    int ans ;  

    int mid = start + (end - start )/ 2;
   while (start<=end) {
    if (arry[mid] == key ) {
        ans = mid ;
        end = mid - 1;

    }
    if (key > arry[mid]) {
        start = mid + 1;
    
    }
    else if (key < arry[mid]) {
        end= mid-1;
    }
    mid = start + (end - start )/2;
   }
   return ans;
}


int lastocc (int arry[],int size,int key) {
    int start = 0;
    int end = size - 1;
    int ans ;  

    int mid = start + (end - start )/ 2;
   while (start<=end) {
    if (arry[mid] == key ) {
        ans = mid ;
        start= mid + 1;

    }
    if (key > arry[mid]) {
        start = mid + 1;
    
    }
    else if (key < arry[mid]) {
        end= mid-1;
    }
    mid = start + (end - start )/2;
   }
   return ans;
}







int main () {
    int arry [5] = {2,3,4,4,5};
 int first =   firstocc(arry,5,4);
 int second = lastocc(arry,5,4);
 cout << "first occurence of 4 is at index " <<" "<< first <<endl;
 cout << "SECOND OCCURENCE OF 4 IS AT INDEX" <<" "<<second<<endl;

 
}
