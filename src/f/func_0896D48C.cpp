#include "common.h"

extern "C" {

s32 func_08958924(void *);

typedef struct {
    u8 *unk_00;
    s32 unk_04;
    s32 unk_08;
} T;

void func_0896D6F0(T *);
void func_0896DD80(T *);

void func_0896D48C(T *arg0, u8 *arg1, s32 arg2) {
    s32 temp;

    arg0->unk_00 = arg1;
    arg0->unk_04 = arg2;
    temp = func_08958924(arg0->unk_00 + 0x2980);
    if ((arg0->unk_08 = temp) == 0) {
        func_0896D6F0(arg0);
    } else {
        func_0896DD80(arg0);
    }
}

}
