#include <stdio.h>
#include <stdlib.h>
#include "program.h"

int main() {
    
    int numClasses; //hold number of classes in list
    
    Classes_t classes[30]; //creates array of structs
            
    numClasses = readin(classes); //reads in data to array while getting number of classes

    choice(classes, numClasses); //passes array and number of classes to function that does most of the processing

    return(0);
}
