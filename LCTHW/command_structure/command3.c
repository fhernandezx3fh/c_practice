#include <stdio.h>
#include "command.h"

#define lsNibbleE(lsn, byte) \
		lsn = byte & 0x0F
// Extract most significant nibble from byte
#define msNibbleE(msn, byte) \
		msn = byte >> 4

// Pack nibble into least significant byte nibble
#define lsNibbleP(lsn, byte) \
		byte |= lsn
// Pack nibble into most significant byte nibble
#define msNibbleP(msn, byte) \
		byte |= (msn << 4)	

struct local swCmd_1;        // Structure defines the programs selected by external sw
struct local swCmdArr[16];


struct local checkProgSw (struct local swCmd)
{
//localCommandTable[16][32]
	swCmd.devAddress 	= 0xff;
	swCmd.prog			= localCommandTable[0][1];
	swCmd.delay			= localCommandTable[0][2];

	return swCmd;
}

struct local checkProgSwArr (struct local swCmd[])
{
//localCommandTable[16][32]
	/*swCmd.devAddress 	= 0xff;
	swCmd.prog			= localCommandTable[0][1];
	swCmd.delay			= localCommandTable[0][2];*/

	return swCmd[];
}

void printProgSw (struct local swCmd)
{
	printf("devAddress: %X\n", 	swCmd.devAddress);
	printf("prog: %X\n", 			swCmd.prog);
	printf("delay: %X\n", 		swCmd.delay);
	
}

int main(int argc, char *argv[])
{
	struct local swCmd_2 = checkProgSw(swCmd_1);
	printProgSw(swCmd_2);

	struct local swCmd_3 = checkProgSw(swCmdArr[0]);
	printProgSw(swCmd_3);

	struct local swCmd_4 = checkProgSw(swCmdArr[0]);
	printProgSw(swCmd_4);

}
