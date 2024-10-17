#include <stdio.h>
# include <string.h>
#include <stdbool.h>
//methods for sorting come here :>
//list of sorting algorithms to be implemented:
//bubble sort, selection sort, stalin sort, sleep sort 


int main(){
    int numbers[] = {0,1,2,3,4,5,6,7,8,9};
    char command[201];//command String is 200 chars wide, just in case :)
    bool isRunning = true;
    while(isRunning == true){
        printf("Welcome to Stepsort. :)\n");
        printf("\tYou will have the array:\n\t");
        for (int i = 0; i < 10; i++){
            printf("[%d]", numbers[i]); 
        }
        printf("\n\twhich you can sort with various sorting algorithms. :D\n");
        scanf("%200s", command);
        if (strcmp(command,"Bubblesort") == 0){
            //call bubblesort funtion <3
        } else if (strcmp(command,"Q") == 0){
            isRunning = false;
        } 
        
        //here we compare the char arrays with strcmp(str1,str2)
        //should return 0 if str1 = str2 :)
    }
    return 0;
}