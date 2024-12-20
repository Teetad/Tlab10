#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main (){
	ifstream source;
	ofstream dest;
	source.open("cheerbook.txt") ;
	dest.open("cheerbook_copy.txt");
	dest << "-------------------- BOOM ---------------------\n";
	string source_text;
	while (getline(source, source_text))
	{
		dest << source_text << "\n";
	}
	dest << "-------------------- HA!! ---------------------\n";
    source.close();
    dest.close();
	return 0;
}
