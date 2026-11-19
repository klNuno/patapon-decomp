#include "common.h"

typedef struct {
    u8 pad_00[0x50560];
    u8 unk_50560;
    u8 pad_50561[0x4AFDF];
    u8 unk_9B540;
    u8 pad_9B541[0x1057];
    u8 unk_9C598;
} T;

extern void func_088F3480(void *);
extern void func_089261F8(void *, s32);
extern void func_088DE1D4(T *, s32);

void func_088DE130(T *arg0, s32 arg1) {
    func_088F3480(&arg0->unk_50560);
    func_089261F8(&arg0->unk_9B540, arg1);
    func_089261F8(&arg0->unk_9C598, arg1);
    func_088DE1D4(arg0, arg1);
}
