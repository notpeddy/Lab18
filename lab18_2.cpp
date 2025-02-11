	#include<iostream>
	using namespace std;

	struct Rect{
		double x,y,w,h;
	};

	double overlap(Rect *R1, Rect *R2){
		double right = min(R1->x+R1->w , R2->x+R2->w) ;
		double left = max(R1->x,R2->x);
		double top = min(R1->y,R2->y) ;
		double bottom =  max(R1->y-R1->h , R2->y-R2->h);

		if(left<right && top>bottom) return (right - left)* (top - bottom);
		else return 0;
		
	}
