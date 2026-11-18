#include "common.h"

typedef struct Unk_089CA058_Local {
    u8 pad_00[0x40];
} Unk_089CA058_Local;

extern int func_08864E80(char *, char *);
void func_08866464(Unk_089CA058_Local *, char *, s32);
char *func_08985828(s32, s32);
extern s32 D_089F3808[];

void func_089CA058(s32 arg0) {
    Unk_089CA058_Local sp20;
    char *temp;
    u32 i;

    temp = func_08985828(arg0, 0);
    for (i = 0; i < 8; i++) {
        func_08866464(&sp20, temp, D_089F3808[i]);
        func_08864E80(func_08985828(arg0, i + 1), (char *)&sp20);
    }
}
