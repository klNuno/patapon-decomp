#include "common.h"

extern "C" {

typedef struct O08962D2C {
    u8 pad_00[0xDC];
    s32 unk_DC;
} O08962D2C;

struct N08962D2C {
    s32 unk_00;
    N08962D2C *unk_04;
    O08962D2C *unk_08;
    bool eq(const N08962D2C &o) const {
        return unk_08 == o.unk_08 && unk_04 == o.unk_04 && unk_00 == o.unk_00;
    }
};

struct I08962D2C {
    N08962D2C *unk_00;
    bool ne(const I08962D2C &o) const { return !unk_00->eq(*o.unk_00); }
    void next() {
        if (unk_00 != NULL) {
            unk_00 = unk_00->unk_04;
        }
    }
};

typedef struct T08962D2C {
    u8 pad_00[0x38];
    N08962D2C unk_38;
} T08962D2C;

s32 func_08962DF0(T08962D2C *);

void func_08962D2C(T08962D2C *arg0) {
    bool ok;
    s32 v;
    I08962D2C it;
    I08962D2C end;

    end.unk_00 = &arg0->unk_38;
    do {
        v = func_08962DF0(arg0);
        ok = true;
        for (it.unk_00 = arg0->unk_38.unk_04; it.ne(end); it.next()) {
            if (v == it.unk_00->unk_08->unk_DC) {
                ok = false;
                break;
            }
        }
    } while (!ok);
}

}
