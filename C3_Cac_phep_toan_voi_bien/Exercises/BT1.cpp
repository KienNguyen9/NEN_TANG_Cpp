/**
 * @file BT1.cpp
 * @author Kien Nguyen
 * @brief 
 * Giả sử có 2 biến số thực x = 2.0, y =3.0
 * Cho các như hình File image trong folder ngoài
 * Chuyển đổi thành biểu thức code C++ và in kết quả ra màn hình
 * Kết quả cần đạt:
 * 6.66
 * 2.407
 * 437.79
 * @version 0.1
 * @date 2023-11-13
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <iostream>
#include <math.h> // Chấm h vì đây là thư viện trong chuển C
int main()
{
    float x = 2.0, y = 3.0;
    // Biểu thức 1: x*y + x/y
    std::cout << '\n' << x*y + x/y;
    //Biểu thức 2: x + 1/(x+(1/(x+1/x+y))) 
    std::cout << '\n' << x + 1/( x + 1/( x + 1/(x+y)));
    //Biểu thức: căn sqrt(pow((3x + 2y),2)*pow((5x+1),3))
    std::cout << '\n'<< sqrt(pow((3*x+2*y),2)*pow((5*x+1),3));
    return 0;
}
