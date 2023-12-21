/**
 * @file main.cpp
 * @author Kevin Nguyen
 * @brief BT1 
 * Nhập vào từ bàn phím một chuỗi kí tự bất kì  
 * 1. Đếm số lượng dấu cách ' ' có trong sâu kí tự
 * 2. Đếm số lượng kí tự chữ và số lượng kí tự số
 * 3. Chuyển đổi hoàn toàn thành kí tự in hoa và lưu thành 1 chuỗi khác nhau
 * 4. Tách hết kí tự số và kí tự chữ trong chuỗi và lưu thành 2 chuỗi khác
 * 5. Xử lí các kí tự số, thay bằng chuỗi kí tự cách đọc của số đó 
 *      vd: '1' -> "mot" , '2' -> "hai"
 * 6. Thống kế các kí tự chữ cái trong sâu và số lần xuất hiện của nó (phân biệt hoa và thường)
 * @version 0.1
 * @date 2023-12-09
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s = "";
    cout << "Nhap vao mot chuoi: ";
    getline(cin,s);
    cout << "Chuoi da nhap: " << s << endl;

    // Task 1: Đếm số dấu cách
    int c = 0;
    for(int i=0; i < s.length(); i++)
    { 
        if(s[i] == ' ')
        {
            c++;
        }
    }
 
  cout << "so dau cach: " << c; 

    return 0;
}