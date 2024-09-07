
#include <stdio.h>


/*Calcule a sequência de Fibonacci até um número N dado*/
int fibonacci(int n){
    if (n==0)
        return 0;
    else if (n==1)
        return 1;
    else
        return (fibonacci(n - 1) + fibonacci(n - 2));
}

int main() {
    int n;
    
    printf("Insira o número de termos: \n");
    scanf("%d", &n);
    
    printf("Sequência de Fibonacci até %d termos: \n", n);
    for(int i=0; i<n; i++){
        printf("%d ", fibonacci(i));
    }
    return 0;
}
