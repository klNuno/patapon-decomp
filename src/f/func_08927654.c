#include "common.h"

typedef struct {
    u8 unk_00;
    u8 pad_01[3];
    u32 unk_04;
    char unk_08[1];
} T;

void func_08822B3C(char *, char *);
extern char D_089E6B58[];

T *func_08927654(T *arg0)
{
    arg0->unk_04 = 0x3F800000;
    arg0->unk_00 = 0;
    func_08822B3C(arg0->unk_08, D_089E6B58);
    return arg0;
}
