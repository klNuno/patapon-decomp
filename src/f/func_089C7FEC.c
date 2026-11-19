#include "common.h"

typedef struct {
    u8 unk_00[0x40];
} M089C8040;

extern s32 D_08A097B0[];

char *func_08985828(void *, s32);
void func_08866464(M089C8040 *, char *, s32);
void func_08864E80(void *, M089C8040 *);

void func_089C7FEC(void *arg0) {
    M089C8040 temp;

    func_08866464(&temp, func_08985828(arg0, 0), D_08A097B0[0]);
    func_08864E80(func_08985828(arg0, 3), &temp);
}
