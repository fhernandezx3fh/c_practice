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
struct local swCmd_Arr[16];

void checkProgSw (struct local *swCmd)
{
//localCommandTable[16][32]
	swCmd->devAddress 	= localCommandTable[0][0];
	swCmd->prog			= localCommandTable[0][1];
	swCmd->delay		= localCommandTable[0][2];
}

void checkProgSwArr (struct local *swCmd)
{
//localCommandTable[16][32]
	swCmd->devAddress 	= localCommandTable[0][0];
	swCmd->prog			= localCommandTable[0][1];
	swCmd->delay		= localCommandTable[0][2];
	swCmd++;
	swCmd->devAddress 	= localCommandTable[0][3];
	swCmd->prog			= localCommandTable[0][4];
	swCmd->delay		= localCommandTable[0][5];
}

void printProgSw (struct local *swCmd)
{
	printf("devAddress: %X\n", 	swCmd->devAddress);
	printf("prog: %X\n", 		swCmd->prog);
	printf("delay: %X\n", 		swCmd->delay);
	
}

void printProgSwArr (struct local *swCmd)
{
	printf("devAddress: %X\n", 	swCmd->devAddress);
	printf("prog: %X\n", 		swCmd->prog);
	printf("delay: %X\n", 		swCmd->delay);
	swCmd++;
	printf("devAddress: %X\n", 	swCmd->devAddress);
	printf("prog: %X\n", 		swCmd->prog);
	printf("delay: %X\n", 		swCmd->delay);
	
}

int main(int argc, char *argv[])
{
	struct local *ptr_1 = &swCmd_1;
	checkProgSw(ptr_1);
	printProgSw(ptr_1);

	struct local *ptr_2 = &swCmd_Arr[0];
	checkProgSwArr(ptr_2);
	printProgSwArr(ptr_2);

}
