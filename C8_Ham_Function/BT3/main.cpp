/**
 * @file main.cpp
 * @author Kien Nguyen
 * @brief 
 * @version 0.1
 * @date 2023-12-12
 * 
 * @copyright Copyright (c) 2023
 * 
 */
/******************************************************************************
[Đề bài] Viết các hàm kiem_tra(...) để in ra được kết quả như sau:
0 :     Day la so 0
5 :     Day la so nguyen duong
-5 :    Day la so nguyen am
5.5 :   Day la so thuc duong
-5.5 :  Day la so thuc am
-5.0 :  Day la so nguyen am
nam :   Day la chuoi ki tu

*******************************************************************************/

#include <iostream>
using namespace std;


void kiem_tra (float a)
{
    if(a == 0)
    {
        cout << "Day la so 0\n";
    }
    else if(a > 0)
    {
        if((a - (int)a) != 0)
        {
            cout << "Day la so thuc duong\n";
        }
        else
        {
            cout << "Day la so nguyen duong\n";
        }
    }
    else
    {
        if((a - (int)a) != 0)
        {
            cout << "Day la so thuc am\n";
        }
        else
        {
            cout << "Day la so nguyen am\n";
        }
    }
    
}
void kiem_tra (string s)
{
     cout << "Day la chuoi ki tu\n";
}


int main()
{
    // Phần test 
	cout << "0\t: "; 	kiem_tra(0);
	cout << "5\t: "; 	kiem_tra(5);
	cout << "-5\t: "; 	kiem_tra(-5);
	cout << "5.5\t: "; 	kiem_tra(5.5);
	cout << "-5.5\t: "; kiem_tra(-5.5);
	cout << "-5.0\t: "; kiem_tra(-5.0);
	cout << "nam\t: "; 	kiem_tra("nam");
    return 0;
}