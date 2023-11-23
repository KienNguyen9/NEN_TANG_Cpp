#include<iostream>
using namespace std;

int main()
{
    const int MAX = 1000;
    int arr[MAX] = {1, 3, 5, 0, 9, 65};
    int n = 6;

    for(int i = 0; i < n; i++)
    {
        for(int j = i+1 ; j < n; j++) // tìm số lớn nhất đưa nó vào vị trí đầu tiên 
        {
            if(arr[i] < arr[j]) // so sánh số được chọn với các số phía sau và đổi vị trí nếu nó là số lớn hơn
            {
                // Đây là biến tạm, để tạm lưu giá trị khi đổi chỗ
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    
    // Nhược điểm của for each là chỉ có thể duyệt hết all phần từ
    // for(int x: arr)
    // {
    //     cout << x << " ";
    // }

    for(int i = 0; i<n; i++)
    {
        cout << arr[i] << ' ';
    } 

    return 0;
}