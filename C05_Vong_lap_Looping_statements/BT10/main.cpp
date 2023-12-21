/**
 * @file main.cpp
 * @author Kevin Nguyen
 * @brief  BT10
 * Nhập n là một số nguyên dương từ 1 đến 9
 * Vẽ hình vuông có độ dài n như sau:
 * 1. Hình vuông các chữ số thập phân tăng giảm đan xen
 * 2. Hình vuông nhị phân ruột 0, viền 1
 * 3. Hình vuông nhị phân ruột 1, 1 đường chéo 0
 * 4. Hình vuông nhị phân ruột 1, 2 đường chéo 0
 * 5. Hình vuông nhị phân đan xen
 * 6. Hình vuông thập phân có đường chéo bằng 0
 * @version 0.1
 * @date 2023-12-05
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <iostream>
using namespace std;
int main()
{
    int n = 9;
    // task 1:
    cout << "\nTask 1\n";
    for(int i = 0; i <= n; i++)
    {       
        if((i%2) == 0)
        {
            for(int j = 0; j <= n; j++)
            {
                cout << j << ' ';
            }
        }
        else 
        {
            for(int j = n; j >= 0; j--)
            {
                cout << j << ' ';
            }
        }
        cout << '\n';
       
    }

    // Task 2: Vẽ hình vuông nhị phân ruột 0 viền 1
    cout << "\nTask 2\n";
    for(int i = 0; i<=n; i++)
    {
        for(int j = 0; j<=n; j++)
        {
            if( i == 0 || i == n)
            {
                cout << "1" << ' ';
                continue;
            }
            else
            {
                if(j == 0 || j == n)
                {
                    cout << '1' << ' ';
                }
                else
                {
                    cout << '0' << ' ';
                }
            }
        }
        cout << endl;
    }
    
    // Task 3: ruột 1 và 1 đường chéo 0
    cout << "\nTask 3\n";
    for(int i = 0; i <= n; i++)
    {
        for(int j = 0; j <= n; j++)
        {
            if(i==j)
            {
                cout << '0' << ' ';
                continue;
            }
            cout << '1' << ' ';
        }
        cout << endl;
    }

    // Task 4: ruột 1 và 2 đường chéo 0
    cout << "\nTask 4\n";
    for(int i = 0; i <= n; i++)
    {
        for(int j = 0; j <= n; j++)
        {
            if(i==j || (i+j)==9)
            {
                cout << '0' << ' ';
                continue;
            }
            cout << '1' << ' ';
        }
        cout << endl;
    }

    // Task 5: nhị phân đan xen 
    cout << "\nTask 5\n";
    for(int i = 0; i <= n; i++)
    {
        for(int j = 0; j <= n; j++)
        {
            if(i%2 == 0)
            {
                if(j%2==0)
                {
                    cout << "0 ";
                }
                else 
                {
                    cout << "1 ";
                }
            }
            else 
            {
                if(j%2==0)
                {
                    cout << "1 ";
                }
                else 
                {
                    cout << "0 ";
                }

            }
            
        }
        cout << endl;
    }
    // Task 6: Hình vuông thập phân có đường chéo bằng 0
    cout << "\nTask 6\n";
    int k;
    for(int i = 0; i <= n; i++)
    {
        
        for(int j = 0; j <= n; j++)
        {
            if(i==j)
            {
                cout << "0 ";
                continue;
            }

            if(i<j)
            {

                cout << (j - i) << ' ';    
                k++;  

            }
            else if(i>j)
            {
                cout << (i - j) << ' ';
                
            }
        }
        cout << endl;
    }
    return 0;
}
