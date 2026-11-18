#include "common.h"

typedef struct {
    u8 unk_00[0x10];
    f32 unk_10;
    f32 unk_14;
    s32 unk_18;
} T1;

typedef struct {
    u8 pad_00[0x10C];
    T1 unk_10C;
    T1 unk_128;
} T2;

typedef struct {
    f32 unk_00[4][4];
} M_08933578;

void func_088554A0(M_08933578 *, M_08933578 *, M_08933578 *);
void func_088576F8(void);
void func_08857940(f32);
void func_088579B8(f32);
void func_08858024(s32);
void func_0885807C(void);
void func_088580F8(void);
extern s32 func_088581B0(s32);
extern int func_08864E80(char *, char *);
extern s32 func_0886615C(s32);
f32 func_0890CF44(s32, u8 *, f32);
f32 func_0897412C(char *);
extern u8 D_08A05474[];

static inline f32 temp0(T1 *arg0) {
    f32 x;
    f32 y;
    f32 z;
    if (arg0->unk_18 == 0) {
        y = arg0->unk_14;
        x = func_0897412C((char *)arg0);
        z = arg0->unk_10 - y;
        z *= x;
        return y + z;
    } else {
        x = func_0897412C((char *)arg0);
        return func_0890CF44(arg0->unk_18, D_08A05474, x);
    }
}

void func_08974BA4(T2 *arg0, M_08933578 *arg1) {
    M_08933578 temp;
    M_08933578 temp2;
    func_08858024(2);
    func_0885807C();
    func_088576F8();
    func_08857940(temp0(&arg0->unk_10C));
    func_088579B8(temp0(&arg0->unk_128));
    func_088581B0((s32)&temp);
    func_088554A0(&temp2, arg1, &temp);
    func_08864E80((char *)arg0, (char *)&temp2);
    func_0886615C((s32)arg0);
    func_088580F8();
}
