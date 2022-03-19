#ifndef MARSVINDATA_H_
#define MARSVINDATA_H_

#include <iostream>
#include <vector>

template <typename T>
class MarsvinData {
    public:
        MarsvinData(std::size_t n);
        T GetEntry(std::size_t j) const;
        void SetEntry(std::size_t j,T entry);
        std::size_t GetSize();
        void PrintData() const;
        // Operator: Set & Get Using a Proxy class
        class EntryProxy {
            public:
                EntryProxy(MarsvinData& marsvin_data,std::size_t j): marsvin_data_(marsvin_data),j_(j) {}
                operator T() {
                    return marsvin_data_.GetEntry(j_);
                }
                void operator=(T input) {
                    marsvin_data_.SetEntry(j_,input);
                }
            private:
                MarsvinData& marsvin_data_;
                std::size_t j_;
        };
        EntryProxy operator[](std::size_t j) {
            return EntryProxy(*this,j);
        }
    private:
        std::vector<T> data_;
        std::size_t size_;
};

// Implementation

// Constructor
template<typename T> MarsvinData<T>::MarsvinData(std::size_t n) : size_{n}, data_{std::vector<T>(n,0)} {}

// Methods
template<typename T> T MarsvinData<T>::GetEntry(std::size_t j) const {
    return data_.at(j);
}


template<typename T> void MarsvinData<T>::SetEntry(std::size_t j, T entry) {
    data_.at(j) = entry;
}

template<typename T> void MarsvinData<T>::PrintData() const {
     for (std::size_t j = 0; j < data_.size(); j++) {
        if (j != data_.size() -1 ) {
            std::cout << data_.at(j) << '\t';
        } else {
            std::cout << data_.at(j) << '\n';
        }
    }
}

#endif // MARSVINDATA_H_

