
struct Bar
{
    int value = 0;

    constexpr auto & operator++() { ++value; return *this; } // returning Bar & works
};
