#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include <iostream>
#include <cstring>
#include <cassert>

namespace xw
{
	//ģ��ʵ��string��ɾ�Ĳ�
	class string
	{
	public:
		//���캯��
		string(const char* str = "")
		{
			size_t len = strlen(str);
			_str = new char[len + 1];
			strcpy(_str, str);
			_size = len;
			_capacity = len + 1;
		}

		//��������
		string(const string& s)
			:_str(new char[s._capacity])
			, _size(s._size)
			, _capacity(s._capacity)
		{
			strcpy(_str, s._str);
		}

		//��ֵ���������
		string& operator=(const string& s)
		{
			if (&s != this)
			{
				if (_capacity >= s._capacity)
				{
					//��ɾ��ԭ�пռ�ֱ�ӽ��и���
					strcpy(_str, s._str);
					_size = s._size;
				}
				else
				{
					//ɾ��ԭ�пռ��½��ռ�
					delete[] _str;
					_size = s._size;
					_capacity = s._capacity;
					_str = new char[_capacity];
					strcpy(_str, s._str);
				}
			}
			return *this;
		}

		char* s_str() const
		{
			return _str;
		}

		size_t size() const
		{
			return _size;
		}

		char& operator[](size_t pos)
		{
			assert(pos >= 0 && pos < _size);
			return _str[pos];
		}

		//��������
		~string()
		{
			delete[] _str;
			_str = NULL;
			_size = 0;
			_capacity = 0;
		}


	private:
		char* _str;   //�ַ���
		size_t _size;   //�ַ�����С
		size_t _capacity;   //ά���Ŀռ�Ĵ�С
	};
}