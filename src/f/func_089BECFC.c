#include "common.h"

typedef struct {
    u8 pad_00[0xA40];
    u8 *unk_A40;
    u8 unk_A44;
} T;

extern void func_089BE6D8(void *arg0, void *arg1, void *arg2, void *arg3);

void func_089BECFC(T *arg0, void *arg1, void *arg2)
{
    func_089BE6D8(&arg0->unk_A44, arg1, arg0->unk_A40 + 8, arg2);
}
