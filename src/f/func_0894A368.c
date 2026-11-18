#include "common.h"

typedef struct E0894A368 {
    u8 pad_00[0x4];
    char unk_04[0x14];
} E0894A368;

typedef struct V0894A368 {
    E0894A368 *unk_00;
    u32 unk_04;
} V0894A368;

typedef struct S0894A368 {
    u8 pad_00[0x1785C];
    V0894A368 unk_1785C;
} S0894A368;

char *func_0893D67C(s32);
s32 func_08822BC4(char *);
s32 func_08822AD0(char *, char *);

s32 func_0894A368(S0894A368 *arg0, s32 arg1) {
    char *name;
    u32 i;

    if (arg0->unk_1785C.unk_04 == 0) {
        return 1;
    }
    name = func_0893D67C(arg1);
    if (func_08822BC4(name) == 0) {
        return 1;
    }
    i = 0;
    if (arg0->unk_1785C.unk_04 != 0) {
        u32 j = 0;
        V0894A368 *v = &arg0->unk_1785C;
        do {
            if (func_08822AD0(((E0894A368 *)((u8 *)v->unk_00 + j))->unk_04, name) == 0) {
                return 1;
            }
            i++;
            j += sizeof(E0894A368);
        } while (i < arg0->unk_1785C.unk_04);
    }
    return 0;
}
