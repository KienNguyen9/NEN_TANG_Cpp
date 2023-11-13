/**
 * @file BT7.cpp
 * @author KIEN NGUYEN
 * @version 0.1
 * @date 2023-11-14
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <iostream>
using namespace std;
int main()
{
    /*
    Dự đoán 
    1. >> 0
    */

    /*
    int x = 2;
    float y = x - 0.5; //1.5
    cout << ((int)y==x); // 1.5 == 2
    */
 
    
    /*
    2. >> 0
    */
    int x = 0; //0
    bool b = (x++ == 1); // gáng giá trị 0 cho b rồi mới cộng 1 dv
    cout << b; // 1
    return 0;

}
    
