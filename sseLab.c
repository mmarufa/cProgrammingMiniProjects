/* Q5947*/
#include <stdio.h>

void Readdata(int a[], int n);
void Sort(int a[], int n);
void Output(int a[], int n);

int main()
{
    int a[10];

    Readdata(a, 10);
    Sort(a, 10);
    Output(a, 4);

    return 0;
}

void Readdata(int a[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
}

void Sort(int a[], int n)
{
    int i, j, temp;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - 1 - i; j++)
        {
            if (a[j] < a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

void Output(int a[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%4d", a[i]);
    }
}




/* 4620*/
#include <stdio.h>
#include <string.h>
#define N 100

int Inverse(char str1[], char str2[][N]);

int main()
{
    char str1[N];
    char str2[N][N];
    int n, i;

    printf("Input a sentence:");
    gets(str1);

    n = Inverse(str1, str2);

    for (i = 0; i < n - 1; i++)
    {
        printf("%s ", str2[i]);
    }
    printf("%s%c\n", str2[n - 1], str1[strlen(str1) - 1]);

    return 0;
}

int Inverse(char str1[], char str2[][N])
{
    char temp[N][N];
    int len = strlen(str1);
    int i, j = 0, k = 0;

    for (i = 0; i < len - 1; i++)
    {
        if (str1[i] == ' ')
        {
            temp[k][j] = '\0';
            k++;
            j = 0;
        }
        else
        {
            temp[k][j] = str1[i];
            j++;
        }
    }
    temp[k][j] = '\0';
    k++;

    for (i = 0; i < k; i++)
    {
        strcpy(str2[i], temp[k - 1 - i]);
    }

    return k;
}



/* 6607 */
#include <stdio.h>

int *reverseArray(int arr[], int len);

int main()
{
    int a[10];
    int i;
    int *p;

    printf("Enter 10 integers:\n");
    for (i = 0; i < 10; i++)
    {
        printf("Enter the #%2d integer:", i + 1);
        scanf("%d", &a[i]);
    }

    p = reverseArray(a, 10);

    for (i = 0; i < 10; i++)
    {
        if (i > 0)
            printf(" ");
        printf("%d", p[i]);
    }

    return 0;
}

int *reverseArray(int arr[], int len)
{
    int i, temp;
    for (i = 0; i < len / 2; i++)
    {
        temp = arr[i];
        arr[i] = arr[len - 1 - i];
        arr[len - 1 - i] = temp;
    }
    return arr;
}


/*4035*/
#include <stdio.h>

int LowerCase(char s[]);

int main()
{
    char s[21];
    int count;

    printf("Input a word:\n");
    gets(s);

    count = LowerCase(s);

    printf("%s\n", s);
    printf("%d\n", count);

    return 0;
}

int LowerCase(char s[])
{
    int i, count = 0;

    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            s[i] = s[i] + 32;
            count++;
        }
    }

    return count;
}

