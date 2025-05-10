#ifndef MYVECTOR_HPP
#define MYVECTOR_HPP

#include <iostream>

template <typename T>
class myVector{
private:
    int size;
    int capacity;
    T* data;

public:

    class myIterator{
    private:
        T* ptr;
    public:
        myIterator(T* p);
        T& operator*() const;
        bool operator!=(const myIterator &other) const;
        bool operator==(const myIterator &other) const;
        T& operator[](int index) const;
        myIterator& operator++();
    };

    myVector();
    ~myVector();
    myVector(int capacity);
    myVector(const myVector &other);
    myVector(myVector &&moved);

    myIterator begin();
    myIterator end();
    myIterator find(const T& value);
    void erase(myIterator pos);

    int get_size() const;
    int get_capacity() const;
    T* get_data() const;

    void set_size(const int size);
    void set_capacity(const int capacity);

    T operator[](const int i) const;
    myVector& operator=(const myVector& other);

    void push_back(const T &value);
    void pop_back();
    T back() const;
    T front() const;
    bool empty();
};

#include "myVector_impl.h"

#endif //MYVECTOR_HPP