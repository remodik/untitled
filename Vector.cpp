#include "Vector.h"
using namespace std;
Vector::Vector() : data(nullptr), size(0), capacity(0) {}
Vector::Vector(const int initialCapacity) {
    size = 0;
    capacity = initialCapacity;
    data = new int[capacity];
}
void Vector::push_back(const int value) {
    if (size == capacity) {
        resise();
    }
    data[size++] = value;
}
void Vector::push_front(const int value) {
    if (size == capacity) {
        resise();
    }
    for (int i = size; i > 0; i--) {
        data[i] = data[i - 1];
    }
    data[0] = value;
    size++;
}
void Vector::emplace(const int index, const int value) {
    if (size == capacity) {
        resise();
    }
    for (int i = size; i > index; i--) {
        data[i] = data[i - 1];
    }
    data[index] = value;
    size++;
}
Vector Vector::reversed() const {
    Vector result(size);
    for (int i = 0; i < size; i++) {
        result.data[i] = data[size - i - 1];
    }
    result.size = size;
    return result;
}
void Vector::fillVector(const int value) const {
    for (int i = 0; i < size; i++) {
        data[i] = value;
    }
}

void Vector::printVector() const {
    for (int i = 0; i < size; i++) {
        cout << data[i] << " ";
    } cout << endl;
}
int Vector::length() const {
    return size;
}
void Vector::resise() {
    capacity = capacity == 0 ? 1 : capacity * 2;
    const auto temp = new int[capacity];
    for (int i = 0; i < size; i++) {
        temp[i] = data[i];
    }

    delete[] data;
    data = temp;
}
Vector::~Vector() {
    delete[] data;
    data = nullptr;
}
