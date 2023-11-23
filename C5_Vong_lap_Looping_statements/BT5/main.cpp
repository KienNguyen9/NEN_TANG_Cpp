/**
 * @file main.cpp
 * @author Kien Nguyen  
 * @brief 
 * BT 5. Một số hoàn hảo là một số có tổng các ước số của nó bằng chính nó(ko kể nó).
 * số 6 là số hoàn hảo vì 1+2+3 = 6
 * tương tự: 28,496, 8128
 * Viết CT nhập số nguyên dương n từ bàn phím, kiểm tra xem n có phải là số hoàn hảo ko và in ra màn hình KQ
 * @version 0.1
 * @date 2023-11-23
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <iostream>
using namespace std;
int main()
{
    //Nhap - nhập nhanh
    int n = 325;
    int sum = 0;
    //Kiểm tra - tìm các ước và cộng chúng lại
    for(int i = 1; i<n; i++)
    {
        if(n%i == 0)
            sum += i;
    }
    //Xuất
    if(sum == n)
        cout << n <<" la so hoan hao.";
    else
        cout << n <<" KHONG la so hoan hao.";
    return 0;
}