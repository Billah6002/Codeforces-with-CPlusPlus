#include <bits/stdc++.h>
#define ll long long


int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);

	double a, b, c;
	std::cin >> a >> b >> c;
	
	double x = sqrt((a/b)*c);
	double y = sqrt((c/a)*b);
	double z = sqrt((b/c)*a);

	std::cout << (x+y+z)*4 << "\n";
}