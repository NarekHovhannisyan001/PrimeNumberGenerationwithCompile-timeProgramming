#ifndef NEXT_PRIME_HPP
#define NEXT_PRIME_HPP

#include "../is_prime/is_prime.hpp"

template <size_t N, bool B>
struct next_helper;

template <size_t N>
struct next_helper<N, true>;

template <size_t N>
struct next_prime;

#include "next_prime.tpp"

#endif // NEXT_PRIME_HPP
