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
    // int x = 0; //0
    // bool b = (x++ == 1); // gáng giá trị 0 cho b rồi mới cộng 1 dv
    // cout << b; // 1
    // return 0;

    //3. >> 0
    // int x = -1; // -1
    // int y = x*x*abs(x)*2; // 2
    // cout << y % 2; // 0

    //4. >> 107
    // int x = 1;
    // int y = 2;
    // int z = 3;
    // int t = 3*(z+(x+y)*(y+z));// 3*(3+15) = 54
    // cout << 1-2*t; // 1-54*2  = 107 

    //5. >> 1 đúng
    //    int x = 1;
    //    int y = 2;
    //    int z = 3;
    //    bool b = (x<y)||(x>z)&&((y<z)||(x<z));
    //    cout << b;

   //6. >> 3 đúng
    //    int x = 1;
    //    int y = x++ + 1; // y = 2
    //    int z = ++x; // z =3
    //    cout << z;
    
    //7. >> 1 đúng
    // float x = 1.5;
    // int  y = x; // 1
    // float z = y; // 1
    // cout << z; // 1

    //8. >> 1 đúng
    // int x = 1.5; // 1
    // float y = x; // 1
    // cout << (bool)y; // 1

    //9. >> 65 đúng
//     char c = 'A'; 
//     float x = c; //65.0 - ép kiểu tự động type casting variable
//    cout << (int)(char)x;// 65
    
    // 10. >> 1
    char c = 'b';
    bool b = (c<'c')||!(c>'a') &&(c!='b')&&(c+1>='d');
    //          q   || !0      &&(0)&& 0
    cout << b;
    return 0;



}
    
