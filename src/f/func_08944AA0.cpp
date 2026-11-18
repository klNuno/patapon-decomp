#include "common.h"
extern "C" {
class V_08944AA0 {
public:
    virtual void unk_08();
    virtual s32 unk_0C();
    virtual s32 unk_10(s32);
};
class T : public V_08944AA0 {
public:
    u8 pad_04[0x4AC];
    u8 unk_4B0;
};
struct E {
    E *unk_00;
    E *unk_04;
    u8 pad_08[4];
    E *unk_0C;
    u8 pad_10[0x18];
    T *unk_28;
    u8 pad_2C[4];
};
struct S {
    u8 pad_00[0x34];
    E *unk_34;
    u32 unk_38;
    u8 pad_3C[4];
    E *unk_40;
    E *unk_44;
    u8 pad_48[0x18];
    u32 unk_60;
};
s32 func_08852BA8(void *);
void func_08852BCC(void *, s32);
void func_08852C5C(void *, s32, s32);
void func_0884EBE8(s32, s32, s32);
s32 func_088A88C0(void);
void func_088E63DC(s32);
void func_088E64B0(void *);
void func_088E64D8(s32, s32);
void func_08944DA0(S *, T *);

T *func_08944AA0(S *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5)
{
    u32 temp = arg0->unk_38;
    u32 i;
    u32 off;
    if (arg0->unk_60 >= temp)
        return NULL;
    i = 0;
    if (temp != 0) {
        off = 0;
        do {
            E *p = (E *)((u8 *)arg0->unk_34 + off);
            if (p->unk_28 != NULL) {
                T *&q = p->unk_28;
                u8 temp2;
                T *tmp;
                if (func_08852BA8(q) != 0 || q->unk_4B0 != 0)
                    goto next;
                temp2 = !(p->unk_04 != NULL);
                if (temp2 == 0)
                    goto next;
                func_088E63DC((s32)p->unk_28);
                func_088E64B0(q);
                tmp = q;
                func_088E64D8((s32)tmp, func_088A88C0());
                func_08944DA0(arg0, p->unk_28);
                if (arg1 != 0)
                    func_08852BCC(q, arg1);
                func_08852BCC(q, arg1);
                if (arg2 != 0)
                    func_08852C5C(q, arg2, 0);
                if (arg3 != 0) {
                    E *end = (E *)&arg0->unk_40;
                    if (end != p) {
                        s32 r;
                        if (arg0->unk_40 != end) {
                            p->unk_00 = arg0->unk_40;
                            arg0->unk_40->unk_04 = p;
                            arg0->unk_40 = p;
                            r = 1;
                        } else {
                            arg0->unk_40 = p;
                            arg0->unk_44 = p;
                            p->unk_00 = end;
                            r = 1;
                        }
                        p->unk_04 = (E *)&arg0->unk_40;
                        if (r) {
                            p->unk_0C = (E *)&arg0->unk_40;
                            ++arg0->unk_60;
                        }
                    }
                }
                q->unk_4B0 = 1;
                func_0884EBE8(q->unk_0C(), 0x40, arg5);
                if (arg4 != 0 && (u8)q->unk_10(0x50) == 0) {
                    q->unk_4B0 = 0;
                    return NULL;
                }
                return p->unk_28;
            }
        next:
            off += 0x30;
        } while (++i < arg0->unk_38);
    }
    return NULL;
}
}
