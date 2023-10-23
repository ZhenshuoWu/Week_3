#include <stdio.h>

int main() {

    int mark = 40;

    if (mark >= 70)
    {
        printf ("The mark of %d is D\n", mark);
    }
    else if (50<= mark < 70)
    {
        printf ("The mark of %d is P\n", mark);
    }
    else if (mark < 50)
    {
        printf ("The mark of %d is F\n", mark);
    }

    return 0;
}
    