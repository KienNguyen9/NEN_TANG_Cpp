/**
 * @file BT5.cpp
 * @author Kien Nguyen
 * 
 * @version 0.1
 * @date 2023-11-14
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <iostream>
int main()
{
    bool a = 1;
    bool b = 0;
    bool c,d,e,f;
    // Biểu diễn các dạng mệnh đề logic với dạng phép toán
    std:: cout << (c = (a && b)); // bằng một chỉ khi a = b = 1
    std:: cout << (d = a || b); // chỉ bằng 0 khi cả 2 a = b = 0
    std:: cout << (e = (a == 1)); // bằng 1 khi a bằng 1
    std:: cout << (f = (a==1 && b ==0) || (a == 0 && b == 1 ))
    ;
    return 0;

}