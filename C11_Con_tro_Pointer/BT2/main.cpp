/**
 * @file main.cpp
 * @author Kevin Nguyen
 * @brief BT 2: Hoàn thành hàm findMax() với 2 tham số
 * a là 1 mảng số nguyên
 * n là số lượng phẩn trong mảng
 * Kết quả trả về là phần tử lớn nhất trong mảng 
 * Hàm findMax cần vượt qua 2 bài test trong hàm main(in ra chữ "Pass") 
 * @version 0.1
 * @date 2023-12-25
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <iostream>
using namespace std;

int findMax(int a[], const int N)
{
    int max = a[0];

    for(int i = 1; i < N; i++)
    {
        if(a[i] > max)
        {
            max = a[i]; 
        }
    }
    return max;
}

int main()
{
    const int N = 5;
    // Test case:
    {
        int a[N] = {15, 3, 11, 9, 10};
        cout << "Test 1: " << (findMax(a,N) == 15 ? "Pass" : "Failed") << '\n';   
    }

    {
        int a[N] = {-1, -3, -11, -9, -10};
        cout << "Test 2: " << (findMax(a,N) == -1 ? "Pass" : "Failed") << '\n';
    }
    return 0;
}