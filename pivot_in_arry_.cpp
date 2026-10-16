#include <iostream>
using namespace std;

int getpivot(int arr[],int n){

    int start = 0 ;
    int end = n-1;
    int mid = start + (end - start)/2;

    while (start < end ) {
        if (arr[mid] >= arr[0]) {
            start = mid + 1;

        }
        else {
            end= mid ;

        }
        mid = start + (end-start)/2;
    }
    return start ;
    
}





int main (){
    int arr [5] = {3,7,8,27,1};
   int pivot = getpivot(arr,5);

    cout << "pivot is at inddex "<<" "<<pivot<<endl;
}