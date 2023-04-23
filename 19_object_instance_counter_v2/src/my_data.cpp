
#include "my_data.hpp"

MyData::MyData() :
  data_{std::make_unique<int>(100)} {}

MyData::MyData(const MyData& other) :
  data_{std::make_unique<int>(*other.data_)} {}

MyData::MyData(MyData&& other) :
  data_{std::move(other.data_)},
  instance_counter{std::move(other.instance_counter)} {}

MyData::~MyData() {}

std::size_t MyData::id() const {
    return instance_counter.id();
}

int MyData::data() const {
    return *data_;
}

std::size_t MyData::getInstanceCounter() const {
    return instance_counter.counter();
}
