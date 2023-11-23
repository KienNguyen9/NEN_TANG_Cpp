<h1>Chương 6. Mảng - Array </h1>
<details>
    <summary>
        <h3>6.1 Mảng là gì? </h3>
    </summary>

<h4>Nội dung chính:</h4>

- Mảng dùng để lưu trữ rất nhiều biến có cùng kiểu dữ liệu.

- Số thứ tự của mảng tính từ index = 0. Cách truy cập, VD có mảng ```arr[3] = {9,5,1}```. ```arr[0]``` là phần tử thứ 1, ```arr[2]``` là phần tử thứ 3.

- Để duyệt một mảng thì phải dùng vòng lặp

- Khi có mảng arr 3 phần từ như sau: ```int arr[] = {1,5,9}```. Thì ```arr``` là địa chỉ của phần tử thứ 0, cũng là địa chỉ của biến mảng arr.

- vì kiểu dự liệu khai báo là int 4 bytes nên khi cộng 1 đơn vị của địa chỉ mảng tức là cộng thêm 4 byte giá trị địa chỉ ```arr + 1``` sẽ là địa chỉ của phần tử thứ arr[1] của mảng arr.

Cú pháp: (Kiểu dư liệu) (Tên biến)[(số phần tử)] = {1,2,3};  

```C++
int arrayX[3] = {1,2,3};
string x[] = {"Hello", "world", "I'm Kien"};
```

Chương trình ví dụ: Duyệt mảng dùng vòng lặp:

```C++
#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1,3,5,7,9,4};
    int sum = 0;
    for(int i = 0; i < 6; i++ )
    {
        sum += arr[i];
    }
    cout << "Tong cua mang la: " << sum;
    return 0;
}
```

</details>




<details>
    <summary>
        <h3>6.2 Thao tác với mảng </h3>
    </summary>
    
<h4> Khi làm việc với mảng thường có 2 vấn đề chính:</h4>

- Duyệt mảng: có thể dùng vòng lặp thường(for và while) hoặc Dùng cấu trúc for dành riêng cho duyệt mảng.

- Sắp xếp mảng 

<h4> 1. Duyệt mảng bằng:</h4>
For-each (chỉ dùng để in ra các phần tử của mảng chứ không nên dùng nếu muốn làm việc chi tiết hơn)

Ví dụ: Cách dùng for để duyệt cho tất cả các loại cấu trúc dữ liệu. ở đây là duyệt mảng

Cú pháp:
```C++
int arr[] = {1,5,9,3,5,7};
// Đây là for-each: chuyên dùng duyệt các kiểu cấu trúc
// Dùng để in ra tất cả phần tử của mảng
for(int x : arr) 
{
    cout << x << ' ';
}
```


<h4>2. Sắp xếp:</h4> 
Về căn bản nó là thuật toán, để máy tính làm việc:
Để làm quen với sắp xếp mảng ta bắt đầu với việc sắp xếp từ lớn đến bé hoặc ngược lại.

```C++
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
                arr[j] = temp;
            }
        }
    }
    // Cách duyệt nhanh mảng đã học ở phần trước
    for(int x: arr)
    {
        cout << x << " ";
    }

    return 0;
}
```

</details>




<details>
    <summary>
        <h3>6.1 Mảng đa chiều</h3>
    </summary>
</details>

