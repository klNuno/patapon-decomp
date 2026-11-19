#include "common.h"

typedef struct {
    u8 pad_00[0x10];
    u8 unk_10[0x5C08];
    void *unk_5C18;
} T;

extern u8 D_08A44B8C[];
void func_0880416C(void *);
void func_08804000(void *, void (*)(void *, s32), s32, s32);
s32 func_08866748(char *arg0);
void func_088668A0(void);

T *func_08866620(T *arg0, s16 arg1) {
    if (arg0 != NULL) {
        arg0->unk_5C18 = D_08A44B8C;
        func_08866748((char *)arg0);
        func_08804000(arg0->unk_10, (void (*)(void *, s32))func_088668A0, 0x170, 0x40);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
