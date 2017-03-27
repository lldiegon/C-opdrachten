#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>

int longestWord(){
    FILE * file = fopen("../main.c", "r");
    char c;
    int i = 0;
    int langste= 0;
    if (file ==  NULL){
		printf("Bestand niet gevonden!");
		return 0;
	}
	
    while((c = fgetc(file)) != EOF) {
        while(isalnum(c)){
            i++;
            c = fgetc(file);
        }
        if (i > langste){
            langste = i;
        }
        i = 0;
    }
    return langste;
    
}
int getWords(char* filename, int word_size, char a[][word_size]){
    FILE * file = fopen(filename, "r");
    char c;
    char holder[word_size];
    int i = 0;
    int l = 0;
    bool act = false;
	
    while((c = fgetc(file)) != EOF) {
        while(isalnum(c)){
            holder[l] = c;
            c = fgetc(file);
            l++;
            act = true;
        }
        if(act == true){
            if (l > 1){
                strcat(a[i], holder);
                a[i][l] ='\0';
                i++;
                act = false;
            }
        }
        l = 0;
    }
    return i;
}
int main(void) {
     int word_size;
     word_size = longestWord();
     char a[1000][word_size];
     int n = getWords("../main.c", word_size, a);
     if (n > 0){
     puts("gevonden woorden:");
         for (int i = 0;i < n; i++){
         printf("%3d %s\n",i,a[i]);
		}
	}
return 0;
}