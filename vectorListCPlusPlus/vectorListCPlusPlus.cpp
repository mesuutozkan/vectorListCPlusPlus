#include <iostream>

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


int main()
{
	//define a vector for numbers.

	vector<int> vNumbers;

	vNumbers.push_back(10);
	vNumbers.push_back(20);
	vNumbers.push_back(30);

	//vector size method: 3

	cout << "Vector size: " << vNumbers.size() << endl;

	//print vector elements

	for (size_t i = 0; i < vNumbers.size(); i++)	//use unsigned int type: size_t to maximize the number of elements.(large datasets)
	{
		cout << "Element " << i << ": " << vNumbers[i] << endl;		//vNumbers[i] = vNumbers.at(i) 

	}

	//access an element
	
	cout << vNumbers[1] << endl;

	//change an element

	vNumbers.at(1) = 19;

	vector<string> vCars = { "Audi", "Mercedes", "BMW" };

	vCars.push_back("Volkswagen");

	//instead of copying elements, use reference, to save memory and access directly to elements.

	//use of "const" is for read only operation, not suitable for any change of any element.

	// "string car : vCars" is for accessing to all of the vCars vector elements  

	for (const string& car : vCars)
	{
		cout << car << " ";
	
	}
	
	cout << endl;

	//insert an element between elements (position, element)

	vNumbers.insert(vNumbers.begin() + 1, 15);

	//print vNumbers

	//fastest way for read only operation

	for (const size_t &num : vNumbers)
	{
		cout << num << " ";
	}

	cout << endl;
	
	//fastest way to access and processing with reference (no copy) way 

	for (int& num : vNumbers)
	{
		num = num + 1;

		cout << num << " ";
	}

	cout << endl;

	//erase last element

	vNumbers.pop_back();

	for (const size_t& num : vNumbers)
	{
		cout << num << " ";
	}

	cout << endl;

	//erase a specific element with iterator (index) (dont forget, for vectors its a costs time)

	vNumbers.erase(vNumbers.begin() + 1);

	for (const size_t& num : vNumbers)
	{
		cout << num << " ";
	}

	cout << endl;

	//clear vector (not allocated memory!)

	vNumbers.clear();

	cout << "Vector size: " << vNumbers.size() << endl;

	//cleared elements' memory blocks remains

	vNumbers.push_back(10);
	vNumbers.push_back(20);

	for (const size_t& num : vNumbers)
	{
		cout << num << " ";
	}

	cout << endl;

	//initialize new vector with initial elements (size, element)

	vector<int> myVector(3, 40);

	for (const size_t& element : myVector)
	{
		cout << element << " ";
	}

	cout << endl;

	return 0;
}








