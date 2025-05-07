#include "myVector.h"
#include <iostream>

int main(){

    std::cout << "### TEST 1 : Creating myArray without parameters ###" << std::endl;

    myVector<int> v;
    std::cout << "v.size when empty is " << v.get_size() << std::endl;
    std::cout << "v.count when empty is " << v.get_count() << std::endl;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.pop_back();
    for (int i = 0; i < v.get_count(); i++){
        std::cout << v[i] << " ";
    }
    std::cout << std::endl;
    std::cout << "v.size now is " << v.get_size() << std::endl;
    std::cout << "v.count now is " << v.get_count() << std::endl;

    std::cout << "### TEST 2 : Creating myArray with parameters ###" << std::endl;

    myVector<int> v2(10);
    std::cout << "v2.size is " << v2.get_size() << std::endl;
    std::cout << "v2.count when empty is " << v2.get_count() << std::endl;
    v2.push_back(3);
    v2.push_back(2);
    v2.push_back(1);
    v2.push_back(5);
    v2.pop_back();
    for (int i = 0; i < v2.get_count(); i++){
        std::cout << v2.get_data()[i] << " ";
    }
    std::cout << std::endl;
    std::cout << "v2.size now is " << v2.get_size() << std::endl;
    std::cout << "v2.count now is " << v2.get_count() << std::endl;
}