#include "Task2.h"
#include <iostream>

int main() {

	int N;
	std::cin >> N;

	Exhibition* exs = new Exhibition[N];
	int M, T;

	for (int i = 0; i < N; i++) {
		std::cin >> M >> T;

		exs[i] = Exhibition(T);

		for (int j = 0; j < M; j++) {

			int id;
			double value;
			char name[100], author[100];
			std::cin >> id >> author >> name >> value;
			Picture p(id, author, name, value);
			exs[i].addPicture(p);
		}
		
	}


}
