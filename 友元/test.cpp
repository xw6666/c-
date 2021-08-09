#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <string>
using namespace std;


//全局函数作友元
//友元 - 朋友 - 能访问private

//全局函数作友元
//class House
//{
//
//	friend void goodGay(House* const p);
//public:
//
//	House()
//	{
//		m_BedRoom = "卧室";
//		m_LivingRoom = "客厅";
//	}
//
//	string m_LivingRoom;  //客厅
//
//private:
//	string m_BedRoom; //卧室
//	
//};
//
//void goodGay(House* const p)
//{
//	cout << "你的好基友访问了你的" << p->m_LivingRoom << endl;
//	cout << "你的好基友访问了你的" << p->m_BedRoom << endl;
//}
//
//int main()
//{
//	House house;
//	goodGay(&house);
//
//	return 0;
//}


//类作友元
//class House
//{
//
//	friend class GoodGay;
//public:
//	House()
//	{
//		m_bedRoom = "卧室";
//		m_livingRoom = "客厅";
//		m_toilet = "厕所";
//	}
//
//public:
//	string m_livingRoom;
//	string m_toilet;
//private:
//	string m_bedRoom;
//};
//
//class GoodGay
//{
//public:
//	GoodGay()
//	{
//		house = new House;
//	}
//
//	void go()
//	{
//		cout << "你的好基友访问了你的" << house->m_livingRoom << endl;
//		cout << "你的好基友访问了你的" << house->m_toilet << endl;
//		
//		//通过友元类可以访问到private的成员
//		cout << "你的好基友访问了你的" << house->m_bedRoom << endl;
//	}
//
//public:
//	House* house;
//};
//
//int main()
//{
//	GoodGay gg;
//	gg.go();
//
//	return 0;
//}

 

//成员函数做友元
//class House;
//
//class GoodGay
//{
//public:
//	GoodGay();
//	void visit();
//
//public:
//	House* house;
//};
//
//class House
//{
//	friend void GoodGay::visit();//声明函数，注意要声明函数在哪个类内
//public:
//	//构造函数
//	House();
//	
//public:
//	string m_livingRoom; 
//private:
//	string m_bedRoom;
//};
//
//House::House()
//{
//	m_bedRoom = "卧室";
//	m_livingRoom = "客厅";
//}
//
//GoodGay::GoodGay()
//{
//	house = new House;
//}
//
//void GoodGay::visit()
//{
//	cout << "你的好基友参观了你的" << house->m_livingRoom << endl;
//	cout << "你的好基友参观了你的" << house->m_bedRoom << endl;
//}
//
//int main()
//{
//	GoodGay gg;
//	gg.visit();
//	return 0;
//}

