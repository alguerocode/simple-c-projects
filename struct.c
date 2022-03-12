#include <stdio.h>
#include <string.h>

struct Person
{
    char name[12];
    int age;
    char admin;
};

int main()
{

    // first implementation
    struct Person person_one;

    // second implementation
    struct Person person_two = {"david", 23, 'T'};

    // third implementation
    struct Person user1 = {"max1", 23, 'F'};
    struct Person user2 = {"max2", 3, 'T'};
    struct Person user3 = {"max3", 13, 'F'};
    struct Person user4 = {"max4", 24, 'T'};

    struct Person users[] = {user1, user2, user3, user4};

    person_one.age = 23;
    strcpy(person_one.name, "max");
    person_one.admin = 'F'; // mean false;

    printf("name: %s\n", person_one.name);
    printf("age: %i\n", person_one.age);
    printf("Is admin: %c\n\n", person_one.admin);

    printf("name: %s\n", person_two.name);
    printf("age: %i\n", person_two.age);
    printf("Is admin: %c\n\n", person_two.admin);

    printf("thrid implementation: \n\n");

    for (int i = 0; i < sizeof(users) / sizeof(users[0]); i++)
    {
        printf("name: %s\n", users[i].name);
        printf("age: %i\n", users[i].age);
        printf("Is admin: %c\n\n", users[i].admin);
    }
    return 0;
}
