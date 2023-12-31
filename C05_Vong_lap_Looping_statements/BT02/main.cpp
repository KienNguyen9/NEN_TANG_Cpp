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
#include <math.h>
using namespace std;
int main()
{   
    // Nhập nhanh n
    int n = 8;

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
    if(n > 0) 
    Q = 1;
    for(int i = 1; i<=n ; i++)
    {

        Q *= i;
    }
    cout << "\nQ(n) = " << Q;

    //KQ 3
    for(int i = 1;i<=n; i++)
    {
        if(!(i%2==0))
        {
            R += i; 
        }        
    }   
    cout << "\nR(n) = " << R;

    // KQ 4
    int s = 0;
    for(int i = 1; i<=n; i++)
    {
        s += pow(i,3);
    }
    cout << "\nS(n) = " << s;

    //KQ 5
    float t=0;
    for(int i = 1; i<=n ; i++)
    {
        t += i/(pow(i,i));
    }
    cout << "\nT(n) = " << t;

    //KQ 6
    int u = 0;
    for(int i =1; i<=n ;)
    {
        u = i*(i+1);
        i++;
    }
    cout << "\nU(n) = "<< u;

    //KQ 7
    int v = 0;
    for(int i = 0; i < n; i++)
    {
       v += v + pow(10,i);
    }
    cout << "\nV(n) = " << v;

    // KQ 8
    int x=0;
    if(n>0)
    {
        for(int i = 1; i<=n; i++)
        {
            x += x + i;
        }
        cout << "\nX(n) = "<< x;
    }
        
        return 0;
}