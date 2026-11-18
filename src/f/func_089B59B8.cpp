#include "common.h"

extern "C" {

class V50_089B59B8 {
public:
    u8 pad_00[0x50];
    virtual void v08();
    virtual void v0C();
    virtual void v10();
    virtual void v14();
    virtual void v18();
    virtual void v1C();
    virtual void v20();
};

class V00_089B59B8 {
public:
    virtual void v08();
    virtual void v0C();
    virtual void v10();
    virtual void v14();
};

typedef struct {
    void *unk_00;
} Sub_089B59B8;

typedef struct {
    u8 pad_00[0x50];
    void *unk_50;
    u8 pad_54[0xC];
    u8 unk_60[0x48];
    s32 unk_A8;
    u8 pad_AC[0x4];
    u8 unk_B0[0x1520 - 0xB0];
    u8 unk_1520[0x11F80 - 0x1520];
    Sub_089B59B8 unk_11F80;
    u8 pad_11F84[0x129B4 - 0x11F84];
    u8 unk_129B4[0x12AD8 - 0x129B4];
    u8 unk_12AD8[4];
} Obj_089B59B8;

extern u8 D_08A48AD0[];
extern u8 D_08A48024[];
extern u8 D_08A44F44[];

void func_088A3FE4(void *, s32);
void func_0893B120(void *, s32);
void func_0886B11C(void *, s32);
void func_089B68E4(void *, s32);
void func_0885C534(u8 *, s32);
void func_0886F084(Obj_089B59B8 *, s32);
void func_0880416C(Obj_089B59B8 *);

Obj_089B59B8 *func_089B59B8(Obj_089B59B8 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        arg0->unk_50 = D_08A48AD0;
        ((V50_089B59B8 *)arg0)->v20();
        func_088A3FE4(arg0->unk_12AD8, -1);
        func_0893B120(arg0->unk_129B4, -1);
        if (&arg0->unk_11F80 != NULL) {
            arg0->unk_11F80.unk_00 = D_08A48024;
            ((V00_089B59B8 *)&arg0->unk_11F80)->v14();
            func_0886B11C(&arg0->unk_11F80, 0);
        }
        func_089B68E4(arg0->unk_1520, -1);
        if (arg0 != NULL) {
            arg0->unk_50 = D_08A44F44;
            func_0885C534(arg0->unk_B0, -1);
            if (arg0->unk_60 != NULL) {
                arg0->unk_A8 = 0;
            }
            func_0886F084(arg0, 0);
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}

}
