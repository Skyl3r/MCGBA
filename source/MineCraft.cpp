// First demo. You are not expected to understand it 
// (don't spend too much time trying and read on).
// But if you do understand (as a newbie): wow!

#include <tonc.h>


int main()
{
	REG_DISPCNT = DCNT_MODE4 | DCNT_BG2;
	//Test

	// Fill screen with gray color
	unsigned short* paletteMem = (unsigned short*)0x05000000;

	paletteMem[0] = 0x7FE00300;
	paletteMem[1] = 0x00007C18;
	paletteMem[2] = 0x00100000;
	paletteMem[3] = 0x00000000;

	m4_line(1, 1, 100, 100, 1);
	m4_line(1, 1, 100, 100, 2);
	m4_line(1, 1, 100, 100, 3);

	while (1);
}