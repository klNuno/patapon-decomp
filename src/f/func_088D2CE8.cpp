#include "common.h"

extern "C" {

class Alloc_088D2CE8 {
public:
    virtual void unk_08();
    virtual void unk_0C(s32, s32 *, s32);
};

struct RC_088D2CE8 {
    s32 *unk_00;
    s32 get() {
        if (unk_00 != NULL) {
            return *unk_00;
        } else {
            return 0;
        }
    }
    s32 release() {
        --*unk_00;
        return get();
    }
};

struct M_088D2CE8 {
    s32 unk_00;
    Alloc_088D2CE8 *unk_04;
    s32 unk_08;
    RC_088D2CE8 unk_0C;
};

struct W_088D2CE8 {
    M_088D2CE8 unk_00;
};

struct V_088D2CE8 {
    W_088D2CE8 *unk_00;
    u32 unk_04;
    W_088D2CE8 *begin() { return unk_00; }
    W_088D2CE8 *end() { return (W_088D2CE8 *)((u8 *)unk_00 + unk_04 * sizeof(W_088D2CE8)); }
};

typedef struct Obj_088D2CE8 {
    u8 pad_00[0x408];
    V_088D2CE8 unk_408;
} Obj_088D2CE8;

void func_088D3204(s32, s32);

void func_088D2CE8(Obj_088D2CE8 *arg0) {
    W_088D2CE8 *p;
    W_088D2CE8 **pb = &arg0->unk_408.unk_00;
    u32 *pn;

    p = arg0->unk_408.unk_00;
    if (p != (W_088D2CE8 *)((u8 *)p + arg0->unk_408.unk_04 * sizeof(W_088D2CE8))) {
        pn = &arg0->unk_408.unk_04;
        do {
            if (p != NULL) {
                if (&p->unk_00 != NULL) {
                    s32 *h = &p->unk_00.unk_08;
                    if (p->unk_00.unk_08 != 0) {
                        if (p->unk_00.unk_0C.release() == 0) {
                            p->unk_00.unk_04->unk_0C(*h, p->unk_00.unk_0C.unk_00, p->unk_00.unk_00);
                            func_088D3204(*h, p->unk_00.unk_00);
                        }
                    }
                }
            }
            p++;
        } while (p != (W_088D2CE8 *)((u8 *)*pb + *pn * sizeof(W_088D2CE8)));
    }
    arg0->unk_408.unk_04 = 0;
}

}
