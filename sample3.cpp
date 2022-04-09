/*sample3 tridiagonal matrix*/
#include "all.h"

using namespace std;

int main(){
    /*set precision*/
    int precision = 5;

    /*set outputfile*/
    ofstream of("output3.txt");

    int mat_dim = 6;
    double *diag = new double[mat_dim];
    double *subdiag = new double[mat_dim];
    for(int i=0;i<mat_dim;i++){
        diag[i] = 2.0*i;
        if(i != mat_dim-1) subdiag[i] = 3.0*i;
        else subdiag[i] = 0.0;
    }

    /*
    A = 
    [[ 0.0  0.0  0.0  0.0  0.0  0.0]
     [ 0.0  2.0  3.0  0.0  0.0  0.0]
     [ 0.0  3.0  4.0  6.0  0.0  0.0]
     [ 0.0  0.0  6.0  6.0  9.0  0.0]
     [ 0.0  0.0  0.0  9.0  8.0 12.0]
     [ 0.0  0.0  0.0  0.0 12.0 10.0]]
     diag = [0.0 2.0 4.0 6.0 8.0 10.0 12.0]
     subdiag = [0.0 3.0 6.0 9.0 12.0 0.0]
    */

    cout << "print matrix A : " << endl;
    print_tri_diag_vec(mat_dim,precision,diag,subdiag);
    fprint_tri_diag_vec(of,mat_dim,precision,diag,subdiag);
}