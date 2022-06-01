#define OLC_PGE_APPLICATION
#include <olcPixelGameEngine.h>

using namespace std;

class TSP : public olc::PixelGameEngine
{
public:
	TSP()
	{
		sAppName = "Travelling SalesMan";
	}

public:
	bool OnUserCreate() override
	{

		return true;
	}

	bool OnUserUpdate(float fElapsedTime) override
	{
		Clear(olc::BLACK);

		return true;
	}
};

int main()
{
	TSP game;
	if (game.Construct(1280, 720, 1, 1))
	{
		game.Start();
	}
}