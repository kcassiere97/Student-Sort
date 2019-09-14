#pragma once
#include <string>
#include <iostream>
#include <vector>  //added a vector library
using namespace std;

//student class lets us store the name of the student into a vector. It is like a container to store the data provided by the user.
//At the end we just push that container to the vector.

class students {


private:
	string fName;
	//gets the first name
	string getFname() {  

		return fName;
	}
	string lName;
	//gets the last name
	string getLname() {

		return lName;
	}
	friend class Enrollment;
};

// We created the student iterator
//stores the undergraduate student in to the vector
vector <students> UStudentsVector;
vector <students> ::iterator it; //helps us go through the vector for UnderGraduate Students
//stores the graduate student in the vector 
vector <students> GStudentsVector;
vector <students> ::iterator git; //helps us go through the vector for Graduate Students


class Enrollment {
public:
	void addUndergraduate(string firstname, string lastname) {

		students UStudent;  //creates student class object 
		UStudent.fName = firstname; //we use that object to  access the first name container string. then we store the first name provided by the use to the class.
		UStudent.lName = lastname;  //we use that object to  access the last name container string. then we store the last name provided by the use to the class.
		UStudentsVector.push_back(UStudent);	//finally we push the object class to our vector.
		
	}

	void addGraduate(string firstname, string lastname) {
		
		students GStudent;  //creates student class object 
		GStudent.fName = firstname; //we use that object to  access the first name container string. then we store the first name provided by the use to the class.
		GStudent.lName = lastname;  //we use that object to  access the last name container string. then we store the last name provided by the use to the class.
		GStudentsVector.push_back(GStudent);	//finally we push the object class to our vector.
	}

	void printInOrder() {
		//I used an Iterator to print out a Vector, first we begin from the front of the vector . next we go through till the end. Then we use the iterator to get access to the 
		// first name and last name get functions. and we basically print it out each vector from beginning to end.
		cout << endl;
		//Graduate Student Print Out, first priority!
        cout << "Graduate Students" << endl;
		for (it = GStudentsVector.begin(); it < GStudentsVector.end(); it++) {

			cout << it->getFname() << " " << it->getLname() << endl;
		}

         cout << endl;
		//Next we have the UnderGraduate print out.
        cout << "Undergraduate Students" << endl;
		for (it = UStudentsVector.begin(); it < UStudentsVector.end(); it++) {

			cout << it -> getFname()  << " " <<  it -> getLname() << endl;
		}
		
	}
};

