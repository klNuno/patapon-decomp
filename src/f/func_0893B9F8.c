#include "common.h"

typedef struct {
    u8 pad_00[0x24];
    void *unk_24;
} M_0893B9F8;

void func_0888065C(void *);
void func_088804C0(void *, s32);
void func_0893BAB8(void *);
void func_088CE530(void *, s32);
void func_0880416C(void *);
extern u8 D_08A472DC[];
extern u8 D_08A45350[];

u8 *func_0893B9F8(u8 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(void **)(arg0 + 0x28) = D_08A472DC;
        if ((M_0893B9F8 *)(arg0 + 0xA60) != NULL) {
            ((M_0893B9F8 *)(arg0 + 0xA60))->unk_24 = D_08A45350;
            func_0888065C(arg0 + 0xA60);
            func_088804C0(arg0 + 0xA60, -1);
        }
        if ((M_0893B9F8 *)(arg0 + 0xA38) != NULL) {
            ((M_0893B9F8 *)(arg0 + 0xA38))->unk_24 = D_08A45350;
            func_0888065C(arg0 + 0xA38);
            func_088804C0(arg0 + 0xA38, -1);
        }
        if (arg0 + 0x2C != NULL) {
            func_0893BAB8(arg0 + 0x2C);
        }
        func_088CE530(arg0, 0);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
