#define  _CRT_SECURE_NO_WARNINGS 1
#include"Manager.h"

Manager::Manager(int id, string name, int dId)
{
	this->m_Id = id;
	this->m_Name = name;
	this->m_DeptId = dId;
}
// ��ʾ������Ϣ
void Manager::showInfo()
{
	cout << "ְ����ţ�" << this->m_Id;
	cout << "\tְ��������" << this->m_Name;
	cout << "\t��λ��" << this->getDeptName();
	cout << "\t��λְ������ϰ彻�������񣬲����·������Ա��" << endl;
}

// ��ȡ��λ����
string Manager::getDeptName()
{
	return string("����");
}