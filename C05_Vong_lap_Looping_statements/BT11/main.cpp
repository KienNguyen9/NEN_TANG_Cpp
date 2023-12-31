/**
 * @file main.cpp
 * @author Kevin Nguyen
 * @brief BT11 
 * Nhập m và n từ bàn phím
 * vẽ hình chữ nhật kích thước m x m  bằng kí tự sao '*' có đặc điểm sau:
 * 1. Hình chữ nhật đặc
 * 2. Hình chữ nhật rỗng
 * 3. Hình chữ nhật lưới m&n là số lẻ
 * @version 0.1
 * @date 2023-12-08
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <iostream>
using namespace std;

int main()
{
    // Variables 
    int m, n;
    // Input m and n
    cout << "Nhap n: ";
    cin >> n;
    cout << "\nNhap m: ";
    cin >> m; 

    // Hình chữa nhật đặc 
    cout << "\nHinh chu nhat dac: \n";
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cout << "* ";
        }
        cout << '\n';
    }

    cout << "\nHinh chu nhat rong: \n";
    for(int i = 0; i < m; i++){
        
        for(int j = 0; j < n; j++){
            if(i == 0 || i == (m-1))
            {
                cout << "* ";
            }
            else
            {
                if(j == 0 || j == (n-1))
                {
                    cout << "* ";
                }
                else
                {
                    cout << "  ";
                }
            }
            
        }
               
        cout << '\n';
    }

    // chữ nhật lưới
     cout << "\nHinh chu nhat luoi: \n";
    for(int i = 0; i < m; i++){
        
        for(int j = 0; j < n; j++){
            if( i == 0 || i == (m-1) || j == 0 || j == (n-1))
            {
                cout << "* ";
            }
            else
            {
                if((j % 2) == 0 || (i%2) == 0)
                {
                    cout << "* ";
                }
                else
                {
                    cout << "  ";
                }
            }
            
        }
               
        cout << '\n';
    }



    return 0;
}


