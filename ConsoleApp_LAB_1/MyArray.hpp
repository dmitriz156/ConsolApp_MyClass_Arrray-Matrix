#ifndef CONSOLEAPPFUNK_LAB_1_H
#define CONSOLEAPPFUNK_LAB_1_H

#include <cmath>
#include <iostream>
#include <stdlib.h>
#include <ctime>

using namespace std;

class MyArray
{

private:
    int arr_length;
//    int array[arr_length];
    int* array;
//    int* pointers_array;

public:
    MyArray();
    MyArray(int l);
    MyArray(int l, int mod);
    MyArray(const MyArray& origin);
    ~MyArray();
    MyArray operator = (MyArray a);
    int getLength();
    int getElementAt(int i);
    void setElementAt(int i, int value);
    void setAllElement();
    void printArray();
    void ResizeArray(int new_length);

    friend void sum(MyArray array_a, MyArray array_b, MyArray& array_c);
    friend void div(MyArray array_a, MyArray array_b, MyArray& array_c, int order);
    //||||||||||||LAB 2
    friend void mirror (MyArray array_a);
    friend void task2(int*arr2, int size2, MyArray array_a);

};

void initP (int*&arr, int &size);

class MyMatrix
{

private:
    double** matrix_1;
    //double** matrix_2;
//    const static int nRow = 3;
//    const static int nCol = 3;
    int nRow;
    int nCol;

public:
    MyMatrix();
    MyMatrix(int row, int col);
    MyMatrix(const MyMatrix& origin);
    ~MyMatrix();
    MyMatrix operator = (MyMatrix a);
    int getNumRows();
    int getNumColumns();
    double getElementAt(int i, int j);
    void setNumRows();
    void setNumColumns();
    void setElementAt(int i, int j, double value);
    void setAllElement();
    void printMatrix();

    //||||||||||||LAB 2
    friend void Creation (MyMatrix matrix_a, double* &arr);
    friend void printArrD (MyMatrix matrix_a, double* &arr);
    friend void ChangeMinMax (MyMatrix matrix_a);
    friend void mult (MyMatrix matrix_a,MyMatrix matrix_b, MyMatrix& matrix_c);

};



#endif // CONSOLEAPPFUNK_LAB_1_H
