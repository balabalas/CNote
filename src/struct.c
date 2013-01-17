
#include "stdio.h"

struct point 
{
    int x;
    int y;
};

int main()
{
    struct point p1 = {110, 220};
    struct point *p2 = &p1;

    printf("x is %d and y is %d\n", p1.x, p1.y);
    printf("x is %d and y is %d\n", (*p2).x, p2->y);  /* for a struct pointer. you can access its member both two way.*/

    /* Test the signs level */
    struct point pa[3] = {{111, 122}, {211, 222}, {311, 322}};
    struct point *ppa = &pa[0];

    printf("ppa->x is        %d\n", ppa->x);            /*  111  */
    printf("(ppa++)->x is    %d\n", (ppa++)->x);        /*  111  */
    ppa--;
    printf("(++ppa)->x is    %d\n", (++ppa)->x);        /*  211  */
    ppa--;

    printf("++ppa->x is      %d\n", ++ppa->x);          /*  112  */
    printf("after ppa->x is  %d\n", ppa->x);            /*  112  */
    printf("ppa->x++ is      %d\n", ppa->x++);          /*  112  */
    printf("after ppa->x is  %d\n", ppa->x);            /*  113  */

    return 0;
}


