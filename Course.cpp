#include "Course.h"
#include <iostream>


using namespace std;
Course::Course(void)
{
	assigned = false;
}


Course::~Course(void)
{
}

void Course :: setCode (int c)
{
	code = c;
}

void Course ::setTitle (char t)
{
	title = t;
}

int Course :: getCode ()
{
	return code;
}

char Course ::getTitle ()
{
	return title;
}

void Course :: setAssigned(bool a)
{
	 assigned = a ;
}

bool Course :: getAssigned()
{
	 return assigned ;
}
void Course :: PrintInfo () const
{
	cout << "title of course is :" << title <<endl<<endl;
	cout << " code of course is :" << code<<endl<<endl;
}