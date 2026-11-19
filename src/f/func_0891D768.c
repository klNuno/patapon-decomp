#include "common.h"

void func_0880416C(void *);
void func_089136C0(void *, s32);
void func_0891D344(void *, s16);

typedef struct {
    u8 pad_00[4];
    u8 unk_04[0x27C];
    u8 unk_280[1];
} T;

T *func_0891D768(T *arg0, s16 arg1) {
    if (arg0 != NULL) {
        func_089136C0(arg0->unk_280, -1);
        if (arg0 != NULL) {
            func_0891D344(arg0->unk_04, -1);
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
