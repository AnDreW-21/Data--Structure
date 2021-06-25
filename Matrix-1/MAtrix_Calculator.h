//
// Created by andre on 14/5/2021.
//

#ifndef MATRIX_1_MATRIX_CALCULATOR_H
#define MATRIX_1_MATRIX_CALCULATOR_H

#include "Matrixx.h"
template<class T>
class Matrix_Calculator :public Matrix<T> {
public:
    void print_Menu();

    Matrix <T> add(Matrix <T> a1, Matrix <T> a2);

    Matrix <T> sub(Matrix <T> a1, Matrix <T> a2);

    Matrix <T> Mul(Matrix <T> a1, Matrix <T> a2);

    Matrix <T> tran(Matrix <T> a);


};
template<class T>
void Matrix_Calculator<T>::print_Menu() {
    cout << "Welcome to FCI Matrix Calculator\n"
            "----------------------------------------\n"
            "1- Perform Matrix Addition\n"
            "2- Perform Matrix Subtraction\n"
            "3- Perform Matrix Multiplication\n"
            "4- Matrix Transpose\n";
}

template<class T>
Matrix<T> Matrix_Calculator<T>::add(Matrix<T> a1, Matrix<T> a2) {
    return (a1 + a2);
}

template<class T>
Matrix<T> Matrix_Calculator<T>::sub(Matrix<T> a1, Matrix<T> a2) {
    return (a1 - a2);
}

template<class T>
Matrix<T> Matrix_Calculator<T>::Mul(Matrix<T> a1, Matrix<T> a2) {
    return a1 * a2;
}

template<class T>
Matrix<T> Matrix_Calculator<T>::tran(Matrix<T> a) {
    return a.transpose();
}



#endif //MATRIX_1_MATRIX_CALCULATOR_H
