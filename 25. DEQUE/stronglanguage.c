#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int dupli();

int main() {
    int n;
    scanf("%d", &n);
    int a[n+1];
    int len, k;
    
    for(int i=0; i<n; i++){
        
        scanf("%d %d", &len, &k);
        
        char *s =(char *) malloc(sizeof(char *));
        scanf("%s",s);

        a[i]=dupli(s,k);
    }
    for(int i=0; i<n; i++){
        if(a[i]==1){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
        
    return 0;
}


int dupli(char s[],int k){
    int count=0;

    if(k==1){
        for(int i=0; i<strlen(s); i++){
            if(s[i]=='*'){
                return 1;
            }
        }
        return 0;
    }
    else{ 
        for(int i=0; i<strlen(s);i++){
            if(s[i]=='*'){
                count=count+1;
                if(count==k){
                    return 1;
                }
            }
            else{
                count=0;
            }  
        }
        return 0;
    }
}