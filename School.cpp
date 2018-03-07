#include "School.h"
#include "Course.h"
#include "Teacher.h"
#include <iostream>
using namespace std;


School::School(void)
{
		    for ( int l = 0; l<100 ;l++)
	         {
		       clist2[l] = NULL;
	         }

			for ( int l = 0; l<100 ;l++)
	         {
		        tlist[l] = NULL;
	         }
}


School::~School(void)
{
}

/*
	void CheckMaxLoad ();
	void UnassignedCourses ();
	*/
void School :: AddTeacher (Teacher * t)
{
	int i =0;
	while (tlist[i] != NULL)
	i++;

	tlist[i] = t;

}

void School :: AddCourse (Course * c)
{
	int i =0;
	while (clist2[i] != NULL)
	i++;

	clist2[i] = c;

}
void School :: AssignCourse (int x, int y)
{
	int i = 0;
	int j = 0;
	while ((tlist[i] != NULL) && (tlist[i]->getID() != x))
	i++;

	while ((clist2[j] != NULL) && (clist2[j]->getCode() != y))
	j++;

	if ( (tlist[i]->getID() == x) && (clist2[j]->getCode() != y))
	{
		tlist[i] ->AddCourse(clist2[j]);
		cout <<"course assigned successfully"<<endl;
	}

	else if ( tlist[i]->getID() != x)
		cout <<"No teacher with this ID"<<endl;
	else if (clist2[j]->getCode() != y)
		cout <<"No course with this code"<<endl;

}

Teacher* School ::  GetTeacher (int v)
{
	int k =0;
	while ((tlist[k]->clist[k]->getCode() != v)&&(clist2[k] != NULL))
		k++;

	if (tlist[k]->clist[k]->getCode() == v)
		return tlist[k];

	else
		return NULL;
		
}

void School :: CheckMaxLoad ()
{
	int l =0;
	while (tlist[l] != NULL)
	{
		if (tlist[l] ->getCount() == tlist[l]->getMax())
		{
			cout <<"name : "<<tlist[l]->getName()<<endl;
		    cout <<"max load : " <<tlist[l]->getCount()<<endl;
		}
		l++;
	}
}

void School :: UnassignedCourses ()
{
	int p = 0;

	while (clist2[p] != NULL)
	{
		if (clist2[p]->getAssigned()==false)
			clist2[p]->PrintInfo();

		p++;
	}

	p=0;

	while (tlist[p] != NULL)
	{
		if (tlist[p]->getCount() != tlist[p]->getMax())
			tlist[p] ->PrintInfo();
		p++;
    }
}