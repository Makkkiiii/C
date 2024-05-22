#include <stdio.h>
#include <string.h>

typedef struct
{
    char service[50];
    char password[50];
} PasswordEntry;

PasswordEntry passwordDatabase[100];
int dbSize = 0;

void addPassword(char *service, char *password)
{
    strcpy(passwordDatabase[dbSize].service, service);
    strcpy(passwordDatabase[dbSize].password, password);
    dbSize++;
}

char *getPassword(char *service)
{
    for (int i = 0; i < dbSize; i++)
    {
        if (strcmp(passwordDatabase[i].service, service) == 0)
        {
            return passwordDatabase[i].password;
        }
    }
    return NULL;
}

int main()
{
    addPassword("email", "password123");
    addPassword("bank", "123456");

    printf("Email password: %s\n", getPassword("email"));
    printf("Bank password: %s\n", getPassword("bank"));

    return 0;
}