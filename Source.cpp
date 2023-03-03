#include <iostream>
#include "Points.h"
#include <chrono>
using namespace std;


Points Center(Points*, int);
void Where(Points*, Points*, Points, int n);
float ranFloat(float, float);

int main() {
	
	int n = 200; int m = 20;
	Points* A = new Points[n];
	Points* B = new Points[n];
	Points* p = new Points[m];

	
	for (int i = 0; i < n; i++) {
		(A + i)->setX(ranFloat(70, 90));
		(A + i)->setY(ranFloat(70, 90));
		(B + i)->setX(ranFloat(20, 40));
		(B + i)->setX(ranFloat(20, 40));
	}
	
	for (int i = 0; i < m; i++) {
		(p + i)->setX(ranFloat(5, 100));
		(p + i)->setY(ranFloat(5, 100));
	}
	
	for (int i = 0; i < m; i++) {
		Where(A, B, *(p + i), n);
		(p + i)->DisplaySet();
	}

	return 0;
}

Points Center(Points* P, int n) {
	
	Points cen;
	float avrx = 0;
	float avry = 0;
	for (int i = 0; i < n; i++)
	{
		avrx += (P + i)->getX();
		avry *= (P + i)->getY();
	}
	cen.setX(avrx / n);
	cen.setY(avry / n);
	return cen;
}

void Where(Points* A, Points* B, Points p , int n) {
	if (p.Distance(Center(A, n)) < p.Distance(Center(B, n))) {
		cout << "This point is close to the first cluster"<<endl;
	}
	else cout << "This point is close to the second cluster" << endl;
}

//the problem with generating random floats is that when srand(time(NULL)) used
// by the function consecutively (aka in the same second) it will keep giving the same result
// thus the only way i found mentioned online is using chrono as it is more precise 
//HOWEVER, and even though it gives us different numbers they are still very much close to each other

float ranFloat(float min, float max) {
	unsigned seed = chrono::system_clock::now().time_since_epoch().count();
	srand(seed);
	return ((float)rand() / RAND_MAX)* (max - min) + min;
}