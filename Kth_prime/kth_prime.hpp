#ifndef KTH_PRIME_HPP
#define KTH_PRIME_HPP

#include "../next_prime/next_prime.hpp"

template <size_t N, size_t I>
struct kth_prime;

template <size_t N>
struct kth_prime<N, 0>;

#include "kth_prime.tpp"

#endif // KTH_PRIME_HPP
