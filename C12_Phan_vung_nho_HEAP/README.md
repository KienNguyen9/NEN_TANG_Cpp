# Chapter 12 -  Phân vùng nhớ HEAP - HEAP SEGMENT

Ôn lại kiến thức về `STACK`: 
- Là 1 phần của bộ nhớ ảo
- là vùng nhớ lưu tất cả các biến `local variable` -> thời gian tồn tại trong cặp dấu ngoặc nhọn `{...}`   
- Bao gồm cả tham số truyền vào và địa chỉ trả về của các hàm
- Kích thước cố định được xác định bởi trình biên dịch (1MB window, 8MB linux)
- Thời gian truy cập là nhanh vì được lưu ở dạng liền kề nhau
- Cơ chế sắp xếp của `STACK` được quản lí chặt chẽ, theo nguyên tắc LIFO

<h3>Ý tưởng:</h3>

- Vùng nhớ `HEAP` có thể hiểu là ngược lại với `STACK` vì cơ chế sắp xếp các vùng nhớ không theo trật tự (ngẫu nhiên)
- Dụng lượng lớn hơn nhiều so với `STACK`
- Ý nghĩa của `HEAP` là để xây dựng các chương trình lớn, lưu trữ các dữ liệu có kích thước lớn 


<h3>Nội dung chính:</h3>

- Để được cấp phát ô nhớ trong vùng nhớ `HEAP` ta cần phải dùng từ khóa `new`
- Để quản lí ô nhớ này ta cần 1 con trỏ để lưu địa chỉ của ô nhớ được cấp 
- Đây được gọi là cấp phát động - dynamic allocation
- Để truy cập các phần tử trong `struct`được cấp phát động có thể dùng `(*variable_name).member_variable` hoặc `variable_name->member_variable` (còn với cấp phát tĩnh thì dùng dấu chấm `.` để truy cập phần tử như bình thường)

<h4>Cú pháp</h4>

```C++
int *p = new int(123);
```

```c++
#include<iostream>
using namespace std;

int main()
{
    // Đây là câu lệnh cấp phát 1 ô nhớ trong HEAP: "new int(123)"
    // Với cú pháp sau: Ta sẽ nhận được địa chỉ được cấp phát tại HEAP
    cout << new int(123);
    // KẾT QUẢ TRẢ VỀ LÀ: 1 địa chỉ 

    // Tức là sao? 
    // Là có thể "gán" nó cho 1 con trỏ 
    int *p = new int(123); 
    // lúc này vùng nhớ sẽ được quản lí bới con trỏ. Từ đây, các thao tác với dự liệu này sẽ thông qua con trỏ  

    // It's DYNAMIC ALLOCATION
    // Nó được gọi là CẤP PHÁT ĐỘNG

    // Quan sát VD trên ta thấy:
    // Dùng 1 biến con trỏ lưu ở STACK
    // Để quản lý 1 vùng nhớ lưu ở HEAP
    // => Biến con trỏ có thể lưu được địa nằm ở HEAP 

    return 0;
}

```

<h3>Khi nào dùng STACK và khi nào dùng HEAP?</h3>

- Khi lưu các biến nguyên thủy thì nên lưu ở `STACK` vì chúng có kích thước nhỏ 
- Ví dụ: 
        char  : 1 byte
        short : 2 bytes
        int   : 4 bytes
        long  : 4 bytes
        float : 4 bytes
        double: 8 bytes
- Còn khi lưu trữ các kiểu dữ liệu rất lớn như `struct` nên cấp phát động trong `HEAP`. Đa số các chương trình chuẩn thì các kiểu dữ liệu tự định nghĩa đều phải cấp phát động ở `HEAP`

<h3>Thu hồi vùng nhớ đã cấp phát</h3>

- Ở `STACK` chúng ta không quan tâm việc thu hồi vùng nhớ vì nó sẽ được thực hiện tự động khi ra khỏi `scope` 
- Tức là khi gán 1 con trỏ vào 1 vùng nhớ ở `HEAP` thì khi kết thúc khối lệnh chứa con trỏ, biến con trỏ sẽ bị thu hồi nhưng những thông tin nằm ở `HEAP` vẫn còn nguyên ở đó 
- Chúng ta cần chủ động thu hồi các vùng nhớ đã xin cấp phát
- Tuy là vùng nhớ `HEAP` rất lớn nhưng cũng có giới hạn, nếu cấp phát mãi mà không thu hồi thì nó cũng sẽ bị đầy như `STACK`
- Vì vùng nhớ khi chương trình chạy là 1 vùng nhớ ảo, nên việc thu hồi vùng nhớ này là để hạn chế việc tràng vùng nhớ `HEAP` trong lúc chương trình chạy còn khi tắt máy thì vùng nhớ ảo này sẽ biết mất. Cũng có những chương trình chạy trong 1 thời gian rất rất dài gần như không tắt máy thì cần quản lí vùng nhở 1 cách cẩn thận

- Một vùng nhớ  ở `HEAP` có thể được quản lí bởi nhiều con trỏ
- Cũng có thể tạo 1 mảng các con trỏ để quản lí nhiều ô nhớ trong `HEAP`, chú ý có bao nhiêu phần tử thì dùng từ khóa `new` bấy nhiêu lần


```C++
#include <iostream>
#include <string>
using namespace std;

struct Person
{
    string fullName;
    int age;
};

int main()
{
    Person *Kien = new Person;

    // (*Kien).fullName = "Nguyen Trung Kien";
    // (*Kien).age = 25;

    Kien->fullName = "Nguyen Trung Kien";
    Kien->age = 25;

    cout << Kien->fullName << " nam nay " << Kien->age << " tuoi";
    delete Kien;

    // Mảng con trỏ ở STACK - trỏ tới 4 ô nhớ ở HEAP
    Person *Person_List[4] = { new Person, new Person, new Person, new Person};
    
    return 0;
}

```


