/**
 * @file main.cpp
 * @author Kien Nguyen
 * @brief 
 * Nhập từ bàn phím 3 số thực x,y,z
 * 1. Tìm số lớn nhất trong 3 số
 * 2. Tìm số bé nhất trong 3 số
 * 3. Kiểm tra xem cả 3 số có cùng dấu không
 * 4. In ra các cặp số trái dấu 
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
    // Khai bao các biến
    float x,y,z, min,max;

    // Nhập liệu
    cout << "\nNhap so thuc x: ";
    cin >> x; 
    cout << "\nNhap so thuc y: ";
    cin >> y; 
    cout << "\nNhap so thuc z: ";
    cin >> z;

    // Tìm số lớn nhất
    max = ((x>y)?x:y);
    max = max>z?max:z;
    cout << max << '\n';

    // Tìm số nhỏ nhất
    min = (x<y?x:y);
    min = min<z?min:z;
    cout << min << '\n';

    // Kiểm tra 3 số cùng dấu ko
    if(x>0 && y>0 && z>0 || x<0 && y<0 && z<0) 
    {
        cout << "3 so cung dau\n";
    } else if( x == 0 && y ==0 &&z ==0)
    {
        cout << "3 so bang 0 = > cung ko co dau\n";
    } else 
    cout << "3 so KHONG cung dau\n";
    // IN các cặp số trái dấu
    // áp dụng số học để giải

    if(x*y < 0)
    {
        cout << "( " << x << ", " << y << " )"<< '\n';
    }
    if(x*z < 0)
    {
        cout << "( " << x << ", " << z << " )" << '\n';
    }
    if(z*y <0)
    cout << "( " << z << ", " << y << " )" << '\n';
    return 0;
}