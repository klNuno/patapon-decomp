#include "common.h"

extern "C" {

struct V_088945F8 {
    u8 pad_00[0x8];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void *v7(s32);
};

typedef struct {
    u8 pad_00[0x34];
    V_088945F8 *unk_34;
} B_088945F8;

typedef struct {
    u8 pad_00[0x10];
    B_088945F8 *unk_10;
} A_088945F8;

typedef struct {
    u8 pad_00[0x378];
    s32 unk_378;
    u8 pad_37C[0x14];
    s32 unk_390;
    u8 pad_394[0xC];
    u8 unk_3A0[4];
} Obj_088945F8;

s32 func_0893D430(s32 *);
void func_0888DC04(void *, Obj_088945F8 *, s32);
void **func_088946BC(void *);

s32 func_088945F8(Obj_088945F8 *arg0, s32 arg1) {
    void *temp;
    void **p;

    if (arg1 == 0) {
        return 0;
    }
    if (arg0->unk_390 == 0) {
        return 0;
    }
    func_0893D430(&arg0->unk_378);
    func_0893D430(&arg0->unk_378);
    func_0893D430(&arg0->unk_378);
    temp = ((A_088945F8 *)func_0893D430(&arg0->unk_378))->unk_10->unk_34->v7(6);
    if (temp == NULL) {
        return 0;
    }
    func_0888DC04(temp, arg0, arg1);
    p = func_088946BC(arg0->unk_3A0);
    if (p != NULL) {
        *p = temp;
    }
    return 1;
}

}
