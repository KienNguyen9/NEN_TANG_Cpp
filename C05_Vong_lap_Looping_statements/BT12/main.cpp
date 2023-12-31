/**
 * @file main.cpp
 * @author Kevin Nguyen
 * @brief BT12
 * Nhập n là số nguyên dương
 * Vẽ tam giác cân có độ dài cạnh n như sau
 * 1. Tam giác cân đặc ruột kí tự '0' lệch phải
 * 2. Tam giác cân đặc ruột kí tự '0', viền 1, lệch phải

 * @version 0.1
 * @date 2024-01-01
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <iostream>
using namespace std;

int main()
{
    // Variables
    int n = 6;

    for (int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if((i + j) > (n/2 + 1))
            {
            cout << "0 ";
            }
            else
            {
                cout << "  ";

            }
        }
        cout << '\n';
    }
    
    return 0;
}