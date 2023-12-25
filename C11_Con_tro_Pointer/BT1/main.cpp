/**
 * @file main.cpp
 * @author Kevin Nguyen
 * @brief BT 1 - 
 * Dự đoán kết quả CT sau
 * 
 * @version 0.1
 * @date 2023-12-25
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <iostream>
using namespace std;

int main()
{
    // Chương trình 1: 
    int x = 1;
    int y = 2;
    int z = 3;
    int *p = &x;
    (*p)++;
    p = &y;
    (*p)--;
    p = &z;
    *p -= 3;

    // Đoán kq:  x = 2; y = 1; z = 0
    cout << x << ' ' << y << ' ' << z;

    // Chương trinh 2:
    int x1 = 1;
    int *p1 = &x1;
    int *q1 = p1;
    (*p1)++;
    (*q1)++;
    // ĐOÁN KQ: x1 = *p1 = *q1 = 3

    cout <<'\n' << x1 << ' ' << *p1 << ' ' << *q1;

    return 0;
}