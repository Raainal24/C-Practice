#include <stdio.h>
int main()
{
int matrix_1[3][3], matrix_2[3][3], finalMatrix[3][3], ch;
printf("Enter your choice: \n");
printf("1. Add \n");
printf("2. Transpose: \n");
printf("3. Multiply \n");
scanf("%d", &ch);

switch (ch)
{
case 1:
{
printf("\nEnter Contents of First matrix: \n");
for (int i = 0; i < 3; i++)
{
for (int j = 0; j < 3; j++)
{
printf("A[%d][%d]: ", i + 1, j + 1);
scanf("%d", &matrix_1[i][j]);
}
printf("\n");
}

printf("Matrix 1: \n");
for (int i = 0; i < 3; i++)
{

for (int j = 0; j < 3; j++)
{
printf("%d ", matrix_1[i][j]);
}
printf("\n");
}
printf("\n");

printf("Enter Contents of Second matrix: \n");
for (int i = 0; i < 3; i++)
{
for (int j = 0; j < 3; j++)
{
printf("B[%d][%d]: ", i + 1, j + 1);
scanf("%d", &matrix_2[i][j]);
}
printf("\n");
}

printf("Matrix 2: \n");
for (int i = 0; i < 3; i++)
{
for (int j = 0; j < 3; j++)
{
printf("%d ", matrix_2[i][j]);
}
printf("\n");
}
printf("\n");

for (int i = 0; i < 3; i++)
{
for (int j = 0; j < 3; j++)
{
finalMatrix[i][j] = matrix_1[i][j] + matrix_2[i][j];
}
}
printf("Final Matrix: \n");
for (int i = 0; i < 3; i++)
{
for (int j = 0; j < 3; j++)
{
printf("%d ", finalMatrix[i][j]);
}
printf("\n");
}
break;
}
case 2:
{
printf("\nEnter Contents of matrix: \n");
for (int i = 0; i < 3; i++)
{
for (int j = 0; j < 3; j++)
{
printf(" A[%d][%d]: ", i + 1, j + 1);
scanf("%d", &matrix_1[i][j]);
}

printf("\n");
}
printf("Matrix : \n");
for (int i = 0; i < 3; i++)
{
for (int j = 0; j < 3; j++)
{
printf("%d ", matrix_1[i][j]);
}
printf("\n");
}
printf("\n");

for (int i = 0; i < 3; i++)
{
for (int j = 0; j < 3; j++)
{
finalMatrix[j][i] = matrix_1[i][j];
}
}

printf("Transpose Matrix : \n");
for (int i = 0; i < 3; i++)
{
for (int j = 0; j < 3; j++)
{
printf("%d ", finalMatrix[i][j]);
}
printf("\n");

}
printf("\n");

break;
}
case 3:
{
printf("\nEnter Contents of First matrix: \n");
for (int i = 0; i < 3; i++)
{
for (int j = 0; j < 3; j++)
{
printf("A[%d][%d]: ", i + 1, j + 1);
scanf("%d", &matrix_1[i][j]);
}
printf("\n");
}

printf("Matrix 1: \n");
for (int i = 0; i < 3; i++)
{
for (int j = 0; j < 3; j++)
{
printf("%d ", matrix_1[i][j]);
}
printf("\n");
}
printf("\n");

printf("\nEnter Contents of Second matrix: \n");
for (int i = 0; i < 3; i++)
{
for (int j = 0; j < 3; j++)
{
printf("B[%d][%d]: ", i + 1, j + 1);
scanf("%d", &matrix_2[i][j]);
}
printf("\n");
}
printf("Matrix 2: \n");
for (int i = 0; i < 3; i++)
{
for (int j = 0; j < 3; j++)
{
printf("%d ", matrix_2[i][j]);
}
printf("\n");
}
printf("\n");

for (int i = 0; i < 3; i++)
{
for (int j = 0; j < 3; j++)
{
finalMatrix[i][j] = 0;
for (int k = 0; k < 3; k++)
{
finalMatrix[i][j] += matrix_1[i][k] * matrix_2[k][j];

}
}
}
printf("Final Matrix: \n");
for (int i = 0; i < 3; i++)
{
for (int j = 0; j < 3; j++)
{
printf("%d ", finalMatrix[i][j]);
}
printf("\n");
}
printf("\n");
break;
}
default:
printf("\nInvalid Choice");

break;
}

printf("\n\n");
return 0;
}