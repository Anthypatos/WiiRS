/**
	@file		DRAW.hpp
	@author		Juan de la Cruz Caravaca Guerrero
	@date		22/06/2022
    @brief		Drawing functions
    @par		Description
                Functions for drawing simple objects
				
*/

#ifndef DRAW_HPP_
#define DRAW_HPP_

#include <cstdint>
#include <ogc/gx_struct.h>

/**
 * @brief Draws a horizontal line
 * 
 * @param pXfb a pointer to the start of the XFB region
 * @param CpGXRmode a rendermode object holding the rendering parameters
 * @param fOriginalWidth the width of the canvas that is being drawn. If unsure, set this to the framebuffer's width
 * @param fOriginalHeight the height of the canvas that is being drawn. If unsure, set this to the framebuffer's height
 * @param fX1 the left-hand coordinate X of the line
 * @param fX2 the right-hand coordinate X of the line
 * @param fY the coordinate Y of the line
 * @param uiColor the color of the line
 */
void DRAW_horizontalLine(void* pXfb, const GXRModeObj* CpGXRmode, 
	float fOriginalWidth, float fOriginalHeight, float fX1, float fX2, float fY, uint32_t uiColor);

/**
 * @brief Draws a vertical line
 * 
 * @param xfb a pointer to the start of the XFB region
 * @param CpGXRmode a rendermode object holding the rendering parameters
 * @param fOriginalWidth the width of the canvas that is being drawn. If unsure, set this to the framebuffer's width
 * @param fOriginalHeight the height of the canvas that is being drawn. If unsure, set this to the framebuffer's height
 * @param fX the coordinate X of the line
 * @param fY1 the upper coordinate Y of the line
 * @param fY2 the lower coordinate Y of the line
 * @param uiColor the color of the line
 */
void DRAW_verticalLine(void* pXfb, const GXRModeObj* CpGXRmode, 
	float fOriginalWidth, float fOriginalHeight, int32_t fX, int32_t fY1, int32_t fY2, uint32_t uiColor);

/**
 * @brief Draws an empty square
 * 
 * @param xfb a pointer to the start of the XFB region
 * @param CpGXRmode a rendermode object holding the rendering parameters
 * @param fOriginalWidth the width of the canvas that is being drawn. If unsure, set this to the framebuffer's width
 * @param fOriginalHeight the height of the canvas that is being drawn. If unsure, set this to the framebuffer's height
 * @param fX1 the coordinate X of the top left corner of the square
 * @param fY1 the coordinate Y of the top left corner of the square
 * @param fX2 the coordinate X of the top right corner of the square
 * @param fY2 the coordinate Y of the bottom left corner of the square
 * @param uiColor the color of the square's edges
 */
void DRAW_box(void* pXfb, const GXRModeObj* CpGXRmode, float fOriginalWidth, float fOriginalHeight,
	float fX1, float fY1, float fX2, float fY2, uint32_t uiColor);


/**
 * @brief Draws a filled square
 * 
 * @param xfb a pointer to the start of the XFB region
 * @param CpGXRmode a rendermode object holding the rendering parameters
 * @param fOriginalWidth the width of the canvas that is being drawn. If unsure, set this to the framebuffer's width
 * @param fOriginalHeight the height of the canvas that is being drawn. If unsure, set this to the framebuffer's height
 * @param fX1 the coordinate X of the top left corner of the square
 * @param fY1 the coordinate Y of the top left corner of the square
 * @param fX2 the coordinate X of the top right corner of the square
 * @param fY2 the coordinate Y of the bottom left corner of the square
 * @param uiColor the color of the square's edges
 */
void DRAW_dot(void* pXfb, const GXRModeObj* CpGXRmode, float fOriginalWidth, float fOriginalHeight,
	float fX1, float fY1, float fX2, float fY2, uint32_t uiColor);


#endif