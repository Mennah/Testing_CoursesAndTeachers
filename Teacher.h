#pragma once
#include "Course.h"
class Teacher
{
private :
	int ID;
	char name;
	char lastCertificate;
	int max;
	int count;
public:

	Course ** clist;

	Teacher(int x, char n, char lc, int m);
	void setID (int x);
	void setName (char n);
	void setLastCertificate (char lc );
	int getID ();
	char getName ();
	char getLastCertificate ();
	void PrintInfo ();
	void AddCourse (Course * c);
	void DropCourse ( int x);
	bool teaches (int x);
	int getCount();
	int getMax();
	~Teacher(void);
};

