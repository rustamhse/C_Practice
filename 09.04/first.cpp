// Векторы + файлы + stringstream
// Считать данные из файла в вектор. 
// В середину вектора целого типа поместить элементы этого вектора, кратные пяти. 
// Предусмотреть плохие случаи (несколько пробелов, не числа)
// В начало вектора целого типа записать элементы, являющиеся делителями максимального элемента этого файла. 
// Предусмотреть плохие случаи (несколько пробелов, не числа)

#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>

int main(){
    std::ifstream input_file;
    input_file.open("task_1_file.txt");
    if(!input_file.is_open()){
        std::cerr << "Input file was not opened!";
        return 1;
    }

    std::vector<int> myVector;
    std::string line;

    try {
        while(std::getline(input_file, line, ' ')){
            myVector.push_back(stoi(line));
        }
    } catch (...) {
        std::cerr << "Input file contains unnecessary spaces or letters / symbols / etc!" << std::endl;
        return 1;
    }

    int max = myVector.back();

    std::cout << "Original vector:" << std::endl;

    for(int i = 0; i < myVector.size(); i++){
        if (myVector[i] > max) max = myVector[i];
        std::cout << myVector[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "Put the numbers divisible by five in the middle:" << std::endl;

    for(int i = 0; i < myVector.size(); i++){
        if (myVector[i] % 5 == 0){
            int temp = myVector[i];
            myVector.erase(myVector.begin() + i);
            myVector.insert(myVector.begin() + (int)(myVector.size() / 2), temp);
        }
    }

    for(int i = 0; i < myVector.size(); i++){
        if (myVector[i] > max) max = myVector[i];
        std::cout << myVector[i] << " ";
    }

    std::cout << std::endl;

    std::cout << "Elements that are divisors of the maximal element come first:" << std::endl;

    for(int i = 0; i < myVector.size(); i++){
        if (max % myVector[i] == 0){
            int temp = myVector[i];
            myVector.erase(myVector.begin() + i);
            myVector.insert(myVector.begin(), temp);
        }
    }

    for(int i = 0; i < myVector.size(); i++){
        std::cout << myVector[i] << " ";
    }

    std::cout << std::endl;
}

