#include <iostream>

using namespace std;

struct Product {
	char description[32];
	double cost;
	int productNumber;
};

int main() {
	Product first = { "Screw-driver", 5.50, 456};
	Product second = {"Hammer", 8.20, 324 };

	cout << first.description<<" "<<first.cost<<" "<< first.productNumber << endl;
	cout << second.description << " " << second.cost << " " << second.productNumber<<endl;

	Product arr[3];

	arr[0] = { "Screw-driver", 5.50, 456 };
	arr[1] = { "Hammer", 8.20, 324 };
	arr[2] = {"Socket", 7.75,458};

	for (int i = 0; i < 3; i++) {
		cout << arr[i].description << " " << arr[i].cost << " " << arr[i].productNumber << endl;
	}

	return 0;
}
