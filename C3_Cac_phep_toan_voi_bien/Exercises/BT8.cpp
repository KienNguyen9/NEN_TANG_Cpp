/**
 * @file BT8.cpp
 * @author Kien Nguyen
 * @brief 
 * @version 0.1
 * @date 2023-11-14
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <iostream>

// dùng các hàm trong thư viện std
using namespace std;
int main()
{
    char c;
    // Lời mời nhập dữ liệu
    cout << "\nHay nhap mot ki tu in thuong trong bang chu cai: ";
    cin >> c;
    // Xuất ra màn hình
    cout << "\nMa ASCII cu ki tu " << c << " la: " << int(c);
    cout << "\nKi tu dung sau do la: " << (char)(c + 1) << ", ma ASCII la: " << int(c+1);  
    cout << "\nKi tu in hoa tuong ung la: " << (char)(c - 32);
    return 0;
}