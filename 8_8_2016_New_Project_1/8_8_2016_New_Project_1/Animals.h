#pragma once
class Animal
{
public:
	Animal();
	~Animal();
	int speed;
	void walk();
	void eat();
	void sleep();

private:

};

void Animal::walk()
{
	speed = 3;
}

class Dog : public Animal
{
public:
	void bark();

private:

};


class Cat : public Animal
{
public:
	void meow();

private:

};

class MyClass
{
public:
	MyClass();
	~MyClass();

private:

};

MyClass::MyClass()
{
}

MyClass::~MyClass()
{
}