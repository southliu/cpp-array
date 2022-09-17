#include <iostream>
using namespace std;
#include "MyArray.hpp"

// 打印数组
void printIntArray(MyArray <int>& arr) {
	for (int i = 0; i < arr.getSize(); i++)
	{
		cout << arr[i] << endl;
	}
}

// 自定义数据类型
class Person {
public:
	Person() {};
	Person(string name, int age) {
		this->m_Name = name;
		this->m_Age = age;
	}
	string m_Name;
	int m_Age;
};

// 打印数组
void printArray(MyArray <Person>& arr) {
	for (int i = 0; i < arr.getSize(); i++)
	{
		cout << arr[i].m_Name << " + " << arr[i].m_Age << endl;
	}
}

void main() {
	MyArray<int> arr(5);

	for (int i = 0; i < 5; i++)
	{
		arr.Push_Back(i); // 尾插法
	}
	printIntArray(arr);
	cout << "arr容量：" << arr.getCapacity() << endl;
	cout << "arr大小：" << arr.getSize() << endl;

	MyArray<int> arr2(arr);
	arr2.Pop_Back(); // 尾删法
	printIntArray(arr2);
	cout << "arr2容量：" << arr2.getCapacity() << endl;
	cout << "arr2大小：" << arr2.getSize() << endl;

	MyArray<int> arr3(100);
	arr3 = arr;

	// 自定义数据类型
	MyArray<Person> arr4(10);

	Person p1("test1", 1);
	Person p2("test2", 2);
	Person p3("test3", 3);
	Person p4("test4", 4);
	Person p5("test4", 4);

	// 将数据插入数组
	arr4.Push_Back(p1);
	arr4.Push_Back(p2);
	arr4.Push_Back(p3);
	arr4.Push_Back(p4);
	arr4.Push_Back(p5);
	printArray(arr4);
	cout << "arr4容量：" << arr4.getCapacity() << endl;
	cout << "arr4大小：" << arr4.getSize() << endl;
};