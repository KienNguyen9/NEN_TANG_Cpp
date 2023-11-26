/**
 * @file main.cpp
 * @author Kien Nguyen  
 * @brief BT2
 * Nhập từ bàn phím số nguyên dương n
 * Nhập n phần tử khác nhau từ bàn phím, lưu vào mảng, tối đa 100 phần từ
 * 1. Tính trung bình cộng các số ở vị trí chẵn trong mảng
 * 2. Tính trung bình cộng các số ở vị trí lẻ trong mảng
 * 3. Tìm số lớn nhất trong mảng vừa nhập
 * 4. Tìm vị trí nhỏ nhất của số vừa nhập
 * 5. Đếm các số chính phương có trong mảng (số chính phương là số bằng bình phương của 1 số nguyên. Ví dụ 4=2^2; 9 =3^2)
 * 6. Hiển thị có số nguyên tố có trong mảng lên màn hình
 * 7. In tất cả các số trong mảng theo thứ tự tăng dần
 * @version 0.1
 * @date 2023-11-26
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <iostream>
using namespace std;
int main()
{
    //The variables
    int n=0;
    const int MAX = 100;
    float arr[MAX] = {};
    // Nhập số nguyen dương n
    cout << "Nhap so nguyen duong n: ";
    cin >> n;
    // Input the elements
    for(int i=0; i<n; i++)
    {
        cout << "Nhap phan tu thu " << i << " :";
        cin >> arr[i];
    }

    cout << "Mang vua nhap la : arr[" << n <<"]" << " = {";

    for(int i = 0; i<n; i++)
    {
        if(i < n-1)
            cout << arr[i] << ", ";
        else 
            cout << arr[i] << '}';
    }

    return 0;
}