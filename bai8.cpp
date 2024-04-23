#include <iostream>
using namespace std ;
int main(){
    int n;
    cout << "Nhap so nguyen ";
    cin >> n ;
    int f1 = 0, f2= 1;
    int f;
    cout << n << " phan tu dau tien cua day fibonacci la:"<< endl;
    cout << f1 << endl;
    cout << f2 << endl;
    for ( int i = 1; i <= n - 2; i++){
        f= f1 + f2;
        cout << f<< endl;
        f1 = f2;
        f2 = f;
    }
    return 0;

}