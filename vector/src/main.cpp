#include "myVector.h"
#include <iostream>

int main(){

    std::cout << "### TEST 1 : Creating myArray without parameters ###" << std::endl;

    myVector<int> v;
    std::cout << "v.size when empty is " << v.get_size() << std::endl;
    std::cout << "v.capacity when empty is " << v.get_capacity() << std::endl;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);

    std::cout << "### TEST 1 : Creating myArray without parameters ###" << std::endl;

    v.pop_back();
    for (int i = 0; i < v.get_capacity(); i++){
        std::cout << v[i] << " ";
    }
    std::cout << std::endl;
    std::cout << "v.size now is " << v.get_size() << std::endl;
    std::cout << "v.capacity now is " << v.get_capacity() << std::endl;

    std::cout << "### TEST 2 : Creating myArray with parameters ###" << std::endl;

    myVector<int> v2(10);
    std::cout << "v2.size is " << v2.get_size() << std::endl;
    std::cout << "v2.capacity when empty is " << v2.get_capacity() << std::endl;
    v2.push_back(3);
    v2.push_back(2);
    v2.push_back(1);
    v2.push_back(5);
    v2.pop_back();
    for (int i = 0; i < v2.get_capacity(); i++){
        std::cout << v2.get_data()[i] << " ";
    }
    std::cout << std::endl;
    std::cout << "v2.size now is " << v2.get_size() << std::endl;
    std::cout << "v2.capacity now is " << v2.get_capacity() << std::endl;
    
    std::cout << "v2 front is " << v2.front() << std::endl;;
    std::cout << "v2 back is " << v2.back() << std::endl;

    std::cout << "v2 is empty? Answer is " << v2.empty() << std::endl;

    std::cout << std::endl << "### TEST 3 : Creating iterator for v###" << std::endl;

    myVector<int>::myIterator it(v.begin());
    std::cout << "it[0] is " << it[0] << std::endl;
    std::cout << "v.find(2) is " << *(v.find(2)) << std::endl;
}