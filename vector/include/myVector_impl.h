#include "myVector.h"
#include <stdexcept>
#include <iostream>

template <typename T>
myVector<T>::myVector(){
    size = 0;
    capacity = 1;
    data = new T[capacity];
}

template <typename T>
myVector<T>::~myVector(){
    delete[] data;
}

template <typename T>
myVector<T>::myVector(int capacity){
    this->capacity = capacity;
    size = 0;
    data = new T[capacity];
}

template <typename T>
myVector<T>::myVector(const myVector &other){
    if (this != &other){
        this->size = other.size;
        this->capacity = other.capacity;
        data = new T[capacity];
        for (int i = 0; i < size; ++i) {
            data[i] = other.data[i];
        };
    }
}

template <typename T>
myVector<T>::myVector(myVector &&moved){
    if (this != &moved){
        delete[] this->data;
        this->size = moved.size;
        this->capacity = moved.capacity;
        this->data = moved.data;
        delete[] moved.data;
    }
}

template <typename T>
int myVector<T>::get_size() const{    
    return size;
}

template <typename T>
int myVector<T>::get_capacity() const{    
    return capacity;
}

template <typename T>
T* myVector<T>::get_data() const{    
    return data;
}

template <typename T>
void myVector<T>::set_size(const int size){    
    this->size = size;
}

template <typename T>
void myVector<T>::set_capacity(const int capacity){    
    this->capacity = capacity;
}

template <typename T>
T myVector<T>::operator[](const int i) const{
    if (this->capacity < i or i < 0){
        throw std::invalid_argument("Invalid argument");
    }   
    return this->data[i];
}

template <typename T>
myVector<T>& myVector<T>::operator=(const myVector& other){
    this->size = other.size;
    this->capacity = other.capacity;
    this->data = other.data;
    
    return *this;
}

template <typename T>
void myVector<T>::push_back(const T &value){
    if (size == capacity){
        capacity *= 2;
        T* temp = new T[capacity];
        for (int i = 0; i<size; i++){
            temp[i] = data[i];
        }
        delete[] data;
        data = temp;
    }
    data[size] = value;
    size++;
}

template <typename T>
void myVector<T>::pop_back(){
    if (size == 0){
        throw std::invalid_argument("myVector is empty!");
    }
    T* temp = new T[capacity];
    for (int i = 0; i<size-1; i++){
        temp[i] = data[i];
    }
    delete[] data;
    data = temp;
    size--;
}

template <typename T>
T myVector<T>::back() const{
    if (size == 0){
        throw std::invalid_argument("myVector is empty!");
    }   
    return data[size-1];
}

template <typename T>
T myVector<T>::front() const{
    if (size == 0){
        throw std::invalid_argument("myVector is empty!");
    }   
    return data[0];
}

template <typename T>
bool myVector<T>::empty(){
    if (size == 0){
        return 1;
    }
    return 0;
}

template <typename T>
myVector<T>::myIterator::myIterator(T* p) : ptr(p) {}

template <typename T>
T& myVector<T>::myIterator::operator*() const{
    return *ptr;
}

template <typename T>
bool myVector<T>::myIterator::operator!=(const myIterator &other) const{
    if (this->ptr != other.ptr) return 1;
    return 0;
}

template <typename T>
bool myVector<T>::myIterator::operator==(const myIterator &other) const{
    if (this->ptr == other.ptr) return 1;
    return 0;
}

template <typename T>
T& myVector<T>::myIterator::operator[](int index) const{
    return *(ptr + index);
}

template <typename T>
myVector<T>::myIterator& myVector<T>::myIterator::operator++(){
    ptr++;
    return *this;
}

template <typename T>
typename myVector<T>::myIterator myVector<T>::begin() {
    return myIterator(data);
}

template <typename T>
typename myVector<T>::myIterator myVector<T>::end() {
    return myIterator(data + size);
}

template <typename T>
typename myVector<T>::myIterator myVector<T>::find(const T& value) {
    if (size == 0){
        throw std::invalid_argument("myVector is empty!");
    }
    for (int i = 0; i < size; i++){
        if (data[i] == value) return myIterator(data + i);
    }
    throw std::invalid_argument("Not found!");
}

template <typename T>
void myVector<T>::erase(myIterator pos) {
    if (size == 0){
        throw std::invalid_argument("myVector is empty!");
    }
    int index = pos.ptr - data;
    for (int i = index; i < size - 1; ++i) {
        data[i] = data[i + 1];
    }
    size--;
}