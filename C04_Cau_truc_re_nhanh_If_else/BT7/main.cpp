/**
 * @file main.cpp
 * @author Kien Nguyen
 * @brief 
 * Viết chương trình nhập 3 cạnh của tam giá, cho biêt đó là tam giác gì(vuong / cân/ vuông cân/ đều / thường)
 * Các tính chất của tam giá được định nghĩa sau:
 * 1. ĐK là Tam giác: tổng 2 cạnh bất kì sẽ luôn lớn hơn cạnh còn lại
 * 2. TG cân: khi có 2 cạnh bằng nhau
 * 3. TG Đều: khi 3 cạnh bằng nhau
 * 4. TG vuông: khi bình phương 1 cạnh bằng xấp xỉ tổng của bình phương 2 cạnh còn lại(độ lệch cho phép < 1,
 * VD 71.1 VÀ 72 là xấp xỉ vì lẹch 0.9)
 * TG Vuông cân: khi vừa thỏa mản điều kiện vuông và cân (khó)
 * TG thường các trường hợp còn lại
 * @version 0.1
 * @date 2023-11-19
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <iostream>
using namespace std;
int main()
{
    // Cạnh của tam giác
    float a,b,c;
    
    // Nhập dữ liệu 
    cout << "Nhap chieu dai cac canh cua tam giac:\n";
    cout << "Nhap canh a: ";
    cin >> a;
    cout << "Nhap canh b: ";
    cin >> b;
    cout << "Nhap canh c: ";
    cin >> c;

    // Tính toán
    //Xét sự tồn tại của TG
    if( ((a+b) < c) || ((a+c) < b) ||((b+c)<a))
    {
        cout << "Tam giac nay KHONG TON TAI.";
    }
    else if (abs((a*a) - (b*b +c*c)) < 1 || abs((b*b) - (a*a +c*c)) < 1 || abs((c*c) - (b*b +a*a)) < 1 )
    {
        if( (a==b) || (a==c) || (b==c))
        {
        cout << "Tam giac vuong can.";
        }
        else 
            cout << "Tam giac vuong";
    } 
    else if( (a==b) || (a==c) || (b==c))
    {
        if((a == b) && (a == c))
        {
            cout << "Tam gia deu";
        }else
        cout << "Tam giac can.";
    } 
    
    

    else
    {
        cout << "Tam gia thuong";
    }
    return 0;
}
