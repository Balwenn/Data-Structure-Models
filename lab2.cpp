#include <iostream>
#include <conio.h>
#include "Queue.h"

using std::cout;
using std::endl;
using namespace std;

int main(){

	unsigned int selected_case;
	unsigned int number_to_enter;
	Queue LL_Queue;
	while (1) {
		cout << "1. Insert a new number to the queue"
			<< endl
			<< "2. Remove a number from the queue"
			<< endl
			<< "3. Print the first number in the queue"
			<< endl
			<< "4. Print the contents of the queue"
			<< endl
			<< "5. Exit"
			<< endl << endl;
		cout << "Your choice: ";
		cin >>  selected_case;
		cout << endl;
		if (selected_case > 1 || selected_case < 6) {
			switch (selected_case) {
			case 1:
				cout << "Enter an integer value to add to list" << endl << endl;
				cin >> number_to_enter;
				cout << endl;
				LL_Queue.enqueue(number_to_enter);
				break;
			case 2:
				cout << "Enter an integer value to remove from list" << endl << endl;
				cin >> number_to_enter;
				cout << endl;
				LL_Queue.dequeue(number_to_enter);
				break;
			case 3:
				LL_Queue.PrintFirstData();
				break;
			case 4:
				LL_Queue.PrintQueue();
				break;
			case 5:
				return 0;
				break;
			default:
				break;
			}
		}
		else {
			cout << "You have entered an invalid action.";
		}
	}
}