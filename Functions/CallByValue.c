#include <stdio.h>

void incrementByValue(int x) {
    x++;
}

int main() {
    int num = 5;
    
    printf("Before function call: %d\n", num);
    
    incrementByValue(num); // Call by value
    
    printf("After function call: %d\n", num);

    return 0;
}
