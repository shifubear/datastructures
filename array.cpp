#include <string>
#include "array.h"

Array::Array () {
    firstValuePtr = NULL;
}

template <class T> 
Array::Array (int size) {
    firstValuePtr = malloc(size * size(T));
}

Array::~Array() {
    delete firstValuePtr;
}