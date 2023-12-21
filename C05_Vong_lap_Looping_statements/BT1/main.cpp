/**
 * @file main.cpp
 * @author Kien Nguyen
 * @brief 
 * Viết chương trình nhập vào số nguyên dương n và in ra màn hình
 * 1. Các số chẵn từ 1 đến n
 * 2. Các số từ 1 đến n chia hết cho 3
 * 3. Các số LẺ từ 1 đến n chia hết cho 3
 * 4. các số từ -n đến n chia hết cho 5
 * 
 * @version 0.1
 * @date 2023-11-20
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <iostream>
using namespace std;
int main()
{
    // Nhập nhanh n
    int n = 15;

    // Kết quả in ra màn hình 
    // kq 1
    cout << "Ket qua 1: ";
    for(int i = 1; i<=n; i ++ )
    {
        
        if(i%2 == 0)
        {
            cout << i << ' ';
        }
    }

    // kq2
    cout << "\nKet qua 2: ";
    for(int i = 1; i <= n; i++)
    {
        if(i%3 == 0)
        {
            cout << i << ' ';
        }

    }

    //KQ3 
    cout << "\nKet qua 3: ";
    for(int i = 1; i <= n; i++)
    {
        if(i%2 == 1)
        {
            if(i%3 == 0)
            cout << i << ' ';
        }

    }

    // KQ 4
    cout << "\nKet qua 4: ";
    for(int i = -n; i <= n; i++)
    {
        if(i%5 == 0)
        {
            cout << i << ' ';
        }

    }
    return 0;
}