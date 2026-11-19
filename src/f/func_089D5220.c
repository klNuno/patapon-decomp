#include "common.h"

typedef struct {
    u8 pad_00[8];
    u8 unk_08[0x40];
    s32 unk_48;
    u8 pad_4C[4];
    char unk_50[1];
} Obj;

extern void func_089137D0(char *);
void func_089D55A4(void *);

void func_089D5220(Obj *arg0)
{
    switch (arg0->unk_48) {
    case 0:
        break;
    case 1:
        func_089D55A4(arg0->unk_08);
        break;
    case 3:
        break;
    }
    func_089137D0(arg0->unk_50);
}
