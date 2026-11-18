#include "common.h"

typedef struct {
    u8 pad_00[0x424];
} E089B6828;

typedef struct {
    E089B6828 *unk_00;
    s32 unk_04;
} V089B6828;

typedef struct {
    u8 pad_00[0x8484];
    V089B6828 unk_8484;
} T089B6828;

void func_0880416C(void *);

T089B6828 *func_089B6828(T089B6828 *arg0, s16 arg1) {
    E089B6828 *p;
    V089B6828 *vp;
    s32 *sp;

    if (arg0 != NULL) {
        p = arg0->unk_8484.unk_00;
        vp = &arg0->unk_8484;
        if ((u32)p != (u32)(*(E089B6828 **)vp + arg0->unk_8484.unk_04)) {
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
