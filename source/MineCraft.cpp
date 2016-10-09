// First demo. You are not expected to understand it 
// (don't spend too much time trying and read on).
// But if you do understand (as a newbie): wow!

#include <tonc.h>

int main()
{
    *(unsigned int*)0x04000000 = 0x0403;

    ((unsigned short*)0x06000000)[120+80*240] = 0x001F;
    ((unsigned short*)0x06000000)[136+80*240] = 0x03E0;
    ((unsigned short*)0x06000000)[120+96*240] = 0x7C00;
	char *cp = new char[100];
	
	
    while(1);

    return 0;
}