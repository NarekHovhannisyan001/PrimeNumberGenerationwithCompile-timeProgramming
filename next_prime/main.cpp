#include "next_prime.hpp"
#include <iostream>

int main() {
    // Testing next prime after 6
    std::cout << "Next prime after 6: " << next_prime<6>::val << std::endl;
    
    // Testing other cases
    std::cout << "Next prime after 10: " << next_prime<10>::val << std::endl;
    std::cout << "Next prime after 15: " << next_prime<15>::val << std::endl;
    
    return 0;
}
