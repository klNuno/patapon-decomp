#include "common.h"

typedef struct T_0885DC1C {
    u8 pad_00[0x40];
    s32 unk_40;
    struct T_0885DC1C *unk_44;
    struct T_0885DC1C *unk_48;
} T_0885DC1C;

void func_0885D7C4(T_0885DC1C *);
s32 func_0885DC1C(T_0885DC1C *arg0);

s32 func_0885DC1C(T_0885DC1C *arg0) {
    T_0885DC1C *a;
    T_0885DC1C *b;

    a = arg0->unk_44;
    if (a != NULL) {
        b = a->unk_44;
        if (b != NULL) {
            if (b->unk_44 != NULL) {
                func_0885DC1C(b->unk_44);
            }
            if (b->unk_48 != NULL) {
                func_0885DC1C(b->unk_48);
            }
            func_0885D7C4(b);
        }
        b = a->unk_48;
        if (b != NULL) {
            if (b->unk_44 != NULL) {
                func_0885DC1C(b->unk_44);
            }
            if (b->unk_48 != NULL) {
                func_0885DC1C(b->unk_48);
            }
            func_0885D7C4(b);
        }
        func_0885D7C4(a);
    }
    a = arg0->unk_48;
    if (a != NULL) {
        b = a->unk_44;
        if (b != NULL) {
            if (b->unk_44 != NULL) {
                func_0885DC1C(b->unk_44);
            }
            if (b->unk_48 != NULL) {
                func_0885DC1C(b->unk_48);
            }
            func_0885D7C4(b);
        }
        b = a->unk_48;
        if (b != NULL) {
            if (b->unk_44 != NULL) {
                func_0885DC1C(b->unk_44);
            }
            if (b->unk_48 != NULL) {
                func_0885DC1C(b->unk_48);
            }
            func_0885D7C4(b);
        }
        func_0885D7C4(a);
    }
    func_0885D7C4(arg0);
    if (arg0->unk_40 != 0) {
        return 0;
    }
    return 1;
}
