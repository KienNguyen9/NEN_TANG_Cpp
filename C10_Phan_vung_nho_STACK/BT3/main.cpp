/**
 * @file main.cpp
 * @author Kevin Nguyen
 * @brief 
 * @version 0.1
 * @date 2023-12-22
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <iostream>
#include <iomanip>

using namespace std;

struct Person
{
    std::string ho_ten = "";
    int tuoi;
    float chieu_cao, can_nang;
};

int main()
{
    Person p;
    p.ho_ten = "Kevin Nguyen";
    p.tuoi = 25;
    p.chieu_cao = 1.65;
    p.can_nang = 60;
    
    // Nội dung cần hoàn thành 
    cout << "Cau 1: Dia chi cua p la: " << &p<< "\n";
    cout << "Cau 2:\n";

    cout << setw(15) << left << setw(20) << left << "" << setw(20) << left << "Dia chi" << setw(20) << left << "Gia tri" << '\n';
    cout << setw(15) << left << setw(20) << left << "p.ho_ten" <<  setw(20) << left << &p.ho_ten << setw(20) << left << p.ho_ten<< '\n';
    cout << setw(15) << left << setw(20) << left << "p.tuoi" <<  setw(20) << left << &p.tuoi << setw(20) << left << p.tuoi<< '\n';
    cout << setw(15) << left << setw(20) << left << "p.chieu_cao" <<  setw(20) << left << &p.chieu_cao << setw(20) << left << p.chieu_cao<< '\n';
    cout << setw(15) << left << setw(20) << left << "p.can_nang" <<  setw(20) << left << &p.can_nang << setw(20) << left << p.can_nang<< '\n';
    cout << "Cau 3:\n";
    cout << "Dung luong cua p la: " << sizeof(p);
}   
