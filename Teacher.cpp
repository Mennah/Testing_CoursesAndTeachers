#include "Teacher.h"
#include "Course.h"
#include <iostream>

using namespace std;
Teacher::Teacher(int x, char n, char lc, int m)

{
	ID = x;
	name = n;
	lastCertificate = lc;
	max = m;
	clist = new Course * [max];
	for ( int l = 0; l<max ;l++)
	{
		clist[l] = NULL;
	}
	count = 0;
}

void Teacher ::setID (int x)
{
	ID = x;
}

void Teacher ::setName (char x)
{
	name = x;
}


void Teacher ::setLastCertificate (char x)
{
	lastCertificate = x;
}


int Teacher :: getID ()
{
	return ID;
}

char Teacher :: getName ()
{
	return name;
}

char Teacher :: getLastCertificate ()
{
	return lastCertificate;
}

void Teacher ::PrintInfo()
{
	cout << " Name of teacher :"<< name <<endl<<endl;
	cout << " ID of teacher :"<< ID <<endl<<endl;
	cout << " last certificate of teacher :"<< lastCertificate <<endl<<endl;
	cout << " courses teached by this techer :"<<endl<<endl;
	int k =0;
	while (clist[k] != NULL )
	{
		cout << " course title :"<<clist[k] ->getTitle()<<endl<<endl;
		cout << " course code  :"<<clist[k] ->getCode()<<endl<<endl;
		k++;
	}
}

Teacher::~Teacher(void)
{
	
}

void Teacher :: AddCourse (Course * c)
{
	if (c ->getAssigned())
	{
		cout << " cannot add this course already assigned to another teacher"<< endl;
		return;
	}

	if (count == max)
	{
		cout << " cannot add this course, max number of courses for this teacher is achieved"<< endl;
		return;
	}

	int i =0;
	while (clist[i] != NULL)
	i++;

	clist[i] = c;
	clist[i]->setAssigned(true);
	count ++;

}

void Teacher ::DropCourse (int x)
{
	for (int i =0; i<max ; i++)
	{
		if (clist[i] ->getCode() == x )
		{
			clist[i] ->setAssigned(false);
			clist[i] = NULL;

			int j =i+1;
		 
		  while (clist[j] != NULL && (j<max))
		  {
	        j++;
		  }
	
		clist[i] = clist[j-1];
		clist[j-1] = NULL;
		break;
		}
		
	}

}

bool Teacher ::teaches (int x)
{
	int m = 0;
	while (clist[m] != NULL)
	{
		if (clist[m] ->getCode() == x)
			return true;
		m++;
	}
	return false;
}

int Teacher :: getCount()
{
	return count;

}

int Teacher :: getMax()
{
	return max;

}