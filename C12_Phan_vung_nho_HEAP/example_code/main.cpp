/**
 * @file main.cpp
 * @author Kevin Nguyen
 * @brief ví dụ đơn giản về vùng nhớ HEAP
 * @version 0.1
 * @date 2023-12-26
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include<iostream>
using namespace std;

int main()
{
    // Đây là câu lệnh cấp phát 1 ô nhớ trong HEAP: "new int(123)"
    // Với cú pháp sau: Ta sẽ nhận được địa chỉ được cấp phát tại HEAP
    cout << new int(123);
    // KẾT QUẢ TRẢ VỀ LÀ: 1 địa chỉ 

    // Tức là sao? 
    // Là có thể "gán" nó cho 1 con trỏ 
    int *p = new int(123); 
    // lúc này vùng nhớ sẽ được quản lí bới con trỏ. Từ đây, các thao tác với dự liệu này sẽ thông qua con trỏ  

    // It's DYNAMIC ALLOCATION
    // Nó được gọi là CẤP PHÁT ĐỘNG

    // Quan sát VD trên ta thấy:
    // Dùng 1 biến con trỏ lưu ở STACK
    // Để quản lý 1 vùng nhớ lưu ở HEAP
    // => Biến con trỏ có thể lưu được địa nằm ở HEAP 

    return 0;
}
