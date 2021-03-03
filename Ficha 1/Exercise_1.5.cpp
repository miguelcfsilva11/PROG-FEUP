//Program that computes the sum of two given hours of the day

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int h1, m1, s1;
	int h2, m2, s2;
	int d3, h3, m3, s3;
	char comma;
	cout << "Time 1 (hours, then minutes, and finally seconds): ";
	cin >> h1 >> comma >> m1 >> comma >> s1;
	cout << "Time 2 (hours, then minutes, and finally seconds): ";
	cin >> h2 >> comma >> m2 >> comma >> s2;
	s3 = (s1 + s2) % 60;
	m3 = (m1 + m2 + ((s1 + s2) / 60)) % 60;
	h3 = (h1 + h2 + ((m1 + m2) / 60)) % 24;
	d3 = (h1 + h2) / 24;
	cout << d3 << " day(s), " << h3 << " hour(s), " <<  m3 << " minute(s) and " << s3 << " seconds." << endl;
	return 0;
  
}
