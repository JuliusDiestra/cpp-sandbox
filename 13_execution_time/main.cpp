#include <array>
#include <chrono>
#include <iostream>
#include <vector>

int main() {
    // Set array
    std::array<int, 3> arrayTmp;
    // Set vector
    std::vector<int> vectorTmp;
    std::vector<int> vectorTmp_(3);
    // Declare start and stop time variables
    std::chrono::time_point<std::chrono::high_resolution_clock> start_t;
    std::chrono::time_point<std::chrono::high_resolution_clock> stop_t;

    /*
     * Array
     */
    start_t = std::chrono::high_resolution_clock::now();
    arrayTmp[0] = 1;
    arrayTmp[1] = 2;
    arrayTmp[2] = 3;
    stop_t = std::chrono::high_resolution_clock::now();
    auto duration_array_setting =
        std::chrono::duration_cast<std::chrono::nanoseconds>(stop_t - start_t);
    std::cout << "Array - Time to set values : "
              << duration_array_setting.count() << " ns" << std::endl;

    /*
     * Vector using push_back
     */
    start_t = std::chrono::high_resolution_clock::now();
    vectorTmp.push_back(1);
    vectorTmp.push_back(2);
    vectorTmp.push_back(3);
    stop_t = std::chrono::high_resolution_clock::now();
    auto duration_vector_setting =
        std::chrono::duration_cast<std::chrono::nanoseconds>(stop_t - start_t);
    std::cout << "Vector - Time to set values with push_back : "
              << duration_vector_setting.count() << " ns" << std::endl;

    /*
     * Vector withou push_back
     */
    start_t = std::chrono::high_resolution_clock::now();
    vectorTmp_[0] = 1;
    vectorTmp_[1] = 2;
    vectorTmp_[2] = 3;
    stop_t = std::chrono::high_resolution_clock::now();
    auto duration_vector_setting_ =
        std::chrono::duration_cast<std::chrono::nanoseconds>(stop_t - start_t);
    std::cout << "Vector - Time to set values without push_back : "
              << duration_vector_setting_.count() << " ns" << std::endl;
    return 0;
}
