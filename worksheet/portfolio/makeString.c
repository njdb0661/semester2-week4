
/*
Name: Jason Chung
Student ID: 201974903
*/

#include <stdio.h>
#include <string.h>

int main( int argc, char **argv ) {

    // define appropriate data to hold your answer
        char buffer[100];

    // process the command-line data using appropriate string functions
        strcpy(buffer,argv[1]);
        strcat(buffer,"-");
        strcat(buffer,argv[2]);
        strcat(buffer,"-");
        strcat(buffer,argv[3]);

    printf("%s\n",buffer);

    return 0;
}