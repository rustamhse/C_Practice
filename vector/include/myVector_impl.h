#include "myVector.h"
#include <stdexcept>

template <typename T>
myVector<T>::myVector(){
    size = 1;
    count = 0;
    data = new T[1];
}

template <typename T>
myVector<T>::~myVector(){
    delete[] data;
}

template <typename T>
myVector<T>::myVector(int size){
    this->size = size;
    count = 0;
    data = new T[size];
}

template <typename T>
myVector<T>::myVector(const myVector &other){
    if (this != other){
        this->size = other.size;
        this->count = other.count;
        data = other.data;
    }
}

template <typename T>
myVector<T>::myVector(myVector &&moved){
    if (this != &moved){
        delete this->data;
        this->size = moved.size;
        this->count = moved.count;
        this->data = moved.data;
        delete[] moved.data;
    }
}

template <typename T>
int myVector<T>::get_size() const{    
    return size;
}

template <typename T>
int myVector<T>::get_count() const{    
    return count;
}

template <typename T>
T* myVector<T>::get_data() const{    
    return data;
}

template <typename T>
void myVector<T>::set_size(const int size){    
    this->size = size;
}

// Точно нужен?
template <typename T>
void myVector<T>::set_count(const int count){    
    this->count = count;
}

template <typename T>
T myVector<T>::operator[](const int i) const{
    if (this->size < i or i < 0){
        throw std::invalid_argument("Invalid argument");
    }   
    return this->data[i];
}

template <typename T>
myVector<T>& myVector<T>::operator=(const myVector& other){
    if (this != &other){
        delete this->data;
        this->size = other.size;
        this->count = other.count;
        this->data = other.data;
    }
    
    return *this;
}

template <typename T>
void myVector<T>::push_back(const T &value){
    if (size == count){
        size *= 2;
        T* temp = new T[size];
        for (int i = 0; i<count; i++){
            temp[i] = data[i];
        }
        delete[] data;
        data = temp;
    }
    data[count] = value;
    count += 1;
}

template <typename T>
void myVector<T>::pop_back(){
    if (count != 0){
        T* temp = new T[size];
        for (int i = 0; i<count-1; i++){
            temp[i] = data[i];
        }
        delete[] data;
        data = temp;
        count--;
    }
}