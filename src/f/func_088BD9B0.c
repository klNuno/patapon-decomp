#include "common.h"

void func_0880416C(void *);
void func_088BA1E8(void *, s32);
void func_088BD70C(void *, s32);
void func_088CE530(void *, s32);
extern u8 D_08A45EF0[];
extern u8 D_08A45F30[];

u8 *func_088BD9B0(u8 *arg0, s16 arg1) {
    u8 *temp_a0;

    if (arg0 != NULL) {
        *(void **)(arg0 + 0x30) = D_08A45EF0;
        *(void **)(arg0 + 0x78) = D_08A45F30;
        temp_a0 = arg0 + 0x7C;
        if (temp_a0 != NULL) {
            func_088BD70C(temp_a0, -1);
        }
        func_088CE530(arg0 + 0x50, 0);
        func_088BA1E8(arg0, 0);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
