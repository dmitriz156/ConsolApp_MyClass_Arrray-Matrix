#include "MyArray.hpp"

using namespace std;

MyArray::MyArray(){
    //cout << "Starting default constructor !" << endl;
    for(int i = 0; i < this->arr_length; i++){
        this->array[i] = 0;
    }
}

MyArray::MyArray(int l){
    //cout << "Starting overloaded constructor !" << endl;
    if (l != this->arr_length)
    {
        for (int i = 0; i < this->arr_length; i++) {
            this->array[i] = 0;
        }
    }
    else
    {
        for (int i = 0; i < this->arr_length; i++) {
            this->array[i] = (rand() % 100000);
        }
    }
}


int MyArray::getLength(){
    return this->arr_length;
}
int MyArray::getElementAt(int i) {
    if ((i < 0) || (i >= this->arr_length))
        return 0;
    else
        return this->array[i];
}
void MyArray::setElementAt(int i, int value)
{
    if ((i < 0) || (i >= this->arr_length))
        return;
    else
        this->array[i] = value;
}
void MyArray::setAllElement()
{
    cout << "Enter the element in order" << endl;
    for (int i = 0; i < this->arr_length; i++) {
        cin >> this->array[i];
    }
}

void MyArray::printArray()
{
    for (int i = 0; i < this->arr_length; i++) {
        cout << "\t" << this->array[i];
    }
    cout << endl;
}



void sum(MyArray array_a, MyArray array_b, MyArray& array_c) {
    if((array_a.getLength() != array_b.getLength()) ||
       (array_b.getLength() != array_c.getLength()) ||
       (array_a.getLength() != array_c.getLength()))
        return;
    for (int i = 0; i < array_a.getLength(); i++) {
        array_c.setElementAt(i, array_a.getElementAt(i) + array_b.getElementAt(i));
    }
    cout << "Sum:" << endl;
    array_c.printArray();
}



void div(MyArray array_a, MyArray array_b, MyArray& array_c, int order) {
    if((array_a.getLength() != array_b.getLength()) ||
       (array_b.getLength() != array_c.getLength()) ||
       (array_a.getLength() != array_c.getLength()))
        return;
    for (int i = 0; i < array_a.getLength(); i++) {
        if (order == 0)
            array_c.setElementAt(i, array_a.getElementAt(i) / array_b.getElementAt(i));
        else if (order == 1)
            array_c.setElementAt(i, array_b.getElementAt(i) / array_a.getElementAt(i));
        else cout << "Incorect order variable" << endl;
    }
    cout << "Diviation:" << endl;
    array_c.printArray();
}

// |||||||||||<LAB #2>|||||||||||
MyMatrix::MyMatrix(){
    cout << "Starting default matrix constructor !" << endl;
    for (int i = 0; i < this->nRow; i++){
        for (int j = 0; j < this->nCol; j++){
            this->matrix_1 [i][j] = 0;
        }
    }
}

int MyMatrix::getNumRows(){
    return this->nRow;
}

int MyMatrix::getNumColumns(){
    return this->nCol;
}


double MyMatrix::getElementAt(int i, int j){
    if ((i < 0) || (i >= this->nRow)){
        if ((j < 0) || (j >= this->nCol)){
           return 0;
        }
    }
    else
        return this->matrix_1[i][j];
}

double MyMatrix::getElementAt2ndMatrix(int i, int j){
    if ((i < 0) || (i >= this->nRow)){
        if ((j < 0) || (j >= this->nCol)){
           return 0;
        }
    }
    else
        return this->matrix_2[i][j];
}

void MyMatrix::setNumRows(){
    int rows;
    cout << "Enter the number of rows" << endl;
    cin >> rows;
    this->nRow = rows;
}

void MyMatrix::setNumColumns(){
    int columns;
    cout << "Enter the number of columns" << endl;
    cin >> columns;
    this->nCol = columns;
}

void MyMatrix::setElementAt(int i, int j, double value){
    if ((i < 0) || (i >= this->nRow)){
        if ((j < 0) || (j >= this->nCol)){
           return;
        }
    }
    else
        this->matrix_1[i][j] = value;
}

void MyMatrix::setElementAt2ndMatrix(int i, int j, double value){
    if ((i < 0) || (i >= this->nRow)){
        if ((j < 0) || (j >= this->nCol)){
           return;
        }
    }
    else
        this->matrix_2[i][j] = value;
}

void MyMatrix::setAllElement(){
    this->setNumRows();
    this->setNumColumns();

    this->matrix_1 = new double* [this->nRow];
    for (int i = 0; i < this->nRow; i++){
        this->matrix_1[i] = new double [this->nCol];
    }

    cout << "Enter the element in order" << endl;
    for (int i = 0; i < this->nRow; i++){
        for (int j = 0; j < this->nCol; j++){
            cin >> this->matrix_1 [i][j];
        }
    }
    this->printMatrix();
}

void MyMatrix::setAllElement2ndMatrix(){

    this->matrix_2 = new double* [this->nRow];
    for (int i = 0; i < this->nRow; i++){
        this->matrix_2[i] = new double [this->nCol];
    }

    cout << "Enter the element in order" << endl;
    for (int i = 0; i < this->nRow; i++){
        for (int j = 0; j < this->nCol; j++){
            cin >> this->matrix_2 [i][j];
        }
    }
    this->printMatrix();
}

void MyMatrix::printMatrix()
{
    for (int i = 0; i < this->nRow; i++){
        for (int j = 0; j < this->nCol; j++){
            cout << "\t" << this->matrix_1 [i][j];
        }
        cout << endl;
    }
}

void MyMatrix::print2ndMatrix()
{
    for (int i = 0; i < this->nRow; i++){
        for (int j = 0; j < this->nCol; j++){
            cout << "\t" << this->matrix_2 [i][j];
        }
        cout << endl;
    }
}

void mirror (MyArray array_a){
    int pnt;
    cout << "Enter the center element" << endl;
    cin >> pnt;
    do{
        int tmp = array_a.getElementAt(0);
        for(int i = 0; i < array_a.getLength(); i++){
            array_a.setElementAt(i, array_a.getElementAt(i + 1));
            //array_a[i] = array_a[i + 1];
        }
        array_a.setElementAt(array_a.getLength() - 1, tmp);
        //array_a[array_a.getLength() - 1] = tmp;
        pnt--;
    }while (pnt != 0);

    array_a.printArray();
    // visArr(arr, size);
}

void init (int *&arr, int &size){
    cout << "The number of array elements" << endl;
    cin >> size;
    cout << "Enter the elements" << endl;
    arr = new int[size];
    int i;
    for (i = 0; i < size; i += 1){
        cin >> arr[i];
    }
    visArr(arr, size);
}

void visArr (int *&arr, int size){
    for (int i = 0; i < size; i++){
        printf("%d", arr[i]);
        printf(" ");
    }
    printf("\n");
}

void initP (int*&arr, int &size){
    cout << "How many elements?" << endl;
    cin >> size;
    arr = new int[size];
    for (int i=0; i < size; i++){
        cout << "What elements?" << endl;
        cin >> arr[i];
    }
}
void task2 (int*arr2, int size2, MyArray array_a){
    cout << "What symbol to replace?" << endl;
    int symbol;
    cin >> symbol;
    for (int i=0; i < size2; i++){
        array_a.setElementAt(arr2[i], symbol);
        //arr1[arr2[i]] = symbol;
    }
    array_a.printArray();
    //visArr(arr1, size1);
}

void Creation (MyMatrix matrix_a, double* &arr){
    double max;
    arr = new double [matrix_a.getNumColumns()];
    for (int j=0; j < matrix_a.getNumColumns(); j++){
        max = matrix_a.getElementAt(0, j);
        for (int i = 0; i < matrix_a.getNumRows(); i++){
            if (matrix_a.getElementAt(i, j) > max)
                max = matrix_a.getElementAt(i, j);
        }
        arr[j] = max;
    }
}
void printArrD (MyMatrix matrix_a, double* &arr){
    cout << "Output array" << endl;
    for (int i = 0; i < matrix_a.getNumColumns(); i++){
        cout << "\t" << arr[i];
    }
    cout << endl;
}

void ChangeMinMax (MyMatrix matrix_a){
    double min = matrix_a.getElementAt(0, 0);
    double max = matrix_a.getElementAt(0, 0);
    int RMI = 0, RMA = 0, CMI = 0, CMA = 0;
    for (int i = 0; i < matrix_a.getNumRows(); i++){
        for (int j = 0; j < matrix_a.getNumColumns(); j++){
            if (matrix_a.getElementAt(i, j) > max){
                CMA = i;
                RMA = j;
                max = matrix_a.getElementAt(i, j);
            }
            if (matrix_a.getElementAt(i, j) < min){
                CMI = i;
                RMI = j;
                min = matrix_a.getElementAt(i, j);
            }
        }
    }
    double tmp = matrix_a.getElementAt(CMA, RMA);
    matrix_a.setElementAt(CMA, RMA, matrix_a.getElementAt(CMI, RMI));
    matrix_a.setElementAt(CMI, RMI, tmp);
    matrix_a.printMatrix();
}

void mult (MyMatrix matrix_a){
    cout << "Filling the 2nd matrix" << endl;
    matrix_a.setAllElement2ndMatrix();
    cout << "Matrix multiplication result:" << endl;
    for (int i = 0; i < matrix_a.getNumRows(); i++){
        for (int j = 0; j <  matrix_a.getNumColumns(); j++){
            matrix_a.setElementAt2ndMatrix(i, j, (matrix_a.getElementAt(i, j) * matrix_a.getElementAt2ndMatrix(i, j)));
        }
    }
    matrix_a.print2ndMatrix();
}
