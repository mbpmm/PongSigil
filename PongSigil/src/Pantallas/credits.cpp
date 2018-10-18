#include "credits.h"

#include <sl.h>

#include "game.h"
#include "app.h"

using namespace app;
using namespace game;

namespace app
{
	namespace credits
	{
		char text1[] = "Usando libreria raylib";
		char text2[] = "Musica y sonidos realizados con Bosca Ceoil";
		char text3[] = "Creado por Mariano Martinez";
		char text4[] = "Aprete SPACE para volver al menu";
		char text5[] = "PONG V 0.2";
		int sizeText = 0; 
		int sizeText2 = 0;
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

		void InitCredits()
		{
			sizeText = (screenWidth * 30) / 800;
			sizeText2 = (screenWidth * 15) / 800;
			textPositionX = screenWidth / 2;
			textPositionY = screenHeight * 0.2852;
			text2PositionX = screenWidth / 2 ;
			text2PositionY = screenHeight * 0.428571;
			text3PositionX = screenWidth / 2;
			text3PositionY = screenHeight * 0.571428;
			text4PositionX = screenWidth / 2 ;
			text4PositionY = screenHeight * 0.142857;
			text5PositionX= screenWidth / 2 ;
			text5PositionY = screenHeight * 0.714285;
		}

		void UpdateCredits()
		{
			if (slGetKey(' '))
			{
				currentScreen = Menu;
				//ResetValues();
			}
		}

		void DrawCredits()
		{
			slSetForeColor(0.1, 0.9, 0.2, 0.4);

			slSetForeColor(0.0, 0.8, 0.2, 1.0);
			slSetFontSize(sizeText);
			slText(textPositionX, textPositionY, text1);
			slText(text2PositionX, text2PositionY, text2);
			slText(text3PositionX, text3PositionY, text3);
			slText(text5PositionX, text5PositionY, text5);

			slSetFontSize(sizeText2);
			slText(text4PositionX, text4PositionY, text4);
			
		}


	}
}