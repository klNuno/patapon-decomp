#include "common.h"

extern "C" {

struct V_0893E420 {
    u8 pad_00[0x10];
    virtual void v08();
    virtual void v0C();
    virtual void v10();
    virtual void v14();
    virtual void v18();
    virtual void v1C();
    virtual void v20();
    virtual void v24();
    virtual void v28();
    virtual void v2C();
    virtual void v30();
    virtual void v34();
    virtual void v38();
    virtual void v3C();
    virtual void v40();
    virtual void v44();
    virtual void v48();
    virtual void v4C();
    virtual void v50();
};

typedef struct {
    u8 pad_00[0x40];
} E_0893E420;

typedef struct {
    u8 pad_00[4];
    V_0893E420 *unk_04;
    E_0893E420 *unk_08;
} S_0893E420;

void func_08866B54(void *, s32, s32);
s32 func_08866B80(void *, s32);

void func_0893E420(S_0893E420 *arg0, void *arg1, s32 arg2) {
    E_0893E420 *e;

    if (arg0->unk_08 == NULL) {
        arg0->unk_04->v50();
        return;
    }
    e = &arg0->unk_08[arg2];
    func_08866B54(arg1, 0, func_08866B80(e, 0));
    func_08866B54(arg1, 1, func_08866B80(e, 1));
    func_08866B54(arg1, 2, func_08866B80(e, 2));
    func_08866B54(arg1, 3, func_08866B80(e, 3));
}

}
