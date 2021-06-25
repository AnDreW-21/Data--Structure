#ifndef MAT_MATRIX_H
#define MAT_MATRIX_H

#include<iostream>
using namespace std;
template<class T>
class Matrix {
private:
    T **matrix;
    int nColumns{};
    int nRows{};
public:
    Matrix();

    Matrix(int nRows, int nColumns);

    void setColumns(int Columns);

    void setRows(int Rows);

    int get_nRows();

    int get_nColumns();

    ~Matrix();

    Matrix<T> operator+(Matrix<T> mat);

    Matrix<T> operator-(Matrix<T> mat);

    Matrix<T> operator*(Matrix<T> mat);

    Matrix<T> transpose();
    friend ostream &operator<<(ostream &out,const Matrix<T> &mat){
        for (int i = 0; i < mat.nRows; ++i) {
            for (int j = 0; j < mat.nColumns; ++j) {
                out<<mat.matrix[i][j]<<" ";
            }
            out<<endl;
        }
        return out;
    }

    friend istream &operator>>(istream &input, Matrix<T> &mat){
        for (int i = 0; i < mat.nRows; ++i) {
            for (int j = 0; j < mat.nColumns; ++j) {
                input>>mat.matrix[i][j];
            }
        }
        return input;
    }


};
template<class T>
Matrix<T>::Matrix() {
    nColumns=3;
    nRows=3;
    matrix = new T*[nRows];
    for (int i = 0; i <nRows ; ++i) {
        matrix[i]=new T[nColumns];
    }
    for (int i = 0; i < nRows; ++i) {
        for (int j = 0; j < nColumns; ++j) {
            matrix[i][j]=0;
        }
    }
}
template<class T>
Matrix<T>::Matrix(int nRows, int nColumns) {
    this->nColumns=nColumns;
    this->nRows=nRows;
    matrix = new T*[nRows];
    for (int i = 0; i <nRows ; ++i) {
        matrix[i]=new T[nColumns];
    }
    for (int i = 0; i < nRows; ++i) {
        for (int j = 0; j < nColumns; ++j) {
            matrix[i][j]=0;
        }
    }
}
template<class T>
void Matrix<T>::setColumns(int Columns) {
    Matrix<T>::nColumns=Columns;
}
template<class T>
void Matrix<T>::setRows(int Rows) {
    this->nRows=Rows;
}
template<class T>
int Matrix<T>::get_nColumns() {
    return nColumns;
}

template<class T>
int Matrix<T>::get_nRows() {
    return nRows;
}
template<class T>
Matrix<T>::~Matrix() {
    for (int r = 0; r < nRows; ++r) {
        delete[]matrix[r];
    }
    delete matrix;

}
template<class T>
Matrix<T> Matrix<T>::operator+(Matrix<T> mat) {
    Matrix<T> res(mat.nRows, mat.nColumns);
    if(nColumns==mat.nColumns && nRows==mat.nRows) {
        for (int r = 0; r < mat.nRows; ++r) {
            for (int c = 0; c < mat.nColumns; ++c) {
                res.matrix[r][c] = this->matrix[r][c] + mat.matrix[r][c];
            }
        }
        return res;
    }
    else{
        cout<<"ERROR not equal\n";
        return res;
    }
}
template<class T>
Matrix<T> Matrix<T>::operator-(Matrix<T> mat) {
    Matrix<T>result(nRows,nColumns);
    if(nColumns==mat.nColumns && nRows==mat.nRows) {
        for (int r = 0; r < mat.nRows; ++r) {
            for (int c = 0; c < mat.nColumns; ++c) {
                result.matrix[r][c] = this->matrix[r][c] - mat.matrix[r][c];
            }
        }
        return result;
    }else{
        cout<<"ERROR not equal\n";
        return result;
    }
}
template<class T>
Matrix<T> Matrix<T>::operator*(Matrix<T> mat) {
    Matrix<T> result(nRows,mat.nColumns);
    if(mat.nRows==Matrix<T>::nColumns){
        for (int i = 0; i < nRows; ++i) {
            for (int j = 0; j <mat.nColumns ; ++j) {
                for (int k = 0; k < Matrix<T>::nColumns; ++k) {
                    result.matrix[i][j]+=matrix[i][k]*mat.matrix[k][j];
                }
            }
        }
        return result;
    } else{
        cout<<"ERROR not equal\n";
        return result;
    }

}
template<class T>
Matrix<T> Matrix<T>::transpose() {
    Matrix<T> transpose(nColumns, nRows);
    for (int i = 0; i < nRows; ++i) {
        for (int j = 0; j < nColumns; ++j) {
            transpose.matrix[j][i] = matrix[i][j];
        }
    }
    return transpose;
}
#endif //MAT_MATRIX_H
