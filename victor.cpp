//
// Created by rudri on 1/17/2023.
//

#include "victor.h"
#include <algorithm>
using namespace std;

victor::victor(int size) {

}

victor::victor(const victor &other) { // Copiar el contenido de otro en el actual (this)
   // Copio el tamaño (sz_)
   sz_ = other.sz_;
   // Copia del contenido de data
   data_ = new int[sz_];
   copy(other.data_, other.data_ + sz_, data_);
}

victor::victor(victor &&other) {  // Mover el contenido de otro en el actual (this)
   sz_ = other.sz_;
   data_ = other.data_;  // Copia la referencia en el nuevo victor
   // Deshabilitacion de other
   other.sz_ = 0;
   other.data_ = nullptr;
}

victor &victor::operator=(const victor &other) {
    if (this == &other) return *this;

    // Liberar memoria anterior
    delete [] data_;

    // Copio el tamaño (sz_)
    sz_ = other.sz_;

    // Copia del contenido de data
    data_ = new int[sz_];
    copy(other.data_, other.data_ + sz_, data_);

    return *this;
}

victor &victor::operator=(victor &&other) {
    if (this == &other) return *this;
    delete [] data_;
    sz_ = other.sz_;
    data_ = other.data_;  // Copia la referencia en el nuevo victor
    // Deshabilitacion de other
    other.sz_ = 0;
    other.data_ = nullptr;
    return *this;
}