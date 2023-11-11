# Nền tảng lập trình - Ngôn ngữ C++
![Alt text](image.png)

# Lời mở đầu - tham gia vào.. 

    - Xây dựng kiến thức căn bản về lập trình qua C++
    - Dùng telegram để liên hệ với mình
    - SĐT của mình:

## ▶ Chương 1. Chương trình đầu tiên.

<details>
<summary>
<h3>1.1 Cài đặt môi trường C++ với Visual Studio.</h3>
</summary>
- Cài đặt Visual Studio (bản đầy đủ hơn so với VScode).
- Chọn tích vào mục: "Desktop development with C++". Cài luôn cả môi trường C++. Tiếp tục và Install.

    ### Cách tạo project mới.

    - Create new project
    - Empty project
    - Project name - Location - Solution 
    - Thêm chương trình vào phần Source file
    - Viết code 
    - Debuger 
    - Tạo thêm project trong Solution để làm việc
</details>

<details>
<summary>
<h3>1.2 Code C++ ngay trên trình duyệt với OnlineGDB.com</h3>
</summary>

- Nếu máy của bạn cấu hình yếu và không thể chạy Visual Studio hoặc VScode 
- Bạn có thể code trên trình duyệt web: OnlineGDb.com
- Với giao diện vừa đủ dùng
- Có thể lưu lại, qua tài khoản.
</details>

<details>
<summary>
<h3>1.3 Cấu trúc của một chương trình C++ đơn giản.</h3>
</summary>
- Sau khi cài đặt IDE thì bắt đàu viết code.

<h4>Tổng quan của 1 chương trình C++.</h4>

```C++
// Thư viện: liệt kê thư viện chứa các hàm sẽ dùng trong chương trình.
// input output stream: Luồng vào ra của chương trình
#include <iostream>

// thành phần bắt buộc của chương trình - hay là chương trình chính
int main() 
{
    // Nội dung chương trình: là các câu lệnh (statement or Instruction)
    /*  
    *   "std::cout<<" : đây là cú pháp(Syntax) của 1 *   câu lệnh. cần ghi nhớ thuộc lòng.
    *   "std" (standard library): là tên bộ chức năng thư viện chuẩn có sẵ trong ngôn ngữ C++
    *   "cout" (character out) là một hàm cụ thể
    *   Có thể hiểu công cụ "cout" nằm trong bộ công cụ std.
    *   "::" và "<<" là kí hiệu để dùng công cụ
    *   "\n" là kí hiệu xuống dòng
    */
    std::cout << "Hello world!\n";
   

    /*
    *   Lệnh này là trả về giá trị cho hàm main 
    *   Không có cũng ko lỗi, nhưng CẦN PHẢI CÓ để đảm bảo cấu trúc của chương trình
    */
    return 0;
    
}
```
Muốn bỏ qua dòng "std::" thì thêm lệnh này sau khi nhập tất cả các thư viện
```c++
// Dây là cú pháp thêm thư viện, có thể kết thúc bằng dấu ";" nhưng đó là thừa và ko cần thiêt 
#include <iostream>; 

// chú ý đây là 1 lệnh, khỏng phải hàm, biến,...phải có dấu ";"
using namespace std; 
```
</details>





## ▶ 2. Biến và kiểu dữ liệu - Variable and Datatype
<details>
  <summary>
    <h2>2.1 Khái niệm biến và kiểu dữ liệu - Variable and Data type Explained </h2>
  </summary>
  <h3>Biến là:</h3>
  - Đối tượng chiếm một vùng nhớ xác định
  - Dùng để lưu trữ giá trị nào đó
  <h3>Variable Explained:</h3>
  - abc
  <h3>Kiểu dữ liệu là:</h3>
  - Tập hợp của các loại giá trị mà có thể khởi tạo cho một biến 
  <h3>Data type exlained:</h3>
  - abc
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





## ▶ 3. Các phép toán với biến

<details>
  <summary>
    <h3>3.1 Khái niệm toán tử và biểu thức - Operator and expression</h3>
  </summary>

  <h4>Nội dung chính:</h4>  

  - Ta có Variable là sự biến đổi giá trị của các biến.
  - Nó thông qua các phép toán(+,-,*,/,...): được gọi là Operator(toán tử).
  - Nếu các Operator đứng đơn lẻ thì không có ý nghĩa gì cả.
  - Chúng cần có các Variable hoặc các con số đứng cùng, được gọi là Operand(toán hạng).
  - Lúc này chúng đứng cùng nhau(Operator, Operand) ta có được Expression(biểu thức).

  ```c++
  #include <iostream>
  int main()
  {
    int a = 1; // Biến a được gán giá trị 1 qua toán tử "="
    int b = 2; // Tương tự cho biến b
    cout << a * b + 15; // a*b+15 = 17 | giá trị này được đưa vào luồng cout để đưa ra màn hình (cout trong thư viện iostream)
    return 0;
  }
  ```
  Phép toán có thể biểu diễn bằng kí hiệu (+,-,*,/,...) hiệu hoặc "chuỗi kí tự" hiểu đơn giản là hàm

  ```c++
  cout << sizeof(int_variable) // 4 byet 
  ```
  Số toàn hạng tham gia vào phép toán đó:
  - Có thể có 1 hoặc 2 toán hạng (operand) được dùng khi dùng 1 toán tử(operator).
  
  Độ ưu tiên - Precedent:
  - Sẽ có thứ tự thực hiện giữa các toán tử.

  Thứ tự thực hiện - Associativity:
  - Từ trái sang phải hay từ phải sang trái
  - Ví dụ với phép "+" sẽ làm việc với toán hạng bên tay phải trước

  ```C++
  // 3*4 sẽ được thực hiện trước, sau đó 1*2  rồi 2 + 12 
  cout << 1*2 + 3*4;
  
  ```
</details>




<details>
  <summary>
    <h3>3.2 Phép gán - assignment operator</h3>
  </summary>
  <h4>Nội dung chính:</h4>
  Phép gán - assignment operator.
  Biểu diễn: "=".

  Đặc điểm
  - Gán 1 giá trị nào đó cho 1 biến.
  - Số toán hạng tham gia vào phép gán là: 2.
  - Thứ tự ưu tiên của phép gán sau các phép toán(+,-,*,/,...).
  - Gáng giá trị bên phải sang biến bên trái.

  ```c++
  #include <iostream>
  int main()
  {
    int x; // Khai báo
    x = 10; // Khởi tạo giá trị - gán giá trị 10 cho x
    int y = 2; // Khaoi báo và khởi tạo 
    return 0;
  }
  ```

  Biến constant: chỉ được gán 1 lần duy nhất 
  Cú pháp:

  ```C++
  const int z = 100;
  ```

  ```C++
  int a = 1;
  int b = 2;
  // lưu ý : (a = b = 5) là một biểu thức expression - nên tương tự như biểu thức bình thường, ko phải hàm gì cả
  cout << (a = b = 5) << '\n'; 
  cout << x << '\n' << y << '\n';
  /*Kết quả là:
  5
  5
  5
  */
  ```

</details>


<details>
  <summary>
    <h3>3.3 Phép toán số học - Arithmetic operator</h3>
  </summary>

  <h4>Nội dung chính:</h4>
  
  - Các phép toán cơ bản trong toán học(+, -, *, /, %, ++, --) đều có trong lập trình.
   
  ```C++
  #include <iostream>
  int main()
  {
    // Phép cộng dùng toán tử "+"
    int x = 5 + 6;
    // Phép trừ dùng toán tử "-"
    int y = x - 1; 
    // Phép chia lấy phần nguyên dùng toán tử "/"
    int z = x * 2; 
    
    /* 
    * Trong lập trình thì phép chia là phép toán có nhiều hướng thực 
    * hiện, Nên cần chú ý khi thực hiện phép chia.
    */
    // Phép chia lấy phần nguyên dừng toán tử "/" 
    int i = 15 / 2; 
    //  Phép chia lấy phần dư dừng toán tử "%"
    int i = 15 % 2; // KQ: 1 

    /*
    * Vậy là sao để chia để nhận được kế quả số thực:
    * - Viết biểu thức dưới dạng số thự (VD: 10.0, 3.3,..)
    * - Biến nhận là kiểu số thực
    */
    float j = 15.0 / 2; 
    // Lưu ý biến số thực KHÔNG CÓ chia lấy phần dư
    // Không được chia cho số 0

    // Phép toàn tự tăng và tự giảm /
    // Kí hiệu: "a++" | "++a" | "a--"| "--a"| 
    // Kí hiệu: "a += b" | "a -= b" | "a *= b" | "a /=b" 
    int a = 0;
    a++; // Sau khi câu lệnh kết thúc bằng dấu ";" thì biến a mới tăng 1 đơn vị. 
    ++a; // Tăng ngay khi câu lệnh được thực hiện.
    
    /*
    * Phép toàn ưu tiên
    * Cú pháp: "( a + b ) * c"
    */
    int q = (1+2)*3;

    return 0;
  }
  ```
  <h4>Thư viện toán học</h4>

  Thư viện toán học - math library. Có các hàm cơ bản sau:
  Đây là phép toán được biểu diễn bằng chuỗi kí tự đã được nhắc ở các bài trước. Hay có thể gọi là hàm.

  - Hàm căn bặc 2 - sqrt(a) stand for "square root" 
  - Hàm mũ 2 - pow(a,b) stand for "power"
  - Hàm trị tuyệt đối - abs(a) - stand for "absolute"
  ```C++
  #include <iostream>
  #include <math.h> // Tại sao có chữ ".h"? Vì đây là thư viện của lập trình C 
  #include <cmath> // hoặc có thể viết NTN

  using namespace std;
  int main()
  {
    int x = 9;
    // In ra căn bậc 2
    cout << sqrt(x);
    // Đây là in ra x^4 . Dùng cho mũ lớn để giảm số lượng code.
    cout << pow(x,4);
    //In ra trị tuyệt đối  
    cout << abs(x);
    return 0;
  }
  
  ```
  <h4>Phép toàn cộng kí tự</h4>
  
  ```C++
  char x = 'A'; // Lưu trong bộ nhớ MT là một số nguyên nằm trong mã Asci
  cout << x; // KQ: 65
  cout << (x+1); // KQ: 66
  ```      
</details>



<details>
  <summary>
    <h2>Name of lesson</h2>
  </summary>
      
</details>

# ▶4. ABC
