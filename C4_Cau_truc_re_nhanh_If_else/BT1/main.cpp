/**
 * @file main.cpp
 * @author Kien Nguyen
 * @brief 
 * Viết chương trình nhập 2 thực số x,y 
 * 1. Kiểm tra chúng có khác 0 hay không, in ra màn hình KQ
 * 2. Nếu x,y khác 0, kiểm tra tiếp xem chúng có cùng dấu hay khác dấu và in ra KQ
 * @version 0.1
 * @date 2023-11-14
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <iostream>
using namespace std;
int main()
{
    float x,y;
    // Lời mời nhập
    cout << "Nhap so thuc x:";
    cin >> x;
    cout << "Nhap so thuc y:";
    cin >> y;

    // Kiểm tra x,y có khác 0
    if(x==0)
    cout << "x = 0";
    else cout <<"x = " << x <<" khac 0"; 

    if (y == 0)
    cout << "\ny == 0";
    else cout << "\ny = " << y <<" khac 0"; 

    // Nếu x & y khác 0, kiểm tra cùng dấu hay khác dấu
    if(x != 0 && y != 0)
    {
        if ((x < 0) && (y < 0) || (x > 0) && (y > 0))
        {
        cout << "\nx = " << x << "; y = " << y << "\nx va y cung dau";
        } else 
        cout << "\nx = " << x << "; y = " << y << "\nx va y KHONG cung dau";
    }
    

    
    return 0;
}