#include <stdio.h>
#include <stdint.h>
#include <signal.h>
/* windows only */
#if defined(PLATFORM_WINDOWS)
#include <Windows.h>
#include <conio.h>  // _kbhit
#elif defined(PLATFORM_MACOS)
/* unix only */
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/time.h>
#include <sys/types.h>
#include <sys/termios.h>
#include <sys/mman.h>
#endif

#define MEMORY_MAX (1 << 16)
uint16_t memory[MEMORY_MAX];

enum
{
	R_R0 = 0,
	R_R1,
	R_R2,
	R_R3,
	R_R4,
	R_R5,
	R_R6,
	R_R7,
	R_PC, /* program counter */
	R_COND,
	R_COUNT
};

int main(void) {
	return 0;
}