#include "common.h"
extern "C" {
class O_0896CB54;
struct N_0896CB54 {
    N_0896CB54 *unk_00;
    N_0896CB54 *unk_04;
    O_0896CB54 *unk_08;
    bool same(N_0896CB54 *o) {
        return *(s32 *)&unk_08 == *(s32 *)&o->unk_08 && *(s32 *)&unk_04 == *(s32 *)&o->unk_04 && *(s32 *)&unk_00 == *(s32 *)&o->unk_00;
    }
};
struct I_0896CB54 {
    N_0896CB54 *p;
    void next() {
        if (p != NULL) {
            p = p->unk_00;
        }
    }
};
class P_0896CB54 {
public:
    u8 pad_00[0x1C];
    virtual void v08();
    virtual void v0C();
    virtual void v10();
    virtual void v14();
    virtual void v18();
    virtual void v1C();
};
class O_0896CB54 : public P_0896CB54 {
public:
    u8 pad_20[0x4];
    N_0896CB54 unk_24;
    u8 pad_30[0x14];
    s32 unk_44;
    u8 pad_48[0xBC];
    s32 unk_104;
};
typedef struct {
    u8 pad_00[0x14];
    s32 unk_14;
    u8 pad_18[0x8];
    u8 unk_20[0xA8000];
    u8 unk_A8020[0x28];
    u8 unk_A8048[0x4];
} M_0896CB54;
typedef struct {
    u8 pad_00[0x42830];
    M_0896CB54 unk_42830;
} G_0896CB54;
extern G_0896CB54 *D_08AD1E28[];
s32 func_0896CDE8(M_0896CB54 *, O_0896CB54 *);
void *func_0896CD20(void *, void *);
void func_08867DD8(void *, void *);
void func_08867C5C(void *, void *);
s32 func_0886800C(void *);
void func_0896CB54(O_0896CB54 *arg0, s32 arg1) {
    I_0896CB54 cur;
    M_0896CB54 *m;
    I_0896CB54 it;
    N_0896CB54 *l;
    O_0896CB54 *t;
    s32 done;
    s32 idx;
    void *n;

    m = &(D_08AD1E28[0] != NULL ? D_08AD1E28[0] : NULL)->unk_42830;
    if (arg0->unk_44 != 0) {
        it.p = &arg0->unk_24;
        it.next();
        l = &arg0->unk_24;
        do {
            cur = it;
            done = 0;
            if (it.p->same(l->unk_04)) {
                done = 1;
            } else {
                it.next();
            }
            t = cur.p->unk_08;
            if (arg1 == -1 || arg1 == t->unk_104) {
                t->v1C();
                idx = func_0896CDE8(m, t);
                if (idx != -1) {
                    n = func_0896CD20(m->unk_A8020, &m->unk_20[idx * 0x130]);
                    if (n != NULL) {
                        func_08867DD8(m->unk_A8020, n);
                        func_08867C5C(m->unk_A8048, n);
                        m->unk_14 = func_0886800C(m->unk_A8020);
                    }
                }
            }
            func_0896CB54(t, arg1);
        } while (!done);
    }
}
}
