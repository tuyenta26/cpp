#include <iostream>
using namespace std;

int main(){
    int chieuDai = 10, chieuRong = 9;
    for (int i = 0; i < chieuRong; i++){
        for (int j = 0; j < chieuDai; j++){
            if (i ==0 || i == (chieuRong - 1)|| j == 0 || j == ( chieuDai - 1)){
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }

return 0;
}