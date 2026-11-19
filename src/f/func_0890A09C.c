#include "common.h"
typedef struct {
    u8 pad_00[0x100];
    s32 unk_100;
    u8 pad_104[4];
    s32 unk_108;
    u8 *unk_10C;
} S;
extern void func_0890A130(void *);
extern u8 D_08A468E4[];
S *func_0890A09C(S *arg0, s32 arg1) {
    arg0->unk_10C = D_08A468E4;
    arg0->unk_100 = 0;
    arg0->unk_108 = arg1;
    func_0890A130(arg0);
    return arg0;
}
