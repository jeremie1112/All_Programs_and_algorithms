#include<iostream>
using namespace std;

int A[10][10],mul[10][10],B[10][3],C[10][10],i,j,r,c,k=1,m=0,ch;

//representation of a sparse matrix
void sparserep(int A[][10]){ 
    k=1,m=0;
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){ 
            if(A[i][j]!=0){ 
                B[k][0]=i;
                B[k][1]=j; 
                B[k][2]=A[i][j]; 
                k++;
                m++;
            }
        }
    } 
    B[0][0]=r;
    B[0][1]=c;
    B[0][2]=m;
    cout << "Sparsed matrix in triplet form " << endl; 
    for(i=0;i<k;i++){
        for(j=0;j<3;j++){ 
            cout<<B[i][j]<<" ";
        }
        cout<<endl;
    }
}

//taking a sparse matrix as an input
void InputSparse(){
    cout<<"Enter the elements for the matrix 1:" << endl; 
    for(i=0;i<r;i++)
        for(j=0;j<c;j++) 
            cin>>A[i][j]; 
        sparserep(A);
        cout<<"Enter the elements for the matrix 2:" << endl; 
        for(i=0;i<r;i++)
            for(j=0;j<c;j++) 
                cin>>C[i][j]; 
            sparserep(C);
        }

//performing transpose operation on a sparse matrix
void transsparse(){
    cout<<"Enter the elements for the matrix :" << endl; 
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            cin>>A[i][j];
        }
    }
    sparserep(A);
    cout<<"The Transposed Sparse Matrix in triplet Representation is:" <<endl; 
    for(i=0;i<k;i++)
        cout<<B[i][1]<<" "<<B[i][0]<<" "<<B[i][2]<<endl;
    }
    

//adding two sparse matrices
void addsparse(){ 
    InputSparse(); 
    for(i=0;i<r;i++) 
        for(j=0;j<c;j++) 
            A[i][j]+=C[i][j];
        cout<<"Added Sparse Matrix in triplet Representation is:" << endl; 
        sparserep(A);
    }

//multiplying two sparse matrices
void mulsparse(){ 
    InputSparse(); 
    for(i=0;i<r;i++) 
        for(j=0;j<c;j++){ 
            mul[i][j]=0; 
            for(k=0;k<c;k++) 
                mul[i][j]+=A[i][k]*C[k][j];
        }
        cout<<"Product of matrices" << endl;
        sparserep(mul);
    }


//Main function
int main(){
    cout<<"Enter the no. of row and column of matrix A :" <<endl; 
    cin>>r>>c;
    cout<<"Enter choice :" <<endl; 
    cout<<"1 Transpose"<<endl; 
    cout<<"2 Addition"<<endl; 
    cout<<"3 Multiplication"<<endl; 
    cin>>ch;

    switch(ch){
        case 1: transsparse(); break;
        case 2: addsparse(); break;
        case 3: mulsparse(); break;
        default: cout<<"Error";
    }
return 0;
}