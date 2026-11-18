#include "common.h"

typedef struct {
    u8 pad_00[0x424];
} E_089D0C48;

typedef struct {
    E_089D0C48 *unk_00;
    s32 unk_04;
} V_089D0C48;

typedef struct {
    u8 pad_00[0x8484];
    V_089D0C48 unk_8484;
} T089D0C48;

void func_0880416C(void *);

T089D0C48 *func_089D0C48(T089D0C48 *arg0, s16 arg1) {
    E_089D0C48 *p;
    V_089D0C48 *vp;
    s32 *sp;

    if (arg0 != NULL) {
        p = arg0->unk_8484.unk_00;
        vp = &arg0->unk_8484;
        if ((u32)p != (u32)(*(E_089D0C48 **)vp + arg0->unk_8484.unk_04)) {
            sp = &arg0->unk_8484.unk_04;
            do {
                p++;
            } while (p != vp->unk_00 + *sp);
        }
        arg0->unk_8484.unk_04 = 0;
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
