#include "common.h"

typedef struct {
    u8 pad_00[8];
    void *unk_08;
    u8 pad_0C[0x14];
    s32 unk_20;
    s32 unk_24;
    u8 unk_28[0xC4];
    s32 unk_EC;
    s32 unk_F0;
    s32 unk_F4;
} T;

void func_0895EFB8(T *, s32);
void func_0880406C(void *, void (*)(void), void (*)(void), s32, s32);
void func_0887E598(void);
void func_0887E924(void);
extern u8 D_08A452D0[];

T *func_0887E280(T *arg0, s32 arg1) {
    func_0895EFB8(arg0, arg1);
    arg0->unk_08 = D_08A452D0;
    arg0->unk_20 = 0;
    arg0->unk_24 = 0;
    func_0880406C(arg0->unk_28, func_0887E598, func_0887E924, 0xC4, 1);
    arg0->unk_EC = 0;
    arg0->unk_F0 = 0;
    arg0->unk_F4 = 0;
    return arg0;
}
