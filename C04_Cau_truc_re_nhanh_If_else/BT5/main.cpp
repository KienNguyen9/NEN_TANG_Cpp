/**
 * @file main.cpp
 * @author KIÊN NGUYỄN
 * @brief 
 * Viết chương trình tính tiền cước taxi, biêt rắng:
 * km đầu tiên là 15k
 * từ mk 2 đến km30 là 13k
 * nếu lớn hơn 30km thì mỗi km sẽ thêm 10k
 * @version 0.1
 * @date 2023-11-18
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include<iostream>
using namespace std;
int main()
{
    float km = 0;
    float soTien = 0;
    // Nhập liệu
    cout << "Hay nhap so km: ";
    cin >> km;

    //Tính tiền
    if(km<=1)
    {
        soTien = 15000;
    } 

    if(km>1 && km <= 30)
    {
        soTien = 15000 + (km-1)*13000;
    }

    if(km>30)
    {
        soTien = 15000 + 29*13000 + (km-30)*10000;
    }
    cout << "So tien phai tra: " << soTien;
    return 0;
}
