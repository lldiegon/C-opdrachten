#include <stdio.h>

void transpose_matrix(int size, int matrix[3][3]) {
 // toegestaan vanaf C99
 // 'size' moet voor matrix staan
	for(int i = 0; i < size; i++) {
		for (int j = i+1; j < size; j++) {
			int temp = matrix[i][j];
			matrix[i][j] = matrix[j][i];
			matrix[j][i] = temp;
		}
	}
}

int main(int argc, char **argv)
{
	int size = 3;
	printf("De size is: %d\n", size);
	int matrix[3][3] = {{1,1,1},
					 { 2,2,2},
					 { 3,3,3}};
	
	transpose_matrix(size, matrix);
	for (int i=0; i<3; i++){
		printf("\n");
		for(int j=0; j<3; j++){
			printf("%d", matrix[i][j]);
		}
	}
	return 0;
}
