
#ifndef HW1_FRACTION_H
#define HW1_FRACTION_H
#include "rnd.h"
#include <fstream>

struct fraction {
    int numerator, denominator;
};
//------------------------------------------------------------------------------
// Вычисление значения дроби
double fraction_calculation (fraction &f);

//------------------------------------------------------------------------------
// Случайный ввод параметров дроби
void f_IRnd(fraction &f);

//------------------------------------------------------------------------------
// Ввод параметров дроби из файла
void fraction_In(fraction &f, ifstream &ifst);

//------------------------------------------------------------------------------
// Вывод параметров дроби в форматируемый поток
void fraction_Out(fraction &f, ofstream &ofst);


#endif //HW1_FRACTION_H
