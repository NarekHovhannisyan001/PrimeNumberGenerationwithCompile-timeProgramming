#ifndef IS_PRIME_HPP
#define IS_PRIME_HPP

#include <iostream>

template <size_t N, size_t I>
struct is_diveded;

template <size_t N, size_t I>
struct check_prime;

template <size_t N>
struct check_prime<N, 1>;

template <size_t N>
struct is_prime;

template <>
struct is_prime<0>;

template <>
struct is_prime<1>;

template <>
struct is_prime<2>;

template <>
struct is_prime<3>;

#include "is_prime.tpp"

#endif // IS_PRIME_HPP
