#include "common.h"

typedef struct {
    f32 unk_00, unk_04, unk_08, unk_0C;
} U;

typedef struct {
    s32 unk_00;
    s32 unk_04;
} L_0893CEA8;

typedef struct {
    u8 pad_00[4];
    u32 unk_04;
    u8 pad_08[0x32C];
    u8 unk_334[0xD4C];
    u8 unk_1080[0x110E0];
    s32 unk_12160[0x30];
    u8 unk_12220[0x22C60];
    char unk_34E80[1];
} A;

void func_08858024(s32);
void func_088576F8(void);
f32 func_08856234(f32);
void func_08857D10(f32, f32, f32, f32, f32, f32);
void func_08857E5C(U *, U *, U *);
void func_08864A30(L_0893CEA8 *);
void func_08864A68(L_0893CEA8 *, s32);
void func_089178CC(A *);
extern void func_089137D0(char *);
s32 func_089794A0(char *);
void func_08978084(void *);
s32 func_089D5294(s32 *);
void func_089D5220(s32 *);
void func_089D2DAC(void *);
void func_08917D8C(A *);
void func_08915070(void *);

void func_089176CC(A *arg0) {
    struct {
        u8 pad_00[8];
        L_0893CEA8 unk_08;
    } l;
    U temp;
    U temp2;
    U temp3;
    f32 temp6;

    temp.unk_08 = 100.0f;
    temp.unk_0C = 1.0f;
    temp2.unk_0C = 1.0f;
    temp3.unk_04 = 1.0f;
    temp3.unk_0C = 1.0f;
    temp.unk_00 = 0.0f;
    temp.unk_04 = 0.0f;
    temp2.unk_00 = 0.0f;
    temp2.unk_04 = 0.0f;
    temp2.unk_08 = 0.0f;
    temp3.unk_00 = 0.0f;
    temp3.unk_08 = 0.0f;
    func_08858024(0);
    func_088576F8();
    temp6 = temp.unk_08 * func_08856234(45.0f);
    func_08857D10((30.0f / 17.0f) * -temp6, (30.0f / 17.0f) * temp6, -temp6, temp6, 0.1f, 1000.0f);
    func_08858024(1);
    func_088576F8();
    func_08857E5C(&temp, &temp2, &temp3);
    func_08858024(2);
    func_08864A30(&l.unk_08);
    switch (arg0->unk_04) {
    case 0:
    case 1:
    case 2:
    case 6:
    case 9:
    case 10:
        func_089178CC(arg0);
        break;
    case 4:
        func_089178CC(arg0);
        func_089137D0(arg0->unk_34E80);
        break;
    case 3:
    case 7:
        if (!(func_089794A0((char *)arg0->unk_1080) != 0 && func_089794A0((char *)arg0->unk_1080) != 1)) {
            func_089178CC(arg0);
        }
        func_08978084(arg0->unk_1080);
        break;
    case 5:
        if (func_089D5294(arg0->unk_12160) == 3) {
            func_089178CC(arg0);
        }
        func_089D5220(arg0->unk_12160);
        break;
    case 8:
        func_089178CC(arg0);
        func_089D2DAC(arg0->unk_12220);
        break;
    case 11:
        func_089178CC(arg0);
        func_08917D8C(arg0);
        break;
    }
    func_08915070(arg0->unk_334);
    func_08864A68(&l.unk_08, -1);
}
