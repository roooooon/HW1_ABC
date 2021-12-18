

//------------------------------------------------------------------------------
// container.h - содержит тип данных,
// представляющий простейший контейнер
//------------------------------------------------------------------------------

#include "number.h"

struct container {
    enum {max_len = 10000}; // максимальная длина
    int len; // текущая длина
    number cont[max_len];
};

//------------------------------------------------------------------------------
// Случайный ввод содержимого контейнера
void con_InRnd(container &con, int size);

//------------------------------------------------------------------------------
// Вывод содержимого контейнера в указанный поток
void con_Out(container &con, ofstream &ofst);

//------------------------------------------------------------------------------
// Ввод содержимого контейнера из указанного потока
void con_In(container &con, ifstream &ifst);

//------------------------------------------------------------------------------
// Очистка контейнера от элементов (освобождение памяти)
void con_Clear(container &con);

//------------------------------------------------------------------------------
// Инициализация контейнера
void Init(container &c);


int binarySearch(int *mas,int size, int item, int low, int high);

void Binaryinsertion(int *mas, int size);
