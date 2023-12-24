/**
 * @file main.cpp
 * @author Kevin Nguyen
 * @brief Code mẫu ví dụ về reference và pointer làm tham số(parameter) truyền cho hàm 
 * @version 0.1
 * @date 2023-12-24
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <iostream>
using namespace std;

void addOne(int *a)
{
    (*a)++;
}


// Hàm tham chiếu 
void addOne_reference(int &r)
// int &r = a 
{
    r++;
}

int main()
{
    int a = 1;

    // Tham chiếu r trỏ tới a
    //int &r = a;
    // con trỏ trỏ tới a
    //int *p = &a;
    
    // truyền trực tiếp không cần tạo các biến phụ như trên
    addOne_reference(a);
    cout << a << '\n';
    
    addOne(&a); // truyền trực tiếp tham số là &a
    cout << a << '\n'; 

    return 0;
}