#include <iostream>
#include <fstream>
#include <string.h>
#include "../INCLUDES/header.h"

using namespace std;

int		str_len()
{
	string filename = "Numb_region.txt";
	ifstream fin;
	fin.open(filename);

	int	len = 0;
	string s;
	while (fin)
	{
		getline(fin, s);
		len++;
	}
	fin.close();
	return (len);
}

int		get_err(ifstream fin)
{
	if (!fin)
		return (-1);
	else
		return (0);
}

region	*read_file(int &counter)
{
	string		filename = "Numb_region.txt";
	ifstream	fin;
	fin.open(filename);

	string		str;
	int			len = 0;
	char		symb;
	region		*rez;

	if (!fin)
		cout << "File open error" << endl;
	else
		cout << "file opened succesfuly" << endl;
				len = str_len();
				rez = new region[len];
	string		strarr[7];
				counter = 0;
	char		*p_strarr;
	string		symbol;
	char		*sep_arr = " \t,.";

	while (!fin.eof())
	{
		int i = 1;
		getline(fin, str);
		if (str.length() <= 1)
		{
			counter++;
			continue;
		}
		if (counter == len)
			break;
		string::size_type index = str.find("Код", 0);
		symbol = str.substr(0, index);
		p_strarr = strtok(const_cast<char*>(symbol.c_str()), sep_arr);
		strarr[0] = p_strarr;
		while (p_strarr)
		{
			p_strarr = strtok(0, sep_arr);
			if (p_strarr == nullptr)
				continue;
			if (i == 7)
				break;
			strarr[i] = p_strarr;
			i++;
		}
		rez[counter].name_reg = str.substr(index, str.length() - 1);
		rez[counter].numb = new int[i];
		rez[counter].size_of_numb = i;
		for (int j = 0; j < i; j++)
		{
			if (!strarr[j].empty())
			{
				rez[counter].numb[j] = atoi(strarr[j].c_str());
			}
			else
				break;
		}
		counter++;
	}
	fin.close();
	return (rez);
}

void	print_struct(int counter, region *structure)
{
	for (int i = 0; i < counter; i++)
	{
		if (structure[i].name_reg.empty())
			continue;
		for (int j = 0; j < structure[i].size_of_numb; j++)
			cout << structure[i].numb[j] << " ";
		cout << setw(35) << " : ";
		cout << structure[i].name_reg;
		cout << endl;
	}
}

int find_reg(int counter, region *structure, int elem)
{
	bool	flag = 0;
	for (int i = 0; i < counter; i++)
	{
		if (structure[i].name_reg.empty())
			continue;
		for (int j = 0; j < structure[i].size_of_numb; j++)
		{
			if (elem == structure[i].numb[j])
			{
				cout << structure[i].name_reg << endl;
				flag = 1;
				return (0);
			}
		}
	}
	if (flag == 0)
		cout << "No such region in Russia" << endl;
	return (-1);
}
