/**
 * @file main.cpp
 * @author Kien Nguyen
 * @brief 
 * Nhập vào số nguyên dương n từ bàn phím
 * kiểm tra xem n có phải là só chính phương hay không
 * (số chính phương là số khi lấy căn bặc 2 có kế quả là nguyên)
 * 
 * @version 0.1
 * @date 2023-11-18
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n = 0;
    cout << "Nhap vao mot so nguyen duong: ";
    cin >> n;

    if( sqrt(n) == (int)sqrt(n))
    cout << "La so chinh phuong";
    else
    cout << "Khong phai so chinh phuong";
    return 0;
}