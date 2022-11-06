#include "marsvin.hpp"


std::set<std::string> Marsvin::id_container;

Marsvin::Marsvin(std::string id) {
    std::cout << "Constructor called..." << std::endl;
    id_ = id;
    id_container.insert(id_);
    std::cout << "Created marsvin : " << id_ << ", Total Marsvins : " << getObjectCount()  << std::endl;
};

Marsvin::~Marsvin(){
    std::cout << "Destructor called..." << std::endl;
    id_container.erase(id_);
    std::cout << "Removed marsvin : " << id_ << ", Total Marsvins : " << getObjectCount()  << std::endl;
};

int Marsvin::getObjectCount() {
    return id_container.size();
}

void Marsvin::printCreatedIds() {
    std::cout << "IDs container: ";
    for (auto it = id_container.begin(); it!=id_container.end(); ++it) {
        if (it == id_container.end()) {
            std::cout << *it << std::endl;
        } else {
            std::cout << *it << ", ";
        }
    }
}

std::string Marsvin::getId() const {
    return id_;
}

std::ostream& operator<<(std::ostream &os, const Marsvin& marsvin) {
    os << "ID : " << marsvin.getId();
    return os;
}

/*
Marsvin::Marsvin(const Marsvin& other_marsvin){

};
*/
