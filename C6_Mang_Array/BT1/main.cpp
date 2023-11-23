/**
 * @file main.cpp
 * @author Kien Nguyen  
 * @brief 
 * BT1. Nhập từ bàn phím mảng số nguyên n phần tử
 * 1. In ra toàn bộ phần từ trong mảng theo thứ tự đảo ngược
 * 2. Tính tổng vị trí đầu và vị trí cuối của mảng
 * 3. In ra phần từ nằm chính giữa mảng, nếu n chẵn có 2 phần từ nằm giữa
 * 4. Tính tích của tổng các số lẻ và tổng các số chẵn trong mảng
 * @version 0.1
 * @date 2023-11-23
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <iostream>
using namespace std;

int main()
{
    const int MAX = 300;
    int n = 0;
    int arr[MAX] = {};
    
    cout << "Nhap so phan tu cua mang: ";
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cout << "Nhap phan tu thu " << i+1 << " : "; 
        cin >> arr[i]; 
    }

    //Duyệt mảng ngược
    cout << "In ra mảng đảo ngược thứ tự đã nhập:";
    cout << "Mang dao nguoc la: " ; 
    for(int i = (n-1);i>=0; i--)
    {
       cout << arr[i] << ' ';
    }
    
    // Tổng vị trí đầu và cuối
    cout << "\nTong cua phan tu dau va cuoi la: " << (arr[0]+arr[n-1]);

    //In ra phần tử nằm giữa
    cout << "\nGia tri phan tu nam giua la: ";
    if(n%2==0)
    {
        cout << (arr[(n/2)-1]+arr[(n/2)]);
    } else 
        cout << arr[(n/2)];
    
    // Tính tích của tổng số chẵn là lẽ
    int chan = 0;
    int le = 0;
    for(int i =0; i<n; i++)
    {
        if(arr[i]%2==0)
            chan += arr[i];
        else
            le += arr[i];
    }
    cout << "\nkQ la: " << (chan*le) ;
    
    return 0;
}