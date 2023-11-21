/**
 * @file main.cpp
 * @author Kien Nguyen
 * @brief 
 * Viết chương trình nhập số nguyên dương
 * 1. In ra tất cả các số mà n có thể chia hêt từ 1 đến n
 * 2. Đếm xem có bao nhiêu số được in ra ở câu 1 và in ra kết quả đếm được
 * 3. Kiểm tra xem số n có phải là số nguyên tố hay ko>?
 * (là số khác 1 và nó không chia hết cho bất cứ số nào trừ 1 và chính nó)
 * @version 0.1
 * @date 2023-11-21
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <iostream>
using namespace std;
int main()
{
    // Nhập nhanh n
    int n = 9;
    int count = 0;
 
    // cout << "Nhap so n: ";
    // cin >> n;
    
    cout << "Cac so n co the chia het: ";
    for(int i = 1; i <= n; i++)
    {
        if(n%i == 0)
        {
            cout << i << "  ";
            count++;
        }
    }

    cout << "\nSo luong so ma n co the chia het: "<< count;

    if(count == 2)
    {
        cout << "\nLa so nguyen to";
    } 
    else
    {
        cout << "\nKo phai so nguyen to";
    }

    return 0;
}