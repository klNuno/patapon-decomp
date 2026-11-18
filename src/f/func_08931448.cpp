#include "common.h"

extern "C" {

typedef struct {
    u8 pad_00[0x38];
    f32 unk_38;
} E_08931448;

static inline E_08931448 **min_e(E_08931448 **first, E_08931448 **last) {
    E_08931448 **p;
    E_08931448 **m;

    m = first;
    if (first != last) {
        for (p = first + 1; p != last; p++) {
            if ((*p)->unk_38 < (*m)->unk_38) {
                m = p;
            }
        }
    }
    return m;
}

void func_08931448(E_08931448 **arg0, E_08931448 **arg1) {
    E_08931448 **end;
    E_08931448 **m;
    E_08931448 *temp;

    if (arg0 != arg1) {
        end = arg1 - 1;
        for (; arg0 < end; arg0++) {
            m = min_e(arg0, arg1);
            if (m != arg0) {
                temp = *m;
                *m = *arg0;
                *arg0 = temp;
            }
        }
    }
}

}
