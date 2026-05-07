#include <iostream>

#include <string>		//use if iostream does not contain string lib.

using namespace std;

#include <vector>

/*
* When vector, when list?
* 
* List uses traverse method, uses pointers between elements and randomly distribute them into the empty memory.
* uses memory when needed.
* Accessing a list element is slow rated because list elements uses pointers between them to access next element
* of the list. Accessing ith element is being followed by accessing the elements from start to the ith element.
* List has an advantage to erase an element. When erasing an element, list rearrange related pointer between erased element.
* 
* 
* Vector uses memory blocks for elements sequentialy to the right.
* When allocated memory loaded, new memory block is allocated and elements are relocated to this block. Old block is freed.
* Vector elements are easy and to access like an array (with index), especially when large set is considered.
* When erasing an element, vector erases the element from allocated memory block
* and shifts the rest of the elements to the left (maybe thousands of elements), this is would be 
* time consuming for your program. (When consider thousands of data)
* 
* 
* If you oftenly erase elements, use list. 
* But if you want to access fastly to an element, use vector.
*/

class automobile
{
private:

	string brand;
	string model;
	int year;

public:

	//add constructor with definition

	automobile(string _brand, string _model, int _year)
		: brand(_brand), model(_model), year(_year) {}

	void printInformation() const		//use const to specify this method is read only for this class
	{
		cout << "Brand: " << brand << ", Model: " << model << ", Year: " << year << "; ";

	}

};

int main()
{
	//create a vector that holds automobile objects

	vector<automobile> vGarage;

	cout << "Add automobiles to the garage...\n";

	vGarage.push_back(automobile("Toyota", "Corolla", 2020));
	vGarage.push_back(automobile("Audi", "A5", 2012));
	vGarage.push_back(automobile("Mercedes", "CLS350", 2016));

	cout << "Automobiles in garage: " << endl;

	for (const automobile& atmbl : vGarage)		//use const if printInformation method uses "const" keyword
	{											//only for read only.
		atmbl.printInformation();

	}

	cout << endl;

	//erase an object

	vGarage.erase(vGarage.begin());

	for (const automobile& atmbl : vGarage)		
	{											
		atmbl.printInformation();

	}

	cout << endl;

	//add an object

	vGarage.push_back(automobile("Toyota", "Supra", 1996));

	for (const automobile& atmbl : vGarage)
	{
		atmbl.printInformation();

	}

	cout << endl;

	//insert an object element

	vGarage.insert(vGarage.begin() + 2, automobile("Honda", "Civic", 2025));

	for (const automobile& atmbl : vGarage)
	{
		atmbl.printInformation();

	}

	cout << endl;

	//access an object element and its method

	vGarage.at(2).printInformation();

	cout << endl;

	//access an object element and its method
	
	vGarage.at(vGarage.size() - 3).printInformation();
	
	return 0;
}








