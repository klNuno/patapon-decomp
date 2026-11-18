#include "common.h"

extern "C" {

typedef struct {
    u8 pad_00[0x810];
    u8 unk_810[0x70];
    u32 unk_880;
    u8 pad_884[0xC];
    f32 unk_890;
    f32 unk_894;
} T;

class V {
public:
    virtual void unk_08();
    virtual void unk_0C(s32, s32 *, void *);
};

typedef struct {
    s32 unk_00;
    V *unk_04;
    T *unk_08;
    s32 *unk_0C;
} S;

typedef struct {
    u8 pad_00[0x43250];
    u8 unk_43250[0x8494];
    T *unk_4B6E4;
} U;

void func_088AF260(void *, s32);
void func_08871B78(char *, char *);
void func_08874714(void *, s32);
extern f32 D_089DD328[];
extern f32 D_089DD32C[];

void func_08871A84(U *arg0)
{
    S temp;
    T *temp2;
    T **temp3;
    s32 *temp4;

    if (arg0->unk_4B6E4 != NULL) {
        temp3 = &arg0->unk_4B6E4;
        func_088AF260((*temp3)->unk_810, 1);
        temp2 = *temp3;
        temp2->unk_880 &= ~0x100U;
    }
    func_08871B78((char *)&temp, (char *)arg0->unk_43250);
    temp2 = temp.unk_08;
    temp2->unk_890 = D_089DD328[0];
    temp2->unk_894 = D_089DD32C[0];

    if (*(T *volatile *)&temp.unk_08 != NULL) {
        --**(s32 *volatile *)&temp.unk_0C;
        temp4 = temp.unk_0C;
        if ((temp4 != NULL ? *temp4 : 0) == 0) {
            temp.unk_04->unk_0C((s32)temp.unk_08, *(s32 *volatile *)&temp.unk_0C, (void *)temp.unk_00);
            func_08874714(temp.unk_08, temp.unk_00);
        }
    }
}

}
