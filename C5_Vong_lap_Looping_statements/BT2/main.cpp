/**
 * @file main.cpp
 * @author Kien nguyen
 * @brief 
 * @version 0.1
 * @date 2023-11-20
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <iostream>
using namespace std;
int main()
{   
    // Nhập nhanh n
    int n = 2;

    //Biến kết quả
    int P = 0;
    int Q = 0;
    int R = 0; 
    // In ra màn hình
    for(int i = 1; i<=n ; i++)
    {
        P += i;
    }
    cout << "P(n) = " << P;
    //KQ2
    for(int i = 1; i<=n ; i++)
    {
        Q *= i;
    }
    cout << "\nQ(n) = " << Q;

    //kq3
    for(int i = 1 ; i<= n ; i++)
    {
        if(!(i%2==0))
        {
            R += i;
        }
    }
    cout << "\nR(n) = " << Q;



    return 0;
}