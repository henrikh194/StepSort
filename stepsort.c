#include <stdio.h>
# include <string.h>
#include <stdbool.h>
//methods for sorting come here :>


int main(){
    int numbers[] = {0,1,2,3,4,5,6,7,8,9};
    char command[201];//command String is 200 chars wide, just in case :)
    bool isRunning = true;
    while(isRunning){
        printf("You will search!\n");
        scanf("%200s", &command);
        //here we compare the char arrays with strcmp(str1,str2)
        //should return 0 if str1 = str2 :)
    }
    return 0;
}