#include "raylib.h"
#include "RHI.hpp"

namespace Wrapper
{
	RHI::RHI(const unsigned int p_width, const unsigned int p_height, const std::string& p_name, const unsigned int p_fpsTarget)
		: WIDTH(p_width)
		, HEIGHT(p_height)
		, NAME(p_name)
		, FPS_TARGET(p_fpsTarget)
	{
	}

	void RHI::Init()
	{
		InitWindow(WIDTH, HEIGHT, NAME.c_str());
		SetTargetFPS(FPS_TARGET);
	}

	void RHI::Draw()
	{
		BeginDrawing();
		ClearBackground(RAYWHITE);

		// TODO

		EndDrawing();
	}

	void RHI::Destroy()
	{
		CloseWindow();
	}

	const bool RHI::StopGameOfLife()
	{
		return WindowShouldClose();
	}
}