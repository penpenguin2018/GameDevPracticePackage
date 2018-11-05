#include "Game2D.h"
#include "RGBColors.h"
#include "DrawFunctions.h"
#include "TankExample.h"
#include <iostream>

using namespace jm;

class DrawingPrimitives : public Game2D
{
private:
	float time = 0.0f;

public:
	DrawingPrimitives()
		: Game2D("This is my digital canvas!", 1024, 768, false, 2)
	{}

	void update() override
	{
		//rotate(time * 180.0f);
		drawCircle(jm::RGBColors::red, 0.2f, 3);

		time += 1.0f / 60.0f;
	}
};

int main(void)
{
	//TankExample().run();
	DrawingPrimitives().run();

	return 0;
}
