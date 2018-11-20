#include "array.h"
#include <iostream>

using namespace std;
template<typename T>
array<T> array<T>::operator+(array<T> ar1,array<T> ar2){
    sizee = ar1.getSize()+ar2.getSize();
    array arr = new array[sizee];
    for(int i=0,i<ar2.getSize(),i++)
        ar1.push_back(ar2[i]);
    for(int j=0,j<sizee,i++)
        arr.push_back(ar1[j]);
    return arr;
    }
