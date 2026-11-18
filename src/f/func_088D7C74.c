#include "common.h"

typedef struct T088D7C74_P {
    s32 unk_00;
    s32 unk_04;
} T088D7C74_P;

void func_088226BC(void *, void *, s32, s32);
void func_08858D14(s32 *);
void func_088CDA3C(s32, u8 *, T088D7C74_P *, s32);
extern s32 D_089FBEA4[];
extern s32 D_089FBED4[];
extern char D_089FC088[];

s32 func_088D7C74(s32 arg0) {
    s32 sp11C;
    T088D7C74_P sp114;
    u8 sp14[0x100];
    s32 i;

    func_08858D14(&sp11C);
    for (i = 0; i < 7; i++) {
        if (i != 2) {
            sp114.unk_04 = i;
            sp114.unk_00 = 0;
            func_088226BC(sp14, D_089FC088, D_089FBED4[sp114.unk_00], D_089FBEA4[i]);
            func_088CDA3C(arg0, sp14, &sp114, i);
        }
    }
    return 1;
}
