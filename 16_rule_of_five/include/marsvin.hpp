#ifndef MARSVIN_H_
#define MARSVIN_H_

#include <iostream>
#include <set>
#include <string>

class Marsvin {
  public:
    Marsvin(std::string id);
    ~Marsvin();
    /*
    Marsvin(const Marsvin& other);
    Marsvin(Marsvin&& other);
    Marsvin& operator=(const Marsvin& other);
    */
    static int getObjectCount();
    static void printCreatedIds();
    std::string getId() const;
    friend std::ostream& operator<<(std::ostream &output, const Marsvin& marsvin);
  private:
    std::string id_;
    static std::set<std::string> id_container;
};

#endif // MARSVIN_H_

