#include <iostream>
#include <iomanip>

#include "vectormap.h"
#include "vectormap.cpp"

using namespace std;

int main() {
	VectorMap<string, int> vm;

	cout << boolalpha;

	cout << "map: " << vm << endl;

	vm["the"] = 10;
	cout << "After adding (\"the\", 10) to the map: " << vm << endl; 

	vm["cat"] = 5;
	cout << "After adding (\"cat\", 5) to the map: "  << vm << endl;
	cout << endl;

	cout << "Looking up the value of \"the\": " << vm["the"] << endl; 

	cout << "Looking up the value of \"when\": " << vm["when"] << endl; 
	cout << "map: " << vm << endl;

	cout << endl;
	vm["cat"]++;
	cout << "After vm[\"cat\"]++: "  << vm << endl;

	cout << "map is empty: " << vm.empty() << endl;
	cout << "size of map: " << vm.size() << endl;

	cout << endl;

	vm.clear();

	cout << "After invoking clear" << endl;

	cout << "map: " << vm << endl;
	cout << "map is empty: " << vm.empty() << endl;
	cout << "size of map: " << vm.size() << endl;

	return 0;
}
