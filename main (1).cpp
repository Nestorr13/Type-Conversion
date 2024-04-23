#include <iostream>
#include <string>

int main() {  
    setlocale(0, "ru");
    std::string str = "129956";
    int num = 0;
    for (int i = 0; i < 6; i++) {
        char ch = str[i];
        num += ch - '0';
    }
    std::cout << num << std::endl;

    int f_side = 34;
    int s_side = 17;
    int t_side = 98;
    if ((f_side + s_side) > t_side && (s_side + t_side) > f_side && (f_side + t_side) > s_side) {
        std::cout << "Треугольник существует" << std::endl;
    } else {
        std::cout << "Треугольник не существует" << std::endl;
    }

    return 0;
}