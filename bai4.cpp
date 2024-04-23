#include <iostream>
using namespace std;

int main(){
    int n;
    int isPrime = 1;
    cout << "Nhap so nguyen duong n:";
    cin >> n;
    if ( n < 2 ){
        isPrime = 0;
    } else {
        for ( int i = 2; i < ( n - 1); i++){
            if ( n % i == 0){
                isPrime = 0;
                break;
            }
        }
    }
    if ( isPrime ){
        cout << n << " la so nguyen to"<< endl;
    } else {
        cout << n << " khong la so nguyen to."<< endl;
    }

return 0;
}