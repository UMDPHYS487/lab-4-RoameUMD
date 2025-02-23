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
    for(int i=1; i <= 10; i++){
        cout << "The factorial of " << i << " is " << factorial(i) << "\n";
    }
}