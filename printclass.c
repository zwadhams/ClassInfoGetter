#include "program.h"

void printclass(Classes_t class) {

    printf("%-35s %-11s %-25s %-3d %-5s %s", class.className, class.classNumber,  
           class.professor, class.seats, class.days, class.time);

    return;
}
