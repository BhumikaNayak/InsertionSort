
//sorting a number using insertion sort
#include<stdio.h>
int main()
{
    int arr[10]; //function to print array element
    int i,j,number;//declaration of variables

    printf("Enter the size of array:"); 
    scanf("%d\n",&number);

    for(i=0;i<number;i++)  //using for loop
    {
    {
    scanf("%d",&arr[i]);
    }
    int count=arr[i];
    j=i-1;

    while( j>=0 && arr[j]>count)   //using while loop
    {                            //impleament of insertion sort 
        arr[j+1]=arr[j];
        j=j-1;
    }
        arr[j+1]=count;
    }
    
    //result 

    printf("Elements after sorting are:");
    for(i=0;i<number;i++)
    {
        printf("%d\n",arr[i]);
    }   

    return 0;
}
  //code by Bhumika Nayak