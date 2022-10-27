#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char eng[10];
    scanf("%s", eng);
    for (int i=0; eng[i] != '\0';i++)
    {
        if (eng[i]==toupper(eng[i]))
            eng[i] = tolower(eng[i]);
        else
            eng[i] = toupper(eng[i]);
    }
    
    printf("%s\n", eng);

    return 0;
}
