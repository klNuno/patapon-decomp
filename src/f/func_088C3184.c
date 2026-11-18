#include "common.h"

typedef struct {
    void *unk_00;
    u16 unk_04;
    u16 unk_06;
    void *unk_08;
    u16 unk_0C;
    u16 unk_0E;
    void *unk_10;
    s32 unk_14;
    s32 unk_18;
    void *unk_1C;
    u8 pad_20[8];
    void (*unk_28)(void *);
    s32 unk_2C;
    u8 pad_30[0x10];
    u8 unk_40[4];
} S_088C3184;

extern char D_089FB68C[];
extern char D_089FB694[];
extern char D_089FB6A8[];
void func_088BFA7C(char *, ...);
void func_088C019C(void *);
void func_088C3688(S_088C3184 *);

void func_088C3184(S_088C3184 *arg0) {
    func_088BFA7C(D_089FB694);
    func_088C3688(arg0);
    func_088BFA7C(D_089FB6A8, arg0->unk_04, arg0->unk_0C);
    arg0->unk_18 = 0;
    arg0->unk_14 = 0;
    arg0->unk_28(arg0->unk_10);
    arg0->unk_10 = NULL;
    arg0->unk_28(arg0->unk_1C);
    arg0->unk_1C = NULL;
    arg0->unk_2C = 0;
    arg0->unk_28(arg0->unk_00);
    arg0->unk_00 = NULL;
    arg0->unk_04 = 0;
    arg0->unk_06 = 0;
    arg0->unk_28(arg0->unk_08);
    arg0->unk_08 = NULL;
    arg0->unk_0C = 0;
    arg0->unk_0E = 0;
    func_088C019C(arg0->unk_40);
    func_088BFA7C(D_089FB68C);
}
