#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
    // made inside stack memory 
    int A[3][4] = {{1,2,3,4},{4,5,6,7},{7,8,9,0}};
    int *B[3];
    int **C;


    B[0] = (int *) malloc(4*sizeof(int));
    B[1] = (int *) malloc(4*sizeof(int));
    B[2] = (int *) malloc(4*sizeof(int));

    C = (int **) malloc(3*sizeof(int *));
    C[0] = (int *) malloc(4*sizeof(int));
    C[1] = (int *) malloc(4*sizeof(int));
    C[2] = (int *) malloc(4*sizeof(int));
    
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            cout<<i<<j<<endl;
            cout<<B[i][j]<<C[i][j];
        }
        cout<<endl;
    }
    return 0;
}