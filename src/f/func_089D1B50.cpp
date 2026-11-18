#include "common.h"

extern "C" {

class V_089D1B50 {
public:
    u8 pad_00[0x91C];
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14(s32);
};

typedef struct O_089D1B50 {
    u8 pad_00[0x968];
    u8 unk_968;
    u8 unk_969;
    u8 pad_96A[0x82];
    struct O_089D1B50 *unk_9EC;
} O_089D1B50;

typedef struct {
    u8 pad_00[0x8494];
    O_089D1B50 *unk_8494;
    u8 pad_8498[0x85A0];
    u8 unk_10A38;
} S_089D1B50;

extern O_089D1B50 *D_08AD8134[];

inline bool func_089D1B50_get(O_089D1B50 *o) {
    return o->unk_969;
}

inline bool func_089D1B50_not(O_089D1B50 *o) {
    return !func_089D1B50_get(o);
}

s32 func_088F1A2C(O_089D1B50 *);
void func_088F19D8(O_089D1B50 *);

void func_089D1B50(S_089D1B50 *arg0, s32 arg1) {
    O_089D1B50 **p0;
    O_089D1B50 **p1;
    O_089D1B50 *o;
    s32 r;

    if (arg0->unk_10A38 == 0) {
        return;
    }
    p0 = &arg0->unk_8494;
    if (func_088F1A2C(*p0)) {
        o = *p0;
        r = 0;
        if (D_08AD8134[0] == o) {
            if (func_089D1B50_not(o)) {
                r = 1;
            }
        }
        if (!r) {
            o = arg0->unk_8494;
            if (D_08AD8134[0] != o) {
                o->unk_9EC = D_08AD8134[0];
                D_08AD8134[0] = o;
            }
            o->unk_969 = 0;
            o->unk_968 = 0;
        }
    }
    p1 = &arg0->unk_8494;
    ((V_089D1B50 *)*p1)->unk_14(arg1);
    if (!func_088F1A2C(*p0)) {
        if (arg0->unk_10A38 != 0) {
            func_088F19D8(*p1);
        }
        arg0->unk_10A38 = 0;
    }
}

}
