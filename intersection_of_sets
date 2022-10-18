#include <stdio.h>
#include<conio.h>
int main ()
{
    int a[100],b[100],c[100],i,j,k=0,n1,n2,n;
    printf("enter the number of element in set A:\n");
    scanf("%d",&n1);
    printf("enter the number of set A:");
        for(i=0;i<n1;i++)
      scanf("%d",&a[i]);
    
    printf("Enter number of element of set B\n");
    scanf("%d",&n2);
    printf("Enter elements of set B\n");
    for( i=0;i<n2;i++)
      scanf("%d",&b[i]);
      
    
    for( i=0;i<n1;i++)
    {
         for(j=0;j<n2;j++)
         {
            if(a[i]==b[j])
            {
                c[k]=a[i];
                k++;
            }
         }
        
    }
    
    printf("intersection of set A and set B is:-\n");
    for(i=0;i<k;i++)
      printf("%d ",c[i]);
    
    return 0; 
}
