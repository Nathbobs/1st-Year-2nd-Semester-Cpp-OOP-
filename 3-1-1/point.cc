#include <stdio.h>

typedef struct
{
    int xpos;
    int ypos;
}Point;

Point getScale2xPoint(Point* p, int s){
    p->xpos *= s;
    p->ypos *= s;
}

void swapPoints(Point*p1, Point*p2) {
    Point swap;
    swap.xpos = p1->xpos;
    swap.ypos = p1->ypos;

    p1->xpos = p2->xpos;
    p1->ypos = p2->ypos;

    p2->xpos = swap.xpos;
    p2->ypos = swap.ypos;
}

int main(void){
    int d, dd;
    Point p1;
    Point p2;

    scanf("%d %d %d", &(p1.xpos), &(p1.ypos), &d);
    scanf("%d %d %d", &(p2.xpos), &(p2.ypos), &dd);

    printf("Calling getScale2xPoint() for (%d, %d)\n", (p1.xpos), (p1.ypos));
    printf("Calling getScale2xPoint() for (%d, %d)\n", (p2.xpos), (p2.ypos));

    getScale2xPoint(&p1, d);
    getScale2xPoint(&p2, dd);
    swapPoints(&p1, &p2);
    
    printf("p1: %d %d\n", p1.xpos, p1.ypos);
    printf("p2: %d %d\n", p2.xpos, p2.ypos);

    return 0;
}


