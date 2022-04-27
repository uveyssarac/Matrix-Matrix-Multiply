/*
 ============================================================================
 Name        : ödev1.c
 Author      : uveyssarac

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "time.h"

float matrixMatrixMultiplyijk(float **matrix1, float **matrix2, float **matrix3, int size) ;

float matrixMatrixMultiplyikj(float **matrix1, float **matrix2, float **matrix3, int size) ;

float matrixMatrixMultiplyjik(float **matrix1, float **matrix2, float **matrix3, int size) ;

float matrixMatrixMultiplyjki(float **matrix1, float **matrix2, float **matrix3, int size) ;

float matrixMatrixMultiplykij(float **matrix1, float **matrix2, float **matrix3, int size) ;

float matrixMatrixMultiplykji(float **matrix1, float **matrix2, float **matrix3, int size) ;

int main(){
	

	
float **matrix1, **matrix2, **matrix3;
int row1, col1, row2, col2, size;
int i, j, k;

float randomSayi;
float randomSayi2;
srand(time(NULL));

printf("\nMatrisin boyutunu giriniz : ");
scanf("%d", &size);

row1=size;
col1=size;
row2=size;
col2=size;

matrix1 = (float **) malloc(sizeof(float *) * row1);
matrix2 = (float **) malloc(sizeof(float *) * row2);
matrix3 = (float **) malloc(sizeof(float *) * row1);

for(i=0; i<row1; i++){
	
	matrix1[i] = (float *)malloc(sizeof(float) * col1);
}
 	
for(i=0; i<row2; i++){
	
	matrix2[i] = (float *)malloc(sizeof(float) * col2);
}
 
for( i=0; i<row1; i++){
	
	matrix3[i] = (float *)malloc(sizeof(float) * col1);
}


for(i=0; i< row1; i++){
	
	for(j=0; j< col1; j++){
		
		randomSayi=((float)rand()/(float)(RAND_MAX)) * 10.0;
		matrix1[i][j] = randomSayi;
	}
}


for(i=0; i< row2; i++){
	
	for(j=0; j< col2; j++){
		
		randomSayi2=((float)rand()/(float)(RAND_MAX)) * 10.0;
		matrix2[i][j] = randomSayi2;

	}
}
	clock_t start, end;
	double cpu_time_used;
    start = clock();
	
	matrixMatrixMultiplyijk(matrix1, matrix2, matrix3, row1);
//	matrixMatrixMultiplyikj(matrix1, matrix2, matrix3, row1);
//	matrixMatrixMultiplyjik(matrix1, matrix2, matrix3, row1);
//	matrixMatrixMultiplyjki(matrix1, matrix2, matrix3, row1);
//	matrixMatrixMultiplykij(matrix1, matrix2, matrix3, row1);
//	matrixMatrixMultiplykji(matrix1, matrix2, matrix3, row1);

	end = clock();
	cpu_time_used = ((end - start)) / CLOCKS_PER_SEC;
	printf("%.2f",cpu_time_used);
	puts(" ");
	system("pause"); 

return 0;
}
float matrixMatrixMultiplyijk(float **matrix1, float **matrix2, float **matrix3, int size) {
	
	int i,j,k;
	
	for( i=0; i < size; i++){
		
		for(j=0; j < size; j++){
			
 			for(k=0; k < size; k++){
 				
	 			matrix3[i][j] = matrix3[i][j] +  matrix1[i][k] * matrix2[k][j];
		}
	}
}
	return **matrix3;
}

float matrixMatrixMultiplyikj(float **matrix1, float **matrix2, float **matrix3, int size) {
	
	int i,j,k;
	
	for( i=0; i < size; i++){
		
		for(k=0; k < size; k++){

 			for(j=0; j<size; j++){
		 
				matrix3[i][j] = matrix3[i][j] + matrix1[i][k] * matrix2[k][j];
			}
		}
	}
	return **matrix3;
}

float matrixMatrixMultiplyjik(float **matrix1, float **matrix2, float **matrix3, int size) {
	
	int i,j,k;
	
	for( j=0; j < size; j++){
		
		for(i=0; i < size; i++){
			
 			for(k=0; k<size; k++){
			
				matrix3[i][j] = matrix3[i][j] + matrix1[i][k] * matrix2[k][j];
		 }
	}
}
	return **matrix3;
}

float matrixMatrixMultiplyjki(float **matrix1, float **matrix2, float **matrix3, int size) {
	
	int i,j,k;
	
	for( j=0; j < size; j++){
		
		for(k=0; k < size; k++){

 			for(i=0; i<size; i++){
		
				matrix3[i][j] = matrix3[i][j] + matrix1[i][k] * matrix2[k][j];
		 }
	}
}
	return **matrix3;
}

float matrixMatrixMultiplykij(float **matrix1, float **matrix2, float **matrix3, int size) {
	
	int i,j,k;
	
	for( k=0; k < size; k++){
		
		for(i=0; i < size; i++){
			
 			for(j=0; j< size; j++){
			
				matrix3[i][j] = matrix3[i][j] + matrix1[i][k] * matrix2[k][j];
		 }
	}
}
	return **matrix3;
}

float matrixMatrixMultiplykji(float **matrix1, float **matrix2, float **matrix3, int size) {
	
	int i,j,k;
	
	for( k=0; k < size; k++){
		
		for( j=0; j < size; j++){
	
 			for( i=0; i < size; i++){
 				
 				matrix3[i][j] = matrix3[i][j] + matrix1[i][k] * matrix2[k][j];
			 }
	
	}
}
	return **matrix3;
}




