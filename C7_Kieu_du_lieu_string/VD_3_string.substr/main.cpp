/**
 * @file main.cpp
 * @author Kien Nguyen
 * @brief Tính năng trích xuất một mảng kí tự trong chuỗi
 * @version 0.1
 * @date 2023-11-29
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include<iostream>
using namespace std;
int main()
{
    string fullName = "Nguyen Trung Kien";
    string Name = fullName.substr(13,4); // từ kí từ 13 về sau lấy 4 phần tử
    cout << Name;

    return 0;    
}