module;

#include "glm/vec2.hpp"

export module FW.Window;

namespace fw
{

export class Window
{
protected:
	glm::ivec2 _position{ 0, 0 };
	glm::ivec2 _size{ 0, 0 };

public:
	Window() = default;
	virtual ~Window() = default;

	virtual void setPosition(const glm::ivec2& position) noexcept { _position = position; }
	virtual void setSize(const glm::ivec2& size) noexcept { _size = size; }

	virtual const glm::ivec2& getPosition() const noexcept { return _position; }
	virtual const glm::ivec2& getSize() const noexcept { return _size; }

};

}
