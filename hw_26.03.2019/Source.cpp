//#define CAPITAL
// если CAPITAL закомментить, то есть если не определена столица, то инфа о ней не выводится
#include <fstream>
#include "Country.h"
using namespace std;

int buf_size = 0;
int  cur_size = 0;


#define KZ 0
#define RU 1
#define USA 2

void add(Country *&cs, Country el) {
	if (buf_size == 0) {
		buf_size = 4;
		cs = new Country[buf_size];

	}
	else
	{
		if (buf_size == cur_size) {
			buf_size *= 2;

			Country *tmp = new Country[buf_size];
			for (int i = 0; i < cur_size; i++) {
				tmp[i] = cs[i];
			}
			delete[] cs;
			cs = tmp;
		}
	}
	cs[cur_size++] = el;
}

int main() {
	Country *cs = 0;
	ifstream in_file("in.txt");
	Country tmp;
	while (!in_file.eof()) {
		in_file >> tmp.title >> tmp.Cap.title >> tmp.Cap.population;
		add(cs, tmp);
	}

	cs[KZ].print();
	cs[RU].print();
	cs[USA].print();

	system("pause");
}