class MyClass {     // The class
	private:
		int num;

	public:           // Access specifier

		MyClass() {
			num = 1;
		}

};


int main() {

	MyClass myObj;    // Create an object of MyClass (this will call the constructor)

	return 0;

}
