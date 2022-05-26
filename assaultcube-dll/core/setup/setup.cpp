#include "../assault.h"

using namespace assault;

void init::setup_adress()
{
	address::base_module = (DWORD)GetModuleHandle("ac_client.exe");
	address::local = *(DWORD*)(address::base_module + 0x10F4F4);

	globals::local_player = *(cplayer**)(address::base_module + 0x10F4F4);
}

void init::print_logo()
{
	system("Color 0C");
	std::cout << std::endl;
	std::cout << R"(                           _   
                          | |  
  ___ _   _ _ __  ___  ___| |_ 
 / __| | | | '_ \/ __|/ _ \ __|
 \__ \ |_| | | | \__ \  __/ |_ 
 |___/\__,_|_| |_|___/\___|\__|
                               )" << "\n";
	std::cout << " Coded by HYGH with <3\n\n\n";
	system("Color 0E");

	std::cout << "Module: " << "ac_client.exe\n";
	std::cout << "Base Adress: " << std::hex << "0x" << address::base_module << "\n";
	std::cout << "Player Adress: " << std::hex << "0x" << address::local << "\n\n";
	std::cout << "Health: " << std::dec << globals::local_player->mHealth << "\n";
	std::cout << "Armor: " << std::dec << globals::local_player->mArmor << "\n";
	std::cout << "SMG Ammo: " << std::dec << globals::local_player->smgAmmo << "\n";
	std::cout << "Pistol Ammo: " << std::dec << globals::local_player->pistolAmmo << "\n";
	std::cout << "Grenades: " << std::dec << globals::local_player->mGrenades << "\n\n";
	std::cout << "Binds: NOT WORKING\n\n";
	std::cout << "Unlimited Health: F1\nUnlimited Armor: F2\nUnlimited SMG Ammo: F3\nUnlimited Pistol Ammo: F4\nUnlimited Grenades: F5:\nSpeed Hack: F6\nUnload: END\n";
}