#ifndef MARSVIN_H_
#define MARSVIN_H_

#include <algorithm>
#include <iostream>
#include <memory>

template <typename T>
class Marsvin {
  public:
    Marsvin(std::size_t size);
    ~Marsvin();
    T getElement(std::size_t index) const;
    void setElement(std::size_t index, T value);
    std::size_t getSize();
    void Append(Marsvin& other);

  private:
    std::allocator<T> marsvin_allocator;
    std::size_t size_;
    T* data_;
};

template <typename T>
Marsvin<T>::Marsvin(std::size_t size) :
  size_{size} {
    data_ = marsvin_allocator.allocate(size_);
}

template <typename T>
Marsvin<T>::~Marsvin() {
    marsvin_allocator.deallocate(data_, size_);
}

template <typename T>
T Marsvin<T>::getElement(std::size_t index) const {
    return data_[index];
}

template <typename T>
void Marsvin<T>::setElement(std::size_t index, T value) {
    data_[index] = value;
}

template <typename T>
std::size_t Marsvin<T>::getSize() {
    return size_;
}

template <typename T>
void Marsvin<T>::Append(Marsvin& other) {
    T* data_temp = marsvin_allocator.allocate(size_);
    std::copy(data_, data_ + size_, data_temp);
    marsvin_allocator.deallocate(data_, size_);
    data_ = marsvin_allocator.allocate(size_ + other.size_);
    std::copy(data_temp, data_temp + size_, data_);
    std::copy(other.data_, other.data_ + other.size_, data_ + size_);
    marsvin_allocator.deallocate(data_temp, size_);
}
#endif  // MARSVIN_H_
