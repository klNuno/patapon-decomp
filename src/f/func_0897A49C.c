#include "common.h"

extern u8 D_08A48014[];
extern u8 D_08A48004[];

typedef struct Obj_0897A49C {
    u8 pad_00[0x8];
    void *unk_08;
    u8 pad_0C[0xEE4];
    u8 unk_EF0[4];
} Obj_0897A49C;

void func_0880416C(void *);
void func_0897A524(void *);

Obj_0897A49C *func_0897A49C(Obj_0897A49C *arg0, s16 arg1) {
    if (arg0 != NULL) {
        if (arg0->unk_EF0 != NULL) {
            func_0897A524(arg0->unk_EF0);
        }
        if (arg0 != NULL) {
            if (arg0 != NULL) {
                arg0->unk_08 = D_08A48004;
                if (arg0 != NULL) {
                    arg0->unk_08 = D_08A48014;
                }
            }
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
