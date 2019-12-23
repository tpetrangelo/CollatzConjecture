/* Collatz Conjecture

Start with a number n > 1. Find the number of steps 
it takes to reach one using the following process: 
If n is even, divide it by 2. 
If n is odd, multiply it by 3 and add 1.

*/

#include <stdio.h>

int main(){
    
    //Initial values for user choice and number of steps
    int numChoice = 1;
    int stepNum = 0;

    printf("\nPlease enter a number to find the amount of steps \nit takes to reach one using the Collatz Conjecture\n\nNumber: ");
    scanf("%d", &numChoice);
    printf("------------------------------------\n");
    
    //While the number does not equal one, divde by two, or multuply by 3 and add one
    while(numChoice != 1){
        if(numChoice % 2 == 0){
            printf("Step: %d | %d / 2 = ", stepNum+1,numChoice);
            numChoice /= 2;
            printf("%d\n", numChoice);
            stepNum++;
        }else{
            printf("Step: %d | (%d * 3) + 1 = ", stepNum+1, numChoice);
            numChoice *= 3;
            numChoice += 1;
            printf("%d\n", numChoice);
            stepNum++;
        }
        printf("------------------------------------\n");
    }

    //Return the number of steps
    printf("\nThe number of steps equals %d\n", stepNum);
    return 0;
}
