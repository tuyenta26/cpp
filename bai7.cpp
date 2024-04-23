#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Nhap vao mot so nguyen: ";
    cin >> n;
    int t = 0;

    while (n > 0) {
        int u = n % 10; 
        t = t * 10 + u ;
        n /= 10; 
    }

    cout << "So dao nguoc: " << t <<endl;

    return 0;
}