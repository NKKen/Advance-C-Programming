#include <iostream>
#include <algorithm>
#include <array>
using namespace std;

int main(){
    int A[10] = {0,1,2,3,4,5,6,7,8,9};

    for (const auto &x : A){
        cout << x << " ";
    };
    sort(begin(A), end(A), greater<int>());
    cout << "\nafter sorting (Descending order): \n";
    for (const auto &x : A){
        cout << x << " ";
    };
}