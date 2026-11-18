#include "common.h"

typedef struct {
    s16 unk_00[64];
} H_088B1E8C;

typedef struct {
    H_088B1E8C unk_00;
    H_088B1E8C unk_80;
} Q_088B1E8C;

typedef struct {
    u32 unk_00;
    Q_088B1E8C unk_04;
} E_088B1E8C;

void func_088B1E8C(E_088B1E8C *arg0, E_088B1E8C *arg1) {
    E_088B1E8C *m;
    E_088B1E8C *j;
    Q_088B1E8C tmp;
    struct { u32 unk_00; } k;

    if (arg0 != arg1) {
        for (; arg0 < arg1 - 1; arg0++) {
            m = arg0;
            if (arg0 != arg1) {
                for (j = arg0 + 1; j != arg1; j++) {
                    if (j->unk_00 < m->unk_00) {
                        m = j;
                    }
                }
            }
            if (m != arg0) {
                k.unk_00 = m->unk_00;
                m->unk_00 = arg0->unk_00;
                arg0->unk_00 = k.unk_00;
                tmp = m->unk_04;
                m->unk_04.unk_00 = arg0->unk_04.unk_00;
                m->unk_04.unk_80 = arg0->unk_04.unk_80;
                arg0->unk_04.unk_00 = tmp.unk_00;
                arg0->unk_04.unk_80 = tmp.unk_80;
            }
        }
    }
}
