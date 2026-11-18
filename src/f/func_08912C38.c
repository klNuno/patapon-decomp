#include "common.h"

typedef struct {
    u8 pad_00[0xA8];
} S08912C38_E;

typedef struct {
    S08912C38_E *unk_00;
    s32 unk_04;
} S08912C38_V;

typedef struct {
    u8 pad_00[0xFCC];
    S08912C38_V unk_FCC;
} S08912C38;

void func_0880416C(void *);

S08912C38 *func_08912C38(S08912C38 *arg0, s16 arg1) {
    S08912C38_E *p;
    S08912C38_V *v;

    if (arg0 != NULL) {
        if ((u8 *)arg0 + 8 != NULL) {
            v = &arg0->unk_FCC;
            p = arg0->unk_FCC.unk_00;
            if ((u32)p != (u32)(p + arg0->unk_FCC.unk_04)) {
                do {
                    p++;
                } while (p != v->unk_00 + arg0->unk_FCC.unk_04);
            }
            arg0->unk_FCC.unk_04 = 0;
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
