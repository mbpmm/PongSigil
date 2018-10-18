#include "game_over.h"

#include <sl.h>

#include "game.h"
#include "app.h"

using namespace app;
using namespace game;

namespace app
{
	namespace gameover
	{
		int text1PositionX = 0;
		int text1PositionY = 0;
		int text2PositionX = 0;
		int text2PositionY = 0;
		int sizeText1 = 0;
		int sizeText2 = 0;

		void InitGameover()
		{
			sizeText1 = (screenWidth * 50) / 800;
			sizeText2 = (screenWidth * 20) / 800;
			text1PositionX = screenWidth / 2 + screenWidth * 0.2625;
			text1PositionY = screenHeight / 2 - screenHeight * 0.13333333;
			text2PositionX = screenWidth * 0.1875;
			text2PositionY = screenHeight / 2 + screenHeight * 0.13333333;
		}

		void UpdateGameOver()
		{
			if (slGetKey(' '))
			{
				currentScreen = Menu;
				//ResetValues();
			}
			if (slGetKey(SL_KEY_ESCAPE))
			{
				exit = true;
			}
		}

		void DrawGameOver()
		{
			if (winner == p1Wins)
			{
				slSetForeColor(0.1, 0.9, 0.2, 0.4);

				slSetForeColor(0.0, 0.8, 0.2, 1.0);
				slSetFontSize(sizeText1);
				slText(text2PositionX, text2PositionY, "Gano el jugador 1!!!");
				slSetFontSize(sizeText2);
				slText(text1PositionX, text1PositionY, "Apreta ESPACIO para volver al menu, ESC para salir");
				
			}
			if (winner == p2Wins)
			{
				slSetForeColor(0.1, 0.9, 0.2, 0.4);

				slSetForeColor(0.0, 0.8, 0.2, 1.0);
				slSetFontSize(sizeText1);
				slText(text2PositionX, text2PositionY, "Gano el jugador 2!!!");
				slSetFontSize(sizeText2);
				slText(text1PositionX, text1PositionY, "Apreta ESPACIO para volver al menu, ESC para salir");
			}
		}
	}
}
