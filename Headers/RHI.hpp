#include <string>

namespace Wrapper
{
	class RHI // Render Hardware Interface
	{
		// Attributes
	private:
		const unsigned int WIDTH = 800;
		const unsigned int HEIGHT = 450;
		const std::string NAME = "Game of Life";
		const unsigned int FPS_TARGET = 60;

		// Methods
	public:
		RHI(const unsigned int p_width, const unsigned int p_height, const std::string& p_name, const unsigned int p_fpsTarget);

		void Init();
		void Draw();
		void Destroy();

		const bool StopGameOfLife();
	};
}