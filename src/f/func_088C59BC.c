#include "common.h"

typedef struct {
    u8 pad_00[0x48];
    s32 unk_48;
} S088C59BC;

typedef struct {
    u8 pad_00[0x50];
    void *unk_50;
    u8 pad_54[0xC];
    S088C59BC unk_60;
    u8 pad_AC[4];
    u8 unk_B0[0x1460];
    u8 unk_1510[4];
} T088C59BC;

extern u8 D_08A45FA8[];
extern u8 D_08A44F88[];
extern u8 D_08A44F44[];

void func_0886F32C(void);
void func_088C5AD0(T088C59BC *);
void func_0886EC30(void *, s32);
void func_0885C534(void *, s32);
void func_0886F084(T088C59BC *, s32);
void func_0880416C(void *);

T088C59BC *func_088C59BC(T088C59BC *arg0, s16 arg1) {
    if (arg0 != NULL) {
        arg0->unk_50 = D_08A45FA8;
        func_0886F32C();
        func_088C5AD0(arg0);
        if (arg0 != NULL) {
            arg0->unk_50 = D_08A44F88;
            func_0886EC30(arg0->unk_1510, -1);
            if (arg0 != NULL) {
                arg0->unk_50 = D_08A44F44;
                func_0885C534(arg0->unk_B0, -1);
                if (&arg0->unk_60 != NULL) {
                    arg0->unk_60.unk_48 = 0;
                }
                func_0886F084(arg0, 0);
            }
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
