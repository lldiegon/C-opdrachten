#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int read_matrix(const char *filename, int size, char matrix[size][size]){
	FILE *in_file;
	in_file = fopen(filename, "rb");
	
	//Hier checkt hij of het bestand klopt
	if (in_file == NULL){
		printf("Dit bestand kan niet worden geopent!");
		exit(1);
	}
	char n = fgetc(in_file);
	//Hier staat het vullen van de matrix
	for (int i = 0; i < size; i++){
		for (int j = 0; j < size; j++){
			matrix[i][j] = n;
			n = fgetc(in_file);
		}
	}
	
	fclose(in_file);
	return 0;
}


int main(int argc, char **argv){
	const char *filename = "../binary_sudoku_puzzle.txt";
	int size=0;
	FILE *file;
	file = fopen(filename, "rb");
	char c[100];
	fgets(c,99,file);
	size = strlen(c);
	fclose(file);
	char matrix[size][size];
	
	read_matrix(filename,size,matrix);
	//Hier staat het printen van de matrix
	for (int i=0; i<size; i++){
		printf("\n");
		for(int j=0; j<size; j++){
			printf("%c", matrix[i][j]);
		}
	}
	return 0;
}
