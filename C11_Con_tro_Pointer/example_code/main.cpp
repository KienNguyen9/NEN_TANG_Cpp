/**
 * @file main.cpp
 * @author Kien Nguyen
 * @brief Code mẫu ví dụ về con trỏ
 * @version 0.1
 * @date 2023-12-23
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <iostream>
using namespace std;

int main()
{
    int x = 10;
    float y = 15.5;

    int * z = &x;

    float * t = &y;

    *z++;
    cout << x << ' ' << *z << '\n';
    
    // Array và pointer

    int a[4] = {1,  4, 2, 5};

    // Duyệt mảng bằng con trỏ có trong array

    for(int *p = a; p <= &a[3]; p++)
    {
        cout << *p << '\n';        
    }

    return 0;
}