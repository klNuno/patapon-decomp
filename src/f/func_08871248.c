#include "common.h"

void func_0880416C(void *);

typedef struct {
    u8 pad_00[0x424];
} E_08871248;

typedef struct {
    E_08871248 *unk_00;
    s32 unk_04;
} V_08871248;

typedef struct {
    u8 pad_00[0x7FF8];
    V_08871248 unk_7FF8;
} S_08871248;

typedef struct {
    u8 pad_00[0x7FF8];
    s32 unk_7FF8;
} W_08871248;

typedef struct {
    u8 pad_00[0x48C];
    S_08871248 unk_48C;
} T_08871248;

T_08871248 *func_08871248(T_08871248 *arg0, s16 arg1) {
    E_08871248 *p;
    V_08871248 *v;
    s32 *sz;

    if (arg0 != NULL) {
        p = arg0->unk_48C.unk_7FF8.unk_00;
        v = &arg0->unk_48C.unk_7FF8;
        if (p != *(E_08871248 **)&v->unk_00 + arg0->unk_48C.unk_7FF8.unk_04) {
            sz = &arg0->unk_48C.unk_7FF8.unk_04;
            do {
                p++;
            } while (p != v->unk_00 + *sz);
        }
        arg0->unk_48C.unk_7FF8.unk_04 = 0;
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
