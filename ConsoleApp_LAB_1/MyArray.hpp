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
    const static int arr_length = 10;
//    int array[arr_length];
    int* array = new int [arr_length];
//    int* pointers_array;

public:
    MyArray();
    MyArray(int l);
    int getLength();
    int getElementAt(int i);
    void setElementAt(int i, int value);
    void setAllElement();
    void printArray();

};

class MyMatrix
{

private:
    double** matrix_1;
    double** matrix_2;
    int nRow = 0;
    int nCol = 0;

public:
    MyMatrix();
    int getNumRows();
    int getNumColumns();
    double getElementAt(int i, int j);
    double getElementAt2ndMatrix(int i, int j);
    void setNumRows();
    void setNumColumns();
    void setElementAt(int i, int j, double value);
    void setElementAt2ndMatrix(int i, int j, double value);
    void setAllElement();
    void setAllElement2ndMatrix();
    void printMatrix();
    void print2ndMatrix();
};

void sum(MyArray array_a, MyArray array_b, MyArray& array_c);
void div(MyArray array_a, MyArray array_b, MyArray& array_c, int order);
//||||||||||||LAB 2
void mirror (MyArray array_a);
void task2(int*arr2, int size2, MyArray array_a);
void initP (int*&arr, int &size);

void init (int *&arr, int &size);
void visArr (int *&arr, int size);
void SerVar(int *&arr, int size, float &sq);
void swap (int *&arr, int size);

void Creation (MyMatrix matrix_a, double* &arr);
void printArrD (MyMatrix matrix_a, double* &arr);
void ChangeMinMax (MyMatrix matrix_a);
void mult (MyMatrix matrix_a);

void MatrVis (double **&matr,int nRow, int nCol);
void matrix (double **&matr,int &nRow, int &nCol);
void MatrVis (double **&matr,int nRow, int nCol);
//void change_min_max (double **&matr,int nRow, int nCol);
//void mult (double **&matr,int nRow, int nCol, double **&matr2);


#endif // CONSOLEAPPFUNK_LAB_1_H
