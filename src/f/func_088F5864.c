#include "common.h"

typedef struct {
    u8 pad_00[0x14];
    u8 unk_14;
    u8 pad_15[0x1DF];
    void *unk_1F4;
} T;

extern s32 func_088F5BB0(s32);
void func_08992648(void *);
void func_088F5960(T *);
extern u8 D_08A4670C[];

T *func_088F5864(T *arg0) {
    arg0->unk_1F4 = D_08A4670C;
    func_088F5BB0((s32)arg0);
    func_08992648(&arg0->unk_14);
    func_088F5960(arg0);
    return arg0;
}
