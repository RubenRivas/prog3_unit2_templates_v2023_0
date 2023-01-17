#include <iostream>
#include <type_traits>
#include <vector>
#include "victor.h"
using namespace std;

void ejemplo() {
//    victor v1(10);
//    victor v2(10);s
//
//    v1 = v2;    // Copio constructor (delete, new)
//
//    v1 = std::move(v2);  // v2 se deshabilita (data_ = nullptr, sz_ = 0)
//    swap(v1, v2); // v1 data_ = ptr1, sz_ = 10, v2 data_ = ptr2, sz_ = 20
//    // v1 data_ = ptr2, sz_ = 20, v2 data_ = ptr1, sz_ = 10
//    auto tmp = std::move(v1);
//    v1 = std::move(v2);
//    v2 = std::move(tmp);
//
//    int** data_ = nullptr;
//
//    delete [] data_;
}

template <typename T>
auto sumar(T a, T b) {
    cout << __PRETTY_FUNCTION__ << endl;
    return a + b;
}

template <typename ...Ts>   // Variadic template
auto sumar3(Ts... ts) {
    cout << __PRETTY_FUNCTION__ << endl;
    return (... + ts);      // Fold expression
}

template <typename T1, typename T2>
auto sumar2(T1 a, T2 b) {
    cout << __PRETTY_FUNCTION__ << endl; // Testear
    return a + b;
}


int main() {
    cout << sumar(10, 20) << endl;  // El tipo T es deducido del tipo de valor
    cout << sumar2(10, 5.5) << endl;
    cout << sumar<float>(10, 5.5) << endl; // Declaracion explicita
    cout << sumar3(10, 5.5) << endl;
    cout << sumar3(10, 1, 4, 5) << endl;
    return 0;
}
