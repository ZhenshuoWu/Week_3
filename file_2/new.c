#include<stdio.h>
int main(){
    int number;
    printf ("Enter the mark: \n");
    scanf ("%d", &number);
    if (number == 0)
    {
    printf ("number of %d is zero\n",number);
    }
    else if (number < 0)
    {
    printf ("the number of %d is negative\n",number);
    }
    else
    {
    printf("the number of %d is positive\n",number);
    }
    
    return 0;
}
