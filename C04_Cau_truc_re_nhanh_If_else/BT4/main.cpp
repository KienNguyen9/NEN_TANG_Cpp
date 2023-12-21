/**
 * @file main.cpp
 * @author Kien Nguyen
 * @brief 
 * Nhập vào số giờ, phút, giây từ bàn phím. Kiểm tra xem thời gian nhập vào có hợp lệ không và in kq ra màn hình
 * Thời gian hợp lệ dduocj quy định như sau:
 * Giờ tính từ 0 - 23
 * phút 0 - 59
 * @version 0.1
 * @date 2023-11-18
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <iostream>
using namespace std;
int main()
{
    int gio, phut, giay;
    cout << "Moi nhap gio: ";
    cin >> gio;
    cout << "Moi nhap phut: ";
    cin >> phut;
    cout << "Moi nhap giay: ";
    cin >> giay;
    if( (gio >= 0 && gio <= 23) && (phut >= 0 && phut <= 59) && (giay >= 0 && giay <= 59))
    {
        cout << "Gio da nhap hop le";
    } else
    cout << "Gio da nhap khong hop le";
    return 0;
}