/**
 * @file BT3.cpp
 * @author Kien Nguyen
 * @brief Đề bài và đáp án ở thư mục mẹ
 * @version 0.1
 * @date 2023-11-13
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <iostream>
#include <math.h> // Thư viện Math phải có .h vì đây là 1 thư viện viết ra cho ngôn ngữ C
int main()
{
    // Biến đầu vào
    float a = 0, b = 0, c = 0;
    float chuVi = 0, dienTich = 0;
    // Nhập dữ liệu
    std::cout << "\nNhap canh a: ";
    std::cin >> a;
    std::cout << "\nNhap canh b: ";
    std::cin >> b;
    std::cout << "\nNhap canh c: ";
    std::cin >> c;
    // Thao tác với các tham số trên để có kết quả
    chuVi = (a+b+c)/2;
    dienTich = sqrt(chuVi*(chuVi-a)*(chuVi-b)*(chuVi-c));
    // Xuất dữ 
    std::cout << "Dien tich tam giac nay la: " << dienTich;
    
    // Không có lệnh return CT vẫn hoạt động bình thường, nhưng cần có để nó đúng theo tiêu chuẩn 1 chương trình
    return 0; 
}
