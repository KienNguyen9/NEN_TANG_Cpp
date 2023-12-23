/**
 * @file main.cpp
 * @author Kevin Nguyen
 * @brief BT 1:
 * In ra giá trị và địa chỉ của các biến 
 * @version 0.1
 * @date 2023-12-22
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <iostream>
#include <iomanip>

struct Person
{
    std::string name = "None";
};

using namespace std;

int main()
{
    int x = 3;
    float y = 10.5;
    bool z = 'Z';
    std::string s = "abc";
    int a[3] = {1, 2, 3};
    Person p;
    
    // Viết tiếp chương trình phía dưới"
    cout << setw(10) << left << "variable" << setw(20) << left << "address" << setw(10) << left << "value" << endl; 
    cout << setw(10) << left << 'x' << setw(20) << left << &x << setw(10) << left << x << endl;
    cout << setw(10) << left << 'y' << setw(20) << left << &y << setw(10) << left << y << endl;
    cout << setw(10) << left << 'z' << setw(20) << left << &z << setw(10) << left << z << endl;
    cout << setw(10) << left << 's' << setw(20) << left << &s << setw(10) << left << s << endl;

    cout << setw(10) << left << "a[0]" << setw(20) << left << &x << setw(10) << left << x << endl;
    cout << setw(10) << left << "a[1]" << setw(20) << left << &x << setw(10) << left << x << endl;
    cout << setw(10) << left << "a[2]" << setw(20) << left << &x << setw(10) << left << x << endl;

    cout << setw(10) << left << "p" << setw(20) << left << &p << setw(10) << left << p.name << endl; 


    
}
