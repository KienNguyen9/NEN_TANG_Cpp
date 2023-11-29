/**
 * @file main.cpp
 * @author Kien Nguyen
 * @brief Nhập một mảng 2 chiều có kịch thước MxN gồm các giá trị số nguyên
 * 1. Tính tổng tất cả các giá trị trong mảng
 * 2. Tìm số lớn nhất trong mảng
 * 3. In ra mảng con (bộ 3 phần tử) mà có tổng các phần tử lớn nhất
 * 4. Tìm số nguyên tố đầu tiền xuất hiện trong mảng(là số chia hết cho 1 và chính nó)
 * @version 0.1
 * @date 2023-11-28
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <iostream>
using namespace std;

bool is_prime(int n) {
    if (n <= 1) {
        return false;
    }

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }

    return true;
}
int main()
{
    int arr[4][3] = {{8,12,9},{4,10,13},{15,8,20},{12,11,10}};
    int sum = 0;
    // Task 1
    for(int i = 0; i<4; i++)
    {
        for(int j = 0; j<3; j++)
        {
            sum += arr[i][j];
        }
    }
    cout << "Tong cac gia tri trong mang: " << sum;

    //Task 2
    int max = arr[0][0];
    for(int i = 0; i<4; i++)
    {
        for(int j = 0; j<3; j++)
        {
            if(arr[i][j]>max)
            {
                max = arr[i][j];
            }
        }
    }
    cout << "\nGia tri lon nhat la: "<< max;

    // Task 3
    int max_3=0;
    int sum_3=0;
    for(int i = 0; i<4; i++)
    {
        for(int j = 0; j<3; j++)
        {
            sum_3 += arr[i][j];  
        }
        
        if(sum_3 > max_3)
            {
                max_3 = sum_3;
            }
        sum_3 = 0;
    }

    for(int i = 0; i<4; i++)
    {
        for(int j = 0; j<3; j++)
        {
            sum_3 += arr[i][j];
            if(sum_3 == max_3)
            {
                cout << "\nMang con co tong lon nhat: ";
                j -= 2;
                for(int k =0 ; k<3; k++)
                {
                    cout << arr[i][j] << ' ';
                    j++;
                }
                
            }  
        }
        
        
        sum_3 = 0;
    }
    //Task 4
    for(int i = 0; i<4; i++)
    {
        for(int j = 0; j<3; j++)
        {
            if(is_prime(arr[i][j]))
                {
                    cout << "\nSo nguyen to dau tien: " << arr[i][j];
                    goto out;             
                }
            if(i == 4 && j == 3 && !(is_prime(arr[3][4])))
                cout << "\nKhong tim thay so nguyen to nao";
        }
    }
out:
    return 0;
}