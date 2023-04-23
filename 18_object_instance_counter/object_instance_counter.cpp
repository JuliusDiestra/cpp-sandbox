#include <iostream>
#include <memory>

class MyData {
  public:
    // Constructor
    MyData() :
      data_{std::make_unique<int>(100)} {
        id_ = ++counter;
    }
    // Copy constructor
    MyData(const MyData& other) :
      data_{std::make_unique<int>(*other.data_)},
      id_{other.id_ + 1} {
        ++counter;
    }
    // Move constructor
    MyData(MyData&& other) :
      data_{std::move(other.data_)} {
        id_ = other.id_;
    }
    // Destructor
    ~MyData() {
        --counter;
    }
    static int InstanceCounter() {
        return counter;
    }
    int id() {
        return id_;
    }
    int data() {
        return *data_;
    }
    void increase() {
        *data_ = *data_ + 1;
    }
    void decrease() {
        *data_ = *data_ - 1;
    }

  private:
    std::unique_ptr<int> data_;
    int id_;
    static int counter;
};

int MyData::counter = 0;

int main() {
    std::cout << "Create object one" << std::endl;
    MyData instance_one;
    std::cout << "Counter : " << MyData::InstanceCounter() << std::endl;
    std::cout << "ID : " << instance_one.id() << std::endl;
    std::cout << "Instance one data : " << instance_one.data() << std::endl;
    std::cout << "Create object two as copy of obj. one" << std::endl;
    MyData instance_two = instance_one;
    std::cout << "Counter : " << MyData::InstanceCounter() << std::endl;
    std::cout << "ID : " << instance_two.id() << std::endl;
    std::cout << "Instance two data : " << instance_two.data() << std::endl;
    std::cout << "Create object three moving obj. one" << std::endl;
    MyData instance_three = std::move(instance_one);
    std::cout << "Counter : " << MyData::InstanceCounter() << std::endl;
    std::cout << "ID : " << instance_three.id() << std::endl;
    std::cout << "Instance three data : " << instance_three.data() << std::endl;
    return 0;
}
