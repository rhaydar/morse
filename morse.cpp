// morse.cpp
// author: rashedul haydar
// date: 2016-08-11

#include <iostream>
#include <string>

using namespace std;

void wordToCode(string &word) {
	string code = "";

	for (int i=0; i<word.size(); i++) {
		switch (word[i]) {
			// digits
			case '0': 	code += "----- ";
						break;
			case '1': 	code += ".---- ";
						break;
			case '2': 	code += "..--- ";
						break;
			case '3': 	code += "...-- ";
						break;
			case '4': 	code += "....- ";
						break;
			case '5': 	code += "..... ";
						break;
			case '6': 	code += "-.... ";
						break;
			case '7': 	code += "--... ";
						break;
			case '8': 	code += "---.. ";
						break;
			case '9': 	code += "----. ";
						break;
			
			// letters
			case 'a':
			case 'A': 	code += ".- ";
						break;
			case 'b':
			case 'B': 	code += "-... ";
						break;
			case 'c':
			case 'C': 	code += "-.-. ";
						break;
			case 'd':
			case 'D': 	code += "-.. ";
						break;
			case 'e':
			case 'E': 	code += ". ";
						break;
			case 'f':
			case 'F': 	code += "..-. ";
						break;
			case 'g':
			case 'G': 	code += "--. ";
						break;
			case 'h':
			case 'H': 	code += ".... ";
						break;
			case 'i':
			case 'I': 	code += ".. ";
						break;
			case 'j':
			case 'J': 	code += ".--- ";
						break;
			case 'k':
			case 'K': 	code += "-.- ";
						break;
			case 'l':
			case 'L': 	code += ".-.. ";
						break;
			case 'm':
			case 'M': 	code += "-- ";
						break;
			case 'n':
			case 'N': 	code += "-. ";
						break;
			case 'o':
			case 'O': 	code += "--- ";
						break;
			case 'p':
			case 'P': 	code += ".--. ";
						break;
			case 'q':
			case 'Q': 	code += "--.- ";
						break;
			case 'r':
			case 'R': 	code += ".-. ";
						break;
			case 's':
			case 'S': 	code += "... ";
						break;
			case 't':
			case 'T': 	code += "- ";
						break;
			case 'u':
			case 'U': 	code += "..- ";
						break;
			case 'v':
			case 'V': 	code += "...- ";
						break;
			case 'w':
			case 'W': 	code += ".-- ";
						break;
			case 'x':
			case 'X': 	code += "-..- ";
						break;
			case 'y':
			case 'Y': 	code += "-.-- ";
						break;
			case 'z':
			case 'Z': 	code += "--.. ";
						break;
		}
	}

	cout << code << endl;
}

int main(int argc, char **argv)
{
	// Uses "bell character" to produce alert sound
	// cout << "\a\a" << endl;
	// char d = (char)(7);
	// cout << d;

	string str;
	cin >> str;
	wordToCode(str);

	return 0;
}
