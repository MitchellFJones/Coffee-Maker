#pragma once
class WaterResevoir {
	int WaterOzCount;
	void fill_resevoir(int ozCount);
public:
	int CheckWaterOzCount();
	void FillResevoir(int ozCount);
	void(*on_resevoir_filled)();
};

inline void WaterResevoir::fill_resevoir(int ozCount)
{
	WaterOzCount = ozCount;
}

inline int WaterResevoir::CheckWaterOzCount()
{
	return WaterOzCount;
}

inline void WaterResevoir::FillResevoir(int ozCount)
{
	fill_resevoir(ozCount);
//	if (this->on_resevoir_filled != nullptr)
//	{
//		std::cout << "test" << std::endl;
//
//		this->on_resevoir_filled();
//	}
}
