#include <iostream>
using namespace std;
int main(){
    int n;
    long giaiThua = 1;
    cout << "Nhap so n: ";
    cin >> n;
    for(int i = 1; i <= n; i++) {
        giaiThua *= i;
    }
    cout << "Giai thua cua " << n << " la " << giaiThua << endl;
    return 0;
}