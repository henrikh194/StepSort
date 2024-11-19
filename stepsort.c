#include <stdio.h>
# include <string.h>
#include <stdbool.h>

void arrayPrint(int array[], int length){
    for (int i = 0; i < length; i++){
            printf("[%d]", array[i]); 
        }
}

void bubbleSortStep(int array[], int length) {
    for (int i = 0; i < length - 1; i++) {
        if (array[i] > array[i + 1]) {
            int memory = array[i];
            array[i] = array[i + 1];
            array[i + 1] = memory;
            break;
        }
    }
}

int stalinSort(int array[], int length) {
    int modifiedSizeOfArray = 1; 

    for (int i = 1; i < length; i++) {
        if (array[i] >= array[modifiedSizeOfArray - 1]) {
            array[modifiedSizeOfArray] = array[i];
            modifiedSizeOfArray++;
        }
    }
    return modifiedSizeOfArray;
}


int main(){
    int numbers[] = {4,3,1,2,5,0,6,7,8,9};
    char command[201];
    int numbersLength = 10;
    bool isRunning = true;
    

    printf("Welcome to Stepsort. :)\n");
    printf("\tYou will have the array:\n\t");
    arrayPrint(numbers, numbersLength);
    printf("\n\twhich you can sort with various sorting algorithms. :D\n");

    while(isRunning == true){   
        printf("\n Enter your command:");
        scanf("%200s", command);

        if (strcmp(command,"Bubblesort") == 0){
            bubbleSortStep(numbers, numbersLength);
            arrayPrint(numbers, numbersLength);
        } else if (strcmp(command,"Stalinsort") == 0){
            numbersLength = stalinSort(numbers, numbersLength);
            arrayPrint(numbers, numbersLength);
        } else if (strcmp(command,"Q") == 0){
            isRunning = false;
            printf("Thank you for using StepSort");
        } 
    }
    return 0;
}