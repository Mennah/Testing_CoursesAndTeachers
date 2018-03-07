#include <iostream>
#include "Course.h"
#include "Teacher.h"
#include "School.h"

using namespace std;
int main ()
{
	Course c1;
	c1.setCode(1);
	c1.setTitle('a');
	Course*p1 = &c1;

	Course c2;
	c2.setCode(2);
	c2.setTitle('b');
	Course*p2 = &c2;

	Course c3;
	c3.setCode(3);
	c3.setTitle('c');
	Course*p3 = &c3;

	Course c4;
	c4.setCode(4);
	c4.setTitle('d');
	Course*p4 = &c4;

	Course c5;
	c5.setCode(5);
	c5.setTitle('e');
	Course*p5 = &c5;


	Teacher t1( 10 ,'f','g',2);
	Teacher* w1 = &t1;

	Teacher t2( 11 ,'h','i',2);
	Teacher* w2 =&t2; 

	Teacher t3( 12 ,'j','k',2);
	Teacher* w3 =&t3; 

	School s;
	s.AddTeacher(w1);
	s.AddTeacher(w2);
	s.AddTeacher(w3);

	s.AddCourse(p1);
	s.AddCourse(p2);
	s.AddCourse(p3);
	s.AddCourse(p4);
	s.AddCourse(p5);

	t1.AddCourse(p1);
	t1.AddCourse(p2);
	t1.AddCourse(p3);
	t2.AddCourse(p4);

	s.AssignCourse(12 , 5);
	s.CheckMaxLoad();
	s.UnassignedCourses();





	


	

    
}