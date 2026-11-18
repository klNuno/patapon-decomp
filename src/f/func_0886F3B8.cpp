#include "common.h"

extern "C" {

class Unk_0886F3B8_Sub {
public:
    u8 pad_00[0x50];
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14();
    virtual void unk_18();
    virtual void unk_1C();
    virtual void unk_20();
};

typedef struct Unk_0886F3B8 {
    u8 pad_00[0xC];
    Unk_0886F3B8_Sub *unk_0C;
    u8 unk_10[8];
    s32 unk_18;
    u8 pad_1C[4];
    s32 unk_20;
} Unk_0886F3B8;

typedef struct Unk_0886F3B8_Local {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0C;
} Unk_0886F3B8_Local;

void func_0886CBF4(Unk_0886F3B8_Local *);
void func_0886D4AC(Unk_0886F3B8_Local *, s32);
void func_0886D568(Unk_0886F3B8_Local *, void *);
void func_0886E420(Unk_0886F3B8_Sub *, s32);

void func_0886F3B8(Unk_0886F3B8 *arg0) {
    Unk_0886F3B8_Local sp10;

    if (arg0->unk_0C != NULL) {
        arg0->unk_0C->unk_20();
        if (arg0->unk_18 != 0) {
            func_0886CBF4(&sp10);
            func_0886D568(&sp10, arg0->unk_10);
            func_0886D4AC(&sp10, -1);
            arg0->unk_0C = NULL;
        } else if (arg0->unk_0C != NULL) {
            func_0886E420(arg0->unk_0C, arg0->unk_20);
            arg0->unk_0C = NULL;
        }
    }
}

}
