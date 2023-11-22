/**
 * @file main.cpp
 * @author Kien Nguyen
 * @brief 
 * Viết chương trình nhập vào 2 số nguyên dương a và b từ bàn phím.
 * Tìm ước số chung lớn nhất 
 * và bội số chung nhỏ nhất 
 * của a và b  và in ra màn hình
 * @version 0.1
 * @date 2023-11-22
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <iostream>
using namespace std;

int main()
{
    // Bỏ qua bước nhập bằng lệnh, nhập tay 
    int a = 12, b = 30;
    int ucln = 0, bcnn = 0;
    
    //

    // Tìm ước chung lớn nhất
    for(int i = 1; i <= (a<b?a:b); i++)
    {
        if( (a % i == 0) && (b % i == 0))
        {
            ucln = i;
        }
    }

    for(int i = 1; i <= (a>b?(100*a):(100*b)); i++) // cách này chưa chuẩn nhất
    {
        if((i%a == 0) && (i % b == 0))
        {
            bcnn = i;
            break; 
        }
    }

    cout << "\n UCLN la: " << ucln;
    cout << "\n BCNN la: " << bcnn;
    return 0;
}