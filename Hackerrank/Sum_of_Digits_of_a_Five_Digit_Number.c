#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n;
    scanf("%d", &n);
    
    int sum = 0; 
    int temp= n % 10;
    while (n--)
    {
        sum = sum + (temp/10) ; 
    temp = n % 10; 
    }
    printf("%d", sum);
    

    return 0;
}