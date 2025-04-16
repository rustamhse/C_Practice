// 2. Норм
// Дана строка символов и некоторый символ n. 
// Сформируйте новую строку, вставив после каждого вхождения символа n запятую.
// Определите самое большое слово в строке.

#include <iostream>
#include <vector>
#include <sstream>

std::vector<std::string> split_string(std::string s, char delimeter){
    std::vector<std::string> result;
    int pos = 0;
    while (pos < s.size()){
        pos = s.find(delimeter);
        result.push_back(s.substr(0, pos));
        s.erase(0, pos + 1);
    }
    return result;
}

int main() {

    char n = 'a';
    std::string line = "ma pa longa";
    std::string new_line = "";

    for (int i = 0; i < line.size(); i++){
        new_line += line[i];
        if (line[i] == n) new_line += ',';
    }

    int max_chars_count = 0;
    std::string biggest_word;

    std::vector<std::string> new_line_words = split_string(new_line, n);

    for(int i = 0; i < new_line_words.size(); i++){
        if (new_line_words[i].size() > max_chars_count){
            max_chars_count = new_line_words[i].size();
            biggest_word = new_line_words[i];
        }
    }

    std::cout << "New line looks like this: " << new_line <<std::endl;
    std::cout << "Biggest word is: " << biggest_word <<std::endl;
}