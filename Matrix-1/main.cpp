#include <iostream>
#include "Matrixx.h"
#include "MAtrix_Calculator.h"
using namespace std;
int main() {
    int count,rows,colums,ROW,COL;
    while (true){
        Matrix_Calculator<int>sample;
        sample.print_Menu();
        cin>>count;
        if(count==1){
            cin>>rows>>colums;
            Matrix<int>mat1(rows,colums);
            cin>>mat1;
            cin>>ROW>>COL;
            Matrix<int>mat2(ROW,COL);
            cin>>mat2;
            cout<<sample.add(mat1,mat2);
        }else if(count==2){
            cin>>rows>>colums;
            Matrix<int>mat1(rows,colums);
            cin>>mat1;
            cin>>ROW>>COL;
            Matrix<int>mat2(ROW,COL);
            cin>>mat2;
            cout<<sample.sub(mat1,mat2);
        } else if(count==3){
            cin>>rows>>colums;
            Matrix<int>mat1(rows,colums);
            cin>>mat1;
            cin>>ROW>>COL;
            Matrix<int>mat2(ROW,COL);
            cin>>mat2;
            cout<<sample.Mul(mat1,mat2);
        } else if(count==4){
            cin>>rows>>colums;
            Matrix<int>res(rows,colums);
            cin>>res;
            cout<<sample.tran(res);
        }else
            break;

}
    return 0;
}
