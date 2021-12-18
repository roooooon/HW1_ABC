#include "container.h"

//------------------------------------------------------------------------------
// Случайный ввод содержимого контейнера
void con_InRnd(container &con, int size) {
    while (con.len < size) {
        if (num_InRnd(con.cont[con.len])) {
            con.len++;
        }
    }
}

//------------------------------------------------------------------------------
// Вывод содержимого контейнера в указанный поток
void con_Out(container &con, ofstream &ofst) {
    ofst << "Container contains " << con.len << " elements." << endl;
    for (int i = 0; i < con.len; i++) {
//        cout << con.cont;
//        cout << "\n";
        ofst << i << ": ";
        num_Out(con.cont[i], ofst);
    }
}

//------------------------------------------------------------------------------
// Ввод содержимого контейнера из указанного потока
void con_In(container &con, ifstream &ifst) {
    while (!ifst.eof()) {
        if (num_In(con.cont[con.len], ifst)) {
            con.len++;
        }
    }
}

//------------------------------------------------------------------------------
// Очистка контейнера от элементов (освобождение памяти)
void con_Clear(container &con) {
    con.len = 0;
}

//------------------------------------------------------------------------------
// Инициализация контейнера
void Init(container &c) {
    c.len = 0;
}

//------------------------------------------------------------------------------
// Сортировка языков программирования по их частному
int binarySearch(int *mas,int size ,int value, int start, int end) {
    if (end <= start) {
        if (mas[start] < value)
            return start;
        else
            return start + 1;
    }
    int mid = (start + end) / 2;
    if (value == mas[mid])
        return mid + 1;
    if (mas[mid] > value)
        return binarySearch(mas,size, value, mid + 1, end);
    else return binarySearch(mas,size, value, start, mid - 1);
}

//    if (high <= low) {
//        return (item < mas[low]) ? (low + 1) : low;
//    }
//    long long mid = (low + high) / 2;
//    if (item == mas[mid]) {
//        return mid + 1;
//    }
//    if (item < mas[mid]) {
//        return binarySearch(mas, size, item, mid + 1, high);
//    }
//    return binarySearch(mas, size, item, low, mid - 1);
//}

void Binaryinsertion(int* mas, int size) {
    for (int i = 1; i <size; ++i) {
        //cout << mas[i];
        //cout <<"\n";
        int j = i - 1;
        int value = mas[i];
        int index = binarySearch(mas,size,value, 0, j);
        while (j >= index) {
            mas[j + 1] = mas[j];
            --j;
        }
        mas[j + 1] = value;
    }
}

