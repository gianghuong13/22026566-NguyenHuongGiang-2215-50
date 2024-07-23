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
	gGroundTexture.render(scrollingOffset, 400, gRenderer);
	gGroundTexture.render(scrollingOffset + gGroundTexture.getWidth(), 400, gRenderer);
}
