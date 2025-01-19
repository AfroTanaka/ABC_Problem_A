#include <stdio.h>

int main()
{
    char s[11] = {0};
    char t[11] = {0};
    scanf("%s %s", s, t);
    int i = 0;
    while (s[i])
    {
        if (s[i] > t[i])
        {
            puts("No");
            return (0);
        }
        else if (s[i] < t[i])
            break;
        i++;
    }
    puts("Yes");
}