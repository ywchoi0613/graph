#include <fstream>
#include <iostream>
#include <cmath>
using namespace std;
const float pi = 3.1415926535897932384626433832795028841971693993751058209;
int main() {
	ofstream woo("cos.txt");
	float t, dt, T;
	T = 1./22;
	dt = 1./ 2200;
	for (t = 0.0; t < T; t += dt) {
		woo << t << "  " << exp(-110*t)*cos(220*pi*t) << "  " << exp(-110*t) * sin(220 * pi * t) << endl;
	}
	woo.close();
}
