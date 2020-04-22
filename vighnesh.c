#include <stdlib.h>
#include <stdio.h>
#include <string.h>

struct person
{
    char name[25];
    int amount[5];
    int amountSpent;
    int amountToPay;
} p[6];


void calculate(){
    int i,j, amt = 0;
    float div;
    printf("\n__ TOTAL AMOUNT __");
    i = 0;
    while( i < 6 ){
        p[i].amountSpent = 0;
        printf("\n%i\n", i);
        j = 0;
        while( j < 5 ){
            printf("\n%i\n", j);
            p[i].amountSpent += p[i].amount[j];
            j++;
        }
        amt += p[i].amountSpent;
        printf("\n\n\n\n %i is the amt ", amt);
        i++;
        amt = 0;
    }

    
    div = amt/6;
    printf("\n\n\n %f id the div \n\n\n", div);
    i = 0;
    while( i < 6 ){
        if(div == 0 ){
            printf("\n\n%s have to pay RS %f", p[i].name, 0.0);
        }
        else if( (div - p[i].amountSpent) > 0 ) {
            printf("\n\n%s have to pay RS %f", p[i].name, (div - p[i].amountSpent));
        }
        else
        {
            printf("\n\n%s have to get RS %f", p[i].name, (p[i].amountSpent - div));
        }
        i++;
        
    }

    return;
}



int main()
{
    char activities[5][25];
    char names[6][25];
    int amount[5];
    int i = 0, j = 0;
    printf("\n___ Enter today's activities [ 5 in total ]___ \n \n");
    while( i < 5 ){
        printf("\nName of Activity - %i : ",i);
        scanf("%s", activities[i]);
        i++;
    }
    i = 0;
    printf("\n___ Enter the names and amount spent ___ \n \n");
    while( i < 6 ){
        printf("\nName of person - %i : ",i);
        scanf("%s", names[i]);
        strcpy(p[i].name, names[i]);
        j = 0;
        while( j < 5 ){
            printf("\nAmount spent on %s : ",activities[j]);
            scanf("%i", &amount[j]);
            p[i].amount[j] = amount[j];
            j++;
        }
        i++;
    }

    i = 0;
    printf("\n___ the names and amount spent ___ \n \n");
    while( i < 6 ){
        printf("\nName of person - %i : %s ",i,p[i].name);
        j = 0;
        while( j < 5 ){
            printf("\n\nAmount spent on %s : %i ",activities[j], p[i].amount[j]);
            j++;
        }
        i++;
    }

    calculate();


}
