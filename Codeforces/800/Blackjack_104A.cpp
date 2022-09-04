#include <bits/stdc++.h>
#define ll long long


int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	
	int n;
	std::cin >> n;

	int dif = n-10;

	if(n<11)
		std::cout << 0 << "\n";

	else if(dif<10)
		std::cout << 4 << "\n";

	else if(dif==10)
		std::cout << "15\n";

	else if(dif==11) std::cout << "4\n";

	else std::cout << "0\n" ;
}