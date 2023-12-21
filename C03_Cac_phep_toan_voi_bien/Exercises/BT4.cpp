/**
 * @file BT4.cpp
 * @author Kien Nguyen
 * @brief Đảo số có 3 chữ số
 * @version 0.1
 * @date 2023-11-13
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <iostream>
int main()
{
    // Biến đầu vào
    int x = 0;
    // Lời mời nhập liệu
    std::cout << "Hay nhap mot so nguyen co 3 chu so:";
    std::cin >> x;
    //Xuất ra kết quả
    std::cout << "So dao nguoc la: " << x%10 << (x/10)%10 << (x/100);
    return 0;
}

