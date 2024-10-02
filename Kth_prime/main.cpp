#include "kth_prime.hpp"
#include <iostream>

int main() {
    // Testing k-th prime number, starting from 3, finding the 2nd prime after 3
    std::cout << "2nd prime after 3: " << kth_prime<3, 2>::val << std::endl;
    
    // Testing other cases
    std::cout << "1st prime after 5: " << kth_prime<5, 1>::val << std::endl;
    std::cout << "3rd prime after 7: " << kth_prime<7, 3>::val << std::endl;
    std::cout << "5th prime after 11: " << kth_prime<11, 5>::val << std::endl;

    return 0;
}
