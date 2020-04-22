#include <stdlib.h>
#include <stdio.h>
#include <string.h>


// __ TODO__
// - six names and 5 activitiies
//  - 

// person struct
struct person
{
    char name[50];
    int id;
    int activity[5];//?
} p[6];//6 persons initiated





// person count scoped globally
int p_count = 0;//?

void person()
{
    printf("\033[0;31m");
    // add new person
    if (p_count < 6)
    {
        p[p_count].id = p_count;
        printf("Enter the name of the person\t");
        fgets(p[p_count].name, sizeof(p[p_count].name), stdin);
        printf("Added Successfully\n");
        p_count++;
    }
    else
    {
        printf("Limit exceeded");
    }
    printf("\033[0m");
}

void expenses()
{
    char name[50];
    int count = 0;
    int status = 0;
    // assigns individual expenses to each person

    // checking if the person exists or not
    if (p_count != 0)
    {
        printf("Name of the person\t");
        scanf("%s", name);
        fgets(name, sizeof(name), stdin);
        while (count <= p_count)
        {
            if (strcmp(p[count].name, name) == 0)
            {
                status = 1;
                break;
            }
            else
            {
                count++;
                status = 0;
            }
        }
        if (!status)
            printf("Person not found !!!!");
        else
        {
            printf("%s%s", "Enter expenses of  ", p[count].name);
            for (int i = 0; i < 6; i++)
            {
                printf("%s%s", "Enter expense of activity ", p[count].name);
                scanf("%d", &p[count].expenses[i]);
            }
        }
    }
}

// char activities()
// {
//     char *act[] = {"activity 1", "activity 2", "activity 3", "activity 4", "activity 5"};
//     return (char *) act;
// }

void calculate()
{
    // calculates and split up expenses between each person
    int total_day_expenses = 0;
    int len = sizeof(p);
    for (int i = 0; i <= len; i++)
    {
        for (int j = 0; j <= 5; j++)
        {
            total_day_expenses = total_day_expenses + p[i].expenses[j];
        }
    }
    printf("%d", total_day_expenses);
}

int main()
{
    int option;
    // do
    // {
    //     printf("\n 1. Add Person\n 2. Add Expenses \n 3. View Split Up\n 4. Exit\n\n Select one to continue:\t");
    //     scanf("%d", &option);
    //     // option = getchar();
    //     switch (option)
    //     {
    //     case 1:
    //         person();
    //         break;
    //     case 2:
    //         expenses();
    //         break;
    //     case 3:
    //         calculate();
    //         break;
    //     case 4:
    //         // exit(0);
    //         break;
    //     default:
    //         printf("Invalid Option");
    //     }
    //     printf("What next ?");
    // } while (option != 4);

    do
    {
        printf("\n 1. Add Person\n 2. Add Expenses \n 3. View Split Up\n 4. Exit\n\n Select one to continue:\t");
        scanf("%d", &option);
        // option = getchar();
        if (option == 1)
            person();
        else if (option == 2)
            expenses();
        else if (option == 3)
            calculate();
        else if (option == 4)
            exit(0);

        else
            printf("Invalid Option");
        printf("What next ?");
    } while (option != 4);

    return 0;
}
