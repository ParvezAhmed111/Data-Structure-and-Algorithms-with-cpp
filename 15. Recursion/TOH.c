#include<stdio.h>

void TOH(int n, char source, char destination, char helper){
    
    //base case
    if (n==0){
        return;
	}
    TOH(n-1, source, helper, destination);
    printf("Mode disc %d from %c to %c \n", n, source, destination);

    TOH(n-1, helper, destination, source);
}

int main(){

    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    
    TOH(n, 'A','B','C');

    return 0;
}