#ifndef NEXT_PRIME_TPP
#define NEXT_PRIME_TPP

template <size_t N, bool B>
struct next_helper {
    constexpr static size_t val = next_helper<N + 1, is_prime<N + 1>::val>::val;
};

template <size_t N>
struct next_helper<N, true> {
    constexpr static size_t val = N;
};

template <size_t N>
struct next_prime {
    constexpr static size_t val = next_helper<N + 1, is_prime<N + 1>::val>::val;
};

#endif // NEXT_PRIME_TPP
