#include <iostream>
#include <string>

enum class Color {red, green, orange};
enum class Fruit {apple, orange, pear};

template <typename T>
class Traits;

template<>
class Traits<Color> {
public:
    std::string name(int index){
        switch (index)
        {
            case 0 : 
                return "red";
            case 1 : 
                return "green";
            case 2 : 
                return "orange";
            default : 
                return "unknown";
        }
    }
};

template<>
class Traits<Fruit> {
public:
    std::string name(int index){
        switch (index)
        {
            case 0 : 
                return "apple";
            case 1 : 
                return "orange";
            case 2 : 
                return "pear";
            default : 
                return "unknown";
        }
    }
};

int main() {
    Traits<Color> traits_color;
    Traits<Fruit> traits_fruit;
    int t = 0;
    std::cin >> t;
    for (int i = 0; i != t; ++i) {
        int index1;
        std::cin >> index1;
        int index2;
        std::cin >> index2;
        std::cout << traits_color.name(index1) << " ";
        std::cout << traits_fruit.name(index2) << "\n";
  }
}