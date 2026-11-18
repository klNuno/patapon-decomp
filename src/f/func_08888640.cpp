#include "common.h"

extern "C" {

typedef struct {
    u8 pad_00[0x30];
    f32 unk_30;
    f32 unk_34;
    u8 pad_38[0x8];
} M_08888E54;

typedef struct {
    f32 unk_00;
    f32 unk_04;
} V_08888E54;

struct Obj_088B5C38;
struct I_088B5C38;
struct A4_088B5C38;

struct T0 {
    u8 pad_00[0x24];
    virtual void v08();
    virtual void v0C();
    virtual void v10();
    virtual void v14();
    virtual V_08888E54 *v18();
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
    virtual void v54();
    virtual void v58();
    virtual void v5C();
    virtual void v60();
    virtual void v64();
    virtual void v68();
    virtual void v6C();
    virtual s32 v70(s32);
};

struct T1 : T0 {
    u8 unk_28[0x630];
    I_088B5C38 *unk_658;
    A4_088B5C38 *unk_65C;
    u8 pad_660[0x10];
    u8 unk_670[0x37C];
    u32 *unk_9EC;
    s32 unk_9F0;
};

u32 func_08822BC4(s32);
s32 func_08822BDC(void *, char *, s32);
s32 func_08866534(s32);
char *func_08866548(s32, u32);
void func_08866B54(void *, s32, s32);
s32 func_08866B80(void *, s32);
void func_088B5688(void *, f32);
void func_088B5C38(Obj_088B5C38 *arg0, s32 arg1, s32 arg2, I_088B5C38 *arg3, A4_088B5C38 *arg4);
void func_088B5F14(void *, M_08888E54 *);
void *func_088B60A8(void *);
f32 func_088B6358(void *);
extern s32 func_088B6708(s32);
extern s32 D_089FA228[];

void func_08888640(T1 *arg0, s32 arg1, s32 arg2) {
    M_08888E54 temp;
    void *temp0;
    u32 temp1;
    u32 temp2;
    u32 *temp3;

    func_088B5C38((Obj_088B5C38 *)arg0->unk_670, arg1, arg2, arg0->unk_658, arg0->unk_65C);
    temp0 = func_088B60A8(arg0->unk_670);
    func_08866B54(&temp, 0, func_08866B80(temp0, 0));
    func_08866B54(&temp, 1, func_08866B80(temp0, 1));
    func_08866B54(&temp, 2, func_08866B80(temp0, 2));
    func_08866B54(&temp, 3, func_08866B80(temp0, 3));
    temp.unk_30 = arg0->v18()->unk_00;
    temp.unk_34 = arg0->v18()->unk_04;
    func_088B5F14(arg0->unk_670, &temp);
    func_088B5688(arg0->unk_28, func_088B6358(arg0->unk_670));
    if (func_088B6708((s32)arg0->unk_670) != 0) {
        temp1 = func_08822BC4(D_089FA228[0]);
        temp2 = 0;
        if ((u32)func_08866534(arg0->v70(0)) != 0) {
            do {
                if (func_08822BDC((void *)D_089FA228[0], func_08866548(arg0->v70(0), temp2), temp1) == 0) {
                    temp3 = &arg0->unk_9EC[arg0->unk_9F0];
                    if (temp3 != NULL) {
                        *temp3 = temp2;
                    }
                    ++arg0->unk_9F0;
                }
                ++temp2;
            } while (temp2 < (u32)func_08866534(arg0->v70(0)));
        }
    }
}

}
