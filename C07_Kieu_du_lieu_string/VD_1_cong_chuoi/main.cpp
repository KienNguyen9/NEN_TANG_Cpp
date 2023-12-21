/**
 * @file main.cpp
 * @author Kien Nguyen
 * @brief Đây là ví dụng về tính năng của kiểu dữ liệu string 
 * Chúng ta có thể cộng 2 chuỗi lại(chỉ có string mới làm đc # với array)
 * @version 0.1
 * @date 2023-11-29
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <iostream> //string có tích hợp trong iostream 
//#include <string>
using namespace std;
int main()
{
    string firstName = "Kien";
    string lastName = "Nguyen";
    string fullName = firstName + ' ' + lastName;
    cout << fullName;
    return 0;
}