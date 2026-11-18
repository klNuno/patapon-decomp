#include "common.h"

extern "C" {

typedef struct {
    u32 unk_00;
} M_089D1670;

class C_089D1670 {
public:
    u8 pad_00[0x8];
    virtual s32 v08(M_089D1670 *);
    virtual s32 v0C(M_089D1670 *);
    virtual s32 v10(M_089D1670 *);
    virtual s32 v14(M_089D1670 *);
    virtual s32 v18(M_089D1670 *);
    virtual s32 v1C(M_089D1670 *);
    virtual s32 v20(M_089D1670 *);
    virtual s32 v24(M_089D1670 *);
    virtual s32 v28(M_089D1670 *);
    virtual s32 v2C(M_089D1670 *);
};

s32 func_089D1670(C_089D1670 *arg0, M_089D1670 *arg1) {
    switch (arg1->unk_00) {
    case 0:
        return arg0->v0C(arg1);
    case 1:
        return arg0->v10(arg1);
    case 2:
        return arg0->v14(arg1);
    case 6:
        return arg0->v18(arg1);
    case 7:
        return arg0->v1C(arg1);
    case 8:
        return arg0->v20(arg1);
    case 3:
        return arg0->v24(arg1);
    case 9:
        return arg0->v28(arg1);
    case 10:
        return arg0->v2C(arg1);
    case 4:
    case 5:
    default:
        return 0;
    }
}

}
