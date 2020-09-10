#include <iostream>

enum BREED {YORKIE, CAIRN, DANDIE, SHETLAND, DOBERMAN, LAB};

class Mammal
{
public:
	//constructors
	Mammal();
	~Mammal();

	//accessors
	int getAge() const;
	void setAge(int);
	int getWeight() const;
	void setWeight();

	//other member functions
	void speak();
	void sleep();

protected:
	int age;
	int weight;
};

class Dog : public Mammal
{
public:
	//constructors
	Dog();
	~Dog();

	//accessors
	BREED getBreed() const;
	void setBreed(BREED);

	//other member functions
	//wagTail();
	//begForFood();

protected:
	BREED itsBreed;
};

int main()
{
	return 0;
}