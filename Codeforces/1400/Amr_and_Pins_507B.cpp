#include <bits/stdc++.h>
#define ll long long


int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);

	ll r, x, y, x1, y1;
	std::cin >> r >> x >> y >> x1 >> y1;

	ll dis = (x-x1)*(x-x1) + (y-y1)*(y-y1);

	ll d = sqrt(dis);
	if(d*d!=dis)
		d++;

	if(d%(r*2)==0)
		std::cout << d/(r*2) << "\n";

	else
		std::cout << d/(r*2) + 1 << "\n";

}