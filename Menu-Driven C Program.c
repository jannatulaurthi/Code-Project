#include <stdio.h>
#include <stdlib.h>

int main()
{
    int choice;

    do {
        printf("\n--------MENU-------\n");
        printf("1.Reverse a five-digit number\n");
        printf("2.Print alphabet pattern\n");
        printf("3.Print all prime numbers from 1 to 100\n");
        printf("4.Multiply two 3x3 matrices\n");
        printf("5.Find transpose of a 3x3 matrix\n");
        printf("6.Check whether a 3x3 matrix is symmetric\n");
        printf("7.Check whether a string is palindrome\n");
        printf("8.Convert lowercase characters of a string to uppercase\n");
        printf("9.Exit\n");
        printf("Enter your choice : ");
        scanf("%d", &choice);
switch (choice)
{
case 1: //Reverse a five-digit number//
    {
    int n, rev =0;
    printf("Enter a five-digit number: ");
    scanf("%d", &n);
    while (n>0) {
    rev = rev * 10 + n % 10;
    n /= 10;
    }
    printf("Reverse number: %d\n", rev);
    break;
}
case 2://Print alphabet pattern//
    {
    char arr[] = "ABCDEFGFEDCBA";
    int space = 0;
    for (int i = 7; i >= 1; i--)
    {
        for (int j = 0; j<i; j++)
        printf("%c", arr[j]);
        for (int s=0; s<space; s++)
            printf("   ");
        for (int j=i-1;j>=0;j--)
            printf("%c", arr[j]);
        printf("\n");
        space += 2;
    }
        break;
    }
case 3: //Print all prime numbers from 1 to 100//
     {
    int i, j, prime;
    printf("Prime numbers from 1 to 100 are:\n");
    for (i = 2; i <= 100; i++)
    {
        prime = 1;
        for (j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                prime = 0;
                break;
            }
        }
        if (prime)
            printf("%d\n", i);
    }
            printf("\n");
    break;
}
case 4: //Multiply two 3x3 matrices//
      {
    int a[3][3], b[3][3], result[3][3] = {0};
    int i, j, k;

    printf("Enter elements of first 3x3 matrix: \n");
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            scanf("%d", &a[i][j]);

    printf("Enter elements of second 3x3 matrix: \n");
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            scanf("%d", &b[i][j]);

    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            for (int k = 0; k < 3; k++)
                result[i][j] += a[i][k] * b[k][j];

    printf("Resultant matrix after multiplication:\n");
    for (i = 0; i < 3; i++)
        {
        for (j = 0; j < 3; j++)
            printf("%d ", result[i][j]);
        printf("\n");
        }
    break;
}
case 5: //Find transpose of a 3x3 matrix//
     {
    int matrix[3][3], transpose[3][3];
    int i, j;

    printf("Enter elements of 3x3 matrix: \n");
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            scanf("%d", &matrix[i][j]);

    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            transpose[j][i] = matrix[i][j];

    printf("Transpose of the matrix: \n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++)
            printf("%d ", transpose[i][j]);
        printf("\n");
    }
    break;
}
case 6: //Check whether a 3x3 matrix is symmetric//
     {
    int symMatrix[3][3], isSymmetric = 1;
    int i, j;

    printf("Enter elements of 3x3 matrix:\n");
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            scanf("%d", &symMatrix[i][j]);

    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            if (symMatrix[i][j] != symMatrix[j][i])
                isSymmetric = 0;

    if (isSymmetric)
        printf("The matrix is symmetric.\n");
    else
        printf("The matrix is not symmetric.\n");
    break;
}
case 7: //Check whether a string is palindrome//
     {
    char str[100];
    int i, len=0, flag = 1;

    printf("Enter a string: ");
    scanf("%s", str);


    for (len = 0; str[len] != '\0'; len++);
    for (i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            flag = 0;
            break;
        }
    }
    if (flag)
        printf("The string is a palindrome.\n");
    else
        printf("The string is not a palindrome.\n");
   break;
}
case 8: //Convert lowercase characters of a string to uppercase//
     {
    char inputStr[100];
    int i;

    printf("Enter a string: ");
    scanf("%s", inputStr);

    for (i = 0; inputStr[i] != '\0'; i++) {
        if (inputStr[i] >= 'a' && inputStr[i] <= 'z')
            inputStr[i] -= 32;
        }
    printf("Converted string: %s\n", inputStr);
    break;
}
case 9: //Exit//
    printf("Exiting program...\n");
    break;

default:
        printf("Invalid choice!\n");
     }

    }while (choice != 9);

    return 0;
}

