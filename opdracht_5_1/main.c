#include <stdio.h>
#include <stdbool.h>

bool is_sorted(int a[10], int size) { 
    if (size <= 1){
        printf("De array bevat maar 1 getal, voeg meer getallen aan de array toe");
		//printf("%d", size);
        return true;
    }
    else if(size == 2){
        printf("De array bevat maar 2 getallen, voeg meer getallen aan de array toe");
		//printf("%d", size);
        return true;
    }
    else if(size > 2){
		//printf("%d", size);
        return is_sorted(a, size - 1); 
    }
    return false;
 }


int main(int argc, char **argv)
{
    int size = 10;
    int a[10] = {1,2,3,4,5,6,7,8,10,9};
	
    if(is_sorted(a,size)){
        printf("De array is gesorteerd");
    }
    else{
        printf("De array is niet gesorteerd");
    }
}