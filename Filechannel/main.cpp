#include<fstream>
#include<iostream>
using namespace std;
int main()
{
	ofstream OutFile("Test.txt");
	OutFile << "FYR FYR FYR";
	OutFile.close(); 

	ifstream readFile("Test.txt");
	char temp[1024] = { 0 };
	readFile >> temp; 
	cout << temp << endl;
	system("pause");
	return 0;
}