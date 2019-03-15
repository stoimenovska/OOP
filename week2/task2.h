#pragma once

class Picture {
private:
	int id;
	char author[100];
	char name[100];
	double value;
public:
	//default constructor
	Picture() {
		id = 0;
		author[0] = '\0';
		name[0] = '\0';
		value = 0;
	}
	Picture(int id_, char author_, char name_, double value_) {};
double getValue()
	{
		return value;
	}
};

class Exhibition {

private:
	int numOfPictures;
	double price;
	Picture pictures[30];

public: 
	Exhibition(const double price_ = 0) {
		price = price_;
		numOfPictures = 0;
	}

void addPicture(Picture &picture) {

	 pictures[numOfPictures] = picture;
	 numOfPictures++;
		
	}
int getPrice() {

	return price;
 }

double calculate() {
	double sum = 0;
	for (int i = 0; i < numOfPictures; i++)sum += pictures[i].getValue();
	return price*sum;
}
};

