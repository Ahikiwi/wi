/*!
 * @file DFRobot_ZJJ.h
 * @brief ����DFRobot_ZJJ ��Ļ����ṹ������������ʵ��
 * 
 * @copyright   Copyright (c) 2010 DFRobot Co.Ltd (http://www.dfrobot.com)
 * @licence     The MIT License (MIT)
 * @author [Arya](xue.peng@dfrobot.com)
 * @version  V1.0
 * @eGDAte  2019-07-28
 * @get from https://www.dfrobot.com
 * @url https://github.com/zhongdatao/DFRobot_test
 */

#include <DFRobot_ZJJ.h>
#include <string.h>
//���캯������д
DFRobot_ZJJ::DFRobot_ZJJ(){
	Serial.println("hello DFRobot!!!");
}
//�鹹��������д
DFRobot_ZJJ::~DFRobot_ZJJ(){
	Serial.println("byebye DFRobot!!!");
}
//���������ĺ���
int DFRobot_ZJJ::setName(const char * name){
	if(strlen(name)<20){
		 _name = name;
		 return 0;
	}
	return -1;
}
//��������ĺ���(������������)
int DFRobot_ZJJ::setAge(uint8_t age){
	if((age>18) || (age<100)){
		_age = age;
		return 0;
	}
	return -1;
}
//��������ĺ���(�����ַ�������)
int DFRobot_ZJJ::setAge(String age){
	int tem = age.toInt();//toInt�ǰ��ַ�������ת�����������͵ĺ���
	if((tem>18) || (tem<100)){
		_age = tem;
		return 1;
	}
	return 0;
}
//�õ���������
String DFRobot_ZJJ::getName(){
	return _name;
}
//�õ����亯��
uint8_t DFRobot_ZJJ::getAge()
{
	return _age;
}