//
// Created by Minty - Munk on 08-03-2016.
//

#ifndef EXERCISE_5_CIRCULARBUFFER_H
#define EXERCISE_5_CIRCULARBUFFER_H

#include <iostream>

using namespace std;

class CircularBuffer {
public:
    CircularBuffer(unsigned int size);
    CircularBuffer & insert(int x);
    double meanValue();
    void print() const;

private:
    int size_;
    int newestIndex;
    int *arrayPtr_;
};


#endif //EXERCISE_5_CIRCULARBUFFER_H
