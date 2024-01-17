#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//variable declaration
int randNum;

char randchar(){
    
    //26 letters in the alphabet
    //rand() for random
     randNum = 26 * (rand() / (RAND_MAX +  1.0));
     
     //97 is letter A in ASCII code
     randNum = randNum + 97;
}