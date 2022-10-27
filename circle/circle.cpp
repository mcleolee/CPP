#include "circle.h"
#include<iostream>

using namespace std;
circle::circle()
{
	cout<<"Here is constructor\n";
	this->radius=6;
	return radius;
}
void circle::~circle() 
{
	cout<<"Here is destructor\n";
}
