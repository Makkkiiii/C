#include <stdio.h>
// DENISH MAHARJAN
#include <string.h>
int main()
{
    /*
    GIVING DETAIL ON OUR OWN
    char name1[] = "jhilke";
    char name2[] = {'j', 'h', 'i', 'l', 'k', 'e', '\0'};
    printf("\n name1 is %s",name1);
    printf("\n name2 is %s", name2);
*/

    // ASKING FOR DETAIL
    char name[20];
    printf("\n Enter your name");
    scanf("%s", &name);
    printf("\n Name is %s", name);
    return 0;
}
