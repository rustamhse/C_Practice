#include "worker.hpp"
#include <iostream>

int main(){
    Worker my_worker("Rustam", "Zieev", 22, "System Analyst", 999999, true);
    my_worker.print(std::cout);

    Worker other_worker("Alexandra", "Musina", 21, "QA Engineer", 999998, true);
    other_worker.print(std::cout);

    Worker default_worker;
    default_worker.print(std::cout);
}
