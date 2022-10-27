#include <stdio.h>
#include <stdlib.h>

typedef struct
{
   int xpos;
   int ypos;
}Point;

void getShortest(const Point* points, int n, Point* minP) {
   int i=1;
   int dis=0;
   minP[0]=points[0];
   minP[1]=points[1];
   int minDis = (minP[0].xpos-minP[1].xpos)*(minP[0].xpos-minP[1].xpos)+(minP[0].ypos-minP[1].ypos)*(minP[0].ypos-minP[1].ypos);
   for(int j=0; j<n; j++) {
      for(;i<n; i++) {
         dis = (points[j].xpos-points[i].xpos)*(points[j].xpos-points[i].xpos)+(points[j].ypos-points[i].ypos)*(points[j].ypos-points[i].ypos);
         if(dis<minDis) {
            minDis = dis;
            minP[0]=points[j];
            minP[1]=points[i];
         }
      }
      i++;
   }
}

void getLongest(const Point* points, int n, Point* maxP) {
   int i=1;
   int dis=0;
   maxP[0]=points[0];
   maxP[1]=points[1];
   int maxDis = (maxP[0].xpos-maxP[1].xpos)*(maxP[0].xpos-maxP[1].xpos)+(maxP[0].ypos-maxP[1].ypos)*(maxP[0].ypos-maxP[1].ypos);
   for(int j=0; j<n; j++) {
      for(;i<n; i++) {
         dis = (points[j].xpos-points[i].xpos)*(points[j].xpos-points[i].xpos)+(points[j].ypos-points[i].ypos)*(points[j].ypos-points[i].ypos);
         if(dis>maxDis) {
            maxDis = dis;
            maxP[0]=points[j];
            maxP[1]=points[i];
         }
      }
      i++;
   }
}

int main(void) {
   int hm;
   scanf("%d", &hm);
   Point* point = (Point*)malloc(sizeof(Point)*hm);
   Point* minP = (Point*)malloc(sizeof(Point)*2);
   Point* maxP = (Point*)malloc(sizeof(Point)*2);
   for(int i=0; i<hm; i++) {
      scanf(" %d %d", &point[i].xpos, &point[i].ypos);
   }
   getShortest(point, hm, minP);
   getLongest(point, hm, maxP);
   printf("longest: (%d, %d) (%d, %d)\n", maxP[0].xpos, maxP[0].ypos, maxP[1].xpos, maxP[1].ypos);
   printf("shortest: (%d, %d) (%d, %d)\n", minP[0].xpos, minP[0].ypos, minP[1].xpos, minP[1].ypos);
   return 0;
}
