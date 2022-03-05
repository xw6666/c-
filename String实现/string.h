#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include <iostream>
#include <cstring>
#include <assert.h>
#include <algorithm>


namespace xw
{
	//ģ��ʵ��string��ɾ�Ĳ�
	class string
	{
	public:
		typedef char* iterator;         //������
		typedef const char* const_iterator;   //����������

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
		//���캯��
		string(const char* str = "")
		{
			size_t len = strlen(str);
			_str = new char[len + 1];
			strcpy(_str, str);
			_size = len;
			_capacity = len + 1;
		}

		//�������� - ��ͳд��
		//string(const string& s)
		//	:_str(new char[s._capacity])
		//	, _size(s._size)
		//	, _capacity(s._capacity)
		//{
		//	strcpy(_str, s._str);
		//}

		//��������- �ִ�д��
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

		//��ֵ��������� - ��ͳд��
		//string& operator=(const string& s)
		//{
		//	if (&s != this)
		//	{
		//		if (_capacity >= s._capacity)
		//		{
		//			//��ɾ��ԭ�пռ�ֱ�ӽ��и���
		//			strcpy(_str, s._str);
		//			_size = s._size;
		//		}
		//		else
		//		{
		//			//ɾ��ԭ�пռ��½��ռ�
		//			delete[] _str;
		//			_size = s._size;
		//			_capacity = s._capacity;
		//			_str = new char[_capacity];
		//			strcpy(_str, s._str);
		//		}
		//	}
		//	return *this;
		//}
		
		//��ֵ��������� - ���ÿ�������
		string& operator=(string s)
		{
			std::swap(_str, s._str);
			std::swap(_size, s._size);
			std::swap(_capacity, s._capacity);
			return *this;
		}

		//����c���������ַ���
		char* c_str() const
		{
			return _str;
		}
		
		//�����ַ�����
		size_t size() const
		{
			return _size;
		}

		//[]����������
		char& operator[](size_t pos)
		{
			assert(pos >= 0 && pos < _size);
			return _str[pos];
		}

		//[]���������� - ����const stringʹ��
		const char& operator[](size_t pos) const 
		{
			assert(pos >= 0 && pos < _size);
			return _str[pos]; 
		}

		//����
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

		//���ַ�������ch��һ����n���ַ�
		void resize(size_t n, char ch = '\0')
		{
			if (n + 1 > _capacity)
			{
				//���������n + 1;
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

		//׷���ַ�
		void push_back(const char ch)
		{
			if (_size + 1 >= _capacity)
			{
				//����
				reserve(_capacity * 2);
			}
			_str[_size++] = ch;
			_str[_size] = '\0';
		}

		//׷���ַ���
		void append(const char* str)
		{
			int len = strlen(str);
			while (_size + len + 1 >= _capacity)
			{
				//����
				reserve(_capacity * 2);
			}
			strcpy(_str + _size, str);
		}

		//����ַ���
		void clear()
		{
			_str[0] = '\0';
			_size = 0;
		}

		//+=���������� - ����append
		string& operator+=(const char* str)
		{
			append(str);
			return *this;
		}

		//�����ַ�
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

		//��pos����������Ӵ�s
		size_t find(const char* s, int pos = 0)
		{
			const char* ptr = strstr(_str + pos, s);
			if (ptr == nullptr)
			{
				return -1;
			}
			return ptr - _str;
		}

		//����һ���ַ� - ��posλ�ò���һ���ַ�
		string& insert(size_t pos, char ch)
		{
			assert(pos <= _size);

			//�����ַ����ȼ�һ���ַ���һ��'\0'����_capacity��������
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


	//std::ostream& operator<<(std::ostream& out, const string& s)
	//{
	//	for (auto e : s)
	//	{
	//		out << e;
	//	}
	//	return out;
	//}
	
}




