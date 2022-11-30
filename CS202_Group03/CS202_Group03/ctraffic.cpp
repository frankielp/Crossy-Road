#include "header/header.h"

cTraffic::cTraffic()
{
	m_status = false;
	m_time = 0;
}
void cTraffic::set(bool status, int time)
{
	m_status = status;
	m_time = time;
}
void cTraffic::updateTime(int a)
{
	m_time++;
	if (m_time == MAX_TIME)
	{
		this->changeStatus();
		draw();
		if (m_status == true)
		{
			m_time = a;
		}
		else
		{
			m_time = 0;
		}
	}
}
int cTraffic::getTime()
{
	return m_time;
}
bool cTraffic::getStatus()
{
	return m_status;
}
void cTraffic::changeStatus()
{
	if (m_status == true)
		m_status = false;
	else
		m_status = true;
}

void cTraffic::draw(){
	//color
	if(m_status == true){
		textColor(284);
		for(int i = 0; i < 2; ++i){
			gotoXY(6 + i, 28);
			cout << char(219);
		}
		textColor(254);
		for(int i = 0; i < 2; ++i){
			gotoXY(6 + i, 29);
			cout << char(219);
		}
	}
	else{
		textColor(254);
		for(int i = 0; i < 2; ++i){
			gotoXY(6 + i, 28);
			cout << char(219);
		}
		textColor(170);
		for(int i = 0; i < 2; ++i){
			gotoXY(6 + i, 29);
			cout << char(219);
		}
	}
}