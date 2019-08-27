/*!
 * @file DFRobot_ZJJ.h
 * @brief ����һ������Ĵ����������������˵����������䣻���ҿ����ж�����������ֺ������Ƿ�淶��
 * ���ҿ��Խ������������ӡ������
 * @n ������д�˹��캯�������������ķ����������ֲ���������ȫ��ӡ������������������Ҳʹ�������أ�ʹ������
 * �ķ�������ʹ����������������������Ҳ�������ַ������͡�
 * @copyright   Copyright (c) 2010 DFRobot Co.Ltd (http://www.dfrobot.com)
 * @licence     The MIT License (MIT)
 * @author [Arya](xue.peng@dfrobot.com)
 * @version  V1.0
 * @eGDAte  2019-07-28
 * @get from https://www.dfrobot.com
 * @url https://github.com/zhongdatao/DFRobot_test
 */
#ifndef _DFROBOT_ZJJ_H
#define _DFROBOT_ZJJ_H

#if ARDUINO >= 100
#include "Arduino.h" //ע��ʹ��uint8_t��ʱ����뵼�����Arduino.hͷ�ļ�
#else
#include "WProgram.h"
#endif

class DFRobot_ZJJ
{
public:
    char name[20];
	/**
	* @brief ���캯��
	* @param ���Զ��������д
	*/
	DFRobot_ZJJ();
	/**
	* @brief ��������
	* @param �ڳ���������ִ��
	*/
	~DFRobot_ZJJ();
	/**
	* @brief ��ֵ��������
	* @return ����0��ʾ��ʼ���ɹ�������-1��ʾʧ��
	*/
    int setName(const char * name);
	/**
	* @brief ��ֵ���亯��
	* @param ����0��ʾ��ʼ���ɹ�������-1��ʾʧ��
	*/
    int setAge(uint8_t age);
	/**
	* @brief ��ֵ���亯��
	* @param �ַ������͵ĸ�ֵ
	*/
	int setAge(String age);
	/**
	* @brief ȡֵ����
	* @param ȡ���㸳ֵ�����ĺ���
	*/
    String getName(void);
	/**
	* @brief ȡֵ����
	* @param ȡ���㸳ֵ����ĺ���
	*/
    uint8_t getAge(void);
private:                 
    //˽�л�����ı���
    String _name;
    uint8_t _age;
};
#endif