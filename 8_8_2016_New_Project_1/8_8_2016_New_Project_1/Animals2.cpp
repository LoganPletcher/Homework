#include <iostream>
using namespace std;

class Animal
{
public:
	Animal();
	//~Animal();
	void walk();

private:

};

Animal::Animal()
{

}

class Dog : virtual public Animal
{
public:
	void bark();

private:

};

void Dog::bark()
{
	cout << "bark";
}

class Cat : virtual public Animal
{
public:
	void meow();

private:

};

void Cat::meow()
{
	cout << "meow";
}

class Beagle : public Dog
{
public:
	void walk() { cout << "The Beagle is running."; };
private:

};

class Persian : public Cat
{
public:
	void walk() { cout << "The Persian is striding."; };
private:

};

int main()
{
	Beagle George;
	Persian Fluffy;
	George.bark();
	Fluffy.meow();
	return 0;
}