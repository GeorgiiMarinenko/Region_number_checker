#include <iostream>
#include "../INCLUDES/header.h"
using namespace std;

int main ()
{
	int counter;
	unsigned int reg = 0;
	unsigned int command = 0;
	region *rez;
	rez = read_file(counter);
	while (command < 3)
	{
		cout << "\n\nCommands: \n1. - Show all list of regioms\n2. - Find name of region\n3. - exit\n\n";
		cout << "choose command: ";
		cin >> command;
		if (command == 1)
			print_struct(counter, rez);
		if (command == 2)
		{
			cout << "Write region: ";
			cin >> reg;
			find_reg(counter, rez, reg);
			break;
		}
	}
	return (0);
}
