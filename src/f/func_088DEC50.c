#include "common.h"

typedef struct {
    u8 pad_00[0xA1768];
    u8 unk_A1768;
    u8 pad_A1769[0x10A47];
    u8 unk_B21B0;
} T;

void func_089C6854(void *);

void func_088DEC50(T *arg0)
{
    arg0->unk_B21B0 = 0;
    func_089C6854(&arg0->unk_A1768);
}
