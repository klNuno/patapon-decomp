#include "common.h"

extern "C" {

struct L088C3520 {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0C;
    L088C3520() {
        u8 *q = (u8 *)this;
        s32 n = 16;
        if (q != NULL) {
            do {
                *q++ = 0;
            } while (--n);
        }
    }
};

typedef struct N088C3520 {
    struct N088C3520 *unk_00;
    struct N088C3520 *unk_04;
    u8 pad_08[0xAC];
    L088C3520 unk_B4;
    void *unk_C4;
} N088C3520;

typedef struct {
    u8 pad_00[0x1C];
    N088C3520 *unk_1C;
} O088C3520;

typedef struct {
    u8 pad_00[0x8];
    N088C3520 **unk_08;
    u16 unk_0C;
} P088C3520;

void func_0881F5C0(void *, s32, s32);

N088C3520 *func_088C3520(P088C3520 *arg0, O088C3520 *arg1) {
    N088C3520 *p;
    L088C3520 l;

    if (arg0->unk_0C != 0) {
        p = arg0->unk_08[--arg0->unk_0C];
    } else {
        p = NULL;
    }
    if (p == NULL) {
        return NULL;
    }
    func_0881F5C0(p, 0, 0xD0);
    p->unk_B4 = l;
    p->unk_00 = NULL;
    p->unk_C4 = arg1;
    if (arg1->unk_1C != NULL) {
        p->unk_04 = arg1->unk_1C;
        arg1->unk_1C->unk_00 = p;
    } else {
        p->unk_04 = NULL;
    }
    arg1->unk_1C = p;
    return p;
}

}
