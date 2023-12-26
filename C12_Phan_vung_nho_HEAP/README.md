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

-


<h4>Cú pháp</h4>

```C++

// new <kiểu dữ liệu>(<giá trị>)
new int(123)

```

15'44''