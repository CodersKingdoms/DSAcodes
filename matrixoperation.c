
#include<stdio.h>
#include<conio.h>
void create (int [3][3]);
void display (int [3][3]);
void add (int[3][3],int[3][3],int[3][3]);
void mul (int[3][3],int[3][3],int[3][3]);
void transpose (int[3][3],int[3][3]);
int main ()
 { 
  int mat1[3][3],mat2[3][3], mat3[3][3],mat4[3][3],mat5[3][3];
  printf("mat1:\n");
  create(mat1);
  printf(" mat2:\n");
  create(mat2);
  printf("first array;\n");
  display(mat1);
  printf("second array:\n");
  display(mat2);
  add(mat1,mat2,mat3);
  printf("after addition:\n");
  display(mat3);
  mul (mat1,mat2,mat4);
  printf("after multiplication:\n");
  display(mat4);
  transpose(mat1,mat5);
  printf("transpose of first matrix:\n");
  display(mat5);
 
  return 0;
}

void create (int mat[3][3])
{
  int i,j;
  for(i=0;i<3;i++)
  {
     for(j=0;j<3;j++)
       {
        printf("element of matrix:");
        scanf("%d",&mat[i][j]);
       }
  }     printf("\n ");
}
void display (int mat[3][3])
{
  int i,j;
  for(i=0;i<3;i++)
  {
     for(j=0;j<3;j++)

     printf("%d  ",mat[i][j]);
  printf("\n ");
  }
}
void add (int mat1[3][3],int mat2[3][3],int mat3[3][3])
{
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        mat3[i][j]=mat1[i][j]+mat2[i][j];
    }
}
 void mul (int mat1[3][3],int mat2[3][3],int mat4[3][3])
 {
     int i,j,k,sum;
     for(i=0;i<3;i++)
     {
         for(j=0;j<3;j++)
        { 
            sum=0;
         for(k=0;k<3;k++)
         sum=sum+mat1[i][k]*mat2[k][j];
         
          mat4[i][j]=sum;
        }
     }
 }
void transpose (int mat1[3][3],int mat2[3][3])
{
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        mat2[i][j]=mat1[j][i];
    }
}




