#include "str_easy.h"
#include <iostream>
#include <string>

using namespace std;

string itc_even_place(string str) {
	string nstr;
	if (itc_len(str) <= 1) return "-1";
	for (int i = 0; i < itc_len(str); i++) {
		if ((i + 1) % 2 == 1) nstr += str[i + 1];
	}
	return nstr;
}

double itc_percent_lower_uppercase(string str) {
	double lc, uc;
	lc = 0;
	uc = 0;
	for (int i = 0; i < itc_len(str); i++) {
		if (isupper(str[i])) uc++;
		if (islower(str[i])) lc++;
	}
	return uc / lc * 100;
}

string itc_reverse_str(string str) {
	string rev;
	for (int i = 0; i < itc_len(str); i++) {
		rev += str[itc_len(str) - i - 1];
	}
	return rev;
}

string itc_slice_str(string str, int start, int end) {
	string res;
	if (start > end) return str;
	if (end < itc_len(str)) {
		for (int i = (start - 1); i <= (end - 1); i++) {
			res += str[i];
		}
	}
	else {
		for (int i = (start - 1); i <= itc_len(str); i++) {
			res += str[i];
		}
	}
	return res;
}

bool itc_equal_reverse(string str) {
	string str1;
	str1 = itc_reverse_str(str);
	for (int i = 0; i < itc_len(str); i++) {
		if (str[i] != str1[i]) return 0;
	}
	return 1;
}