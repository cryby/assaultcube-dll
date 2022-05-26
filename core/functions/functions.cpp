#include "../assault.h"

using namespace assault;

void functions::god(cplayer* player)
{
	player->mHealth = 1337;
	player->mArmor = 1337;

	player->smgAmmo = 1337;
	player->smgAmmoR = 1337;
	player->pistolAmmo = 1337;
	player->pistolAmmoR = 1337;
	player->mGrenades = 1337;
}

bool functions::checkgod(cplayer* player)
{
	if (player->mHealth != 1337 || player->mArmor != 1337 || player->mGrenades != 1337 || player->smgAmmo != 1337 || player->pistolAmmo != 1337)
		return TRUE;

	return FALSE;
}

void functions::speed_hack(cplayer* player)
{
	if (GetAsyncKeyState(0x57))
	{
		player->mSpeed = 5;
	}
}