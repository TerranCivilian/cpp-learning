#include <cstdio>
#include <cstdint>

using namespace std;

// reverse byte ordering e.g. little endian -> big endian
uint16_t reverse(uint16_t i)
{
	return (i>>8) | (i<<8);
}


uint32_t reverse(uint32_t i)
{
	return i>>24 | (i&0xff0000)>>8 | (i&0xff00)<<8 | i<<24;
}

uint64_t reverse(uint64_t i)
{
	return i>>56 | (i&0xff000000000000)>>40 | (i&0xff0000000000)>>24 | (i&0xff00000000)>>8 |
               (i&0xff000000)<<8 | (i&0xff0000)<<24 | (i&0xff00)<<40 | i<<56;
}

int main()
{
	uint16_t i {0xabcd};
	printf("0xabcd is stored as 0x%x on a little endian machine.\n", reverse(i));

	uint32_t k {0xdeadbeef};
	printf("0xdeadbeef is stored as 0x%x on a little endian machine.\n", reverse(k));

	uint64_t j {0x123456789abcdef0};
	printf("0xbadc0ffee0ddf00d is stored as 0x%lx on a little endian machine.\n", reverse(j));
	return 0;
}
