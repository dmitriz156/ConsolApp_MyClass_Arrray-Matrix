
#include "MyArray.hpp"
#include <iostream>

using namespace std;

MyArray array_a(10);
MyArray array_b(10);
MyArray array_c;

MyMatrix matrix_a;
MyMatrix matrix_b;

void WorkOnTheArray();
void WorkOnTheMatrix();

int main()
{
    int key;
    do{
        cout << "MENU" << endl;
        cout << "1. Work on the array" << endl;
        cout << "2. Work on the matrix" << endl;
        cout << "0. Exit" << endl;
        cout << "Your choice:" << endl;
        cin >> key;
        switch (key) {
        case 0:
            exit (0);
            break;
        case 1:
            system("cls");
            WorkOnTheArray();
            break;
        case 2:
            system("cls");
            WorkOnTheMatrix();
            break;
        }
        system("pause");
        system("cls");
    }while(key != 0);
}

void WorkOnTheArray()
{
    int size_po_arr;
    int *pointers_array;
    int key;
    do {
        cout << "MENU" << endl;
        cout << "1. Changing the data of the 1st array" << endl;
        cout << "2. Changing the data of the 2nd array" << endl;
        //cout << "3. Array operations" << endl;
        cout << "<||||| Array operations LAB 1 |||||>" << endl;
        cout << "3. Sum" << endl;
        cout << "4. Dividing the 1st by the 2nd" << endl;
        cout << "5. Dividing the 2nd by the 1st" << endl;
        cout << "6. Show arrays" << endl;
        cout << "<||||| Array operations LAB 2 |||||>" << endl;
        cout << "7. Mirroring of dynamic elements array relative to the selected position" << endl;
        cout << "8. Filling the main array with the values passed on the array of pointers" << endl;
        cout << "0. Return to the main menu" << endl;
        cout << "Your choice:" << endl;
        cin >> key;
        switch (key) {
        case 0:
            exit(0);
        case 1:
            array_a.setAllElement();
            break;
        case 2:
            array_b.setAllElement();
            break;
        case 3:
            sum(array_a, array_b, array_c);
            break;
        case 4:
            cout << "Dividing of array 1 by array 2" << endl;
            div(array_a, array_b, array_c, 0);
            break;
        case 5:
            cout << "Dividing of array 2 by array 1" << endl;
            div(array_a, array_b, array_c, 1);
            break;
        case 6:
            array_a.printArray();
            array_b.printArray();
            break;
        case 7:
            mirror(array_a);
            break;
        case 8:
            initP(pointers_array, size_po_arr);
            task2(pointers_array, size_po_arr, array_a);
            break;
        }
        system("pause");
        system("cls");
    } while (key != 0);
}

void WorkOnTheMatrix()
{
    double *arr;
    int key;
    do{
        cout << "MENU" << endl;
        cout << "1. Filling the matrix" << endl;
        cout << "2. A dynamic array of maximum column values" << endl;
        cout << "3. Replacing the minimum and maximum value by places" << endl;
        cout << "4. Element-wise multiplication of two matrices" << endl;
        cout << "5. Output the matrix" << endl;
        cout << "6. Output the array (1)" << endl;
        cout << "Your choice:" << endl;
        cin >> key;
        switch (key) {
        case 0:
            break;
        case 1:
            matrix_a.setAllElement();
            //matrix(matr, nRow, nCol);
            break;
        case 2:
            Creation(matrix_a, arr);
            printArrD(matrix_a, arr);
            break;
        case 3:
            ChangeMinMax(matrix_a);
            break;
        case 4:
            mult(matrix_a);
            break;
        case 5:
            matrix_a.printMatrix();
            //MatrVis(matr, nRow, nCol);
            break;
        case 6:
            printArrD(matrix_a, arr);
            break;
        }
        system("pause");
        system("cls");
    }while(key != 0);
}
