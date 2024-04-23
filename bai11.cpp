#include<iostream>
using namespace std;
int main()
{
  int n;
  float S;
  S = 0;
  do {
    cout<<" Nhap vao so n: ";
    cin>>n;
    if(n < 1){
      cout<<" so n phao lon hon bang 1 ";
      }
  }while(n < 1);
  for(int i = 1; i <= n; i++){
    S = S + 1.0 / (i * i * i);
  }
  cout<<" Tổng 1/1 + 1/2^3 + ... + 1/"<<n<<"^3"<<" là: "<< round(S*100000)/100000;
 
}
