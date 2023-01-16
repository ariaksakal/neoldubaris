#include <stdio.h>
#include <math.h>

int main(){

int num;

printf("Please enter a number");
scanf("%d", &num);
    if( num == -1){
       return  0;
}
while (num > 0) {
    if (num % 2 == 0) {
        printf("ITS NOT A PRIME NUMBER\n");
    } else if (num % (int) sqrt(num) == 0) {
        printf("ITS NOT A PRIME NUMBER\n");
    } else if (num % (int) sqrt(num) == 1) {
        printf("ITS A PRIME NUMBER\n");
    } else(num % 2 == 1);
    {
        printf("ITS A PRIME NUMBER\n");
    }
    printf("Please enter a number");
    scanf("%d", &num);
    if (num == -1) {
        break;
    }
}
return 0;
}

