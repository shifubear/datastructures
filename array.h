#ifndef "__array_h_"
#define "__array_h_"

namespace shifu {

template <class T> class Array {
public:
    Array();

    // T operator[]();

private:
    T* firstValuePtr;
}

}

#endif  // #ifndef "__array_h_"