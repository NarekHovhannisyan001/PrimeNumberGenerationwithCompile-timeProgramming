#ifndef IS_PRIME_TPP
#define IS_PRIME_TPP

template <size_t N, size_t I>
struct is_diveded {
    constexpr static bool val = (N % I == 0);
};

template <size_t N, size_t I>
struct check_prime {
    constexpr static bool val = !is_diveded<N, I>::val && check_prime<N, I - 1>::val;
};

template <size_t N>
struct check_prime<N, 1> {
    constexpr static bool val = true;
};

template <size_t N>
struct is_prime {
    constexpr static bool val = check_prime<N, N / 2>::val;
};

template <>
struct is_prime<0> {
    constexpr static bool val = false;
};

template <>
struct is_prime<1> {
    constexpr static bool val = false;
};

template <>
struct is_prime<2> {
    constexpr static bool val = true;
};

template <>
struct is_prime<3> {
    constexpr static bool val = true;
};

#endif // IS_PRIME_TPP