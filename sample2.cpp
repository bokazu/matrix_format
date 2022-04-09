/*sample2 int type*/
#include "all.h"

using namespace std;

int main(){
    /*set precision*/
    int precision = 3;
    ofstream of("output2.txt");

    int mat_dim = 3;
    int vec_elements = 3;
    int *mat_B = new int[mat_dim*mat_dim];
    int *vec_v = new int[vec_elements];

    for(int i=0;i<mat_dim*mat_dim;i++){
        mat_B[i] = i;
        if(i < vec_elements) vec_v[i] = i;
    }

    /*
    B = 
    [[0  1  2]
     [3  4  5]
     [6  7  8]]

     u = 
     [0  1  2]
    */

   cout << "print matrix B :" << endl; 
   printmat<>(mat_dim,precision,mat_B);
   of << "print matrix A" << endl;
   fprintmat<>(of,mat_dim,precision,mat_B);

    cout << "print vector u :" << endl;
   printvec<>(vec_elements,precision,vec_v);
   of << "print vector u :" << endl;
   fprintvec<>(of,vec_elements,precision,vec_v);
   of << "print vector u (column display)" << endl;
   fprintvec_col<>(of,vec_elements,precision,vec_v);
}