// Add your code here

#include <iostream>
using namespace std;

int main(){
    for(int i=1; i <= 10; i++){
        int f = 1;
        for(int j=2; j <= i; j++){
            f *= j;
        }
        cout << "The factorial of " << i << " is " << f << "\n";
    }
}