
# Prime Number Generation with Compile-time Programming

This project implements compile-time prime number generation using C++ template metaprogramming. The code is separated into three main modules: `is_prime`, `next_prime`, and `kth_prime`. These modules work together to calculate whether a number is prime, find the next prime after a given number, and determine the k-th prime number starting from a given value.

## Directory Structure

```
/is_prime
    - is_prime.hpp
    - is_prime.tpp
/next_prime
    - next_prime.hpp
    - next_prime.tpp
/kth_prime
    - kth_prime.hpp
    - kth_prime.tpp
main.cpp
README.md
```

### How the Directories Work Together

1. **`is_prime`**: This directory contains the logic to determine if a number is prime at compile-time.
   - `is_prime.hpp`: Declares the `is_prime` template.
   - `is_prime.tpp`: Implements the `is_prime` logic, which checks whether a number is prime using template recursion.
   
2. **`next_prime`**: This directory contains the logic to calculate the next prime number after a given number.
   - `next_prime.hpp`: Declares the `next_prime` template, which uses `is_prime` to find the next prime.
   - `next_prime.tpp`: Implements the template to recursively find the next prime number.
   
3. **`kth_prime`**: This directory contains the logic to calculate the k-th prime number starting from a given number.
   - `kth_prime.hpp`: Declares the `kth_prime` template, which uses `next_prime` to find the k-th prime number.
   - `kth_prime.tpp`: Implements the recursive template logic to find the k-th prime number using multiple calls to `next_prime`.

### Code Overview

#### `is_prime`

The `is_prime` template determines whether a given number `N` is prime. The code recursively checks divisibility for values from `N/2` down to `1`, using compile-time constants (`constexpr`), making the result available during compilation.

- Specializations are provided for edge cases (`0`, `1`, `2`, and `3`).

```cpp
template <size_t N>
struct is_prime {
    constexpr static bool val = check_prime<N, N / 2>::val;
};
```

#### `next_prime`

The `next_prime` template finds the next prime number after a given number `N`. It recursively checks each successive number using `is_prime` until a prime number is found.

```cpp
template <size_t N>
struct next_prime {
    constexpr static size_t val = next_helper<N + 1, is_prime<N + 1>::val>::val;
};
```

#### `kth_prime`

The `kth_prime` template calculates the k-th prime number starting from a given number `N`. It uses `next_prime` to find the next prime `I` times, recursively.

```cpp
template <size_t N, size_t I>
struct kth_prime {
    constexpr static size_t val = kth_prime<next_prime<N>::val, I - 1>::val;
};
```

### Compile-time Programming

This project leverages C++ template metaprogramming to perform computations at compile-time. By using templates and `constexpr` values, prime number generation is done during the compilation process, reducing runtime overhead. This allows prime numbers to be computed entirely at compile-time, enabling performance optimizations in runtime execution.

### Usage

The code in `main.cpp` demonstrates how to use the templates for prime number calculations at compile time.

```cpp
#include "kth_prime.hpp"
#include <iostream>

int main() {
    std::cout << "2nd prime after 3: " << kth_prime<3, 2>::val << std::endl;
    return 0;
}
```

### Requirements

- **C++11 or later**: The code requires a modern C++ compiler that supports `constexpr` and template metaprogramming features.
- **Compiler**: You can use compilers like `g++` or `clang++`.

### Compilation

To compile and run the project:

```bash
g++ main.cpp -o prime
./prime
```

### Conclusion

This project demonstrates the power of C++ template metaprogramming by generating prime numbers at compile-time. It modularizes the logic into different components for determining if a number is prime (`is_prime`), finding the next prime (`next_prime`), and calculating the k-th prime (`kth_prime`).
