#include "common.h"

typedef struct {
    u8 pad_00[0x60];
    u8 unk_60[0x20];
    void *unk_80;
} T;

extern u8 D_08A44B70[];
void func_0880416C(void *);
void func_08866028(void *);
extern s32 func_0893E1A0(s32);

T *func_08865F78(T *arg0, s16 arg1) {
    if (arg0 != NULL) {
        u8 *temp;
        arg0->unk_80 = D_08A44B70;
        func_08866028(arg0);
        temp = arg0->unk_60;
        if (temp != NULL) {
            func_0893E1A0((s32)temp);
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
