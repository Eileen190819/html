#include<iostream>
#include "square.h"
using namespace std;
 
Square::Square()
{
	len = 0; 
}
Square::Square(int n)
{

	setLen(n);
}
int Square::area()
{
	return len*len;
}
int Square::getLen()
{
	return len;
}
void Square::setLen(int n)
{
	if(n<1){
		cout << "len setting error" <<endl;
		len = 1;
		return;
	}
	len = n;
}
