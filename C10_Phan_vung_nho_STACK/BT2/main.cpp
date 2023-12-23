/**
 * @file main.cpp
 * @author Kevin Nguyen
 * @brief BT2 
 * Cho 1 mảng số nguyên có n phần tử 
 * 1. hoàn thiện hàm printf() nhận 1 mảng là tham số, in ra toàn bộ giá trị và địa chỉ của mảng
 * 2. Hàm thiện hàm capacity() cần để tính ra dung lượng bộ nhớ mà mảng chiếm dụng  
 * @version 0.1
 * @date 2023-12-22
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <iostream>
#include <iomanip>

using namespace std;

void print(int a[], int n)
{
    // 1. hoàn thiện hàm printf() nhận 1 mảng là tham số, in ra toàn bộ giá trị và địa chỉ của mảng
    cout << setw(20) << left << "Adress" << setw(10) << left << "Value\n" << setw(0);
    

    for(int i = 0; i < n; i++)
    {
        cout << setw(20) << left << &a[i];
        cout << setw(10) << left << a[i]  << '\n';   
    }
}

int capacity(int a[], int n)
{
    int result = 0;
    // Hàm thiện hàm capacity() cần để tính ra dung lượng bộ nhớ mà mảng chiếm dụng  
    result = sizeof(a[0])*n;
    return result;
}

int main()
{
    const int n = 5;
    int a[n] = {1, 6, 3, 7, 2 };
    
    cout << "Cau 1:\n";
    print(a, n);
    
    cout << "Cau 2: " << capacity(a, n) << " bytes\n";
}
