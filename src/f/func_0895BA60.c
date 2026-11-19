#include "common.h"

typedef struct S_0895C09C S_0895C09C;

s32 func_0895BB38(S_0895C09C *);
void func_0895BAC8(void *);
s32 func_0895B830(void *, void (*)(void *), void *, s32);

typedef struct {
    u8 pad_00[4];
    u8 unk_04[0xC];
    s32 unk_10;
} T;

s32 func_0895BA60(T *arg0) {
    if ((u8)func_0895BB38((S_0895C09C *)arg0) == 1) {
        return 0;
    }
    return (u8)func_0895B830(arg0->unk_04, func_0895BAC8, arg0, arg0->unk_10);
}
