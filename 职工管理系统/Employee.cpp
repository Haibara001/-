#define  _CRT_SECURE_NO_WARNINGS 1
#include"Employee.h"

// ���캯��
Employee::Employee(int id, string name, int dId)
{
	this->m_Id = id;
	this->m_Name = name;
	this->m_DeptId = dId;
}

// ��ʾ������Ϣ
void Employee::showInfo()
{
	cout << "ְ����ţ�" << this->m_Id;
	cout << "\tְ��������" << this->m_Name;
	cout << "\t��λ��" << this->getDeptName();
	cout << "\t��λְ����ɾ�����������" << endl;
}

// ��ȡ��λ����
string Employee::getDeptName()
{
	return string("Ա��");
}