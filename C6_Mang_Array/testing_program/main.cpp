#include<iostream>
using namespace std;

int main()
{
    int arr[] = {1,3,5,0};
    

    for(int i = 0; i< 3; i++)
    {
        for(int j = i+1; j < 3; j++) // tìm số lớn nhất đưa nó vào vị trí đầu tiên 
        {
            if(arr[i] < arr[j]) // so sánh số được chọn với các số phía sau và đổi vị trí nếu nó là số lớn hơn
            {
                // Đây là biến tạm, để tạm lưu giá trị khi đổi chỗ
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = tam;
            }
        }
    }
    
    for(int x: arr)
    {
        cout << x << " ";
    }

    return 0;
}