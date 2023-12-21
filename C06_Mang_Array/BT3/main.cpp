/**
 * @file main.cpp
 * @author Kien Nguyen
 * @brief BT3
 * Cho 2 mảng số nguyên A1, A2
 * 1. In ra các phần từ giống nhau giữa 2 mảng A1, A2
 * 2. In ra một mảng B có đặc điểm
 *  - Là trộn giữa A1 và A2
 *  - Các phần tử được sắp xếp tăng dần
 *  - Các phần từ trùng lặp chỉ in 1 lần 
 * @version 0.1
 * @date 2023-11-28
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <iostream>
using namespace std;
int main()
{
    
    int a1[] = {1,3,5,7,9,10}; // 4 byte/1 element
    int a2[] = {1,2,4,6,8,10}; // 4 byte/1 element
    int const MAX = (sizeof(a1)+sizeof(a2))/4;
    int b[MAX] = {};      
     

    // Task 1
    cout << "Ket qua task 1: ";
    for(int i = 0; i < (sizeof(a1)/4); i++)
    {
        for(int j = 0; j < (sizeof(a2)/4); j++)
        {
            if(a1[i] == a2[j])
                cout << a1[i] << ' ';
        }
    }
    //Task 2
    int temp = 0;
    cout << '\n';
    for(int i = 0; i < (sizeof(a1)/4); i++)
    {
        b[temp] = a1[i];
        temp++;
    }
    for(int i = 0; i < (sizeof(a2)/4); i++)
    {
        b[temp] = a2[i];
        temp++;
    }

    // for(int i = 0 ; i < (sizeof(b)/4); i++)
    // {
    //     cout << b[i] << ' ';
    // }

    for(int i = 0 ; i < (sizeof(b)/4); i++)
    {
        int temp1;
        for(int j = 0; j < (sizeof(b)/4); j++)
        {
            if(b[i]<b[j])
            {
                temp1 = b[i];
                b[i] = b[j];
                b[j] = temp1;
            }
        }
    }
    cout << "\nKet qua task 2: ";
    for(int i = 0 ; i < (sizeof(b)/4); i++)
    {
        if(b[i] == b[i+1])
            continue;
        cout << b[i] << ' ';  
    }

    return 0;
}