#pragma once
#include "Course.h"
#include "Teacher.h"
class School
{
private :
	char Name;
	int level;
	int n;
	Teacher * tlist[100];
	Course  * clist2 [100];
public:
	School(void);
	~School(void);

	void AddTeacher (Teacher * t);
	void AddCourse ( Course * c1);
	void AssignCourse ( int x, int y);
	Teacher * GetTeacher (int v);
	void CheckMaxLoad ();
	void UnassignedCourses ();

};

