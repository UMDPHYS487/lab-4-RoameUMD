#include <iostream>
using namespace std;

int factorial(int n){
    int f = 1;
    for(int j=2; j <= n; j++){
        f *= j;
    }
    return f;
}

int main(){
    int N;
    cout << "Please enter an integer value: ";
    cin >> N;
    cout << "The value you entered is " << N << " and its factorial is " << factorial(N) << ".\n";
}