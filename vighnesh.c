#include <stdlib.h>
#include <stdio.h>
#include <string.h>

struct person
{
    char name[50];
    int id;
    int activities[5];
} p[6];


int main()
{
    char activities[5][25];
    char names[6][25];
    int i = 0;
    printf("___ Enter today's activities [ 5 in total ]___ \n \n");
    while( i < 5 ){
        printf("Name of Activity - 1 : ");
        scanf("%s", activities[i]);
        i++;
    }
    i = 0;
    printf("___ Enter the names and amount spent ___ \n \n");
    while( i < 5 ){
        printf("Name of person - 1 : ");
        scanf("%s", names[i]);
        i++;
    }


}
