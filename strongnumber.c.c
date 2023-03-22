// C Program to Check Strong Number Using While Loop
#include <stdio.h>
int main(){
    int n, i, rem, temp, fact, sum = 0;
    
    // Asking for input
    printf("Enter a number to check strong number: ");
    scanf("%d", &n);
    
    temp = n;
    while (temp > 0){
        i = 1, fact = 1;
        rem = temp % 10;
        
        while (i <= rem){
            fact = fact * i;
            i++;
        }
        sum = sum + fact;
        temp = temp / 10;
    }
    
    // Displaying output
    if (n == sum){
        printf("%d is a strong number.", n);
    }
    else {
        printf("%d is not a strong number.", n);
    }
    return 0;
}
