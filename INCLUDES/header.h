#ifndef REG_NUMB_H
# define REG_NUMB_H
#include <string>
struct region
{
	int *numb;
	int	size_of_numb;
	std::string name_reg;
};
int			str_len();		//подсчет кол-во строк в файле
region		*read_file(int &counter);	//чтение файла
void		print_struct(int counter, region *structure);
int			find_reg(int counter, region *structure, int elem);

# endif
