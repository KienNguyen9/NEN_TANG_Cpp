# Nền tảng lập trình - Ngôn ngữ C++
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





## ▶ 3. Các phép toán với biến :dollar: 

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
    <h3>3.4 Phép toàn quan hệ - Relation oprerator</h3>
  </summary>
  <h4>Nội dụng chính:</h4>
  
  - Phép toàn quan hệ hay còn gọi là phép toán so sánh - Relation Operator
  - Các kiểu so sánh có thể có là:
    <, >, ==, <=, >=, !=
  - Gía trị trả về của một biểu thức so sánh là một giá trị Bool (đúng - sai) 1 hoặc 0.

Chương trình minh họa:
```C++
#include <iostream>
using namespace std;
int main()
{

  int x = 1;
  // Đây là 1 biểu thức so sánh - kết quả: SAI, giá trị trả về là "0"
  x < 1; 
  // In ra màn hình giá trị trả về là "0"
  cout << (x<1);
  // Còn đây là biểu thức đúng và có giá trị trả về là "1"
  cout << (x>0);
  return 0;
}
```
</details>



<details>
  <summary>
    <h3>3.5 Phép toán Logic - Logical Operator</h3>
  </summary>
  <h4>Nội dung chính:</h4>

  - Kết quả của các phép toàn logical chỉ có "đúng" hoặc "sai". Tức là kết quả của biểu thức có kiểu ```bool```.
  - Các biến ```bool``` có thể: cộng, trừ, nhân, chia với nhau. Nhưng đừng làm như thế nếu bạn là lập trình viên chuyên nghiệp.
  - Trong thực tế đây là các thao tác với các biến logical ```bool```: phép nhân(AND), phép cộng (OR), phép đảo (NOT). Kí hiệu: ```&& || !```
  - Thứ tự ưu tiên của các phép toàn Logical: 
      1. ```!```
      2. ```&&```
      3. ```||```



  ```C++
  // Cộng trừ nhân chia - theo kiểu người nhà quê 
  bool a = 1, b = 0;
  bool nhaQue = a*b; // Đúng không báo lỗi nhưng đừng làm thế 

  // Đây là ví dụng minh họa các phép toàn logical operator hoạt động ntn.
  
  #include <iostream>
  using namespace std; 
  int main()
  {
    bool a = true; // 1
    bool b = true; // 1
    // Phép toán AND - Phép và - là phép nhân số nhị phân, kí hiệu: &&
    bool c = a&&b; // 1&&1 = 1*1 = 1 
    // Phép toán OR - phép hoặc - là phép cộng hai số nhị phân, kí hiệu: ||
    bool d = a||b; // 1||1 = 1+1 = 1 
    // Phép toán NOT - phép toán đảo - là đảo giá trị của 1 số nhị phân, kí hiệu: !
    bool e = !a; // !1 = 0
    return 0;
  }
  ```         
</details>





<details>
  <summary>
    <h3>3.6 Ép kiểu -  Type casting operator</h3>
  </summary>
  <h4>Nội dung chính:</h4>
  
  - Ép kiểu là chuyển đổi kiểu dữ liệu.
  - Đối với các kiểu dữ liệu nguyên thủy (primitive Variable): bool, char, int, float, double,...Thường thì không cần phải ép kiểu tường minh mà sẽ được C++ ép kiểu tự động.
  - Các kiểu dữ liệu mở rộng: array, string, struct, class,...Không có  ép kiểu tự động, cần phải được DEV ép kiểu tường mình để tránh lỗi vì kiễu dữ liệu trên phức tạp
  
  Cú pháp ép kiểu tường minh:
  ```C++
  int a = 1998;
  float b = (float)a;
  ```

  Chương trình minh họa chi tiết:
  ```C++
  #include <iostream>
  #include <string>
  using namespace std;
  int main()
  {
    // CÁC KIỂU DỮ LIỆU NGUYÊN THỦY 
    // float -> int
    float x = 1.5;
    cout << (int)x; // KQ = 1

    int y = 1;
    cout << (float)y; //KQ = 1.00000

    int z = 65;
    cout << (char)z; // in ra A

    // char -> int
    char j = 'A';
    cout << (int)j; // in ra 65
    // Ví dụ ép kiểu tự động 
    float so_thuc = 1.5;
    int bien_so_nguyen = so_thuc; // Vì gáng 1 số thực vào biến số nguyên
    cout << bien_so_nguyen; // KQ = 1 đã tự động ép kiểu


    // Đối với các kiểu dữ liệu mở rộng được ép kiểu bằng HÀM chuyên ép kiểu cho nó

    string s = "123.456"; // chuỗi kí tự 123 ko phải số 123
    // SAI - không phải kiểu dữ liệu nào cũng ép kiểu được
    int q = (int)s; // SAI
    // Nếu muốn ép kiểu cho câu lệnh trên thì cần tạo 1 hàm riêng để ép
    
    int q = stoi(s); // string to interger lấy tất cả các số đầu tiên đến khi gặp dấu . hoặc chữ này đó
    int k = stof(s);

    // Số ép thành chuỗi
    int bien_so = 1998;
    string bien_chuoi = to_string(bien_so); // bien_chuoi = "1998"

  }

  ```  
</details>

## ▶4. Cấu trúc rẻ nhánh - Conditional statements

<details>
  <summary>
    <h3>4.1 Cấu trúc rẻ nhánh if else - If else  conditional statement</h3>
  </summary>
  <h4>Nội dụng chính:</h4>

  - Thế nào là cấu trúc rẻ nhánh (hay cấu trúc điều khiển, hay câu điều kiện, hay if else)? Hiểu đơn giản là nếu thỏa mãn điều kiện thì sẽ làm điều gì đó.
  - Có thể dùng if else lồng nhau để xử lí chi tiết vấn đề.
  - Trong câu điều kiện If else nếu 1 đk đúng thì sẽ ko làm việc với các điều kiện còn lại, đây cũng là 1 điều cần lưu ý để tránh việc sót các điều kiện khi tạo ra 1 câu điều kiện. 
  - Có nhưng trường hợp không bặt buộc phải có else hoặc if else.
  - Chú ý: Có nhiều kiểu câu điều kiện có thể xảy ra nhưng đây là 4 kiểu chính. Cần phải lưu ý. 

  ```C++
  // 1. Đây là câu lệnh: if
  if(dieu_kien)
  {
    // Các câu lệnh
  }

  // 2. Đây là câu lệnh if else
  if(dieu_kien)
  {
    // Các câu lệnh
  } 
  else
  {
    // Câu lệnh
  }

  // 3. Đây là câu: if() else if() else()
  if (dk_1)
  {
    //...
  } 
  else if(dk_2)
  {
    //...
  }
  else // CÁC ĐK CÒN LẠI
  {
    //...
  }

  //4. Đây là if eles lồng nhau

  if(dk_1)
  {
    if(dk_2)
    {
        //...
    }
    else
    {
        //...
    }
  }
  else 
  {
    //...
  }   
  ``` 

  <h4>Chương trình ví dụ:</h4>

  ```C++
  #include <iostream>
  using namespace std; 
  int main()
  {

    // VD cho câu điều kiện if else đơn giản
    bool catched = 1;
    if(catched)
    {
        cout << "CM dính bẫy rồi!"
    } else
    {
        cout << "May quá!"    
    }

    // VD if else lồng nhau
    int tuoi = 19;
    if(tuoi >= 18)
    {
        cout >> "\nDu tuoi di tu.";
    } 
    else if(tuoi >= 15 && tuoi<18)
    {
        cout << "Chua du tuoi di tu, co the dua vao trai giao duong."
    } 
    else 
    {
        cout << "Chua du tuoi di tu. Nhac nho, canh cao!";
    }
  }
  ```
</details>





<details>
  <summary>
    <h3>4.2 Toán tử điều kiện - Conditional Operator</h3>
  </summary>

  <h4>Nội dung chính:</h4> 
  - Điểm khác biệt so với câu điều kiện if else là: KHÔNG cần khối lệnh 
  - Chỉ cần 1 câu lệnh cho phép rẻ nhánh
  - Nó là 1 biểu thức trả về giá trị cụ thể (cần lưu ý), vì thế có thể đưa nó vào luồng output ```cout``` để in ra màn hình.
  - Độ ưu tiên, nếu không rõ chỉ cần chú ý thì cứ đưa vào cặp ngoặc tròn
  - Vậy khi nào nên dùng loại toán tử này: đối với các điều kiện đơn giản.

  Cú pháp:
  ```C++
  // nếu điều kiện đúng thực hiện return_value_A nếu không thực hiện return_value_B
  dieu_kien? <return_value_A> : <return_value_B>
  ```

  <h4>Chương trình ví du:</h4>
  ```C++
  #include <iostream>
  using namespace std;
  int main()
  {
    int tuoi = 16;
    //Đưa vào luồng output được vì đây là dữ liệu trả về.
    cout << ((tuoi >= 18)? "Da du tuoi di tu" : "Chua du tuoi di tu");
    return 0;
  }
  ```
  
</details>




<details>
  <summary>
    <h3>4.3 Cấu trúc lựa chọn switch case - Switch case statement </h3>
  </summary>
  <h4>Nội dung chính:</h4> 
  
  - Các hoạt động khác if else một chút.
  - Switch case là một trường hợp của if else, được tạo ra để viết gắn gọn chương trình.
  - Chuyên dụng để kiểm tra các biến số nguyên hoặc kí tự (tránh các biến constant hoặc các biến đặt biệt).
  - Với cấu trúc này cũng khá tính linh hoạt có thể kế hợp với cấu trúc điều kiện khác và các câu lệnh ```break, contiune, goto,..``` để tạo ra các chương trình nâng cao hơn (rất hay).

  Cú pháp:
    ```C++
    switch(tham_so_sanh_bang) // đưa 1 tham số so sánh bằng vào đay
    {
        case x1: // với x là 1 kí tự so sánh với tham số trên 
        {
            // Các câu lệnh cần thực hiện
            break; //bắt buộc phải có
        }
        case x2:
        {
            break;
        }
    }

    <h4>Chương trình mẫu:</h4>

  ```C++
  #include <iostream>
  #include <string>

  using namespace std;
  int main()
  {
    // Ví dụ với IF ELSE
    int month = 0
    string s = "";

    if (month == 1)
    {
        s = "January";
    }
    else if (month == 2)
    {
        s = "Febuary";
    }
    else if (month == 3)
    {
        s = "MarCH";
    } // TƯỞNG TỰ CHO CÁC THÁNG SAU
    cout << s;

    // VD switch case
    switch(month)
    {
        case 1:
            s = "January";
            break;
        case 2:
            s = "Febuary";
            break;
        case 3:
            s = "March"
            break;
    }
    cout << s;
    return 0;
  }

  ```   
</details>







<h2> ▶5. Cấu trúc vòng lặp - Loop statements </h2>

<details>
    <summary>
        <h3>5.1 Vòng lặp for - for loop statement</h3>
   </summary>
   Vòng lặp là gì?
Thực hiện câu lệnh lặp đi lặp lại nhiều lần

Cú pháp:
```C++
    /*
    for(biến đếm; điều kiện thực hiện; tự tăng biến đếm)
    {
        các câu lệnh cần lặp
    }
    */
    for(int i = 0; i <5; i++)
    {
        cout << "Hello world!";
    }
```

Ví dụ: 
```C++
#include <iostream>
using namespace std;
int main()
{
    // Viết tay các câu lệnh giống nhau nhiều lần
    cout << "Tôi tên là Nguyễn Trung Kiên, tôi muốn thành công và hạnh phúc.\n";
    cout << "Tôi tên là Nguyễn Trung Kiên, tôi muốn thành công và hạnh phúc.\n";
    cout << "Tôi tên là Nguyễn Trung Kiên, tôi muốn thành công và hạnh phúc.\n"; 
    cout << "Tôi tên là Nguyễn Trung Kiên, tôi muốn thành công và hạnh phúc.\n"; 
    cout << "Tôi tên là Nguyễn Trung Kiên, tôi muốn thành công và hạnh phúc.\n"; 
    cout << "Tôi tên là Nguyễn Trung Kiên, tôi muốn thành công và hạnh phúc.\n"; 
    cout << "Tôi tên là Nguyễn Trung Kiên, tôi muốn thành công và hạnh phúc.\n"; 

    // Dùng vòng lặp for để làm điều tương tự 30 lần
    for(int i = 0; i<30; i++) // i mean "index: số thứ tụ" or "interate: lập lại"  
    {
        cout << "Tôi tên là Nguyễn Trung Kiên, tôi muốn thành công và hạnh phúc.\n";
    }

    //Các cách viết có thể dùng khi lập trình với for
    // Biến đếm nằm bên ngoài for
    int j = 0;
    for(; j<5; j++)
    {
        cout << "Bien dem nam ben ngoai vong lap for";
    }

    // VỌNG LẶP KO CÓ ĐK DỪNG
    for(int i = 0; ; i++)
    {
        cout << "bien dem: " << i << '\n' ;
    }
    //Vòng lặp vô hạn
    for(;;)
    {
        cout << "Vong lap vo han";
    }
}
```   
</details>





<details>
    <summary>
        <h3>5.2 Vòng lặp while - while loop statement</h3>
   </summary>
   
   <h4>Vòng lặp while là: </h4>

- Dùng khi KHÔNG BIẾT TRƯỚC số lần lặp
- Về bản chất cũng là vòng lặp giống như for, và có thể thay thế cho nhau. Nhưng 2 cách này đều có ưu nhược điểm riêng
- Có rất nhiều cách viết vòng lặp, có thể linh hoạt trong các viết
Cú pháp:
```C++
/*
    (Khai báo biến đếm bên ngoài)
    int i = 0;
    while(1 điều kiện)
    {
        (các câu lệnh)
        (lệnh tăng hoặc giảm)
    }
*/
int i = 0;
while(i < 100)
{
    cout << "Nguyen Trung Kien\n";
    i++
}
``` 

Tương tự như while() thì do{}while() là giống nhau mọi thứ chỉ trừ ở 1 điểm

```C++
do
{
    // các câu lệnh
}while(dieu_kien_dung)

``` 
Là các lệnh sẽ được thực hiện ít nhất một lần.

</details>





<details>
    <summary>
        <h3>5.3 Câu lệnh Continue, break - Continue, break statement</h3>
   </summary>
   <h4>Hai phép lệnh continue và break điều khiển vòng lặp như thế nào: </h4>

Chú ý: ```continue``` chỉ dùng với for, while và switch case.
- Lệnh  ```continue``` cho phép bỏ qua tất cả các lệnh phía dưới để đi đến đầu vòng lặp tiếp theo.
- Lệnh ```break``` cho phép thoát ra khỏi vòng lặp

Vi dụ:    
```C++
for(int i = 0; i< 10; i++)
{   
    cout << "di lam";
    continue;
    cout << "di vong vong";
}
```

Chỉ có tác dụng với for()
```C++
//VD bỏ qua việc đi làm thêm vào ngày chẵn
for(int i = 0; i <=10; i++)
{
    if(i%2==0)
    {
        continue;
    }
    cout << "di lam them\n";
}
```

VD lệnh break, khi không có điều kiện duy trì

```c++
for(int i = 2;; i++)
{
    if(i == 7)
    {
        break;
    }
    cout << "Di lam cham chi vao thu " << i << '\n';
}
```
   
</details>





<details>
    <summary>
        <h3>5.4 Vòng lặp lồng nhau - Nested for loop</h3>
   </summary>

   <h4>Nội dung chính:</h4>

- Vòng lặp lồng nhau là bên trong một vòng lặp có một vòng lặp khác
- ```continue``` và ```break``` chỉ tác động vào vòng lặp gần nhất chứa nó.

```C++
#include<iostrem>
using namespace std;
int main()
{
    for(int i = 0; i < 10; i++)
    {
        cout << "Tuan thu " << i;
        for(int j = 1; j < 8; j++)
        {
            cout << "Di lam ngay thu: " << j;
        }
    }
    return 0;
}
```

Bài tập vẽ hình dùng vòng lặp nested loop
```C++
// Vẽ hình vuông
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout >> "Nhap do dai canh hinh vuong: ";
    cin >> n;

    for(int i = 0; i < 4; i++)
    {  
        for(int j = 0; j < 4; j++);
        {
            cout << "* ";
        }
        cout << '\n';
    }   
    return 0;
}

```   
</details>





<h2> ▶6. Mảng - Array </h2>

<details>
    <summary>
        <h3>6.1 Khái niệm cơ bản về mảng</h3>
   </summary>
<h4>Nội dung chính: </h4>

- Mảng dùng để lưu nhiều giá trị có cùng kiểu dữ liệu
- Số thứ tự của mảng tình thì vị trí thứ 0 (Index 0)
- Để duyệt một mảng thì phải dùng vòng lặp
- Lưu ý: ```arr[0]``` là giá trị phần tử thứ 1,
          ```arr``` là địa chỉ phần tử thú 1, ```arr+1``` là địa chỉ phần tử thứ 2



Cú pháp: (Kiểu dư liệu) (Tên biến)[(số phần tử)] = {1,2,3};  

```C++
int arrayX[3] = {1,2,3};
string x[] = {"Hello", "world", "I'm Kien"};
```

Lưu ý khi dùng biến kiểu mảng: 
```c++
int arr[] = {1,,5,9};
// Ta có thể thao tác với mảng này khi gọi lệnh sau, ví dụ:
arr[0] = 100;  // gán phần tử thứ 0 giá trị 100

// Hiểu đơn giản là cộng một đơn vị là đến địa chỉ tiếp theo
cout << arr; // in ra giá trị địa chỉ của phần tử đầu tiên index 0
cout << arr+1; // in ra giá trị địa chỉ của phần thử tiếp theo index 1
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
        <h3>6.3 Mảng đa chiều </h3>
   </summary>
</details>






<h2> ▶7. Kiểu dữ liệu chuỗi - string datatype </h2>

<details>
    <summary>
        <h3>7.1 Khái niệm cơ bản </h3>
   </summary>
</details>
</details>


