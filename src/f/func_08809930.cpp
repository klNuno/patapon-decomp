#include "common.h"

extern "C" {

class C {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual s32 v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual s32 v15(s32, s32);
    u8 pad_04[0x3C];
    s32 unk_40;
};

extern s32 func_08808938(s32, s32);
s32 func_08809918(s32, s32);
s32 func_08809920(s32, s32);
u8 func_08809928(void *);

void func_08809930(s32 arg0, C *arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 r;
    s32 w;
    s32 n;

    if (!func_08809928(arg1) || !func_08809918(arg4, func_08809920(8, 0x10)) || (arg2 != 0 && arg1->unk_40 <= 0)) {
        func_08808938(arg0, -1);
        return;
    }
    if (arg1->v5() < 0) {
        func_08808938(arg0, -1);
        return;
    }
    switch (arg3) {
    case 1:
        w = 0;
        break;
    case 2:
        w = 1;
        break;
    case 4:
        w = 2;
        break;
    default:
        func_08808938(arg0, -1);
        return;
    }
    n = arg1->unk_40 > 0 ? arg1->unk_40 : 0;
    r = arg1->v15(n * arg2, w);
    if (r < 0) {
        func_08808938(arg0, -1);
        return;
    }
    func_08808938(arg0, r);
}

}
