/**
 * @file main.cpp
 * @author Kien Nguyen
 * @brief đề bài ở README 
 * @version 0.1
 * @date 2023-11-19
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <iostream>
using namespace std;
int main()
{
    int H[6];
    int bangGia[6] = {100000,150000,120000,90000,130000,140000};
    float price;
    cout << "Danh mục hàng hóa: \n";
    cout << "H1 - 100K\n";
    cout << "H2 - 150K\n";
    cout << "H3 - 120K\n";
    cout << "H4 - 90K\n";
    cout << "H5 - 130K\n";
    cout << "H6 - 140K\n";
    
    cout << "Nhập số lượng mặt hàng sẽ mua theo thứ tự: ";
    for (int i = 0; i < 6; i++)
    {
        cin >> H[i];
    }

    for(int i = 0; i < 6 ; i++)
    {
        price += H[i]*bangGia[i];
    }
    
    // XÉT ĐIỀU KIỆN VÀ IN KQ
    if((price > 500000) && (H[5] >= 2) && ((H[0]+ H[1] + H[2] + H[3] + H[4] + H[5])>=4))
    {
        price = price*0.8;
        cout << price;
    } 
    else if(((price > 500000) && (H[6] >= 2)) || ((H[5] >= 2) && (price > 500000)))
    {
        price = price*0.85;
        cout << price;
    }
    else if(price > 500000)
    {
        price = price*0.9;
        cout << price;  
    } 
    else if(((H[0]+ H[1] + H[2] + H[3] + H[4] + H[5])>=4) && H[5] >= 2)
    {
        cout << (price - 40000);
    }
    else if(H[5]>=2)
    {
        price -= 30000;
        cout << price;
    }
    else if((H[0]+ H[1] + H[2] + H[3] + H[4] + H[5])>=4)
    {
        cout << (price - 20000);
    }
    else
    cout << price;   
    return 0;
}