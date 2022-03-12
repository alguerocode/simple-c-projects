#include <stdio.h>
#include <ctype.h>

int main()
{
    const char questions[][100] = {
        "\nWhat is the best programming language?",
        "\nWhat is the fastest programming language?",
        "\nWhat is the programming language that makes React.js?"};

    const char options[][100] = {
        "\nA. C++\nB. Ruby\nC. Javascript\nD. All of them\n",
        "\nA. C++\nB. Javascript\nC. Golang\nD. Python\n",
        "\nA. Python\nB. Rust\nC. C++\nD. Javascript\n"};
    const char answer[][1] = {'D', 'A', 'D'};

    int score = 0;
    char userChoice;

    for (int i = 0; i < sizeof(questions) / sizeof(questions[0]); i++)
    {
        printf("%s", questions[i]);
        printf("%s", options[i]);

        printf("\nEnter your choice? ");
        scanf("%c", &userChoice);
        scanf("%c");

        userChoice = toupper(userChoice);

        if (userChoice == answer[i][0])
        {
            score++;
        };
    }

    printf("\nYour Score: %d of %d\n", score, (int) sizeof(answer));

    return 0;
}