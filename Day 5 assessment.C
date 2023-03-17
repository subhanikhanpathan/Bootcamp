#include<stdio.h>

int main() {
    int num, temp, reverse = 0, digit;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    
    temp = num;
    
    // Reverse the number
    while (temp != 0) {
        digit = temp % 10;
        reverse = reverse * 10 + digit;
        temp /= 10;
    }
    
    // Check for palindrome
    if (num == reverse) {
        printf("%d is a palindrome number", num);
    }
    else {
        printf("%d is not a palindrome number", num);
    }
    
    return 0;
}
