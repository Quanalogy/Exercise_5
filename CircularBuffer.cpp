//
// Created by Minty - Munk on 08-03-2016.
//

#include "CircularBuffer.h"

CircularBuffer::CircularBuffer(unsigned int size) {

    arrayPtr_ = new int[size]; // create an array from the pointer
    size_ = size;
}

CircularBuffer& CircularBuffer::insert(int x){ }

void CircularBuffer::print() const{
    cout << "This is the array: " << endl;
    for(int i = 0; i < size_; ++i){
        cout << arrayPtr_[i];
    }
    cout << endl;
}

double CircularBuffer::meanValue() { }

