/**
 * @file BT6.cpp
 * @author Kien Nguyen
 * @brief 
 * @version 0.1
 * @date 2023-11-14
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include<iostream>
using namespace std;
int main()
{
    //Biểu diễn miền giá trị
    // 1. [0;inf) . x >= a và x <= b
    int x1 = 0;
    bool check_x1;
    cout << "Nhap x1: ";
    cin >> x1;

    if (x1 >= 0)
    {
        check_x1 = true;
        cout << "x1 thuoc [0;infiniti)";
    }  else{
        cout << "x1 KHONG thuoc [0;infiniti)";
    }
    
    // 2. [-1;2] [4;6]
    // X >= -1 và x <= 2  
    // x >= 4 và x <=6
    int x2 = 0;
    bool check_x2;
    cout << "\nNhap x2: ";
    cin >> x2;

    if ((x2 >= -1)&& (x2 <= 2) || (x2 >= 4) && (x2<=6))
    {
        check_x1 = true;
        cout << "x2 thuoc [-1;2] [4;6]";
    }  else{
        cout << "x2 KHONG thuoc [-1;2] [4;6]";
    }

    // 3. (-2;2) and 5
    int x3 = 0;
    bool check_x3;
    cout << "\nNhap x3: ";
    cin >> x3;

    if ((x3 > -2) && (x3 < 2) || (x3 == 5))
    {
        check_x1 = true;
        cout << "x3 thuoc (-2;2) and 5";
    }  else{
        cout << "x3 KHONG thuoc (-2;2) and 5";
    }

    // 4. (-4;0] and (4;inf)
    int x4 = 0;
    bool check_x4;
    cout << "\nNhap x4: ";
    cin >> x4;

    if ((x4 > -4)&& (x4 <= 0) || (x4 >= 4))
    {
        check_x1 = true;
        cout << "x4 thuoc (-4;0] and (4;inf)";
    }  else{
        cout << "x4 KHONG thuoc (-4;0] and (4;inf)0";
    }


    return 0;
}