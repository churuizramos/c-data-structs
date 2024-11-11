#include <iostream>
#include <string>

class Vehicle { // base class

	public:

		string brand = "Ford";

		void honk() {

			cout << "Tuut, tuut! \n" ;

		}

};

class Car: public Vehicle { // base class

	public:

		string model = "Mustang";

};


int main() {

	Car myCar;

	myCar.honk();

	//brand comes from base class | model comes from the derived class
	cout << myCar.brand + " " + myCar.model;

	return 0;

}
