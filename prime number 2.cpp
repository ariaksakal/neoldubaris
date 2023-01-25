#include <stdio.h>
#include <math.h>
int primenum(int num){
    while (num > 0) {
        if (num % 2 == 0) {
            printf("ITS NOT A PRIME NUMBER\n");
        } else if (num % (int) sqrt(num) == 0) {
            printf("ITS NOT A PRIME NUMBER\n");
        } else if (num % (int) sqrt(num) == 1) {
            printf("ITS A PRIME NUMBER\n");
        } else(num % 2 == 1);
        {

        }
        printf("Please enter a number");
        scanf("%d", &num);
        if (num == -1) {
            break;
        }
    }
    return 0;
}
int main(){

    int num;
    printf("Write a number you want to know if its prime or not");
    scanf("%d",&num);
    printf("%d",primenum(num));
    return 0;
}
