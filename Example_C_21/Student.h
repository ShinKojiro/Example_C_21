#pragma once
//Header


#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string>

using namespace std;

class Student
{
public:
	//default constructor
	Student();

	//overload constructor
	Student(string, char);

	//destructor
	~Student();

	//accessor functions
	string getName() const;
		//getName
		//@return string - name of student
	char getGrade() const;
		//getGrade
		//@return char - grade of student

	//mutators
	void setName(string);
		//setName
		//@param string - name of student

	void setGrade(char);
		//setGrade
		//@param char - grade of student

private:
	//member variables
	string newName;
	char newGrade;
};


#endif // !STUDENT_H
