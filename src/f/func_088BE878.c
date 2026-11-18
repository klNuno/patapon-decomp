#include "common.h"

typedef struct {
    u8 pad_00[0x24];
    void *unk_24;
} M_088BE878;

void func_0888065C(void *);
void func_088804C0(void *, s32);
void func_088BE950(void *);
void func_088CE530(void *, s32);
void func_088BA1E8(void *, s32);
void func_0880416C(void *);
extern u8 D_08A45F4C[];
extern u8 D_08A45F8C[];
extern u8 D_08A45350[];

u8 *func_088BE878(u8 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(void **)(arg0 + 0x30) = D_08A45F4C;
        *(void **)(arg0 + 0x78) = D_08A45F8C;
        if ((M_088BE878 *)(arg0 + 0x40B0) != NULL) {
            ((M_088BE878 *)(arg0 + 0x40B0))->unk_24 = D_08A45350;
            func_0888065C(arg0 + 0x40B0);
            func_088804C0(arg0 + 0x40B0, -1);
        }
        if ((M_088BE878 *)(arg0 + 0x4088) != NULL) {
            ((M_088BE878 *)(arg0 + 0x4088))->unk_24 = D_08A45350;
            func_0888065C(arg0 + 0x4088);
            func_088804C0(arg0 + 0x4088, -1);
        }
        if (arg0 + 0x7C != NULL) {
            func_088BE950(arg0 + 0x7C);
        }
        func_088CE530(arg0 + 0x50, 0);
        func_088BA1E8(arg0, 0);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
