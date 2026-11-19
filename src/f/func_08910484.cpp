#include "common.h"

extern "C" {
typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
} Q;

typedef struct {
    f32 unk_00[4][4];
} M;

class A {
public:
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14();
    virtual void unk_18(char *);
};

void func_088651A4(void *, M *, void *, s32, s32);
void func_0886575C(s32, s32, s32);
extern s32 func_08865870(void);
void func_08866B54(M *, s32, void *);
void *func_0890D058(s32);
void *func_0890D070(s32);
void func_0891072C(Q *arg0, s32 arg1, M *arg2);
extern char D_08A00104[];
extern char D_08A00124[];
extern char D_08A00138[];

void func_08910484(A *arg0) {
    struct { Q unk_00; u8 pad_10[0x10]; } temp;
    M temp2;
    M temp3;
    M temp4;
    Q temp5;
    Q temp6;
    Q temp7;
    Q temp8;
    f32 temp9;
    f32 temp10;
    void *temp11;

    arg0->unk_18(D_08A00124);
    func_0886575C(0, 1, 1);
    temp9 = 0.0f;
    do {
        temp10 = 0.0f;
        do {
            temp.unk_00.unk_0C = 1.0f;
            temp5.unk_0C = 1.0f;
            temp.unk_00.unk_00 = 0.0f;
            temp.unk_00.unk_04 = 0.0f;
            temp.unk_00.unk_08 = 0.0f;
            temp5.unk_00 = temp9;
            temp5.unk_04 = temp10;
            temp5.unk_08 = 0.0f;
            temp2.unk_00[0][3] = 0.0f;
            temp2.unk_00[1][3] = 0.0f;
            temp2.unk_00[2][3] = 0.0f;
            func_08866B54(&temp2, 3, &temp5);
            func_0891072C(&temp.unk_00, 0, &temp2);
            func_088651A4(D_08A00104, &temp2, NULL, 0, 1);
            temp10 += 80.0f;
        } while (temp10 < 272.0f);
        temp9 += 80.0f;
    } while (temp9 < 480.0f);
    func_08865870();
    arg0->unk_18(D_08A00138);
    func_0886575C(0, 1, 1);
    temp6.unk_0C = 1.0f;
    temp7.unk_00 = 0.0f;
    temp7.unk_04 = 0.0f;
    temp7.unk_08 = 0.0f;
    temp7.unk_0C = 0.0f;
    temp6.unk_00 = 0.0f;
    temp6.unk_04 = 0.0f;
    temp6.unk_08 = 0.0f;
    temp3.unk_00[0][3] = 0.0f;
    temp3.unk_00[1][3] = 0.0f;
    temp3.unk_00[2][3] = 0.0f;
    func_08866B54(&temp3, 3, &temp7);
    func_0891072C(&temp6, 0, &temp3);
    temp11 = func_0890D058(0x11);
    func_088651A4(temp11, &temp3, NULL, 0, 1);
    temp3.unk_00[0][0] = -1.0f;
    temp3.unk_00[3][0] = 480.0f;
    func_088651A4(temp11, &temp3, NULL, 0, 1);
    temp3.unk_00[1][1] = -1.0f;
    temp3.unk_00[3][1] = 272.0f;
    func_088651A4(temp11, &temp3, NULL, 0, 1);
    temp3.unk_00[0][0] = 1.0f;
    temp3.unk_00[3][0] = 0.0f;
    func_088651A4(temp11, &temp3, NULL, 0, 1);
    func_08865870();
    func_0886575C(0, 1, 1);
    temp11 = func_0890D070(0);
    temp8.unk_0C = 1.0f;
    temp8.unk_00 = 0.0f;
    temp8.unk_04 = 0.0f;
    temp8.unk_08 = 0.0f;
    temp4.unk_00[0][3] = 0.0f;
    temp4.unk_00[1][3] = 0.0f;
    temp4.unk_00[2][3] = 0.0f;
    func_08866B54(&temp4, 3, temp11);
    func_0891072C(&temp8, 0, &temp4);
    func_088651A4(func_0890D058(0), &temp4, NULL, 0, 1);
    func_08865870();
}
}
