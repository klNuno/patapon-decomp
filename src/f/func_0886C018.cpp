#include "common.h"

extern "C" {
class V {
public:
    virtual s32 *unk_08(void *, s32);
    virtual void unk_0C(void *, s32 *, s32);
};

class U {
public:
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14();
    virtual void unk_18();
    virtual void unk_1C();
    virtual s32 unk_20();
};

typedef struct {
    s32 unk_00;
    V *unk_04;
    void *unk_08;
    s32 *volatile unk_0C;
} R;

typedef struct H_0886D4AC {
    u8 unk_00[0x10];
} H_0886D4AC;

typedef struct {
    u8 pad_00[0xC];
    s32 unk_0C;
    char unk_10[8];
    s32 unk_18;
    u8 pad_1C[4];
    s32 unk_20;
    u8 pad_24[0x14DC];
    s32 unk_1500;
    u8 pad_1504[0xA4C];
    s32 unk_1F50;
} T;

typedef struct T088C561C {
    u8 pad_00[0x50];
    u8 *unk_50;
    u8 pad_54[0x14BC];
    u8 unk_1510[4];
} T088C561C;

extern char D_089DD1D4[];
extern u8 D_08A44E80[];

void *func_08827A50(s32, s32);
V *func_08827AD4(void);
s32 func_08858BA8(void);
char *func_0886CBF4(char *);
void func_0886D484(char *, s32);
H_0886D4AC *func_0886D4AC(H_0886D4AC *, s16);
void func_0886D568(char *, char *);
void func_0886D5AC(H_0886D4AC *, R *);
void func_0886E420(void *, s32);
void func_0886E5CC(T088C561C *, s32, s32, s32);
void func_0886ECC8(void *, s32, s32, void (*)(void), void (*)(void), T088C561C *);
void func_0886F33C(T088C561C *, s32, s32);
void *func_088C561C(void *, s32, s32, T *);
void *func_088CE5F0(void *, s32, s32);
void *func_08918578(void *, s32, s32, T *);
void func_08918A3C(s32, s32);
void *func_0893C808(void *, s32, s32);
void *func_08942C3C(void *, s32, s32);
void *func_089B58C4(void *, s32, s32);
void *func_089CBB24(void *, s32, s32, T *);
void *func_089D6D00(void *, s32, s32, T *);
void func_0886D3E4(void);
void func_0886D3D8(void);
void func_0886D338(void);
void func_0886D32C(void);
void func_0886D274(void);
void func_0886D268(void);
void func_0886D1B0(void);
void func_0886D1A4(void);
void func_0886D0EC(void);
void func_0886D0E0(void);
void func_0886D028(void);
void func_0886D01C(void);
void func_0886CF80(void);
void func_0886CF74(void);
void func_0886CED8(void);
void func_0886CECC(void);
void func_0886CE2C(void);
void func_0886CE20(void);
void func_0886CD68(void);
void func_0886CD5C(void);
void func_0886CCC0(void);
void func_0886CCB4(void);
void func_0886CC18(void);
void func_0886CC0C(void);

inline void func_0886C018_00(R *arg0, void *arg1) {
    V *temp = (arg0->unk_04 = func_08827AD4());
    arg0->unk_08 = arg1;
    s32 *temp1 = temp->unk_08(arg1, arg0->unk_00);
    arg0->unk_0C = temp1;
    *temp1 = 1;
}

inline void func_0886C018_01(R *arg0) {
    if (arg0->unk_08 != NULL) {
        --*arg0->unk_0C;
        s32 *temp = arg0->unk_0C;
        if ((temp != NULL ? *temp : 0) == 0) {
            V *temp2 = arg0->unk_04;
            s32 *temp3 = arg0->unk_0C;
            temp2->unk_0C(*(void *volatile *)&arg0->unk_08, temp3, arg0->unk_00);
            func_0886E420(arg0->unk_08, arg0->unk_00);
        }
    }
}

s32 func_0886C018(T *arg0, s32 arg1) {
    R temp[9];
    H_0886D4AC temp1[10];
    switch (arg1) {
    case 0: {
        s32 temp2 = arg0->unk_20;
        void *temp3 = func_08827A50(0x1520, temp2);
        if (temp3 != NULL) {
            temp3 = func_088CE5F0(temp3, arg0->unk_20, arg0->unk_1500);
        }
        temp[8].unk_00 = temp2;
        func_0886C018_00(&temp[8], temp3);
        func_0886D5AC(&temp1[9], &temp[8]);
        func_0886D568((char *)&temp1[9], arg0->unk_10);
        func_0886D4AC(&temp1[9], -1);
        func_0886C018_01(&temp[8]);
        break;
    }
    case 1: {
        s32 temp2 = arg0->unk_20;
        void *temp3 = func_08827A50(0x19E0, temp2);
        if (temp3 != NULL) {
            temp3 = func_088C561C(temp3, arg0->unk_20, arg0->unk_1500, arg0);
        }
        temp[7].unk_00 = temp2;
        func_0886C018_00(&temp[7], temp3);
        func_0886D5AC(&temp1[8], &temp[7]);
        func_0886D568((char *)&temp1[8], arg0->unk_10);
        func_0886D4AC(&temp1[8], -1);
        func_0886C018_01(&temp[7]);
        break;
    }
    case 2: {
        s32 temp2 = arg0->unk_20;
        void *temp3 = func_08827A50(0x37900, temp2);
        if (temp3 != NULL) {
            temp3 = func_08918578(temp3, arg0->unk_20, arg0->unk_1500, arg0);
        }
        temp[6].unk_00 = temp2;
        func_0886C018_00(&temp[6], temp3);
        func_0886D5AC(&temp1[7], &temp[6]);
        func_0886D568((char *)&temp1[7], arg0->unk_10);
        func_0886D4AC(&temp1[7], -1);
        func_0886C018_01(&temp[6]);
        func_08918A3C(arg0->unk_18, arg0->unk_1F50);
        break;
    }
    case 3: {
        s32 temp2 = arg0->unk_20;
        void *temp3;
        if ((temp3 = func_08827A50(0x19D0, temp2)) != NULL) {
            T088C561C *temp4 = (T088C561C *)temp3;
            s32 temp5 = arg0->unk_20;
            func_0886E5CC(temp4, temp5, arg0->unk_1500, 0);
            temp4->unk_50 = D_08A44E80;
            func_0886D484(D_089DD1D4, ((U *)temp5)->unk_20());
            func_0886ECC8(temp4->unk_1510, 0, temp5, func_0886D3E4, func_0886D3D8, temp4);
            func_0886ECC8(temp4->unk_1510, 1, temp5, func_0886D338, func_0886D32C, temp4);
            func_0886ECC8(temp4->unk_1510, 2, temp5, func_0886D274, func_0886D268, temp4);
            func_0886ECC8(temp4->unk_1510, 3, temp5, func_0886D1B0, func_0886D1A4, temp4);
            func_0886ECC8(temp4->unk_1510, 4, temp5, func_0886D0EC, func_0886D0E0, temp4);
            func_0886ECC8(temp4->unk_1510, 5, temp5, func_0886D028, func_0886D01C, temp4);
            func_0886ECC8(temp4->unk_1510, 6, temp5, func_0886CF80, func_0886CF74, temp4);
            func_0886ECC8(temp4->unk_1510, 7, temp5, func_0886CED8, func_0886CECC, temp4);
            func_0886ECC8(temp4->unk_1510, 8, temp5, func_0886CE2C, func_0886CE20, temp4);
            func_0886ECC8(temp4->unk_1510, 9, temp5, func_0886CD68, func_0886CD5C, temp4);
            func_0886ECC8(temp4->unk_1510, 10, temp5, func_0886CCC0, func_0886CCB4, temp4);
            func_0886ECC8(temp4->unk_1510, 11, temp5, func_0886CC18, func_0886CC0C, temp4);
            func_0886F33C(temp4, 2, 3);
        }
        temp[5].unk_00 = temp2;
        func_0886C018_00(&temp[5], temp3);
        func_0886D5AC(&temp1[6], &temp[5]);
        func_0886D568((char *)&temp1[6], arg0->unk_10);
        func_0886D4AC(&temp1[6], -1);
        func_0886C018_01(&temp[5]);
        break;
    }
    case 6: {
        s32 temp2 = arg0->unk_20;
        void *temp3 = func_08827A50(0x2610, temp2);
        if (temp3 != NULL) {
            temp3 = func_0893C808(temp3, arg0->unk_20, arg0->unk_1500);
        }
        temp[4].unk_00 = temp2;
        func_0886C018_00(&temp[4], temp3);
        func_0886D5AC(&temp1[5], &temp[4]);
        func_0886D568((char *)&temp1[5], arg0->unk_10);
        func_0886D4AC(&temp1[5], -1);
        func_0886C018_01(&temp[4]);
        break;
    }
    case 7: {
        s32 temp2 = arg0->unk_20;
        void *temp3 = func_08827A50(0x1AC0, temp2);
        if (temp3 != NULL) {
            temp3 = func_08942C3C(temp3, arg0->unk_20, arg0->unk_1500);
        }
        temp[3].unk_00 = temp2;
        func_0886C018_00(&temp[3], temp3);
        func_0886D5AC(&temp1[4], &temp[3]);
        func_0886D568((char *)&temp1[4], arg0->unk_10);
        func_0886D4AC(&temp1[4], -1);
        func_0886C018_01(&temp[3]);
        break;
    }
    case 4: {
        s32 temp2 = arg0->unk_20;
        void *temp3 = func_08827A50(0x13060, temp2);
        if (temp3 != NULL) {
            temp3 = func_089B58C4(temp3, arg0->unk_20, arg0->unk_1500);
        }
        temp[2].unk_00 = temp2;
        func_0886C018_00(&temp[2], temp3);
        func_0886D5AC(&temp1[3], &temp[2]);
        func_0886D568((char *)&temp1[3], arg0->unk_10);
        func_0886D4AC(&temp1[3], -1);
        func_0886C018_01(&temp[2]);
        break;
    }
    case 5: {
        s32 temp2 = func_08858BA8();
        void *temp3 = func_08827A50(0x2E80, arg0->unk_20);
        if (temp3 != NULL) {
            temp3 = func_089CBB24(temp3, func_08858BA8(), arg0->unk_1500, arg0);
        }
        temp[1].unk_00 = temp2;
        func_0886C018_00(&temp[1], temp3);
        func_0886D5AC(&temp1[2], &temp[1]);
        func_0886D568((char *)&temp1[2], arg0->unk_10);
        func_0886D4AC(&temp1[2], -1);
        func_0886C018_01(&temp[1]);
        break;
    }
    case 8: {
        s32 temp2 = func_08858BA8();
        void *temp3 = func_08827A50(0x239B0, arg0->unk_20);
        if (temp3 != NULL) {
            temp3 = func_089D6D00(temp3, func_08858BA8(), arg0->unk_1500, arg0);
        }
        temp[0].unk_00 = temp2;
        func_0886C018_00(&temp[0], temp3);
        func_0886D5AC(&temp1[1], &temp[0]);
        func_0886D568((char *)&temp1[1], arg0->unk_10);
        func_0886D4AC(&temp1[1], -1);
        func_0886C018_01(&temp[0]);
        break;
    }
    case -2:
        func_0886CBF4((char *)&temp1[0]);
        func_0886D568((char *)&temp1[0], arg0->unk_10);
        func_0886D4AC(&temp1[0], -1);
        arg0->unk_0C = 0;
        *(volatile s32 *)&arg0->unk_1F50 = -1;
        break;
    case -1:
    default:
        break;
    }
    arg0->unk_1F50 = arg1;
    return arg0->unk_18;
}
}
