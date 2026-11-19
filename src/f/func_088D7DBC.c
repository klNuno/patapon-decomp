#include "common.h"

extern u8 D_08A462CC[];
void func_0880416C(void *);
typedef struct {
    u8 pad_00[0x4C];
    void *unk_4C;
} S;

void func_088CD874(S *, s32);


S *func_088D7DBC(S *arg0, s16 arg1) {
    if (arg0 != NULL) {
        arg0->unk_4C = D_08A462CC;
        func_088CD874(arg0, 0);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
