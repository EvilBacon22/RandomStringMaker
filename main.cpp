
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

using namespace std;

int main() {
	ofstream fout("randomStuff.txt");
	char listOfCharacters[] = { 'A', 'a', 'B', 'b', 'C', 'c', 'D' ,'d', 'E' ,'e', 'F', 'f' ,'G' ,'g' ,'H', 'h', 'I', 'i', 'J', 'j' ,'K' ,'k' ,'L', 'l' ,'M',
		'm','N' ,'n' ,'O' ,'o' ,'P' ,'p', 'Q', 'q', 'R', 'r', 'S', 's', 'T', 't', 'U', 'u', 'V' ,'v', 'W' ,'w', 'X' ,'x', 'Y', 'y', 'Z', 'z' 
		,'1', '2', '3', '4', '5', '6', '7', '8', '9' ,'0' };

	int N = 16;
	int sizeOfArray = 62;
	string *words = new string[100];
	string word = "";
	for (int i = 0; i < 100; i++) {
		for (int j = 0; j < N; j++) {
			int randomPicker = rand() % sizeOfArray;
			word += listOfCharacters[randomPicker];
		}
		words[i] = word;
		word = "";
		fout << words[i] << endl;
	}

	return 0;
}