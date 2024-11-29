#include<stdio.h>
#include<math.h>
 int main()
 {
 	float x,y,z,max,min,sum,tich,S;
 	scanf("%f%f%f",&x,&y,&z);
 	  sum= x+y+z;
 	  tich= x*y*z;
	  S= (x+y+z)/2;
 	max=x>y&&x>z?x:(y>z?y:z);
 	min=x<y&&x<z?x:(y<z?y:z);
 	printf("a) max=%.0f min =%.0f\n",max, min);
 	if (sum>tich) printf("b)min=%.0f\n",tich);
	else printf("b) min=%0.f\n",sum) ;
	if (S>tich) printf("c) %.2f",(float)pow(tich,2)+1);
	else printf("c)%.2f",(float)pow(S,2)+1) ;
 	return 0;
 }
