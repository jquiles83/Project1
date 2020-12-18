#pragma once

class MyClass
{
private:
	int weight, height;
	std::string bread,sex;

public:
	void info(int myweight, int myheight, std::string mybread)
	{
		weight = myweight;
		height = myheight;
		bread = mybread;

		//std::cout << "Your " << bread << " is " << height << " in. tall and weights " << weight << " pounds. \n";
	}

	void print() {
		//for (int i = 0; i < 3; i++) {
			std::cout << "Your " << bread << " is " << height << " in. tall and weights " << weight << " pounds. \n";
			std::cout << "The sex of your animal is " << sex << ".\n";
		//}
	}
	
	void action(std::string mysex) {

		sex = mysex;
		//std::cout << "Your " << bread << " is a " << sex << ".\n";

	}


};

class meatEater :public MyClass {


};



