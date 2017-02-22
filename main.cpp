/*
 * 
 */

#include <iostream>
#include "array.h"
using namespace std;

int main() {
    shifu::Array a(10);
    for (int i = 0; i < a.size(); i++) {
        cout << a[i] << endl;
    }
}