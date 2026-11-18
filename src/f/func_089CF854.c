#include "common.h"

typedef struct {
    u8 pad_00[0x10D14];
    u8 unk_10D14[0x11554 - 0x10D14];
    s32 unk_11554;
    s32 unk_11558;
} S_089CF854;

void func_089140B4(void *, s32, s32);
void func_089140C0(void *, s32);
s32 func_08914A74(void *);
s32 func_08914A7C(void *);
void func_089CF9BC(S_089CF854 *);
s32 func_089CFBFC(S_089CF854 *, s32);
void func_089D0408(S_089CF854 *);
void func_089D0470(S_089CF854 *, s32);
s32 func_089D04A8(S_089CF854 *);

s32 func_089CF854(S_089CF854 *arg0, s32 arg1) {
    void *s;
    s32 v;

    s = arg0->unk_10D14;
    if (func_089D04A8(arg0) != 0) {
        func_089D0408(arg0);
        func_089CF9BC(arg0);
        func_089140B4(s, arg0->unk_11558, arg0->unk_11554);
        func_089140C0(s, 0);
        return 0;
    }
    if (func_08914A74(s) == 0) {
        v = func_08914A7C(s);
        if (v == 0) {
            switch (func_089CFBFC(arg0, arg1)) {
            case 2:
                func_089D0470(arg0, 0x10);
                func_089D0408(arg0);
                return 0;
            case 3:
                func_089D0470(arg0, 0x11);
                func_089D0408(arg0);
                return 0;
            default:
                func_089D0408(arg0);
                return 1;
            }
        } else if (v == 1) {
            return 1;
        } else if (v == 2) {
            func_089D0470(arg0, 0x1E);
            return 0;
        } else {
            func_089D0408(arg0);
            if (arg1 != 0) {
                func_089D0470(arg0, 1);
                return 0;
            }
            return 1;
        }
    }
    return 0;
}
