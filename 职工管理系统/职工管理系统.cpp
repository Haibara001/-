#define  _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
#include"WorkManager.h"
#include"Worker.h"
#include"Employee.h"
#include"Manager.h"
#include"Boss.h"


int main()
{
	//测试代码
	
	//Worker* worker = NULL;
	//worker = new Employee(1, "张三", 1);
	//worker->showInfo();
	//delete worker;

	//worker = new Manager(2, "李四", 2);
	//worker->showInfo();
	//delete worker;

	//worker = new Boss(3, "王五", 3);
	//worker->showInfo();
	//delete worker;

	//实例化管理者对象
	WorkerManager wm;

	int choice = 0;
	while (true)
	{
		//调用显示菜单成员函数
		wm.Show_Menu();
		cout << "请输入你的选择：" << endl;
		cin >> choice;
		switch (choice)
		{
		case 0:  //退出系统
			wm.ExitSystem();
			break;
		case 1:  //增加职工
			wm.Add_Emp();
			break;
		case 2:  //显示职工
			wm.show_Emp();
			break;
		case 3:  //删除职工
		//{
		//	//测试
		//	int ret = wm.IsExist(5);
		//	if (ret != -1)
		//	{
		//		cout << "职工存在" << endl;
		//	}
		//	else
		//	{
		//		cout << "职工不存在" << endl;
		//	}
		//	break;
		//}
			wm.Del_Emp();
			break;
		case 4:  //修改职工
			wm.Mod_Emp();
			break;
		case 5:  //查找职工
			wm.Find_Emp();
			break;
		case 6:  //排序职工
			wm.Sort_Emp();
			break;
		case 7:  //清空文档
			wm.Clean_File();
			break;
		default:
			system("cls");  //清屏操作
			break;
		}
	}

	// 堆区开辟一个指针数组,这里面new返回的是new的类型的指针,返回的是worker*的指针,即指针的指针,所以这里用二级指针


	system("pause");
	return 0;
}