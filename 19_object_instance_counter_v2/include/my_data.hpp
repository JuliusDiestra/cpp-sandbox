#ifndef MY_DATA_H_
#define MY_DATA_H_

#include <cstddef>
#include <memory>

#include "instance_counter.hpp"

class MyData {
  public:
    MyData();
    MyData(const MyData& other);
    MyData(MyData&& other);
    ~MyData();
    std::size_t id() const;
    int data() const;
    std::size_t getInstanceCounter() const;

  private:
    std::unique_ptr<int> data_;
    InstanceCounter<MyData> instance_counter;
};

#endif  // MY_DATA_H_
