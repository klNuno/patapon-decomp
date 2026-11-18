#include "common.h"

extern "C" {

typedef struct {
    u32 unk_00;
    u8 pad_04[0x100C];
} S0;

void func_0896B084(S0 *, S0 *);

inline S0 *min_elem(S0 *first, S0 *last) {
    S0 *result = first;
    S0 *p;

    if (first != last) {
        for (p = first + 1; p != last; p++) {
            if (p->unk_00 < result->unk_00) {
                result = p;
            }
        }
    }
    return result;
}

void func_0896B798(S0 *arg0, S0 *arg1) {
    struct { S0 *unk_00; } m;
    S0 *end;

    if (arg0 != arg1) {
        end = arg1 - 1;
        for (; arg0 < end; arg0++) {
            m.unk_00 = min_elem(arg0, arg1);
            if (m.unk_00 != arg0) {
                func_0896B084(m.unk_00, arg0);
            }
        }
    }
}

}
