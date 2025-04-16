// 1. Разминочная
// Дана строка слов, разделенных пробелами. 
// Сформируйте новую строку, удалив пробелы, 
// с которых может начинаться строка, 
// а каждую внутреннюю группу пробелов замените одним пробелом 

#include <iostream>
#include <vector>
#include <sstream>

int main() {
    std::string line = "        Burya mgloyu nebo     kroet     \n vikhry \n snejnie \n krutya!               ";

    std::stringstream ss(line);

    std::vector<std::string> myVector;

    while(ss >> line){
        myVector.push_back(line);
    }

    std::string new_line;
    
    for (int i = 0; i < myVector.size(); i++){
        new_line += myVector[i];
        if(i != myVector.size() - 1) new_line += ' ';
    }

    std::cout << '"' << new_line << '"' << std::endl;
}