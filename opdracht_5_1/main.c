#include <stdio.h>
#include <stdbool.h>

bool is_sorted(int a[], int size){ 
	if (size <= 1){
		return true;
	}
	else if(size == 2){
		if (a[size -2] < a[size -1]) {
			return is_sorted(a, size - 1); 
		}
		else{
			return false;
		}
	}
	else if(size > 2){
		if (a[size -2] < a[size -1]) {
			return is_sorted(a, size - 1); 
		}
		else{
			return false;
		}
	}
	return false;
}

int main(int argc, char **argv){
    int size = 10;
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	
    if(is_sorted(a,size)){
        printf("De array is gesorteerd");
    }
    else{
        printf("De array is niet gesorteerd");
    }
}