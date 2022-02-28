#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include <iostream>
#include <cstring>
#include <cassert>

namespace xw
{
	//模拟实现string增删改查
	class string
	{
	public:
		//构造函数
		string(const char* str = "")
		{
			size_t len = strlen(str);
			_str = new char[len + 1];
			strcpy(_str, str);
			_size = len;
			_capacity = len + 1;
		}

		//拷贝构造
		string(const string& s)
			:_str(new char[s._capacity])
			, _size(s._size)
			, _capacity(s._capacity)
		{
			strcpy(_str, s._str);
		}

		//赋值运算符重载
		string& operator=(const string& s)
		{
			if (&s != this)
			{
				if (_capacity >= s._capacity)
				{
					//不删除原有空间直接进行复制
					strcpy(_str, s._str);
					_size = s._size;
				}
				else
				{
					//删除原有空间新建空间
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