// 1. Разминочная
// Дана строка слов, разделенных пробелами. 
// Сформируйте новую строку, удалив пробелы, 
// с которых может начинаться строка, 
// а каждую внутреннюю группу пробелов замените одним пробелом 

#include <iostream>
#include <vector>
#include <sstream>

int main() {
    std::string line = "Burya mgloyu nebo     kroet     \n vikhry \n snejnie \n krutya!";
    // std::getline(std::cin, line);

    std::stringstream ss(line);

    while(ss >> line){
        std::cout << line << ' ';
    }
    std::cout << std::endl;
}