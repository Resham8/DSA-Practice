#include <cmath>

double areaSwitchCase(int ch, vector<double> a) {
		switch(ch){
		case 1:
			double r,areac; 
			r = a[0];	
			areac = M_PI *r*r;
			return areac;
			break;
		
		case 2:
			double l, b, arear;
			l = a[0];
			b = a[1];
			arear = l * b;
			return arear;
			break;

	}
}
