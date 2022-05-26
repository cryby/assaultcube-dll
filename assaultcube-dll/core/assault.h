#pragma once

/*
##########################################
#										 #
#		  SUNSET INTERNAL ALPHA			 #
#		   CODED BY HYGH/CRYBY			 #
#		 https://github.com/cryby		 #
#										 #
##########################################
*/

#include <Windows.h>
#include <stdio.h>
#include <iostream>
#include <thread>

#include "sdk/player.h"

namespace assault
{
	namespace init
	{
		void setup(HMODULE hModule);
		void setup_adress();
		void print_logo();

	}

	namespace address
	{
		inline DWORD base_module;
		inline DWORD local;
	}

	namespace globals
	{
		inline cplayer* local_player;
	}

	namespace functions
	{
		void god(cplayer* player);
		bool checkgod(cplayer* player);
		void speed_hack(cplayer* player);
	}

	namespace utility
	{
	}
}