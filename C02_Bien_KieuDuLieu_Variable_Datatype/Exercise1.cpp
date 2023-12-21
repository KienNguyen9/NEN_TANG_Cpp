/**
 * @file Exercise1.cpp
 * @author Kevin Nguyen
 * @brief 
 * Cho các biến thông tin: age, fullName, country, weight
 * In ra văn bản giớ thiệu bản thân
 * @version 0.1
 * @date 2023-11-11
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <iostream>
#include <string>

using namespace std;

int main()
{
    // Các biến cần KHAI BÁO 
    int age = 25;
    string fullName = "Kevin Nguyen";
    string country = "Vietnam";
    float weight = 55.5;
    
    // Xuất dư liệu ra màn hình
    cout << "\nXin chao! Toi ten la: " << fullName << '.';
    cout << "\nToi den tu " << country << '.';
    cout << "\nNam nay toi " << age << " tuoi.";
    cout << "\nToi nang " << weight << " Kg.\n\n";

    return 0;
}