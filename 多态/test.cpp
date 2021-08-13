#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <string>
using namespace std;


//动态多态
//1.要有继承关系
//2.父类中有虚函数
//3.用父类指针调用子类函数
//class Animal
//{
//public:
//	virtual void speak()
//	{
//		cout << "动物在说话" << endl;
//	}
//};
//
//class Dog : public Animal
//{
//public:
//	void speak()
//	{
//		cout << "小狗在说话" << endl;
//	}
//};
//
//class Cat : public Animal
//{
//public:
//	void speak()
//	{
//		cout << "喵喵喵" << endl;
//	}
//};
//
//void doSpeak(Animal& animal)
//{
//	animal.speak();
//}
//int main()
//{
//	Dog dog;
//	doSpeak(dog);
//	return 0;
//}



//动物类
//class Animal
//{
//public:
//	//动物运动函数
//	virtual void move()
//	{
//		cout << "动物在运动" << endl;
//	}
//};
//
////鱼类继承动物类
//class Fish : public Animal
//{
//public:
//	//鱼类运动函数重写
//	void move()
//	{
//		cout << "鱼在游" << endl;
//	}
//};
//
////狗类继承动物类
//class Dog :public Animal
//{
//public:
//	//狗类运动函数重写
//	void move()
//	{
//		cout << "狗在跑" << endl;
//	}
//};
//
////通过函数调用类内函数
//void doMove(Animal& animal)
//{
//	animal.move();
//}
//int main()
//{
//	Fish fish;
//	fish.Animal::move();
//	return 0;
//}



//多态优点
//代码组织结构清晰
//可读性强
//利于前期和后期的拓展及维护



//纯虚函数和抽象类
int main()
{
	return 0;
}