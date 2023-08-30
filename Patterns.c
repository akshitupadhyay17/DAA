#include <stdio.h>

void right_triangle(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<i; j++){
            printf("*");
            
        }
        printf("\n");
    }
}
    

void right_triangle_inverted(int n){
    for(int i=0; i<n; i++){
        for(int j=n; j>i; j--){
            printf("*");
            
        }
        printf("\n");
    }
}
    
void full_pyramid(int n){

	for (int i = 0; i < n; i++) {

		for (int j = 0; j < 2 * (n - i) - 1; j++) {
			printf(" ");
		}

		for (int k = 0; k < 2 * i + 1; k++) {
			printf("* ");
		}
		printf("\n");
	}

}

void full_pyramid_inverted(int n){

	for (int i = 0; i < n; i++) {

		for (int j = 0; j < 2 * i; j++) {
			printf(" ");
		}

		for (int k = 0; k < 2 * (n - i) - 1; k++) {
			printf("* ");
		}
		printf("\n");
	}
}

void diamond(int n){
    
    for (int i = 0; i < 2 * n - 1; i++) {
  
        int comp;
        if (i < n) {
            comp = 2 * (n - i) - 1;
        }
        else {
            comp = 2 * (i - n + 1) + 1;
        }
  
        for (int j = 0; j < comp; j++) {
            printf(" ");
        }
  
        for (int k = 0; k < 2 * n - comp; k++) {
            printf("* ");
        }
        printf("\n");
    }
}

void hourglass(int n){

    for (int i = 0; i < 2 * n - 1; i++) {
  
        int comp;
        if (i < n) {
            comp = 2 * i + 1;
        }
        else {
            comp = 2 * (2 * n - i) - 3;
        }
  
        for (int j = 0; j < comp; j++) {
            printf(" ");
        }

        for (int k = 0; k < 2 * n - comp; k++) {
            printf("* ");
        }
        printf("\n");
    }
}

void left_triangle_inverted(int n){

    for (int i = 0; i < n; i++) {

        for (int j = 0; j < 2 * i; j++) {
            printf(" ");
        }

        for (int k = 0; k < n - i; k++) {
            printf("* ");
        }
        printf("\n");
    }
  
}

void left_triangle(int n){

    for (int i = 0; i < n; i++) {

        for (int j = 0; j < 2 * (n - i) - 1; j++) {
            printf(" ");
        }

        for (int k = 0; k <= i; k++) {
            printf("* ");
        }
        printf("\n");
    }
}

int main(){
    
    right_triangle(6);
    printf("\n");

    right_triangle_inverted(5);
    printf("\n");

    left_triangle(5);
    printf("\n");

    left_triangle_inverted(5);
    printf("\n");

    full_pyramid(5);
    printf("\n");

    full_pyramid_inverted(5);
    printf("\n");

    diamond(5);
    printf("\n");

    hourglass(5);
    printf("\n");











}
