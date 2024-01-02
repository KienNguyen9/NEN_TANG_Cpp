/**
 * @file main.cpp
 * @author Kevin Nguyen
 * @brief BT về Liên kế mốc xích
 * @version 0.1
 * @date 2024-01-02
 * 
 * @copyright Copyright (c) 2024
 * 
 */
#include<iostream>
using namespace std;

struct number
{
    int value;
    number *address_link;
};

int main()
{
    // Mảng a[] được lưu ở STACK
    int a[4] = {1,5,9,3};

    // Mảng Array_HEAP được lưu ở HEAP
    int *Array_HEAP[4] = {new int(7), new int(9), new int(2), new int(1)};

    // Ví dụ chính 
    // Có 2 vùng nhớ riêng được quản lí bới 2 con trỏ
    int *x = new int(10);
    int *y = new int(20);

    // Dùng struct để thêm địa chỉ cần liên kết
    
    number *x1 = new number;
    x1->value = 10;

    number *x2 = new number;    
    x2->value = 20;

    // Các gán các liên kết(2 chiều)
    x1->address_link = x2;
    x2->address_link = x1;


    // Truy cập

    cout << x1->value << '\n';
    cout << x1->address_link->value << '\n';

    return 0;
}