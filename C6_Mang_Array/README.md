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
</details>




<details>
    <summary>
        <h3>6.1 Mảng đa chiều</h3>
    </summary>
</details>

