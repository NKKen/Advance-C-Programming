#include <iostream>

using namespace std;
int findsum (int arr[], int n   ){
    if(n <= 0)
        return 0;
    else
        return arr[n-1] + findsum(arr, n-1);
}

int main(){
    int arr[10] = {0,1,2,3,4,5,6,7,8,9};

    findsum(arr, 10);
}