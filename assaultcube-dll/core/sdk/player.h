#pragma once
#include <cstdint>
#include <vector>

class cplayer
{
public:
	void* vTable; //0x0000
	float vecPos[3]; //0x0004
	char pad_0010[112]; //0x0010
	int64_t mSpeed; //0x0080
	char pad_0088[112]; //0x0088
	int32_t mHealth; //0x00F8
	int32_t mArmor; //0x00FC
	char pad_0100[20]; //0x0100
	int32_t pistolAmmoR; //0x0114
	char pad_0118[16]; //0x0118
	int32_t smgAmmoR; //0x0128
	char pad_012C[16]; //0x012C
	int32_t pistolAmmo; //0x013C
	char pad_0140[16]; //0x0140
	int32_t smgAmmo; //0x0150
	char pad_0154[4]; //0x0154
	int32_t mGrenades; //0x0158
	char pad_015C[1906]; //0x015C
};