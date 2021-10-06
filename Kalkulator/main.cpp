//This code is writed by begginer. I know it hurt but im learing cpp two days. 
//You can message me on discord: Ikagi#6178


#include <iostream>
#include "ConsoleColor.h"


using namespace std;
float a, b;

void add() {
	system("cls");
	cout << "Give number a" << endl;
	cin >> a;
	system("cls");
	cout << "Give number b" << endl;
	cin >> b;
	float c = a + b;
	system("cls");
	cout << "Result: " << c << endl << endl;
	return;
}
void sub() {
	system("cls");
	cout << "Give number a" << endl;
	cin >> a;
	system("cls");
	cout << "Give number b" << endl;
	cin >> b;
	float c = a - b;
	system("cls");
	cout << "Result: " << c << endl << endl;
	return;
}
void mul() {
	system("cls");
	cout << "Give number a" << endl;
	cin >> a;
	system("cls");
	cout << "Give number b" << endl;
	cin >> b;
	float c = a * b;
	system("cls");
	cout << "Result: " << c << endl << endl;
	return;
}
void div() {
	system("cls");
	cout << "Give number a" << endl;
	cin >> a;
	system("cls");
	cout << "Give number b" << endl;
	cin >> b;
	float c = a / b;
	system("cls");
	cout << "Result: " << c << endl << endl;
	return;
}



int main() {
	
	cout << green << R"(
   ___      _            _       _             
  / __\__ _| | ___ _   _| | __ _| |_ ___  _ __ 
 / /  / _` | |/ __| | | | |/ _` | __/ _ \| '__|
/ /__| (_| | | (__| |_| | | (_| | || (_) | |   
\____/\__,_|_|\___|\__,_|_|\__,_|\__\___/|_|   
                                                                                        
)" << "\n" << white;

	int select;
	while (true) {
		cout << "Select operation" << endl << "[1] Addition" << endl << "[2] Subtraction" << endl << "[3] Multiply" << endl << "[4] Division" << endl << "[0] Close" << endl;
		cin >> select;
		if (select == 0) break;
		switch (select) {
			case 1:
				add();
				break;
			case 2:
				sub();
				break;
			case 3:
				mul();
				break;
			case 4:
				div();
				break;
			
			
		}
	}

}