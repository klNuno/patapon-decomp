#include "common.h"

extern "C" {

class S {
public:
    virtual void v08();
    virtual void v0C();
    virtual void v10();
    virtual void v14();
};

typedef struct {
    u8 pad_00[0xC];
    s32 unk_0C;
    u8 pad_10[4];
    s32 unk_14;
    void *unk_18;
} B;

typedef struct {
    u8 pad_00[0x48];
    s32 unk_48;
} M;

typedef struct {
    u8 pad_00[0x50];
    void *unk_50;
    u8 pad_54[0xC];
    M unk_60;
    u8 pad_AC[4];
    u8 unk_B0[0x1510 - 0xB0];
    u8 unk_1510[0x236B0 - 0x1510];
    B unk_236B0;
    u8 unk_236CC[0x245D8 - 0x236CC];
    S unk_245D8;
} T;

extern u8 D_08A46D34[];
extern u8 D_08A48024[];
extern u8 D_08A44AD8[];
extern u8 D_08A44F44[];

void func_0880416C(void *);
void func_0885C534(void *, s32);
void func_0885DE4C(B *);
void func_0886B11C(S *, s32);
void func_0886F084(T *, s32);
void func_0897A79C(void *);
void func_08955C30(void *);
void func_0897A728(void *, s32);
void func_089553C0(void *, s32);

T *func_0892144C(T *arg0, s16 arg1) {
    if (arg0 != NULL) {
        arg0->unk_50 = D_08A46D34;
        func_0897A79C(arg0->unk_236CC);
        func_08955C30(arg0->unk_1510);
        if (&arg0->unk_245D8 != NULL) {
            *(void **)&arg0->unk_245D8 = D_08A48024;
            arg0->unk_245D8.v14();
            func_0886B11C(&arg0->unk_245D8, 0);
        }
        func_0897A728(arg0->unk_236CC, -1);
        if (&arg0->unk_236B0 != NULL) {
            arg0->unk_236B0.unk_18 = D_08A44AD8;
            func_0885DE4C(&arg0->unk_236B0);
            arg0->unk_236B0.unk_0C = 0;
            arg0->unk_236B0.unk_14 = 0;
        }
        func_089553C0(arg0->unk_1510, -1);
        if (arg0 != NULL) {
            arg0->unk_50 = D_08A44F44;
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
