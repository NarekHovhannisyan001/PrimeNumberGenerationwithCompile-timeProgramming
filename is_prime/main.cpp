#include "is_prime.hpp"
#include <iostream>

int main() {
    std::cout << "Testing prime numbers:\n";
    std::cout << "is_prime<13>::val: " << is_prime<13>::val << "\n";
    std::cout << "is_prime<17>::val: " << is_prime<17>::val << "\n";
    std::cout << "is_prime<23>::val: " << is_prime<23>::val << "\n";
    // Testing non-prime numbers
    std::cout << "Testing non-prime numbers:\n";
    std::cout << "is_prime<4>::val: " << is_prime<4>::val << "\n";    
    std::cout << "is_prime<15>::val: " << is_prime<15>::val << "\n";  
    std::cout << "is_prime<25>::val: " << is_prime<25>::val << "\n";  

    // Testing edge cases
    std::cout << "Testing edge cases:\n";
    std::cout << "is_prime<0>::val: " << is_prime<0>::val << "\n";    
    std::cout << "is_prime<1>::val: " << is_prime<1>::val << "\n";    
    std::cout << "is_prime<2>::val: " << is_prime<2>::val << "\n";     
    std::cout << "is_prime<3>::val: " << is_prime<3>::val << "\n";    
}
