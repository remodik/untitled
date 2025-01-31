#ifndef VECTOR_H
#define VECTOR_H
#include <iostream>
#pragma once

class Vector {
    int *data;
    int size;
    int capacity;

    void resise();
public:
    Vector();
    Vector(int initialCapacity);

    void push_back(int value);
    void push_front(int value);
    void emplace(int index, int value);
    Vector reversed() const;
    void fillVector(int value) const;
    void printVector() const;
    int length() const;

    ~Vector();
};

#endif //VECTOR_H
