// Array-based implementation
// UnsortedArrayType.h

class UnsortedArrayType {
	public:
		UnsortedArrayType(); // constructor
		void MakeEmpty();
		bool IsFull() const;
		int Getlength() const;
		void InsertItem(int item);
		void DeleteItem(int item);
		void Show() const;

	private:
		int length;
		int info[10];

};
