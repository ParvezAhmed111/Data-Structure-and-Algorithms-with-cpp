#include<stdio.h>
#include <string.h>
#include<stdbool.h>
const int N=1e6;

int isPalindrome(char str[], int s, int e){

    if(s==e) return 1;
    

    if(str[s]==str[e]){
        return isPalindrome(str, ++s, --e);
    }
    else return 0;

    return 0;
}

int main(){
    char str[N];
    scanf("%s", str);

    int n= strlen(str)-1;

    if(isPalindrome(str, 0, n)) printf("Yes");
    else printf("No");

    return 0;
}


