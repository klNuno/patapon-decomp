#include "common.h"

extern "C" {

class O_089C93D8 {
public:
    virtual void v08();
    virtual void v0C();
    virtual void v10();
    virtual s32 v14();
};

typedef struct {
    u8 pad_00[0x4];
    s32 unk_04;
} R_089C93D8;

typedef struct {
    u8 pad_00[0x8D0];
    u8 unk_8D0;
} P_089C93D8;

typedef struct {
    u8 pad_00[0x2E3C0];
    u8 unk_2E3C0[1];
} W_089C93D8;

typedef struct {
    W_089C93D8 *unk_00;
    u8 pad_04[0x15C];
    s32 unk_160;
    P_089C93D8 *unk_164;
    s32 unk_168;
    u8 pad_16C[0xD4C];
    s32 unk_EB8;
} S_089C93D8;

O_089C93D8 *func_08958954(void *);
R_089C93D8 *func_089C0588(O_089C93D8 *);
void func_0898584C(S_089C93D8 *, s32);
void func_088D45F4(P_089C93D8 *);
void func_08956380(void *, s32, s32);
s32 func_088586E8(void);
u8 *func_089B53D8(s32);
void func_0897C3F4(f32, void *, s32);
void func_089CA16C(S_089C93D8 *);
void func_089C95F4(S_089C93D8 *, s32, O_089C93D8 *);
void func_089C97B8(S_089C93D8 *, s32, O_089C93D8 *);
void func_089C98D0(S_089C93D8 *, s32, O_089C93D8 *);

void func_089C93D8(S_089C93D8 *arg0, s32 arg1) {
    O_089C93D8 *o;
    R_089C93D8 *p;

    o = func_08958954(arg0->unk_00->unk_2E3C0);
    if (o != NULL) {
        if (o != NULL && (p = func_089C0588(o)) != NULL) {
            if (o->v14() != 0) {
                if (arg0->unk_168 >= 5) {
                    func_0898584C(arg0, 2);
                } else {
                    func_0898584C(arg0, 1);
                }
                if (arg0->unk_164 != NULL) {
                    func_088D45F4(arg0->unk_164);
                    arg0->unk_164->unk_8D0 = 0;
                    arg0->unk_164 = NULL;
                }
                func_08956380(arg0->unk_00->unk_2E3C0, 0, 1);
                func_0897C3F4(1.0f, func_089B53D8(func_088586E8()) + 0x14, 0);
                arg0->unk_160 = 4;
            } else {
                func_089CA16C(arg0);
                switch (p->unk_04) {
                case 0:
                    break;
                case 0x10001:
                case 0x10002:
                case 0x10003:
                    func_089C95F4(arg0, arg1, o);
                    break;
                case 0x20005:
                case 0x20007:
                case 0x20009:
                case 0x2000B:
                    func_089C97B8(arg0, arg1, o);
                    break;
                case 0x30006:
                case 0x30008:
                case 0x3000A:
                case 0x3000C:
                    func_089C98D0(arg0, arg1, o);
                    break;
                }
                arg0->unk_EB8 = p->unk_04;
            }
        }
    }
}

}
