#ifndef CODEFORCE_CPP__900_635B_KANAANDDRAGONQUEST_HPP
#define CODEFORCE_CPP__900_635B_KANAANDDRAGONQUEST_HPP
#define PROBLEM_NAME KanaAndDragonQuest
#ifndef PROBLEM_MAIN
#define PROBLEM_MAIN int main
#endif

#include <iostream>



PROBLEM_MAIN()
{
	auto clb = []()
	{
		auto x = 0;
		auto n = 0;
		auto m = 0;
		std::cin >> x >> n >> m;

		while (n + m > 0)
		{
			if (10 * m >= x)
			{
				return true;
			}
			if (x > 20 && n > 0)
			{
				x = x / 2 + 10;
				--n;
				continue;
			}
			return false;
		}
	};

	auto t = 0;
	std::cin >> t;

	while (t--)
	{
		std::cout << (clb() ? "YES" : "NO") << std::endl;
	}
	return 0;
}


#endif //!CODEFORCE_CPP__900_635B_KANAANDDRAGONQUEST_HPP
