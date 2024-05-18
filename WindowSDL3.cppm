module;

#include "SDL3/SDL.h"

export module FW.WindowSDL3;

import FW.Window;


namespace fw
{

export class WindowSDL3 : public Window
{
public:
	WindowSDL3()
	{
	}

	~WindowSDL3() override
	{
	}

};

}
