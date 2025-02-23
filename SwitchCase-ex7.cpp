#include <iostream>
using namespace std;

int main(){
    int a;
    char tmp;

    cout << "Input a number: ";
    cin >> a;

    if(a < 10 && a % 2 == 0){
        tmp = 'A';
    } else if(a % 2 == 1){
        tmp = 'B';
    }

    switch (tmp){
    case 'A':
        cout << a*a << "\n";
        break;
    case 'B':
        cout << float(a)/2 << "\n";
        break;

    default:
        cout << "hahaha\n";
        break;
    }
}