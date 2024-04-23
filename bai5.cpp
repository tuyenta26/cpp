
#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Nhap mot so nguyen n: ";
    cin >> n;
    cout << "Cac so nguyen trong khoang tu 1 den " << n << " la:" << endl;
   
    for (int i = 2; i <= n; ++i) {
        bool isPrime = true; 
        if (i < 2) {
            isPrime = false;
        } else {
            for (int j = 2; j * j <= i; ++j) {
                if (i % j == 0) {
                    isPrime = false; 
                    break;
                }
            }
        }
        
        if (isPrime) {
            cout << i << " ";
        }
    }
    cout << endl;
    return 0;
}
