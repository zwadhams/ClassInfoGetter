#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char classNumber[10];
    char className[40];
    int seats;
    char professor[40];  
    char days[20]; 
    char time[12]; 

} Classes_t;

int main(void);
int readin(Classes_t*);
void choice(Classes_t*, int);
void printclass(Classes_t);
