#include <iostream>
#include <stdexcept>
#include <string>

enum ErrorCode {
    kColumnLimit,
    kRowLimit,
    kRowAndColumnLimit
};

namespace error {
class OutOfRange : public std::out_of_range {
  public:
    OutOfRange(const ErrorCode& error_code) :
      std::out_of_range(ErrorCodeToString(error_code)),
      error_code_{error_code} {};
    ErrorCode type() {
        return error_code_;
    };
  private:
    ErrorCode error_code_;
    std::string ErrorCodeToString(ErrorCode error_code) {
        std::string str{};
        switch (error_code) {
            case ErrorCode::kRowLimit:
                str = "Row out of limits";
                break;
            case ErrorCode::kColumnLimit:
                str = "Column out of limits";
                break;
            case ErrorCode::kRowAndColumnLimit:
                str = "Row and Column out of limits";
                break;
            default:
                str = "Unknown error";
        }
        return str;
    };

};
} // namespace error

class MyFancyClass {
  public:
    MyFancyClass(int row, int column) : row_{row}, column_{column} {};
    void SetRow(int row) {
        if (row > row_) {
            throw error::OutOfRange(kRowLimit);
        }
    };
    void SetColumn(int column) {
        if (column > column_) {
            throw error::OutOfRange(kColumnLimit);
        }
    };
  private:
    int row_;
    int column_;
};

int main () {
    MyFancyClass fancy_instance_(2,3);
    try {
        fancy_instance_.SetRow(3);
    } catch (const error::OutOfRange& my_exception_) {
        std::cout << "Exception caught - what(): "  << my_exception_.what() << std::endl;
    }
    try {
        fancy_instance_.SetColumn(5);
    } catch (const error::OutOfRange& my_exception_) {
        std::cout << "Exception caught - what(): "  << my_exception_.what() << std::endl;
    }
    return 0;
}
