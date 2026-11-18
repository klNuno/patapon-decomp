#include "common.h"

extern "C" {

class V {
public:
    virtual void v00();
    virtual void v01();
    virtual void v02();
    virtual void v03();
    virtual void v04();
    virtual void v05();
    virtual void v06();
    virtual void v07();
    virtual void v08();
    virtual void v09();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
};

typedef struct {
    u8 pad_00[0x36B18];
    s32 unk_36B18;
} W;

typedef struct {
    u8 pad_00[0xC];
    W *unk_0C;
    u8 pad_10[0x16AC];
    s32 unk_16BC;
    u8 pad_16C0[0x20];
    V unk_16E0;
} Obj;

void func_088E64E0(s32, s32, s32, s32, s32);
void func_08945128(V *, s32);
void func_08944DA0(V *, s32);

void func_08943408(Obj *arg0, s32 arg1, s32 arg2) {
    W *w;

    switch (arg1) {
    case 0:
        w = arg0->unk_0C;
        switch (arg2) {
        case 7:
            if (arg0->unk_16BC != 0) {
                func_088E64E0(arg0->unk_16BC, 0xC, 1, 0, 0);
            }
            func_08945128(&arg0->unk_16E0, w->unk_36B18 + 0x6C);
            func_08944DA0(&arg0->unk_16E0, arg0->unk_16BC);
            break;
        case 9:
            if (arg0->unk_16BC != 0) {
                func_088E64E0(arg0->unk_16BC, 0xD, 1, 0, 0);
            }
            arg0->unk_16E0.v20();
            func_08944DA0(&arg0->unk_16E0, arg0->unk_16BC);
            break;
        }
        break;
    }
}

}
