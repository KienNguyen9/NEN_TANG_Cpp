/**
 * @file main.cpp
 * @author Kien Nguyen
 * @brief BT6. Nhập một số nguyên n từ bàn phím
 * Tìm x sao cho: (1+2+3+...+x) > n
 * In giá trị của x ra màn hình.
 * @version 0.1
 * @date 2023-11-27
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <iostream>
using namespace std;
int main()
{
    //Các biến
    int n=0, sum=0;
    //Nhập n từ bàn phím
    cout << "Nhap so nguyen duong n: ";
    cin >> n;
    //Solution
    if(n > 0)
        for(int i = 1; i <= n; i++)
        {
            sum += i;
            if(sum > n)
                {
                    cout << "x = " << i;
                    break;
                }
        }
    else 
        cout << "x = 1";
   
    return 0;
}