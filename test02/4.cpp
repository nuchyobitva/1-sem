#include <iostream>
#include <sstream>
using namespace std;
void destroy( int ** nums, int rows ){
    for( int i = 0; i < rows; ++i ) delete [] nums[ i ];
    delete [] nums;
}
int** matr_create( int cols,int rows){
    int** matrix;
    matrix = new int*[rows];
    for ( int i = 0; i < rows; ++i) {
        matrix[i] = new int[cols];
        for ( int j = 0; j < cols; ++j) {
            matrix[i][j] = 0.0f;
        }
    }
    return matrix;
}
void write(int** matrix,int cols1,int rows1){
    for ( int j = 0; j < rows1; j++) {
        for ( int i = 0; i < cols1; i++) {
            if (matrix[j][i] == -0)  matrix[j][i] = 0;
            cout << matrix[j][i] << " ";
        }
        cout << endl;
    }
}
bool size_str( int& cols, int& rows){
    string string1;
    int rows1,cols1;
    char comma;
    getline(cin, string1);
    istringstream str(string1);
    if ((str >> rows1)&&(str >> comma) && (str >> cols1) && (comma == ',')&&(rows1>0)&&(cols1>0)){
        rows=rows1;
        cols=cols1;
        return true;
    }
    return false;
}
void snail(int **&matrix, int cols,int rows,int k,int fnum){   
    if(cols==0||rows==0)	return;
    if(cols==1||rows==1){
    	  int tmp=0;
    	  for(int i=0;i<cols;i++){
       	  matrix[0+k][i+k]=fnum+tmp;
       	  tmp++;
       	  }
              for(int i=1;i<rows;i++){
       	       matrix[k+i][k+cols-1]=fnum+tmp;
       	       tmp++; 
       	  }
       	  return;
    }
    int tmp=0;
    for(int i=0;i<cols;i++){
       	   matrix[0+k][i+k]=fnum+tmp;
       	  tmp++;	
       	  }
    for(int i=1;i<rows;i++){
       	       matrix[k+i][k+cols-1]=fnum+tmp;
       	       tmp++;
       	  }
    for(int i=cols-2;i>-1;i--){
       	  	matrix[k+rows-1][k+i]=fnum+tmp;
       	  	tmp++;
       	  }
    for(int i=rows-2;i>0;i--){
       	    matrix[k+i][0+k]=fnum+tmp;
       	    tmp++;
       	  }
       	 if(cols-2<0||rows-2<0) 	return;
    snail(matrix,cols-2,rows-2,k+1,fnum+tmp);
}
int main(){
    int** matrix;
     int cols,rows;
    if(size_str(cols,rows)){  
       matrix=matr_create(cols,rows);
       snail(matrix,cols,rows,0,1);
       write(matrix,cols,rows);
       destroy(matrix,rows);
    }
    else {
    	cout<<"An error has occured while reading input data";
    	exit(0);
    }
}
