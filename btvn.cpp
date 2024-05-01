#include <iostream>
using namespace std;
int main()
{
    int n;
    int arr[1000];
    cout << " Nhap n:";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << " nhap phan tu thu" << i + 1 << " :";
        cin >> arr[i];
    }

    int max = arr[0], min = arr[0];
    for (int i = 1; i < n; ++i)
    {
        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
    }

    int tong = 0, tich = 1;
    for (int i = 0; i < n; ++i)
    {
        tong += arr[i];
        tich *= arr[i];
    }
    float trungBinhCong = tong * 1.0 / n;

    int b = 0;

    for (int i = 0; i < n; ++i)
    {
        if (arr[i] == 3)
            b++;
    }
    int countPrime = 0;
    for (int i = 2; i < n; ++i)
    {
        bool isPrime = true;
        if (arr[i] < 2)
        {
            isPrime = false;
        }
        else
        {
            for (int j = 2; i * j <= i; j++)
            {
                if (arr[i] % j == 0)
                {
                    isPrime = false;
                }
            }
            countPrime++;
        }
    }

    cout << "Gia tri lon nhat: " << max << endl;
    cout << "Gia tri nho nhat: " << min << endl;
    cout << "Tong cua mang: " << tong << endl;
    cout << "Tich cua mang: " << tich << endl;
    cout << "Gia tri trung binh cua mang: " << trungBinhCong << endl;
    cout << "So lan xuat hien cua so 3: " << b << endl;
    cout << "So luong so nguyen to trong mang: " << countPrime << endl;

    return 0;
}