#ifndef APP_H
#define APP_H
#include "sl.h"

namespace app
{
	enum Screens
	{
		Menu = 0, Gameplay, GameOver, Credits
	};

	extern bool exit;
	extern Screens currentScreen;

	void ExecuteGame();
}
#endif // !APP_H