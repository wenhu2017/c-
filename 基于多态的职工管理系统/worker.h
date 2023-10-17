#pragma once
#include <string>
using namespace std;

// 职工抽象基类
class Worker
{
public:
	// 显示个人信息
	virtual void showInfo() = 0;
	//获取岗位名称
	virtual string getDeptName() = 0;


	int m_Id; // 职工ID
	string m_Name; // 职工信息
	int m_DeptId; // 职工所在部门名称编号
};

