# include <stdio.h>

int main(){
    int a = 4;
    for(int i = 1 ; i <= a ; i ++){
        for(int j = 1 ; j <= i ; j ++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
