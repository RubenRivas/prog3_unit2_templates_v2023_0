//
// Created by rudri on 1/17/2023.
//

#ifndef PROG3_UNIT2_TEMPLATES_V2023_0_VICTOR_H
#define PROG3_UNIT2_TEMPLATES_V2023_0_VICTOR_H


class victor {
    int* data_ = nullptr;
    int sz_ = int();
public:
    victor() = default;                         // Default constructor
    explicit victor(int size);                  // Constructor por parametros
    victor(const victor& other);                // Copy constructor
    victor(victor&& other);                     // Move constructor
    victor& operator=(const victor& other);     // Assigment copy operator
    victor& operator=(victor&& other);          // Assigment move operator
};


#endif //PROG3_UNIT2_TEMPLATES_V2023_0_VICTOR_H
