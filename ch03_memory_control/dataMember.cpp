#include <iostream>

class SimpleCat
{
public:
	SimpleCat();
	~SimpleCat();
	int GetAge() const { return *itsAge;  }
	void SetAge(int age) { *itsAge = age;  }

	int GetWeight() const { return *itsWeight; }
	void setWeight(int weight) { *itsWeight = weight; }
private:
	int *itsAge;
	int* itsWeight;
};

SimpleCat::~SimpleCat()
{
	delete itsAge;
	delete itsWeight;
}

int main()
{
	SimpleCat* Frisky = new SimpleCat;
	std::cout << "Frisky is " << Frisky->GetAge()
		<< " years old" << std::ednl;

	delete Frisky;
	return 0;
}