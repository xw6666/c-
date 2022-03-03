#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include <iostream>
#include <cstring>
#include <assert.h>
#include <algorithm>

namespace xw
{
	//模拟实现string增删改查
	class string
	{
	public:
		typedef char* iterator;
		typedef const char* const_iterator;

		const_iterator begin() const
		{
			return _str;
		}

		const_iterator end() const
		{
			return _str + _size;
		}

		iterator begin()
		{
			return _str;
		}

		iterator end()
		{
			return _str + _size;
		}
		//构造函数
		string(const char* str = "")
		{
			size_t len = strlen(str);
			_str = new char[len + 1];
			strcpy(_str, str);
			_size = len;
			_capacity = len + 1;
		}

		//拷贝构造 - 传统写法
		//string(const string& s)
		//	:_str(new char[s._capacity])
		//	, _size(s._size)
		//	, _capacity(s._capacity)
		//{
		//	strcpy(_str, s._str);
		//}

		//拷贝构造- 现代写法
		string(const string& s)
			:_str(nullptr)
			,_size(0)
			,_capacity(0)
		{
			string temp(s._str);
			std::swap(_str, temp._str);
			std::swap(_size, temp._size);
			std::swap(_capacity, temp._capacity);
		}

		//赋值运算符重载 - 传统写法
		//string& operator=(const string& s)
		//{
		//	if (&s != this)
		//	{
		//		if (_capacity >= s._capacity)
		//		{
		//			//不删除原有空间直接进行复制
		//			strcpy(_str, s._str);
		//			_size = s._size;
		//		}
		//		else
		//		{
		//			//删除原有空间新建空间
		//			delete[] _str;
		//			_size = s._size;
		//			_capacity = s._capacity;
		//			_str = new char[_capacity];
		//			strcpy(_str, s._str);
		//		}
		//	}
		//	return *this;
		//}
		
		//赋值运算符重载 - 复用拷贝构造
		string& operator=(string s)
		{
			std::swap(_str, s._str);
			std::swap(_size, s._size);
			std::swap(_capacity, s._capacity);
			return *this;
		}

		char* c_str() const
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

		const char& operator[](size_t pos) const 
		{
			assert(pos >= 0 && pos < _size);
			return _str[pos];
		}

		//扩容
		void reserve(size_t n)
		{
			if (n > _capacity)
			{
				char* temp = new char[n];
				strcpy(temp, _str);
				delete[] _str;
				_str = temp;

				_capacity = n;
			}
		}

		void push_back(const char ch)
		{
			if (_size + 1 >= _capacity)
			{
				//增容
			}
			_str[_size++] = ch;
			_str[_size] = '\0';
		}

		void append(const char* str)
		{
			int len = strlen(str);
			while (_size + len + 1 >= _capacity)
			{
				//增容
				
			}
			strcpy(_str + _size, str);
		}

		string& operator+=(const char* str)
		{

		}

		//析构函数
		~string()
		{
			delete[] _str;
			_str = NULL;
			_size = 0;
			_capacity = 0;
		}


	private:
		char* _str;   //字符串
		size_t _size;   //字符串大小
		size_t _capacity;   //维护的空间的大小
	};
}