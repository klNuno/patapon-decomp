#include "common.h"

typedef struct T0896C61C_E {
    u32 unk_00;
    u8 pad_04[0x24];
} T0896C61C_E;

typedef struct T0896C61C_I {
    T0896C61C_E *unk_00;
} T0896C61C_I;

void func_0896C3F4(T0896C61C_E *, T0896C61C_E *);

void func_0896C61C(T0896C61C_E *arg0, T0896C61C_E *arg1) {
    T0896C61C_E *end;
    T0896C61C_I m;
    T0896C61C_E *p;

    if (arg0 != arg1) {
        end = arg1 - 1;
        for (; arg0 < end; arg0++) {
            m.unk_00 = arg0;
            if (arg0 != arg1) {
                p = arg0;
                while (++p != arg1) {
                    if (p->unk_00 < m.unk_00->unk_00) {
                        m.unk_00 = p;
                    }
                }
            }
            if (m.unk_00 != arg0) {
                func_0896C3F4(m.unk_00, arg0);
            }
        }
    }
}
