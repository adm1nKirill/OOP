
#include "complex_numbers.h"

namespace variant9123 {
    // Считывание и вывод комплексных чисел
    void complex_numbers::InSpecific(std::ifstream &ifstr) {
        ifstr >> real >> imaginary; // Считываем мнимую и действительную часть
        if (!ifstr.eof()) ifstr.get(); // Переход на новую строку
    }

    void complex_numbers::OutSpecific(std::ofstream &ofstr) {
        ofstr << "[COMPLEX NUMBER = ";
        // Вывод комплексного числа в виде xi + y
        ofstr << imaginary << "i"; // xi
        // Вывод действительного числа со знаком "+"
        if (real >= 0) ofstr << "+" << real << "]" << std::endl;
        else ofstr << real << "]" << std::endl; // Со знаком "-"
    }

}