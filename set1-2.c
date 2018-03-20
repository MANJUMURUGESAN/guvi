#include <stdio.h>

int main(void) {
	// your code goes here

    int a;

    printf("Enter an integer: ");
    scanf("%d", &a);

   
    if(a % 2 == 0)
        printf("%d is even.", a);
    else
        printf("%d is odd.", a);

	return 0;
}
