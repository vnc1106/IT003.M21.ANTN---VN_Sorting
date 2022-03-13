# Thực nghiệm các phương pháp sắp xếp tới hạn
## Mô tả thực nghiệm
1. Tạo bộ dữ liệu gồm 10 dãy, mỗi dãy khoảng 1 triệu số thực (ngẫu nhiên); dãy thứ nhất đã có thứ tự tăng dần, dãy thứ hai có thứ tự giảm dần, 8 dãy còn lại trật tự ngẫu nhiên
2. Viết các chương trình sắp xếp dãy theo các thuật toán QuickSort, HeapSort, MergeSort và chương trình gọi hàm sort của C++
3. Chạy thử nghiệm mỗi chương trình đã viết ở trên với bộ dữ liệu đã tạo, ghi nhận thời gian thực thi từng lần thử nghiệm
## Mô tả các thư mục trên GitHub
1. Thư mục `Gen_test` gồm:
* `gen.cpp`   : Chương trình sinh bộ dữ liệu
* `Output_Gen` : Gồm 10 file `*.txt` là bộ dữ liệu được sinh bởi `gen.cpp`
2. Thư mục `Sort_Test` gồm:
* `std_sort.h` : Mã nguồn thuật toán `std::sort`
* `heap_sort.h` : Mã nguồn thuật toán **Heap Sort**
* `quick_sort.h` : Mã nguồn thuật toán **Quick Sort**
* `merge_sort.h` : Mã nguồn thuật toán **Merge Sort**
* `main.cpp` : Chương trình thực nghiệm khảo sát thời gian thực thi các phương pháp sort trên bộ dữ liệu đã được tạo 
## Tiến hành thực nghiệm:
**Bước 1:** Chạy file `gen.cpp` để khởi tạo bộ dữ liệu thực nghiệm. Kết quả khi chương trình chạy thành công:

<div align="center"> 
    <img src="Image/gen.PNG">
</div>

**Bước 2:** Chạy file `main.cpp` để tiến hành đo thời gian thực thi các thuật toán sort trên bộ dữ liệu vừa mới tạo. Kết quả khi chương trình chạy thành công:

<div align="center"> 
    <img src="Image/main.PNG">
</div>

## Kết quả thực nghiệm
* Bảng thống kê:

|             |   Test 1   |   Test 2   |   Test 3   |   Test 4   |   Test 5   |   Test 6   |   Test 7   |   Test 8   |   Test 9   |   Test 10   |
|-------------|------------|------------|------------|------------|------------|------------|------------|------------|------------|-------------|
|  QUICK_SORT |     93     |     76     |    248     |    246     |    247     |    295     |    260     |    244     |    246     |     244     | 
|  MERGE_SORT |    707     |    672     |    856     |    919     |    849     |    848     |    871     |    850     |    847     |     850     |  
|  HEAP_SORT  |    388     |    379     |    545     |    538     |    555     |    553     |    545     |    535     |    566     |     563     |
|  STD_SORT   |     47     |     51     |    210     |    215     |    218     |    210     |    214     |    223     |    237     |     216     |

* Biểu đồ thống kê:

<div align="center"> 
    <img src="Image/result.PNG">
</div>

## Nhận xét kết quả thực nghiệm
1. Về mặt số liệu thì **std_sort** và **quick_sort** là hai thuật toán sắp xếp nhanh nhất (cả hai đều có thời gian thực thi trung bình xấp xỉ **N * log(N)**) trong đó **std_sort** nhanh hơn một chút so với **quick_sort**. Xếp sau đó là **heap_sort** và sau cùng là **merge_sort**
2.   
