#include "common.h"

extern "C" {

class B_08918650 {
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

class S_08918650 {
public:
    virtual void v08();
    virtual void v0C();
    virtual void v10();
    virtual void v14();
};

typedef struct {
    u8 pad_00[0x48];
    s32 unk_48;
} M_08918650;

class T_08918650 : public B_08918650 {
public:
    u8 pad_54[0xC];
    M_08918650 unk_60;
    u8 pad_AC[4];
    u8 unk_B0[0x1470];
    u8 unk_1520[0x34EF0];
    S_08918650 unk_36410;
    u8 pad_36414[0xA34];
    u8 unk_36E48[4];
};

extern u8 D_08A46AC8[];
extern u8 D_08A44F44[];
extern u8 D_08A48024[];

void func_0880416C(void *);
void func_0885C534(void *, s32);
void func_0886B11C(S_08918650 *, s32);
void func_0886F084(T_08918650 *, s32);
void func_089D501C(void *, s32);
void func_08917164(void *, s32);

T_08918650 *func_08918650(T_08918650 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(void **)&arg0->pad_00[0x50] = D_08A46AC8;
        arg0->v20();
        func_089D501C(arg0->unk_36E48, -1);
        if (&arg0->unk_36410 != NULL) {
            *(void **)&arg0->unk_36410 = D_08A48024;
            arg0->unk_36410.v14();
            func_0886B11C(&arg0->unk_36410, 0);
        }
        func_08917164(arg0->unk_1520, -1);
        if (arg0 != NULL) {
            *(void **)&arg0->pad_00[0x50] = D_08A44F44;
            func_0885C534(arg0->unk_B0, -1);
            if (&arg0->unk_60 != NULL) {
                arg0->unk_60.unk_48 = 0;
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
