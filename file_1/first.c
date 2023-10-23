#include <stdio.h>

int main(){
int myNum = 15;

int myOtherNum = 23;

// Assign the value of myOtherNum (23) to myNum
myOtherNum = myNum;

// myNum is now 23, instead of 15
printf("%d", myOtherNum);
return 0;
}