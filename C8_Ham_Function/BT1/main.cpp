/**
 * @file main.cpp
 * @author Kien Nguyen
 * @brief Bt 1 - Hàm 
 * Viết một hàm có tên là average để tính trung bình cộng của 3 số nguyên
 * @version 0.1
 * @date 2023-12-12
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <iostream>
using namespace std;
// Hàm average 
float average(int a, int b, int c){
    return (a+b+c)/3;
}

int main()
{
    int a = 5, b = 6, c = 7;
    cout << "Trung binh cong la: " << average(a,b,c);
    return 0;
}