#include "worker.hpp"
#include <iostream>

int main(){
    Developer my_developer("Rustam", "Zieev", 22, 999999, false, "C++", 1);
    my_developer.print(std::cout);

    Driver my_driver("Alexandra", "Musina", 21, 999999, true, 192819039);
    my_driver.print(std::cout);

    std::vector<std::string> courses;

    Tutor my_tutor("Andrew", "Vovk", 23, 999999, true, courses);
    my_tutor.add_course("C");
    my_tutor.add_course("C++");
    my_tutor.print(std::cout);
}
