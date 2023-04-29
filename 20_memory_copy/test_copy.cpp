

#include <iostream>

/*
class MyData {
  public:
    MyData(std::size_t size) : size_{size} {
        data_ = my_allocator.allocate(size_);
    }
  private:
    int* data_;
    std::size_t size_;
    std::allocator<int> my_allocator;
};
*/

int main() {
    std::allocator<int> my_allocator;
    // Data one
    int* data_one;
    constexpr std::size_t kSizeOne = 3;
    data_one = my_allocator.allocate(kSizeOne);
    data_one[0] = 100;
    data_one[1] = 101;
    data_one[2] = 102;
    std::cout << "data_one :"
        << data_one[0] << ","
        << data_one[1] << ","
        << data_one[2] << "\n";
    // Data two
    int* data_two;
    constexpr std::size_t kSizeTwo = 4;
    data_two = my_allocator.allocate(kSizeTwo);
    data_two[0] = 1000;
    data_two[1] = 1000;
    data_two[2] = 1000;
    data_two[3] = 1000;
    std::cout << "data_two :"
        << data_two[0] << ","
        << data_two[1] << ","
        << data_two[2] << ","
        << data_two[3] << "\n";
    std::cout << "Copy first two elements of data_one in data_two \n";
    std::copy(data_one,data_one + 2, data_two);
    std::cout << "data_two :"
        << data_two[0] << ","
        << data_two[1] << ","
        << data_two[2] << ","
        << data_two[3] << "\n";

    std::cout << "Memory direct access \n";
    std::cout << "data_one :" << data_one << "\n";
    std::cout << "data_one + 1 :" << data_one + 1 << "\n";
    std::cout << "data_one + 2 :" << data_one + 2 << "\n";
    std::cout << "*(data_one + 2) :" << *(data_one + 2) << "\n";
    return 0;
}
