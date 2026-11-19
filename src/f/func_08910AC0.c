#include "common.h"

typedef struct T0890B47C T0890B47C;
typedef struct T T;

typedef struct {
    u8 pad_00[0x48];
    f32 unk_48;
    f32 unk_4C;
} E;

typedef struct {
    u8 pad_00[0xD90];
    u8 unk_D90[0x1C20 - 0xD90];
    u8 unk_1C20[0x2300 - 0x1C20];
    E *unk_2300;
    u8 pad_2304[0x1C];
    f32 unk_2320;
    f32 unk_2324;
    f32 unk_2328;
    f32 unk_232C;
    u8 pad_2330[0x32A0 - 0x2330];
    u8 unk_32A0[0x170408 - 0x32A0];
    s32 unk_170408;
    u8 pad_17040C[8];
    u8 unk_170414[4];
} S;

void func_0881F120(void *, void *, s32);
char *func_088229BC(char *, s32);
s32 *func_08868F6C(void *, s32, s32);
s32 func_0888B03C(s32 *, char *);
void func_088D435C(void *, s32);
void func_088D43C8(void *, f32, f32);
void func_088D43EC(char *arg0, f32 fparg0, f32 fparg1);
void func_088D43FC(void *, u8 *, f32);
void func_088D4710(char *arg0, char *arg1);
void func_088D4724(char *, s32);
void func_0890B47C(T0890B47C *arg0, s32 arg1, s32 arg2);
typedef struct S_0890B264 S_0890B264;
void func_0890B648(S_0890B264 *);
void func_0890D254(T *arg0, s32 arg1);
void func_0890FE88(void *, s32);
void func_08910440(char **arg0, s32 arg1);
void func_08911768(void *);
void func_08925F04(void *, s32, s32);

extern f32 D_08A00150[];
extern f32 D_08A00158[];
extern f32 D_08A00160[];
extern f32 D_08A00164[];
extern f32 D_08A00168[];
extern f32 D_08A00170[];
extern f32 D_08A00178[];
extern f32 D_08A0017C[];
extern char D_08A00180[];
extern char D_08A001AC[];
extern u8 D_08A001C4[];
extern void *D_08AD1E28[];

void func_08910AC0(S *arg0) {
    f32 temp[3];
    f32 temp2[3];
    f32 temp3[3];
    f32 temp4[3];
    char temp5[128];
    s32 temp6;
    s32 temp7;
    char temp8[128];
    s32 temp9;
    s32 temp10;
    f32 temp11[2];
    s32 temp15;
    char *temp13;
    s32 temp20;
    char *temp12;
    s32 temp14;
    s32 temp16;
    void *temp17;
    E *temp18;

    temp17 = D_08AD1E28[0];
    temp14 = *func_08868F6C(temp17 != NULL ? temp17 : NULL, 4, 0);
    temp13 = D_08A00180;
    temp15 = temp14;
    temp12 = func_088229BC(temp13, 0x2F);
    while (temp12 != NULL && *temp12 != 0) {
        temp16 = temp12 - temp13;
        func_0881F120(temp5, temp13, temp16);
        temp5[temp16] = 0;
        temp6 = temp15;
        temp15 = func_0888B03C(&temp6, temp5);
        temp13 = temp12 + 1;
        temp12 = func_088229BC(temp13, 0x2F);
    }
    temp7 = temp15;
    temp20 = func_0888B03C(&temp7, temp13);

    temp13 = D_08A001AC;
    temp12 = func_088229BC(temp13, 0x2F);
    while (temp12 != NULL && *temp12 != 0) {
        temp16 = temp12 - temp13;
        func_0881F120(temp8, temp13, temp16);
        temp8[temp16] = 0;
        temp9 = temp14;
        temp14 = func_0888B03C(&temp9, temp8);
        temp13 = temp12 + 1;
        temp12 = func_088229BC(temp13, 0x2F);
    }
    temp10 = temp14;
    func_0890B47C((T0890B47C *)arg0->unk_32A0, temp20, func_0888B03C(&temp10, temp13));
    func_08910440((char **)arg0, temp20);
    func_0890D254((T *)arg0->unk_D90, temp20);
    func_088D435C(arg0->unk_1C20, 1);
    func_0890FE88(arg0->unk_1C20, temp20);

    *(u32 *)&arg0->unk_2320 = 0x43700000;
    *(u32 *)&arg0->unk_2324 = 0x43500000;
    *(u32 *)&arg0->unk_2328 = 0x43B60000;
    *(u32 *)&arg0->unk_232C = 0x42D00000;
    temp18 = arg0->unk_2300;
    *(u32 *)&temp18->unk_48 = 0x43B60000;
    *(u32 *)&temp18->unk_4C = 0x42D00000;
    func_088D4724((char *)arg0->unk_1C20, 3);
    *(u32 *)&temp11[0] = 0x40800000;
    *(u32 *)&temp11[1] = 0xC1600000;
    func_088D4710((char *)arg0->unk_1C20, (char *)temp11);
    func_088D43EC((char *)arg0->unk_1C20, 0.0f, -4.0f);
    func_088D43C8((char *)arg0->unk_1C20, 14.0f, 14.0f);
    func_088D43FC(arg0->unk_1C20, D_08A001C4, 0.0f);

    arg0->unk_170408 = -1;
    func_0890B648((S_0890B264 *)arg0->unk_32A0);

    temp[0] = D_08A00150[0];
    temp[1] = D_08A00150[1];
    temp[2] = D_08A00158[0];
    func_08925F04(arg0->unk_170414, (s32)temp, 3);

    temp2[0] = D_08A00158[1];
    temp2[1] = D_08A00160[0];
    temp2[2] = D_08A00164[0];
    func_08925F04(arg0->unk_170414, (s32)temp2, 3);

    temp3[0] = D_08A00168[0];
    temp3[1] = D_08A00168[1];
    temp3[2] = D_08A00170[0];
    func_08925F04(arg0->unk_170414, (s32)temp3, 3);

    temp4[0] = D_08A00170[1];
    temp4[1] = D_08A00178[0];
    temp4[2] = D_08A0017C[0];
    func_08925F04(arg0->unk_170414, (s32)temp4, 3);
    func_08911768(arg0);
}
