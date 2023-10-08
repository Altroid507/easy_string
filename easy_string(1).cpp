#include "str_easy.h"
#include <iostream>
#include <string>

using namespace std;

string itc_hello_str(string name) {
	return "Hello, " + name;
}

long long itc_len(string str) {
	long long size;
	size = 0;
	for (int i = 0; str[i] != '\0'; i++) {
		size++;
	}
	return size;
}

void itc_print_copy_str(string str, int number) {
	for (int i = 1; i < number; i++) {
		cout << str + "\n";
	}
	cout << str;
}

void itc_first_end_three(string str) {
	if (itc_len(str) > 5) {
		cout << str[0] << str[1] << str[2] << str[itc_len(str) - 3] << str[itc_len(str) - 2] << str[itc_len(str) - 1];
	}
	else {
		string str1;
		str1 = str[0];
		itc_print_copy_str(str1, itc_len(str));
	}
}

int itc_count_char_in_str(char ch, string str) {
	int countr;
	countr = 0;
	for (int i = 0; i < itc_len(str); i++) {
		if (str[i] == ch) countr++;
	}
	return countr;
}