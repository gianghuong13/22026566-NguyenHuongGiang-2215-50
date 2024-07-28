#include "Render.h"

void renderScrollingGround(int& scrollingOffset,
	                    LTexture &gGroundTexture,
	                    SDL_Renderer* gRenderer)
{
	scrollingOffset -= GROUND_SCROLLING_SPEED;
	if (scrollingOffset < -gGroundTexture.getWidth())
	{
		scrollingOffset = 0;
	}
	gGroundTexture.render(scrollingOffset, GROUND_POS_Y, gRenderer);
	gGroundTexture.render(scrollingOffset + gGroundTexture.getWidth(), GROUND_POS_Y, gRenderer);
}
