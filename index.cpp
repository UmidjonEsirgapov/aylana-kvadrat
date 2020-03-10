#include <iostream>
#include <math.h>
using namespace std;
class aylana {
	public:
	double a;
	
	double aylanaRadius(){
		return a * sqrt(2) / 2;
	}
	
	
};
int main(){
	aylana aylanaKvadrat;
	cout << "Kvadrat tomoni = "; cin >> aylanaKvadrat.a;
	cout << "Aylana radiusi = " << aylanaKvadrat.aylanaRadius();
}