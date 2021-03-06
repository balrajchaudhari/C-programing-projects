#include<stdio.h>
#include<stdlib.h>




//escape sequences

//Printing ASCII VALUES of escape sequences
int main(void)
{
    printf("%d",'\n');
    printf("\n %d",'\b');
    printf("\n %d",'\t');
    printf("\n %d",'\r');
    return 0;
}

/*
int main(void)
{
    printf("\\n");
    return 0;
}
*/

//'\n' new line character  10
//'\t' tab space  9
//'\b' back space  8
// '\r' carriage return   13

/*
int main()
{
    //escaping the actual meaning of character n 
    printf("\n");
    return 0;
}
*/


/*
// Cprogramming\\day4\\day4_4.c
int main(void)
{
    printf("Cprogramming\\\\day4\\\\day4_4.c");
    return 0;
}
*/

/*
int main(void)
{
    // \r takes a cursor on the first character of same line and
    //it starts over writing
    printf("Good Evening\rExcellent");
    //     Excellenting
    return 0;
}


*/

/*
int main(void)
{
    printf("OM14-\bBatch");
    //      OM14Batch
    return 0;
}
*/


/*
    "OM14 CProgramming"
    DAY04\Escape    Sequence

*/

/*
int main()
{
    printf("\"OM14 CProgramming\"");
    printf("\n DAY04\\ Escape\t Sequence");
    return 0;
}
*/