#include <stdio.h>
#include <string.h>

int main()
{
    char username[25], password[25];
    char input_username[25], input_password[25];
    int try = 3;

    // Set username and password
    printf("Set your username: ");
    scanf("%s", username);
    printf("Set your password: ");
    scanf("%s", password);

    // Login attempts
    while (try > 0)
    {
        printf("\nEnter your username: ");
        scanf("%s", input_username);
        printf("Enter your password: ");
        scanf("%s", input_password);

        // Check credentials
        if (strcmp(input_username, username) == 0 && strcmp(input_password, password) == 0)
        {
            printf("Login successful!\n");
            return 0;
        }
        else
        {
            try--;
            printf("Incorrect username or password. You have %d attempts left.\n", try);
        }
    }

    printf("Too many failed attempts. Access denied.\n");
    return 0;
}
