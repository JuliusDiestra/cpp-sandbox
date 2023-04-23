#ifndef INSTANCECOUNTER_H_
#define INSTANCECOUNTER_H_

#include <cstddef>

template<typename T>
class InstanceCounter {
  public:
    InstanceCounter();
    InstanceCounter(const InstanceCounter& other);
    InstanceCounter(InstanceCounter&& other);
    ~InstanceCounter();
    static std::size_t counter();
    std::size_t id() const;

  private:
    static std::size_t counter_;
    std::size_t id_;
};

template<typename T>
InstanceCounter<T>::InstanceCounter() {
    id_ = ++counter_;
}

template<typename T>
InstanceCounter<T>::InstanceCounter(const InstanceCounter& other) :
  id_{other.id_ + 1} {
    ++counter_;
}

template<typename T>
InstanceCounter<T>::InstanceCounter(InstanceCounter&& other) {
    id_ = other.id_;
}

template<typename T>
InstanceCounter<T>::~InstanceCounter() {
    --counter_;
}

template<typename T>
std::size_t InstanceCounter<T>::counter() {
    return counter_;
}

template<typename T>
std::size_t InstanceCounter<T>::id() const {
    return id_;
}

template<typename T>
std::size_t InstanceCounter<T>::counter_ = 0;

#endif  // INSTANCECOUNTER_H_
