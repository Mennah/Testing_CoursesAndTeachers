
#pragma once
class Course
{
private :
	int code;
	char title;
	bool assigned;
public:
	Course(void);
	~Course(void);

	void setCode (int c);
	void setTitle (char t);
	int getCode ();
	char getTitle();
	void PrintInfo () const; 
	void setAssigned (bool a);
	bool Course :: getAssigned();

};

