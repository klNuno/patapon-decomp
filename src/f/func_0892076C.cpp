#include "common.h"

extern "C" {

typedef struct {
    s32 unk_00;
    s32 unk_04;
} L_0893CEA8;

typedef struct Unk_089CA058_Local {
    u8 pad_00[0x34];
    f32 unk_34;
    u8 pad_38[0x10];
} Unk_089CA058_Local;

class U {
    u8 pad_00[0x80];
public:
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
};

typedef struct {
    u8 pad_00[0x30];
    U unk_30;
    u8 pad_B4[0x1C];
    s32 unk_D0;
    u8 pad_D4[0x3C];
    U unk_110;
    u8 pad_194[0xC];
    f32 unk_1A0;
} T;

extern s32 D_08A01B38[];
void func_08814BB4(s32);
void func_088155BC(s32);
void func_08864A30(L_0893CEA8 *);
void func_08864A68(L_0893CEA8 *, s32);
extern int func_08864E80(char *, char *);
void func_08866464(Unk_089CA058_Local *, char *, s32);

void func_0892076C(T *arg0) {
    L_0893CEA8 temp;
    Unk_089CA058_Local temp1;

    func_08864A30(&temp);
    func_088155BC(((u32)arg0->unk_D0 >> 31) ^ 1);
    func_08814BB4(5);
    func_08866464(&temp1, (char *)&arg0->unk_30, D_08A01B38[0]);
    temp1.unk_34 += arg0->unk_1A0;
    func_08864E80((char *)&arg0->unk_110, (char *)&temp1);
    arg0->unk_110.unk_10();
    func_088155BC(1);
    func_08864A68(&temp, -1);
    func_08864E80((char *)&arg0->unk_30, (char *)&arg0->unk_D0);
    arg0->unk_30.unk_10();
}

}
