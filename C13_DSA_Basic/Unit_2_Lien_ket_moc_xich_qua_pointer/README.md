# Unit 2 - Liên kết mốc xích thông qua con trỏ

Liên kế dữ liệu thông qua pointer  

<h3>Ý tưởng:</h3>

Như đã biết: khai báo 1 array thì ta có thể quản lí tất cả các phần tử trong array đó bằng con trỏ 

Ví dụ như muốn quản lí 1 kiểu dữ liệu có dung lượng lớn thì chúng ta nhất định phải lưu ở  `HEAP`

Nhưng làm sao để quản lí chúng 1 cách dễ dàng như ở kiểu mảng lưu ở `STACK` vì các khoảng nhớ trong `HEAP` có vị trí ngẫu nhiên...


<H4>Trong bài nay ta sẽ tìm hiểu cách để LIÊN KẾT các dữ liệu được lưu trữ trong HEAP</H4>

Cách thức là sẽ cho chúng nhớ địa chỉ của nhau, bằng cách chèn thêm 1 dữ liệu vào dữ liệu gốc 

<h3>Định nghĩa</h3>

Để làm được việc liên kết 2 giá trị như trên ta phải tạo ra một `struct` gồm các giá trị cần lưu và 1 biến thành viên lưu địa chỉ liên kết vói nó

Ví dụ: cách thức 1 mảng liên kết dữ liệu

```C++
#include<iostream>
using namespace std;

struct number
{
    int value;
    number *address_link;
};

int main()
{
    // Mảng a[] được lưu ở STACK
    int a[4] = {1,5,9,3};

    // Mảng Array_HEAP được lưu ở HEAP
    int *Array_HEAP[4] = {new int(7), new int(9), new int(2), new int(1)};

    // Ví dụ chính 
    // Có 2 vùng nhớ riêng được quản lí bới 2 con trỏ
    int *x = new int(10);
    int *y = new int(20);

    // Dùng struct để thêm địa chỉ cần liên kết
    
    number *x1 = new number;
    x1->value = 10;

    number *x2 = new number;    
    x2->value = 20;

    // Các gán các liên kết(2 chiều)
    x1->address_link = x2;
    x2->address_link = x1;

    // Truy cập
    cout << x1->value << '\n';
    cout << x1->address_link->value << '\n';
    
    return 0;
}

```

<h3>Kết luận</h3>

Vậy liên kết dữ liệu như thế để làm gì?

Khi liên kết như vậy thì ta sẽ có thể từ 1 phần từ mà suy ra các phần tử tiếp theo (tương tự như mảng) 

Và co thể truy cập đến các biến thành viên của dữ liệu đã liên kết thông qua CÁC kí tự `->` (Kí tự này cho phép đọc dữ liệu có trong địa chị phía trước nó)

Và 1 điểm nữa là có thể lưu trữ dữ liệu có kích thước lớn

Vì đặc tính của `HEAP` và muốn có được tính chất giống ở mảng lưu ở `STACK` nêu cách liên kết này được sinh ra


