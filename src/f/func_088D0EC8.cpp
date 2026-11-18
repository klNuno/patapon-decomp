#include "common.h"

extern "C" {
typedef struct {
    s32 unk_00;
    s32 unk_04;
    u8 pad_08[0x18];
    s32 unk_20;
} S088CE0C0;
typedef struct L_088813A8 {
    struct L_088813A8 *unk_00;
    struct L_088813A8 *unk_04;
    u8 pad_08[0x1C];
    void *unk_24;
} L_088813A8;
struct Unk50 {
    virtual void func_08();
    virtual void func_0C();
    virtual void func_10(s32);
};
struct UnkC8 {
    u8 pad_00[0x24];
    s32 *unk_24;
    u32 unk_28;

    void func_00()
    {
        if (this != NULL) {
            s32 *temp = unk_24;
            s32 **temp_data = &unk_24;
            if ((u32)temp != (u32)(temp + unk_28)) {
                do {
                    ++temp;
                } while (temp != *temp_data + unk_28);
            }
            unk_28 = 0;
        }
    }
};
struct UnkF4 {
    u8 pad_00[0x30];
    u8 *unk_30;
    u8 pad_34[0x1C];
    Unk50 *unk_50;
    s32 unk_54;
    u32 unk_58;
    L_088813A8 unk_5C;
    L_088813A8 unk_84;
    u8 pad_AC[0x1C];
    UnkC8 unk_C8;
};
extern u8 D_08A45350[];
extern u8 D_08A46144[];
void func_0880416C(void *);
s32 func_0888027C(s32 *, s32 *);
void func_088802D0(s32 *, S088CE0C0 *, s32);
void func_08880484(s32 *, s32 *, s32);
void func_088804AC(s32 *, S088CE0C0 *);
void func_088804B4(s32 *, S088CE0C0 *);
void func_088804C0(void *, s32);
void func_0888065C(L_088813A8 *);
void func_088BA1E8(void *, s32);
void func_088D1898(s32);
void func_088D18A0(s32, char **);

inline void func_00(L_088813A8 *arg0)
{
    s32 sp1C;
    s32 sp18;
    s32 sp14;
    s32 sp10;


    func_088804B4(&sp1C, (S088CE0C0 *)arg0);
    func_088804AC(&sp18, (S088CE0C0 *)arg0);
    while (func_0888027C(&sp1C, &sp18) != 0) {
        func_08880484(&sp10, &sp1C, 0);
        func_088802D0(&sp14, (S088CE0C0 *)arg0, sp10);
    }
    ((S088CE0C0 *)arg0)->unk_20 = 0;
    arg0->unk_04 = arg0;
    arg0->unk_00 = arg0;
}

inline void func_04(L_088813A8 *arg0)
{
    if (arg0 != NULL) {
        arg0->unk_24 = D_08A45350;
        func_0888065C(arg0);
        func_088804C0(arg0, -1);
    }
}

UnkF4 *func_088D0EC8(UnkF4 *arg0, s16 arg1)
{
    s16 temp_arg = arg1;
    UnkF4 *temp_obj = arg0;
    if (temp_obj != NULL) {
        temp_obj->unk_30 = D_08A46144;
        if (arg0->unk_58 != 0) {
            func_00(&arg0->unk_5C);
            func_00(&arg0->unk_84);
            for (u32 i = 0; i < arg0->unk_58; ++i) {
                func_088D1898(arg0->unk_54 + i * 0x1940);
            }
            arg0->unk_50->func_10(arg0->unk_54);
            arg0->unk_54 = 0;
            u32 i = 0;
            if (i < arg0->unk_C8.unk_28) {
                u32 off = 0;
                s32 *&temp = arg0->unk_C8.unk_24;
                do {
                    func_088D18A0(*(s32 *)((u8 *)temp + off), (char **)arg0->unk_50);
                    off += 4;
                } while (++i < arg0->unk_C8.unk_28);
            }
        }
        arg0->unk_C8.func_00();
        func_04(&arg0->unk_84);
        func_04(&arg0->unk_5C);
        func_088BA1E8(arg0, 0);
        if (temp_arg > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
}
