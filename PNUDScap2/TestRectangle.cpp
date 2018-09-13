#include <iostream>
#include "Rectangle.h"

using namespace std;

void main()
{
	Rectangle r(10, 20, 5, 6), s(3, 4, 5, 6);
	Rectangle *t = &s;

	if (r.GetHeight() * r.GetWidth() > t->GetHeight() * t->GetWidth())
		cout << r;
	else
		cout << s;
	cout << "it has the greater area" << endl;
	getchar();
}