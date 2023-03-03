#pragma once
class Points
{
private:

	float x;
	float y;

public: 
	//constructors
	Points();
	Points(float, float);

	//destructor
	~Points() {};

	//setters
	void setX(float);
	void setY(float);

	//getters
	float getX();
	float getY();

	//other functions
	void DisplaySet();
	float Distance(Points);

};

