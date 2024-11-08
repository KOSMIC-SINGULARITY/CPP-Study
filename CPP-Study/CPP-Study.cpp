#include <iostream>
#include <string>
#include <sstream>
//USING

using text_t = std::string;                              // Practically is just a typedef but works better w templates so used more often.
//text_t is a variable that is the same as std::string but shorter or etc, can be used on structs and everything practically

//namespace
namespace first {
	int x = 1;
}

namespace second {
	int x = 2;
}

//You can use a string function to return string value

std::string string_connector(std::string names)
{
	names.append("Something");
	return names;
}

int main()
{
	std::cout << "I Like Pizza\nI Love you";				// Use std library, cout function to print to console

	std::string name = "Vlad";                              // String is represented via std::string (array of char)
	std::cout << name;
	std::cout << "Hello " << name;

	// Namespaces are used to use the same variable name (x in example) haveing multiple declarations and values. 
	// We create a namespace and then add it as a ref to use a variable from there.

	int x = 0;
	std::cout << x;
	std::cout << first::x;
	std::cout << second::x;

	using namespace first; // we use x from namespace first, just eases up the code, we still can use the second nmspc by adding it
	// U can do *using namespace std(::string/::cout/etc);*, by doing so you dont have to put std in front of those fucntions
	using namespace std;
	cout << "\nNot using std\n";

	//user input

	text_t name_input;                   //cin is a input library that inputs from console into name_input
	cin >> name_input;
	getline(cin, name);                  // getline allows to input until /n is recognized, cin only until whitespace

	// WARNING
	// if getline if followed after cin, the leftover '/n' will be exepted into getline, to prevent it add the following
	getline(cin >> ws, name);

	// Switch
	int number;
	cin >> number;
	switch (number) {
		case 1:
			cout << "its number 1";
		
		case 2: //and etc, number of the case is an int ot the variable or can be a letter, enum type, mb string
		// Default is used if no cases are met the req. Sometimes better than else if
			cout << "its number 2";
		default:
			cout << "NaN";
	}

	// Ternary operator
	int number_t = 9;

	number % 2 == 1 ? cout << "ODD" : cout << "EVEN";
	//practically asks if this is true,  if yes then first solution, if no than second

	bool hungry = true;
	hungry ? cout << "You are hungry" : cout << "You are not hungry";

	// Operations with strings
	string stringop = "My name is Vlad";
	int len = stringop.length();        // Use string and then the function
	/*can do
	 .append, 
	 .clear, 
	 .empty (check for entering a name), 
	 .at(index) - display character on index, 
	 .insert(index, "symbol") - inserts a symbol into index
	 doesnt delete the symbol located at the selected index but moves it 
	 .find(character) - finds the specifien character
	 .erase(index start, index finish) - erases everything between those 2 indexes
	 */

	// Arrays
	// same as in C lang.

	//foreach loop

	std::string cars[] = { "corvette", "mustang", "lambo" };
	for (std::string car : cars)             // this is foreach loop, just shorter than normal loop, car technically 
		//gets the first element and then goes on and on (temp variable)
	{
		std::cout << '\n' << car;
	}
	//class is practically a struct that can also accept functions. A constructor 

	return 0;
}