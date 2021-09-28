#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int arr[5];
    srand(time(NULL));
    
    for(int i = 0; i < 5; i++) {
        arr[i] = rand()%50 - 20;
        printf("%d ", arr[i]);
    }

    double average = 0;
    double sum = 0;
    int amount = 0;
    int neg = -1;
    int modulus = 0;

    for(int i = 0; i < 5; i++) {
        sum += arr[i];
    }

    average = sum / 5;
    printf("\n%f", average);

    for(int i = 0; i < 5; i++) {
        if(arr[i] > average) {
            amount++;
        }
    }

    printf("\n%d", amount);

    for(int i = 0; i < 5; i++) {
        if(arr[i] < 0) {
            neg = i;
            break;
        }
    }

    if(neg == -1) printf("\nthere are no negative numbers");
    else {
        for (int i = neg + 1; i < 5; i++) {
            modulus += abs(arr[i]);
        }
    }

    printf("\n%d", modulus);
}