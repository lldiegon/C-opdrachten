#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
#define EXIT_SUCCESS 0;


void compress(char* src_filename, char* dest_filename){
	FILE *source, *outfile;
	source = fopen(src_filename, "rb");
	outfile = fopen(dest_filename, "w");
	
	if (source == NULL || outfile == NULL){
		printf("De source of het output bestand niet gevonden!");
	}
	
	char c;
	bool loop = true;
	
	while ((fgetc(source)) != EOF){
		while (isspace(c) && loop == true){
			c = '\0';
			c = fgetc(source);
		}
		if (isalpha(c)){
			loop = false;
		}
		if (c == '\n' || c == '\r'){
			loop = true;
		}
		fprintf(outfile, "%c", c);
	}
	
	fclose(source);
	fclose(outfile);
}

int main(int argc, char **argv)
{
	char* src_filename = "../opdracht_4_3.c";
	char* dest_filename = "../opdracht_4_3_compressed.c";
	compress(src_filename,dest_filename);
	printf("Ez pz");
	return EXIT_SUCCESS;
}
