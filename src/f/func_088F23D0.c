#include "common.h"

typedef struct {
    s32 *unk_00;
    s32 unk_04;
} V088F23D0;

typedef struct {
    u8 pad_00[0x604];
    V088F23D0 unk_604;
} M088F23D0;

typedef struct {
    void *unk_00;
    u8 pad_04[0x7C];
    M088F23D0 unk_80;
} T088F23D0;

extern u8 D_08A4667C[];
void func_0880416C(void *);
void func_088AF070(void *, s32);
void func_088F2470(T088F23D0 *);

T088F23D0 *func_088F23D0(T088F23D0 *arg0, s16 arg1) {
    s32 *p;
    V088F23D0 *v;

    if (arg0 != NULL) {
        arg0->unk_00 = D_08A4667C;
        func_088F2470(arg0);
        if (&arg0->unk_80 != NULL) {
            v = &arg0->unk_80.unk_604;
            p = arg0->unk_80.unk_604.unk_00;
            if ((u32)p != (u32)(p + arg0->unk_80.unk_604.unk_04)) {
                do {
                    p++;
                } while (p != v->unk_00 + arg0->unk_80.unk_604.unk_04);
            }
            arg0->unk_80.unk_604.unk_04 = 0;
        }
        func_088AF070(arg0, 0);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
