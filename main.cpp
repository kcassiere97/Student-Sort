
//Mass Kizar Cassiere
#include <string>
#include <iostream>
#include "Enrollment.h"

using namespace std;

int main() {
	Enrollment enrollment;
	while (true) {
		cout << "U: sign-up undergraduate" << endl;
		cout << "G: sign-up graduate" << endl;
		cout << "P: print and quit" << endl;
		cout << "Enter choice: ";
		char choice; cin >> choice; // act on user's choice

		if (choice == 'U') { // an undergraduate student signs-up
			string firstname; cout << "First name? "; cin >> firstname;
			string lastname; cout << "Last name? "; cin >> lastname;
			enrollment.addUndergraduate(firstname, lastname);
		}
		else if (choice == 'G') { // an undergraduate student signs-up
			string firstname; cout << "First name? "; cin >> firstname;
			string lastname; cout << "Last name? "; cin >> lastname;
			enrollment.addGraduate(firstname, lastname);
		}
		else if (choice == 'P') { // print everyone who is enrolled
			enrollment.printInOrder();
			system("pause"); //for testing purpose
			return 0; // quit the program
		}
		else {
			cout << "Invalid choice. Please retry." << endl;
		}
	}// end while

} // end main
