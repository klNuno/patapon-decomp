#include "common.h"

extern "C" {

typedef struct E_08889B08 {
    struct E_08889B08 *unk_00;
    struct E_08889B08 *unk_04;
    u8 pad_08[0x10];
} E_08889B08;

struct B_08889B08 {
    E_08889B08 *unk_00;
    E_08889B08 *unk_04;
};

class V_08889B08 : public B_08889B08 {
public:
    virtual E_08889B08 *func_08();
    virtual u32 func_0C();
};

typedef struct S_08889B08 {
    E_08889B08 *unk_00;
    E_08889B08 *unk_04;
    void *unk_08;
    u8 unk_0C[0x604];
    u8 *unk_610;
    void *unk_614;
    void *unk_618;
    struct S_08889B08 *unk_61C;
    s32 unk_620;
} S_08889B08;

typedef struct {
    s32 unk_00;
    S_08889B08 unk_04;
    u8 unk_628[0x72C];
    s32 unk_D54;
    s32 unk_D58;
    s32 unk_D5C;
    s32 unk_D60;
    s32 unk_D64;
    s32 unk_D68;
    s32 unk_D6C;
    s32 unk_D70;
    u8 unk_D74[0x20];
    u8 unk_D94;
    u8 pad_D95[3];
    s32 unk_D98;
    u8 unk_D9C;
} T_08889B08;

extern u8 D_08A45494[];
extern u8 D_08A454A4[];

void func_0881F5C0(void *, s32, s32);
void func_088B2260(void *, s32, void *);

T_08889B08 *func_08889B08(T_08889B08 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    S_08889B08 *s;
    E_08889B08 *p;
    u32 i;

    arg0->unk_00 = arg1;
    arg0->unk_04.unk_08 = D_08A454A4;
    s = &arg0->unk_04;
    s->unk_08 = D_08A45494;
    s->unk_610 = (u8 *)(((u32)s->unk_0C + 3) & ~3);
    p = ((V_08889B08 *)s)->func_08();
    s->unk_00 = p;
    s->unk_04 = p + (((V_08889B08 *)s)->func_0C() - 1);
    p->unk_04 = (E_08889B08 *)s;
    s->unk_04->unk_00 = (E_08889B08 *)s;
    for (i = 1; i < ((V_08889B08 *)s)->func_0C(); i++) {
        E_08889B08 *q = p;
        p++;
        q->unk_00 = p;
        p->unk_04 = q;
    }
    s->unk_61C = s;
    s->unk_620 = 0;
    s->unk_614 = &s->unk_614;
    s->unk_618 = &s->unk_614;
    func_088B2260(arg0->unk_628, arg1, arg0->unk_D74);
    arg0->unk_D54 = 0;
    arg0->unk_D58 = 0;
    arg0->unk_D5C = 0;
    arg0->unk_D60 = 0;
    arg0->unk_D64 = arg2;
    arg0->unk_D68 = arg3;
    arg0->unk_D6C = 0;
    arg0->unk_D70 = arg4;
    arg0->unk_D94 = 1;
    arg0->unk_D98 = 0;
    arg0->unk_D9C = 0;
    func_0881F5C0(arg0->unk_D74, 0, 0x20);
    return arg0;
}

}
