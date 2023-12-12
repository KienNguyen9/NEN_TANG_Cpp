/**
 * @file main.cpp
 * @author Kien Nguyen
 * @brief BT2 
 * 
 * @version 0.1
 * @date 2023-12-12
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include<iostream>
using namespace std;

float divide(int a, int b)
{
    // Nội dung cần hoàn thành 
    if(b == 0)
    {
        cout << "Khong chia duoc so ";
        return 0;
    }
    else
    {
        return (float)a/b;
    }
}

int main()
{
    cout << divide(6, 2) << "\n";
    cout << divide(-7, 2) << "\n"; 
    cout << divide(8, 0);
   
    return 0;
}
