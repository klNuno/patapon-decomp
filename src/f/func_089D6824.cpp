#include "common.h"
extern "C" {
class V {
public:
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14();
};
typedef struct {
    u8 pad_00[0x24A1];
    u8 unk_24A1;
    u8 unk_24A2;
} T089D6714_A;
typedef struct {
    u8 pad_00[0x42820];
    T089D6714_A *unk_42820;
} Obj_089794B0;
typedef struct {
    void *unk_00;
    u8 pad_04[0x11582];
} S_089CE450;
typedef struct {
    u8 pad_00[4];
    u32 unk_04;
    u8 pad_08[0x14];
    u8 unk_1C[0x10A3C];
    S_089CE450 unk_10A58;
    u8 pad_21FE0[0x4A8];
    u32 unk_22488;
} S;

extern Obj_089794B0 *D_08AD1E28[];
extern u8 *D_08AD1F14[];
s32 func_08914B94(void);
s32 func_089A8B74(u8 *, s32);
s32 func_089CE450(S_089CE450 *, s32);
s32 func_089CE590(S_089CE450 *);
void func_089D0E50(u8 *, s32, s32, s32, s32, s32);
void func_089D1904(void *, s32, s32);
s32 func_089D1AD8(u8 *);
s32 func_089D1AEC(u8 *);
void func_089D1B50(u8 *, s32);
void func_089D6CE0(void *, s32);

static inline Obj_089794B0 *func_089D6824_unk_00()
{
    Obj_089794B0 *p = D_08AD1E28[0];
    return p != NULL ? p : NULL;
}
static inline u8 *func_089D6824_unk_04()
{
    u8 *p = D_08AD1F14[0];
    return p != NULL ? p : NULL;
}

s32 func_089D6824(S *arg0, s32 arg1)
{
    ((V *)&arg0->unk_10A58)->unk_14();
    switch (arg0->unk_04) {
    case 6:
        arg0->unk_22488 += arg1;
        if (arg0->unk_22488 > 0x960U)
            func_089D6CE0(arg0, 4);
        break;
    case 4:
        if (func_08914B94() == 0) {
            u8 *p = func_089D6824_unk_04() + 0x2460;
            s32 a = func_089A8B74(p, 0x40000);
            s32 b = func_089A8B74(p, 0x40019);
            s32 c = func_089A8B74(p, 0x20000);
            s32 d = func_089A8B74(p, 0x20040);
            func_089D0E50(arg0->unk_1C, a, b, 2, c, d);
            func_089D1904(arg0->unk_1C, 1, 1);
            func_089D6CE0(arg0, 5);
        } else {
            if (func_089D6824_unk_00()->unk_42820->unk_24A2 == 0) {
                func_089D6CE0(arg0, 3);
                func_089CE450(&arg0->unk_10A58, 2);
            } else {
                func_089D6CE0(arg0, 2);
            }
        }
        break;
    case 5:
        func_089D1B50(arg0->unk_1C, arg1);
        if (func_089D1AD8(arg0->unk_1C) != 0) {
            s32 r = func_089D1AEC(arg0->unk_1C);
            if (r == 0) {
                if (func_089D6824_unk_00()->unk_42820->unk_24A2 == 0) {
                    func_089D6CE0(arg0, 3);
                    func_089CE450(&arg0->unk_10A58, 2);
                } else {
                    func_089D6CE0(arg0, 2);
                }
            } else if (r == 1) {
                func_089D6CE0(arg0, 6);
            }
        }
        break;
    case 2:
        return 0xC;
    case 3:
        if (func_089CE590(&arg0->unk_10A58) == 0) {
            T089D6714_A *t;
            func_089D6CE0(arg0, 2);
            t = func_089D6824_unk_00()->unk_42820;
            if (t->unk_24A1 == 0)
                t->unk_24A2 = 1;
        }
        break;
    case 0:
    case 1:
        break;
    }
    return 0x10000;
}
}
