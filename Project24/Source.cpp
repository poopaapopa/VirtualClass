#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include<string.h>
using namespace std;

template <class T>
class Pair
{
	T a;
	T b;
public:
	Pair(T t1, T t2);
};
template <class T>
Pair<T>::Pair(T t1, T t2) :a(t1), b(t2){}
template <class T>
class Trio :public Pair<T>
{
	T c;
public:
	Trio(T t1, T t2, T t3);
};
template <class T>
Trio<T>::Trio(T t1, T t2, T t3) :Pair<T>(t1, t2), c(t3){}
class A
{
public:
	virtual void v_Function();
};
class Animal
{
public:
	char Title[20];
	Animal(const char* t)
	{
		strcpy(Title, t);
	}
	virtual void speak() = 0;
};
class Frog : public Animal
{
public:
	Frog(const char* Title):Animal(Title){}
	virtual void speak()
	{
		cout << Title << " say " << "\'kwa-kwa\'\n";
	}
};
class Dog : public Animal
{
public:
	Dog(const char* Title) : Animal(Title) {}
	virtual void speak()
	{
		cout << Title << " say " << "\'gav-gav\'\n";
	}
};
class Cat : public Animal
{
public:
	Cat(const char* Title) : Animal(Title) {}
	virtual void speak()
	{
		cout << Title << " say " << "\'meow-meow\'\n";
	}
};
class Lion : public Cat
{
public:
	Lion(const char* Title) : Cat(Title) {}
	virtual void speak()
	{
		cout << Title << " say " << "\'rrr-rrr\'\n";
	}
};

int main()
{
	Animal* animals[4] = { new Dog("Bob"),new Cat("Murka"), new Frog("Gyria"), new Lion("Simba") };
	for (int i = 0; i < 4; i++)
	{
		animals[i]->speak();
	}
	return 0;
}