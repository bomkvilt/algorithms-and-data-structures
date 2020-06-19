#ifndef CODEFORCE_CPP__900_KEYBOARD_HPP
#define CODEFORCE_CPP__900_KEYBOARD_HPP
#define TESTNAME KEYBOARD

#ifndef TMAIN
#define TMAIN int main
#else
#define TMAINN TMAINJ(TESTNAME)
#endif

#include <iostream>
#include <string>
#include <vector>
#include <map>



TMAIN()
{
	auto dict_L = std::map<char, char>();
	auto dict_R = std::map<char, char>();
	for (auto row : std::vector<std::string>{
		"qwertyuiop",
		"asdfghjkl;",
		"zxcvbnm,./"}) 
	for (auto i = 0; i < row.length(); ++i)
	{
		if (i > 0)
		{
			dict_L[row[i - 1]] = row[i];
		}
		if (i < row.length() - 1)
		{
			dict_R[row[i + 1]] = row[i];
		}
	};

	std::string D;
	std::string s;
	std::cin >> D >> s;

	std::string text;
	if (D == "R")
	{
		for (auto c : s)
		{
			text.push_back(dict_R[c]);
		}
	}
	else
	{
		for (auto c : s)
		{
			text.push_back(dict_L[c]);
		}
	}

	std::cout << text << std::endl;
	return 0;
}


#endif //!CODEFORCE_CPP__900_KEYBOARD_HPP
