#include "common.h"

typedef struct {
    u8 pad_00[0x8E0];
    s32 unk_8E0;
} B;

typedef struct {
    s32 unk_00;
    u8 pad_04[0x3AC];
    B *unk_3B0;
    u8 pad_3B4[0x60];
    s32 unk_414;
    s32 unk_418;
} A;

void func_088D450C(B *, s32);
s32 func_088DEDAC(s32, s32);
void func_0892DFA0(B *, char *);
s32 func_089C2E40(A *);
extern char D_089F2E10[];
extern s32 D_089F2E2C[];
extern s32 D_089F2E3C[];

void func_089C2AEC(A *arg0, s32 arg1, u8 arg2) {
    s32 *t;

    t = func_089C2E40(arg0) ? D_089F2E2C : D_089F2E3C;
    func_089C2E40(arg0);
    if (arg2 == 0) {
        if (arg0->unk_3B0 != NULL) {
            arg0->unk_3B0->unk_8E0 = 0x3840;
            func_0892DFA0(arg0->unk_3B0, D_089F2E10);
        }
        if (arg0->unk_414 == arg1) {
            if (arg0->unk_3B0 != NULL) {
                func_088D450C(arg0->unk_3B0, func_088DEDAC(arg0->unk_00, 0x143));
            }
        } else if (arg0->unk_414 < arg1) {
            if (arg0->unk_3B0 != NULL) {
                func_088D450C(arg0->unk_3B0, func_088DEDAC(arg0->unk_00, t[arg0->unk_418]));
            }
            arg0->unk_418++;
        } else if (arg1 < arg0->unk_414) {
            if (arg0->unk_3B0 != NULL) {
                func_088D450C(arg0->unk_3B0, func_088DEDAC(arg0->unk_00, 0x142));
            }
        }
    } else {
        if (!(arg0->unk_414 < arg1) && arg0->unk_418 == 3) {
            if (arg0->unk_3B0 != NULL) {
                arg0->unk_3B0->unk_8E0 = 0x3840;
                func_0892DFA0(arg0->unk_3B0, D_089F2E10);
                func_088D450C(arg0->unk_3B0, func_088DEDAC(arg0->unk_00, t[arg0->unk_418]));
            }
            arg0->unk_418++;
        }
    }
    arg0->unk_414 = arg1;
}
