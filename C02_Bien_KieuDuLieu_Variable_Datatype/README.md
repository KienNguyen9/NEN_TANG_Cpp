## Chương 2: Biến và kiểu dữ liệu - Variable and Data type

<details>
  <summary>
    <h3>2.1 Khái niệm biến và kiểu dữ liệu - Variable and Data type Explained </h3>
  </summary>
  <h3>Biến là:</h3>
  - Đối tượng chiếm một vùng nhớ xác định
  - Dùng để lưu trữ giá trị nào đó
  <h3>Variable Explained:</h3>
  - ...
  <h3>Kiểu dữ liệu là:</h3>
  - Tập hợp của các loại giá trị mà có thể khởi tạo cho một biến 
  <h3>Data type exlained:</h3>
  - ...
</details>




<details>
  <summary>
    <h3>2.2 Nhập xuất dữ liệu cho biến trong C++</h3>
  </summary>
  Luồng dữ liệu vào và ra trong C++:
  gồm có các kiểu sau:

  - Số (nguyên, thực) trên 1 dòng, kết thúc bằng phím "space" hoặc "enter"

  - Kí tự, chuỗi kí tự, trên 1 dòng, kết thúc bằng phím "space" hoặc "enter"
  
  <h4> Lưu ý: </h4>  
  
  - Chuỗi kí tự có dấu cách "space" (dùng thêm thư viện string ); 
  
  - Dùng câu lệnh: 
  
  ```C++
  getline(cin,bien_string);
  ```
  - Nếu trước đó đã nhập gì đó bằng lệnh "cin" và bấm enter thì trong bộ nhớ tạm còn kí tự enter. Phải dùng lệnh sau để fix lỗi này.
  
  ```
  cin.ignore();
  ```
  Nếu trước đó ko nhập gì thì KHÔNG được dùng lệnh cin.ignore() vì sẽ sinh ra lỗi chờ vùng nhớ, mất kí tự đầu tiên của chuỗi

Chương trình ví dụ:
```C++

#include <iostream>
#include <string>
using namespace std;

int main()
{
  int tuoi = 0;
  string ho_ten = "";
  string que_quan = "";

  cout << "Nhap ten: ";
  // Dùng hàm getline() để nhập chuỗi có dấu cách bên trong
  getline(cin,ho_ten);

  // Luông dữ liệu ra
  cout << "Nhap tuoi";
  // Nhập dữ liệu vào Luồng dữ liệu vào
  cin >> tuoi;

  cout << "Nhap que quan: ";
  // Chú ý loại bỏ enter ở lệnh cin trên
  cin.ignore();
  getline(cin,que_quan)
  cout <<"Toi nam nay: " << tuoi <<" tuoi";
  return 0;
}

```
</details>




<details>
  <summary>
    <h3>2.3 Nhập xuất dữ liệu cho biến trong C</h3>
  </summary>

Cách thức nhập xuất dư liệu trong C khác một chút so với C++ về các hàm đưa dữ liệu vào luồng In - Out

<h4>Hàm xuất dữ liệu:</h4>

printf("[Nội dung]...[các đặt tả]", [danh sách đối số]) : xuất 1 luồng kí tự ra màn hình
<h4>Hàm nhập dư liệu</h4>
scanf("[Các đặc tả]", [địa chỉ tham số ]) : Nhập 1 luồng kí tự vào 


<h4>Lưu ý: khi làm việc với chuỗi trong ngôn ngữ C</h4>

- Muốn khởi tạo chuỗi kí tự trong C thì phải nhập qua mảng
- Dùng đặc tả: %s
- Lưu khi chuỗi có chứa dấu cách (VD "Kien Nguyen") thì nhập theo cách thông thường sẽ gây ra sai sót.

- Đây là cách đúng để khai báo kiểu dữ liệu chuỗi trong C
- Lưu ý chuỗi này kết thúc bằng kí tự: null là "\0" sẽ tự thêm vào ở cuối chuỗi
- Nên muốn lưu chuỗi 10 kí tự phải khai báo chuỗi 11 kí 

```C
char chuoiKitu[] = ""
```

Ví dụ 1: In ra màn hình chuỗi đã được khai báo sẵn

```C
char ho_ten[30] = "Kien Nguyen"n;
// Để xuất chuỗi làm như sau
sprintf("Ho va ten: %s",ho_ten);
```

Ví dụ 2: Nhập chuỗi "KHÔNG CÓ" - "CÓ" có dấu cách
```C
// khai báo chuỗi rỗng: dùng cách khai báo mảng và dấu ""
char ten[10] = ""; 

// khai báo biến chuỗi có dấu cách
char ho_ten[20] = "";

// Nhập dữ liệu cho bien ten
// Việc nhập kế thúc khí gặp dấu cách space hoặc xuống dòng enter
scanf("%s", &ten);

// Nhập dữ liệu cho biến ho_ten
// Việc nhập chỉ kết thúc khi gặp phím enter 
scanf("%[^\n]s",ho_ten);
```

Ví dụ 3: tổng hợp 
```C
#include "stdio.h"
int main()
{
  // biến lưu Họ và tên
  char hoTen = "";
  // biến tuoi : Biến số nguyên 
  int tuoi = 0;
  // biến xếp loại
  char xepLoai[] = ""

  //Nhập xuất họ và tên
  printf("Hay nhap ho va ten: ");
  scanf("%[^\n]s",&hoTen);

  // Nhập tuổi
  printf("\nNhap tuoi: ");
  scanf("%d",&tuoi);

  //Lệnh xóa 1 kí tự trong bộ nhớ đệm 
  getchar();

  // Nhập xếp loại
  printf("\nNhap xep loai: ");
  // cần có lệnh xóa bộ nhớ đệm trước đó
  scanf("%c",&xepLoai)

  // Xuất dữ liệu vừa nhập
  printf("%s\n %d tuoi\nXep loai: %s",hoTen,tuoi,xepLoai);

  return 0;
}
```


</details>