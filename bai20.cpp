#include <stdio.h>
#include <math.h>
int sumOfCubes(int n) {
	int sum = 0;
    while (n != 0) {
        int digit = n % 10;  
        sum += pow(digit, 3);
        n /= 10;  
    }
    return sum;
}
int main() {
    int n;
    scanf("%d", &n);
    int binhphuong =pow(n,2);                
    int sum = sumOfCubes(n);     
    if (binhphuong == sum) {
        printf("DUNG=%d",sum);
    } else {
        printf("SAI ");
    }

    return 0;
}
