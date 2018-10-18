#include "menu.h"

#include <sl.h>

#include "game.h"
#include "app.h"

using namespace app;
using namespace game;

namespace app
{
	namespace menu
	{
		bool pause = false;
		char text1[] = "PONG";
		char text2[] = "Presiona ENTER para jugar";
		char text3[] = "C para ver los creditos";
		char text4[] = "ESC para salir";
		char text5[] = "V 0.2";
		int sizeText1 = 0; 
		int sizeText2 = 0; 
		int sizeText3 = 0; 
		int textPositionX = 0; 
		int textPositionY = 0; 
		int text2PositionX = 0; 
		int text2PositionY = 0; 
		int text3PositionX = 0; 
		int text3PositionY = 0;
		int text4PositionX = 0;
		int text4PositionY = 0;
		int text5PositionX = 0;
		int text5PositionY = 0;
		//Music menuSong;

		void InitMenu()
		{
			//menuSong = LoadMusicStream("res/sounds/menusong.ogg");
		//	PlayMusicStream(menuSong);
			slSetFont(slLoadFont("res/ttf/whitrabt.ttf"), 24);
			slSetTextAlign(SL_ALIGN_CENTER);
			sizeText1 = (screenWidth * 140) / 800;
			sizeText2 = (screenWidth * 20) / 800;
			sizeText3 = (screenWidth * 15) / 800;
			textPositionX = screenWidth / 2;
			textPositionY = screenHeight * 0.6;
			text2PositionX = screenWidth / 2;
			text2PositionY = screenHeight / 2 - screenHeight * 0.1333333;
			text3PositionX = screenWidth / 2 ;
			text3PositionY = screenHeight / 2 - screenHeight * 0.2333333;
			text4PositionX = screenWidth / 2;
			text4PositionY = screenHeight / 2 - screenHeight * 0.3333333;
			text5PositionX = screenWidth * 0.05;
			text5PositionY = screenHeight * 0.05;
		}

		void UpdateMenu()
		{
			//UpdateMusicStream(menuSong);
			if (slGetKey(SL_KEY_ENTER))
			{
				currentScreen=Gameplay;
			}

			if (slGetKey(SL_KEY_ESCAPE))
			{
				exit = true;
			}

		/*	if (IsKeyPressed(KEY_P))
			{
				pause = !pause;

				if (pause) StopMusicStream(menuSong);
				else PlayMusicStream(menuSong);
			}*/

			if (slGetKey('C'))
			{
				currentScreen=Credits;
			}
		}

		void DrawMenu()
		{
			slSetForeColor(0.1, 0.9, 0.2, 0.4);

			slSetForeColor(0.0, 0.8, 0.2, 1.0);
			slSetFontSize(sizeText1);
			slText(textPositionX, textPositionY, text1);

			slSetFontSize(sizeText2);
			slText(text2PositionX, text2PositionY, text2);
			slText(text3PositionX, text3PositionY, text3);
			slText(text4PositionX, text4PositionY, text4);

			slSetFontSize(sizeText3);
			slText(text5PositionX, text5PositionY, text5);
		}
	}
}

