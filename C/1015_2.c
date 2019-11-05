#include<stdio.h>
#include<math.h>
int main(){
	double x1,y1,x2,y2,x,y,dis;
	scanf("%lf%lf%lf%lf",&x1,&y1,&x2,&y2);
	x= x1-x2;
	y= y1-y2;
	x=pow(x,2);
	y=pow(y,2);
	dis= pow(x+y,.5);
	printf("%.4lf\n",dis);
    return 0;	
}