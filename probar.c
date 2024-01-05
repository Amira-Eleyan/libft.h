#include <string.h>
#include <stdlib.h>
#include <stdio.h>

char *ft_strtrim(char const *s1, char const *set)
{
    int i = 0, j = 0, k = 0;
    int start = -1, end = 0;
    char *s;

    // Find the start and end indices of the trimmed string
    while (s1[i]) {
        j = 0;
        while (set[j] && s1[i] != set[j])
            j++;
        if (set[j] == '\0') {  // s1[i] is not in set
            if (start == -1)
                start = i;  // first non-set character
            end = i;  // last non-set character
        }
        i++;
    }

    if (start == -1)  // s1 contains only set characters
        return strdup("");

    // Allocate memory for the trimmed string
    s = (char *)malloc(end - start + 2);
    if (s == NULL)
        return NULL;

    // Copy the trimmed string into s
    for (i = start; i <= end; i++)
        s[k++] = s1[i];
    s[k] = '\0';

    return s;
}

int main(void)
{
    char *s1 = "hello world! hel";
    char *set = "hel";
    printf("%s",ft_strtrim(s1, set));
}