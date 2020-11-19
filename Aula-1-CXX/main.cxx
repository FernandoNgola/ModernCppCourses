#include <iostream>
#include <algorithm>
#include <ranges>
#include <vector>

auto main() -> int
{	std::vector<int> my_v{1,-5, 6, 2, -8};
	std::ranges::sort(my_v);
	std::cout << "Hello World\n"
		     "This is \"The Modern C++\""<<std::endl;
	std::ranges::for_each(my_v, [](int i){std::cout<<i<<", ";});
}
