/*sample1 : double type*/
#include "all.h"

using namespace std;

int main(){
    /*set precision*/
    int precision = 15;

    /*set outputfile*/
    ofstream of("output1.txt");

    int mat_dim = 3;
    int vec_elements = 3;
    double *mat_A = new double[mat_dim*mat_dim];
    double *vec_u = new double[vec_elements];
    for(int i=0;i<mat_dim*mat_dim;i++){
        mat_A[i] = 2.0*i;
        if(i < vec_elements) vec_u[i] = 3.0*i;
    }

    /*A = 
    [[ 0.0  2.0  4.0]
     [ 6.0  8.0 10.0]
     [12.0 14.0 16.0]]
     
     u = 
     [ 0.0  3.0  6.0]
    */

   cout << "print matrix A :" << endl; 
   printmat(mat_dim,precision,mat_A);
   of << "print matrix A" << endl;
   fprintmat(of,mat_dim,precision,mat_A);

    cout << "print vector u :" << endl;
   printvec(vec_elements,precision,vec_u);
   of << "print vector u :" << endl;
   fprintvec(of,vec_elements,precision,vec_u);
   of << "print vector u (column display)" << endl;
   fprintvec_col(of,vec_elements,precision,vec_u);
}