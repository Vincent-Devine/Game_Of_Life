#include "Common.hpp"
#include "RHI.hpp"

int main()
{
	Wrapper::RHI rhi(800, 450, "Game of Life", 60);

	rhi.Init();

	while (!rhi.StopGameOfLife())
	{
		rhi.Draw();
	}

	rhi.Destroy();

	return SUCCESS;
}
