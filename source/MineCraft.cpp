#include <tonc.h>

int main()
{
	REG_DISPCNT = DCNT_MODE4 | DCNT_BG2;

	m4_setclrid(CLR_BLACK, 0);
	m4_setclrid(CLR_BLUE, 1);

	int x, y;
	x = 100;
	y = 10;

	while (1) {
		vid_vsync();
		key_poll();
		m4_plot(x, y, 1);


	}
}