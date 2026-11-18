#include "common.h"

extern "C" {

struct Obj_089A6A48_M {
    u8 pad_00[8];
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
    virtual void v31(s32, s32, s32);
};

typedef struct {
    u8 pad_00[0x10];
    Obj_089A6A48_M *unk_10;
} Obj_089A6A48;

void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);

void func_089A6A48(Obj_089A6A48 *arg0, void *arg1) {
    s32 *temp_s1;
    s32 *temp_s0;
    s32 *temp_v0;
    Obj_089A6A48_M *temp_a0;

    temp_s1 = func_0885356C(arg1, 0, 1, 4);
    temp_s0 = func_0885356C(arg1, 1, 1, 4);
    temp_v0 = func_0885356C(arg1, 2, 1, 4);
    temp_a0 = arg0->unk_10;
    if (temp_a0 != NULL) {
        temp_a0->v31(*temp_s1, *temp_s0, *temp_v0);
    }
    func_08852F00(arg1, 0);
}

}
