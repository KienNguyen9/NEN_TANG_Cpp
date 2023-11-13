/**
 * @file BT2.cpp
 * @author Kien Nguyen
 * @brief 
 * BT 2 hình minh họa ở thư mục mẹ 
 * @version 0.1
 * @date 2023-11-13
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <iostream>
int main()
{
    // Khai báo các biến đầu vào:
    float r = 0;
    const float PI = 3.14;
    // Nhập giá trị cho biến
    std::cout << "Nhap ban kinh: ";
    std::cin >> r;
    //Xuất kết quả
    std::cout << "\nChu vi duong tron la: " << PI*2*r;
    std::cout << "\nDien tich hinh tròn la: " << r*r*PI;
    return 0;
}