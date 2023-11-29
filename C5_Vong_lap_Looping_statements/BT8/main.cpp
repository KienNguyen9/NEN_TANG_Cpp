/**
 * @file main.cpp
 * @author Kien Nguyen
 * @brief BT8 
 * Lưu ý: trong bài này không dùng kiểu dữ liệu char hoặc std::string
 * Nhập một số nguyên dương n từ bàn phím
 * 1. In  ra số n theo thứ tự đảo ngược (vd: 123 -> 321)
 * 2. Tính số chữ số có trong số n
 * 3. Tính tổng các chữ số
 * 4. Nhập từ bàn phím vị trí của số mà bạn muốn(từ trái sang phải, bắt đầu từ 1), nêu vị trí đó ko tồn tại thì xuất thông báo             
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
    //variable
    int n = 0;
    // Input
    cout << "Nhap so nguyen duong n: ";
    cin >> n;
    //Output
    // Task 1: 
    // Cách 1: In ra chứ ko lưu, tách số thành từ số riêng lẻ rồi in 
    /* dùng for(;;) và tìm ra qui luật để tách các số
    */

    // cách 2: 
    // In ra dải số từ 1 đến n theo thứ tự đảo ngược
    int m = 0;
    int n1 = n;
    while(n1>0)
    {
        m = m*10 + n1%10;
        n1 /= 10;
    }
    
    cout << "Kq 1: " << m << '\n';

    //Task 2:
    int count = 0; 
    n1 = n;
    while(n1>0)
    {
        n1=n1/10; 
        count++;
    }
    cout << "kq 2: " << count;

    // Cách 2: dùng hàm log10 với biểu thức sau : "log10(n) + 1" ta sẽ có KQ 

    // Task 3: 
    int sum = 0;
    n1 = n;
    while(n1>0)
    {
        sum += n1%10;
        n1 /= 10;
    }
    cout << "Kq 3: " << sum;

    return 0;
}