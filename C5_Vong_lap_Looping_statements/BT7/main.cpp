/**
 * @file main.cpp
 * @author Kien Nguyen  
 * @brief BT 7
 * Biết hàm số f(x) có dạng như sau:
 * f(x) = 2x^2 + 5x + 9 khi x >= 5
 * f(x) = -2x^2 + 4x - 9 khi x < 5
 * Tính tổng F(n) = f(1) + f(2) + ... + f(n)
 * Với n được nhập từ bàn phím
 * @version 0.1
 * @date 2023-11-28
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <iostream>
using namespace std;
int main()
{
    // Variables
    int n = 0;
    int fn = 0;
    // Input 
    cout << "Nhap so nguyen duong n: ";
    cin >> n;
    // Output
    for(int i = 1; i<=n; i++)
    {
    
        if (/* condition */i < 5)
        {
            /* code */
            fn += -(2*i*i) + 4*i - 9;
        }
        else
        {
            fn += (2*i*i) + 5*i + 9;
        }
    }

    cout << "F(n) = " << fn;
    return 0;
}
