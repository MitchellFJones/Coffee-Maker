#pragma once
#include "WaterResevoir.h"
class InternalResevoir : public WaterResevoir {
private:
	const static int m_startingTemperature = 55;
	const static int m_increment = 15;
	int m_temperature;
	char * m_setTemperature(int targetTemperature);
public:
	void setTemperature(int targetTemperature) {
		char * message = m_setTemperature(targetTemperature);
//		if (this->onSetTemperature != nullptr) {
//			onSetTemperature(message);
//		}
	}
	void(*onSetTemperature)(char * message);
};

inline char* InternalResevoir::m_setTemperature(int targetTemperature)
{
	if (m_startingTemperature < targetTemperature)
	{
		m_temperature = m_startingTemperature;
		while (m_temperature < targetTemperature)
		{
			m_temperature = m_temperature + 15;
		}
	}
	char reply = m_temperature;
	return &reply;

}
