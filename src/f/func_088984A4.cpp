#include "common.h"

extern "C" {

struct Sub_088984A4 {
    u8 pad_00[0x1C0];
    virtual void v0();
    virtual void v1(s32, s32, s32, s32);
};

struct S_088984A4 {
    u8 pad_00[0x8];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
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
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual void v27();
    virtual void v28();
    virtual void v29();
    virtual void v30();
    virtual void v31();
    virtual void v32();
    virtual void v33();
    virtual void v34();
    virtual void v35();
    virtual void v36();
    virtual void v37();
    virtual void v38();
    virtual void v39();
    virtual void v40();
    virtual void v41();
    virtual s32 v42();
    u8 pad_0C[0x1A4];
    Sub_088984A4 unk_1B0;
};

void func_0896164C(S_088984A4 *, s32, s32, s32);

void func_088984A4(S_088984A4 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    switch (arg1) {
    case 1:
        func_0896164C(arg0, arg1, arg2, arg3);
        if (arg2 == 5) {
            arg2 = -1;
        }
        arg0->unk_1B0.v1(arg0->v42(), 0x17, arg2, arg3);
        break;
    default:
        arg0->unk_1B0.v1(arg0->v42(), arg1, arg2, arg3);
        break;
    }
}

}
