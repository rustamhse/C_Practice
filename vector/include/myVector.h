#ifndef MYVECTOR_HPP
#define MYVECTOR_HPP

template <typename T>
class myVector{
private:
    int size;
    int count;
    T* data;

public:
    myVector();
    ~myVector();
    myVector(int size);
    myVector(const myVector &other);
    myVector(myVector &&moved);

    int get_size() const;
    int get_count() const;
    T* get_data() const;

    void set_size(const int size);
    void set_count(const int count);

    T operator[](const int i) const;
    myVector& operator=(const myVector& other);

    void push_back(const T &value);
    void pop_back();
};

#include "myVector_impl.h"

#endif //MYVECTOR_HPP