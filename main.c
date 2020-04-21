#include <stdio.h>
#include <string.h>

// person struct
struct person
{
    char name[50];
    int id;
    int expenses[6];
} p[5];

// person count scoped globally
int p_count = 0;

void person()
{
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
        {
            printf("Person not found !!!!");
        }
    }
    p[count].expenses[]
}

void calculate()
{
    // calculates and split up expenses between each person
}

int main()
{

    person();
    person();
    expenses();
    return 0;
}
