// Ex3_4_1_�˵���.cpp: ����Ŀ�ļ���

#include "stdafx.h"
#include "Form1.h"

using namespace Ex3_4_1_�˵���;

[STAThreadAttribute]
int main(array<System::String ^> ^args)
{
	// �ڴ����κοؼ�֮ǰ���� Windows XP ���ӻ�Ч��
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false); 

	// ���������ڲ�������
	Application::Run(gcnew Form1());
	return 0;
}
