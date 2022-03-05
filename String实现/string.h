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
		typedef char* iterator;         //迭代器
		typedef const char* const_iterator;   //常量迭代器

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

		//返回c语言类型字符串
		char* c_str() const
		{
			return _str;
		}
		
		//返回字符个数
		size_t size() const
		{
			return _size;
		}

		//[]操作符重载
		char& operator[](size_t pos)
		{
			assert(pos >= 0 && pos < _size);
			return _str[pos];
		}

		//[]操作符重载 - 对于const string使用
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

		//将字符串填充成ch，一共有n个字符
		void resize(size_t n, char ch = '\0')
		{
			if (n + 1 > _capacity)
			{
				//把容量变成n + 1;
				reserve(n + 1);

				memset(_str + _size, ch, n - _size);
				_size = n;
				_str[_size] = '\0';
			}
			else
			{
				if (_size < n)
				{
					memset(_str + _size, ch, n - _size);
					_size = n;
					_str[_size] = '\0';
				}
				else
				{
					_size = n;
					_str[_size] = '\0';
				}
			}
		}

		//追加字符
		void push_back(const char ch)
		{
			if (_size + 1 >= _capacity)
			{
				//增容
				reserve(_capacity * 2);
			}
			_str[_size++] = ch;
			_str[_size] = '\0';
		}

		//追加字符串
		void append(const char* str)
		{
			int len = strlen(str);
			while (_size + len + 1 >= _capacity)
			{
				//增容
				reserve(_capacity * 2);
			}
			strcpy(_str + _size, str);
		}

		//清空字符串
		void clear()
		{
			_str[0] = '\0';
			_size = 0;
		}

		//+=操作符重载 - 复用append
		string& operator+=(const char* str)
		{
			append(str);
			return *this;
		}

		//查找字符
		size_t find(char ch)
		{
			for (size_t i = 0; i != _size; i++)
			{
				if (ch == _str[i])
				{
					return i;
				}
			}
			return -1;
		}

		//在pos处往后查找子串s
		size_t find(const char* s, int pos = 0)
		{
			const char* ptr = strstr(_str + pos, s);
			if (ptr == nullptr)
			{
				return -1;
			}
			return ptr - _str;
		}

		//插入一个字符 - 在pos位置插入一个字符
		string& insert(size_t pos, char ch)
		{
			assert(pos <= _size);

			//现有字符长度加一个字符加一个'\0'大于_capacity进行扩容
			if (_size + 2 > _capacity)
			{
				reserve(_capacity * 2);
			}
			size_t i = _size + 1;
			while (i > pos)
			{
				_str[i] = _str[i - 1];
				i--;
			}
			_str[i] = ch;
			_size++;
			return *this;
		}

		string& insert(size_t pos, const char* s)
		{
			assert(pos <= _size);
			size_t len = strlen(s);
			while (_size + len + 1 > _capacity)
			{
				reserve(_size + len + 1);
			}

			size_t i = _size + len;
			while (i >= pos + len)
			{
				_str[i] = _str[i - len];
				i--;
			}
			for (size_t j = pos, k = 0; k < len; j++, k++)
			{
				_str[j] = s[k];
			}
			_size += len;
			return *this;
		}

		string& erase(size_t pos = 0, size_t len = -1)
		{
			assert(pos < _size);
    			if (len == (size_t)(-1) || pos + len >= _size)
			{
				_str[pos] = '\0';
				_size = pos;
			}
			else
			{
				strcpy(_str + pos, _str + pos + len);
			}

			return *this;
		}

		bool operator<(const string& s) const
		{
			size_t i = 0, j = 0;
			while (i < _size && j < s.size())
			{
				if (_str[i] < s._str[j])
				{
					return true;
				}
				else if (_str[i] > s._str[j])
				{
					return false;
				}
				i++;
				j++;
			}

			if (j < s.size())
			{
				return true;
			}
			return false;
		}
		
		bool operator==(const string& s) const
		{
			size_t i = 0, j = 0;
			while (i < _size && j < s.size())
			{
				if (_str[i] != s._str[j])
				{
					return false;
				}
				i++;
				j++;
			}

			if (i == _size && j == s.size())
			{
				return true;
			}
			return false;
		}

		bool operator<=(const string& s) const
		{
			return (*this < s || *this == s);
		}

		bool operator>(const string& s) const
		{
			return !(*this <= s);
		}

		bool operator>=(const string& s)
		{
			return !(*this < s);
		}

		bool operator!=(const string& s)
		{
			return !(*this == s);
		}

		friend std::ostream& operator<<(std::ostream& out, const string& s)
		{
			for (size_t i = 0; i < s._size; i++)
			{
				out << s._str[i];
			}
			return out;
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


	//std::ostream& operator<<(std::ostream& out, const string& s)
	//{
	//	for (auto e : s)
	//	{
	//		out << e;
	//	}
	//	return out;
	//}
	
}




