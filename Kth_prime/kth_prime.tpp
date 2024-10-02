#ifndef KTH_PRIME_TPP
#define KTH_PRIME_TPP

template <size_t N, size_t I>
struct kth_prime {
    constexpr static size_t val = kth_prime<next_prime<N>::val, I - 1>::val;
};

template <size_t N>
struct kth_prime<N, 0> {
    constexpr static size_t val = N;
};

#endif // KTH_PRIME_TPP
