#include "common.h"

extern "C" {

typedef struct N_08827704 {
    struct N_08827704 *unk_00;
    u8 pad_04[4];
    s32 unk_08;
    u8 pad_0C[4];
    s32 unk_10;
} N_08827704;

class C_08827704 {
public:
    virtual void v_08();
    virtual void v_0C();
    virtual void v_10();
    virtual void v_14();
    virtual void v_18();
    virtual void v_1C();
    virtual s32 v_20();
    virtual s32 v_24();
    N_08827704 *unk_04;
    N_08827704 *unk_08;
};

s32 func_08827704(C_08827704 *arg0) {
    s32 used;
    s32 free;
    N_08827704 *next;
    N_08827704 *n;
    s32 size;
    s32 a;

    used = 0;
    free = 0;
    for (n = arg0->unk_04; n != *(N_08827704 * volatile *)&arg0->unk_08;) {
        next = n->unk_00;
        if (next != (N_08827704 *)((u8 *)n + n->unk_10 + 0x1C)) {
            return 0;
        }
        size = n->unk_10 + 0x1C;
        if (size != (u8 *)next - (u8 *)n) {
            return 0;
        }
        if (n->unk_08 == 0) {
            used += size;
        }
        if (n->unk_08 == 1) {
            free += n->unk_10;
        }
        n = next;
        if (next->unk_08 == 2) {
            a = arg0->v_24();
            if (used != arg0->v_20() || a != free) {
                return 0;
            }
            return next == arg0->unk_08;
        }
    }
    return 0;
}

}
