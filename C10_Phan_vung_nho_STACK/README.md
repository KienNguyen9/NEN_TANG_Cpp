# Phân vùng nhớ STACK

<h4>Vùng nhớ</h4>
- Phân vùng `STACK` ở trong window có dung lượng `1MB = 1,000,000 Byte` , còn trong linux là 8MB
- Các biến được tạo ra sẽ được lưu trữ ở vùng nhớ `memory`. Chỉ cần hiểu đơn giản khi chạy một chương trình, thì sẽ có một vùng nhớ được tạo ra  cho chương trình đó gọi là `Virtual memory` vùng nhớ ảo
- địa chỉ biến được định dạng với mã hexa

<h3>1. Địa chỉ của biến và hệ thập lục phân</h3>

- Để lấy giá trị địa chỉ của 1 biến ta dùng toán tử `&` đặt trước tên biến
- Để  viết 1 giá trị hệ thập lục phân hệ `hex` ta thêm `0x` phía trước giá trị cần viết  

<h3>2. Vùng nhớ STACK </h3>

<h4>Tóm tắt lưu ý</h4>

- Bất cứ biến nào được tạo trong hàm main đều được lưu trữ trong vùng nhớ `STACK`, kể cả con trỏ
- Vùng nhớ `STACK` được quản lý tự động và theo nguyên tắc LIFO. Vùng nhớ `STACK` là vùng nhớ có qui hoạch, còn `HEAP` là ngược lại
- Thời gian tồn tại của các biến thuộc `STACK`, chỉ nằm trong khối chương trình chứa nó tức là dấu ngoặt nhọn `{ }` chứa nó
- Vùng nhớ được cấp trong 1 cặp dấu `{ }` sẽ bị thu hồi tự động khi ra khỏi cặp dấu ngoặc nhọn đó
- 

<h4>Nội dung chính:</h4>
Vùng nhớ Stack là một phần của bộ nhớ lưu trữ trong RAM khi chương trình được thực thi. Vùng nhớ này được sử dụng để lưu trữ các biến cục bộ (local variable) bên trong hàm, vùng nhớ này dùng để chứa giá trị của các tham số khi được gọi đến.

Cách thức lưu trữ của vùng nhớ Stack là theo cấu trúc dữ liệu Stack, tức là các biến được lưu trữ theo thứ tự LIFO (Last in, First out), nghĩa là biến được lưu trữ cuối cùng sẽ được truy cập đầu tiên.

Kích thước của vùng nhớ Stack là cố định, tùy thuộc vào từng hệ điều hành, ví dụ hệ điều hành Windows là 1 MB, hệ điều hành Linux là 8 MB (lưu ý là con số có thể khác tùy thuộc vào kiến trúc hệ điều hành của bạn).

Tốc độ truy xuất của vùng nhớ Stack là rất nhanh, vì các biến được lưu trữ theo thứ tự LIFO, trình biên dịch có thể truy xuất các biến một cách trực tiếp.

<h5>Các biến được lưu trữ trong vùng nhớ Stack bao gồm:</h5>

Các biến cục bộ (local variable) được khai báo trong hàm.
Các tham số được truyền vào hàm.
Các biến tham chiếu tới đối tượng trong vùng nhớ Heap.
Khi một hàm được gọi, các biến cục bộ và tham số của hàm đó sẽ được lưu trữ trong vùng nhớ Stack. Khi hàm kết thúc, các biến này sẽ được giải phóng.

<h4>Vùng nhớ Stack có một số ưu điểm và nhược điểm như sau:</h4>

<h5>Ưu điểm:</h5>

- Tốc độ truy xuất nhanh.
- Quản lý bộ nhớ tự động.

<h5>Nhược điểm:</h5>

- Kích thước cố định.
- Dễ gây tràn Stack.

Vùng nhớ Stack thường được sử dụng cho các biến cục bộ, các tham số của hàm và các đối tượng có kích thước nhỏ.


<h3>3. Cấp phát bộ nhớ cho array trong STACK:</h3>

</h4>Nội dung chính:</h4>

- Trong cấp phát tĩnh (cấp phát vùng nhớ trong `STACK`) có 1 loại biến đặc biệt cần chú ý đó là `array`
- Khi tạo ra 1 biến array thì các địa chỉ của các phần tử sẽ được xếp nối tiếp trên vùng nhớ `STACK`

Ví dụ: khi khai báo số lượng phần tử là 5 thì sẽ được cấp 5 ô nhớ kế tiếp nhau trên `STACK`, khác với nhưng biến thông thường khi khai báo 2 biến thường kiểu int ở 2 dòng lệnh kề nhau thì sẽ không thể đảm bảo rằng địa chỉ của chúng cũng kề nhau.

```C++
int a[5];
```