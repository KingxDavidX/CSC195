#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;


//reasons to pas by reference
//for classes like ostrea\isream, cannot create copies, so pass by reference
//Ensure manipulation of  variables inside the main method
//Avoid creating copies for large datatypes (resource/time efficient)
//Rule of thumb: Use pass-by-reference whenever possible
//Exception: Cannot point to nothing, so if parameter needs to point to a null value, in that case use a pointer
void Write(string& text, ostream& ostream)
{
	//text = "Ha!"; - avoid manipulation of values passed as parameters
	ostream << text << endl;
}

void Write(const vector<int>& numbers, ofstream& ostream)
{
	for (int n: numbers)
	{
		ostream << n << endl;
	}
}

void Read(vector<int> numbers, istream& istream)
{
	while (!istream.eof())
	{
		int n;
		istream >> n;

		numbers.push_back(n);
	}
}

void Read(string& text, ifstream& istream)
{
	istream >> text;
}

int main()
{
	string text = "hello world\n";
	cout << text;

	//cin >> text;
	getline(cin, text);
	//cout << text << endl;

	Write(text, cout);

	//output to file
	ofstream output("data.txt");		//create and open a file to stream data
	//output << text;
	Write(text, output);
	int i = 5;
	output << i << endl;
	output.close();
	text = "";
	
	//input from file
	ifstream input("data.txt");
	getline(input, text);
	//Read(text, input);
	input >> i;
	//input >> text;
	input.close();

	cout << "--reading from file--\n";
	cout << text << endl;
	cout << i << endl;

	vector<int> numbers = { 1,2,3,4 };

	//store vector to file
	output.open("numbers.txt");
	Write(numbers, output);

	output.close();

	numbers.clear;
	//read from vector file
	input.open("numbers.txt");
	Read(numbers, input);
	input.close();

	for (int n : numbers)
	{
		cout << n << endl;
	}
	
}

