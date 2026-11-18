#include "common.h"

extern "C" {

class V08970738 {
public:
    virtual void v0();
    virtual s32 v1();
};

typedef struct N08970738 {
    s32 unk_00;
    struct N08970738 *unk_04;
    void **unk_08;
} N08970738;

typedef struct {
    u8 pad_00[0x3B0];
    V08970738 unk_3B0;
    u8 pad_3B4[0x610 - 0x3B4];
    N08970738 *unk_610;
} R08970738;

typedef struct {
    u8 pad_00[0x36B10];
    s32 unk_36B10;
} W08970738;

R08970738 *func_08894FBC(s32, s32, s32);
s32 func_08895090(s32, s32, s32);
s32 func_08899E18(s32, s32);

s32 func_08970738(W08970738 **arg0, s32 arg1, s32 arg2) {
    R08970738 *r;
    s32 ret = 0;

    if (*arg0 != NULL) {
        r = func_08894FBC(func_08899E18((*arg0)->unk_36B10, arg1), arg2, 0);
        if (r != NULL) {
            if (r->unk_3B0.v1() > 0 && *r->unk_610->unk_08 != NULL) {
                ret = 1;
            }
        } else if (func_08895090(func_08899E18((*arg0)->unk_36B10, arg1), arg2, 1) != 0) {
            ret = 1;
        }
    }
    return ret;
}

}
