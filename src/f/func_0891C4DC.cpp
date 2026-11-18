#include "common.h"

extern "C" {

class C {
public:
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14(s32, s32);
};

typedef struct {
    u8 pad_00[0x40];
    s32 unk_40;
    u8 unk_44[0x20];
} E;

typedef struct {
    u8 pad_00[0x644];
    E *unk_644;
    u8 pad_648[4];
    C unk_64C;
    u8 pad_650[0xD90];
    u8 unk_13E0[1];
} S;

typedef struct {
    f32 unk_00[2];
} V;

typedef struct {
    f32 unk_00[12];
    V unk_30;
    f32 unk_38;
    f32 unk_3C;
} M;

void func_08814BB4(s32);
s32 func_08814C0C(s32);
void func_08855354(char *);
void func_088651A4(void *, M *, void *, s32, s32);

void func_0891C4DC(S *arg0, s32 arg1, const V *arg2, const V *arg3) {
    struct {
        M unk_00;
        u8 pad_40[0x10];
    } temp;
    E *p = &arg0->unk_644[arg1];
    s32 i = p->unk_40;
    if (i != -1) {
        arg0->unk_64C.unk_14(i, 0);
        func_08814BB4(9);
    } else {
        func_08814C0C(9);
    }
    func_08855354((char *)&temp.unk_00);
    temp.unk_00.unk_00[0] = arg3->unk_00[0];
    temp.unk_00.unk_00[1] = 0.0f;
    temp.unk_00.unk_00[2] = 0.0f;
    temp.unk_00.unk_00[3] = 0.0f;
    temp.unk_00.unk_00[5] = arg3->unk_00[1];
    temp.unk_00.unk_00[4] = 0.0f;
    temp.unk_00.unk_00[6] = 0.0f;
    temp.unk_00.unk_00[7] = 0.0f;
    f32 y = arg2->unk_00[1];
    f32 x = arg2->unk_00[0];
    temp.unk_00.unk_30.unk_00[0] = x;
    temp.unk_00.unk_30.unk_00[1] = y;
    temp.unk_00.unk_3C = 1.0f;
    temp.unk_00.unk_38 = 0.0f;
    func_088651A4(p->unk_44, &temp.unk_00, arg0->unk_13E0, 0, 1);
}

}
