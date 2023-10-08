#include "str_easy.h"
#include <iostream>
#include <string>

using namespace std;

string itc_cmp_str(string str1, string str2, int num) {
	string res;
	if (num >= itc_len(str1)) return str1;
	for (int i = 0; i < num; i++) res += str1[i];
	for (int i = 0; i < itc_len(str2); i++) {
		if (itc_len((res + str2[i])) < itc_len(str1)) res += str2[i];
		else return res += str2[i];
	}
	for (int i = num; itc_len(res) < itc_len(str1); i++) {
		res += str1[i];
	}
	return res;
}

int itc_find_str(string str1, string str2) {
	for (int i = 0; i < (itc_len(str1) - itc_len(str2) - 1); i++) {
		if ((i + itc_len(str2) - 1) > itc_len(str1)) return -1;
		if (str2 == itc_slice_str(str1, i - 1, i + itc_len(str2) - 1)) return i;
	}
	return -1;
}