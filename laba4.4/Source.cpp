#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	double x, xp, xk, dx, y, R;
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << "R = "; cin >> R;
	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|" << setw(5) << "y" << " |" << endl;

	cout << "---------------------------" << endl;
	x = xp;
	while (x <= xk)
	{

		if (x <= -8 - R)
			y = (y = R);
		else
			if (-8 - R < x <= -8)
				y = -sqrt(R * R - (x + 8) * (x + 8));
			else
				if (-8 < x <= -8 + R)
					y = -sqrt(R * R - (x + 8) * (x + 8));
				else
					if (-8 + R < x <= -4)
						y = (y = R);
					else
						if (-4 < x && x < 2)
							y = ((x + 4) * (-1 - R)) / 6;
						else
							y = x - 2 - 1;
						
						
		cout << y <<
			endl;
		x += dx;
	}
	cout << "---------------------------" << endl;
	return 0;
}
