#include <iostream>

using namespace std;

class Vector {

private:
    int* data;
    int size;
    int capacity;

public:
    Vector(){
        data = nullptr;
        size = 0;
        capacity = 0;
    }

    Vector(int s){
        data = new int[s];
        size = s;
        capacity = s;
    }

    ~Vector(){
        delete[](data);
    }

    int get_size() const{
        return size;
    }

    void set_size(int new_size){
        size = new_size;
    }
};

int main(){
    Vector v;
    v.set_size(5);
}

