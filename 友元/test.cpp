#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <string>
using namespace std;


//ȫ�ֺ�������Ԫ
//��Ԫ - ���� - �ܷ���private

//ȫ�ֺ�������Ԫ
//class House
//{
//
//	friend void goodGay(House* const p);
//public:
//
//	House()
//	{
//		m_BedRoom = "����";
//		m_LivingRoom = "����";
//	}
//
//	string m_LivingRoom;  //����
//
//private:
//	string m_BedRoom; //����
//	
//};
//
//void goodGay(House* const p)
//{
//	cout << "��ĺû��ѷ��������" << p->m_LivingRoom << endl;
//	cout << "��ĺû��ѷ��������" << p->m_BedRoom << endl;
//}
//
//int main()
//{
//	House house;
//	goodGay(&house);
//
//	return 0;
//}


//������Ԫ
//class House
//{
//
//	friend class GoodGay;
//public:
//	House()
//	{
//		m_bedRoom = "����";
//		m_livingRoom = "����";
//		m_toilet = "����";
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
//		cout << "��ĺû��ѷ��������" << house->m_livingRoom << endl;
//		cout << "��ĺû��ѷ��������" << house->m_toilet << endl;
//		
//		//ͨ����Ԫ����Է��ʵ�private�ĳ�Ա
//		cout << "��ĺû��ѷ��������" << house->m_bedRoom << endl;
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

 

//��Ա��������Ԫ
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
//	friend void GoodGay::visit();//����������ע��Ҫ�����������ĸ�����
//public:
//	//���캯��
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
//	m_bedRoom = "����";
//	m_livingRoom = "����";
//}
//
//GoodGay::GoodGay()
//{
//	house = new House;
//}
//
//void GoodGay::visit()
//{
//	cout << "��ĺû��Ѳι������" << house->m_livingRoom << endl;
//	cout << "��ĺû��Ѳι������" << house->m_bedRoom << endl;
//}
//
//int main()
//{
//	GoodGay gg;
//	gg.visit();
//	return 0;
//}

