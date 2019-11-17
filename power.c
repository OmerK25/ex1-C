#include "myMath.h"
double Pow(double x, int y){
	double ans = x;
	int i =1;
		while (i<y){
		ans = ans*x;
			y--;
}
		return ans;
}	
double Exp(int x){
	double e = 2.71828;
	double ans = Pow(e,x);
		return ans;		
}
				
				
