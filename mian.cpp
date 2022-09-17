#include <iostream>
using namespace std;
#include "MyArray.hpp"

// ��ӡ����
void printIntArray(MyArray <int>& arr) {
	for (int i = 0; i < arr.getSize(); i++)
	{
		cout << arr[i] << endl;
	}
}

// �Զ�����������
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

// ��ӡ����
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
		arr.Push_Back(i); // β�巨
	}
	printIntArray(arr);
	cout << "arr������" << arr.getCapacity() << endl;
	cout << "arr��С��" << arr.getSize() << endl;

	MyArray<int> arr2(arr);
	arr2.Pop_Back(); // βɾ��
	printIntArray(arr2);
	cout << "arr2������" << arr2.getCapacity() << endl;
	cout << "arr2��С��" << arr2.getSize() << endl;

	MyArray<int> arr3(100);
	arr3 = arr;

	// �Զ�����������
	MyArray<Person> arr4(10);

	Person p1("test1", 1);
	Person p2("test2", 2);
	Person p3("test3", 3);
	Person p4("test4", 4);
	Person p5("test4", 4);

	// �����ݲ�������
	arr4.Push_Back(p1);
	arr4.Push_Back(p2);
	arr4.Push_Back(p3);
	arr4.Push_Back(p4);
	arr4.Push_Back(p5);
	printArray(arr4);
	cout << "arr4������" << arr4.getCapacity() << endl;
	cout << "arr4��С��" << arr4.getSize() << endl;
};