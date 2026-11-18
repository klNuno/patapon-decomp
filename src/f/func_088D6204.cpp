#include "common.h"

extern "C" {

typedef struct {
    char unk_00[60];
} Str_088D6204;

extern s32 D_089FBC74[];
extern Str_088D6204 D_089FBC84[];

struct T_088D6204 {
    s32 unk_00;
    s32 unk_04;
    f32 unk_08;
    f32 unk_0C;
    Str_088D6204 unk_10;
};

typedef struct N_088D6204 {
    struct N_088D6204 *unk_00;
    struct N_088D6204 *unk_04;
    T_088D6204 unk_08;
} N_088D6204;

inline void *operator new(unsigned int, void *p) { return p; }

struct It_088D6204 {
    N_088D6204 *unk_00;
};

struct M_088D6204 {
    u8 pad_00[0xC24];
    N_088D6204 *unk_C24;
    N_088D6204 *unk_C28;
    N_088D6204 *unk_C2C;
    s32 unk_C30;

    static T_088D6204 &fill(T_088D6204 &v) {
        v.unk_10 = D_089FBC84[0];
        v.unk_00 = D_089FBC74[0];
        return v;
    }
    void insert(It_088D6204 pos, T_088D6204 &v) {
        N_088D6204 *n = unk_C2C->unk_00;
        N_088D6204 *prev;
        if (n != unk_C2C) {
            if (n->unk_00 != NULL) {
                n->unk_00->unk_04 = n->unk_04;
            }
            if (n->unk_04 != NULL) {
                n->unk_04->unk_00 = n->unk_00;
            }
            n->unk_00 = NULL;
            n->unk_04 = NULL;
        } else {
            n = NULL;
        }
        prev = pos.unk_00->unk_04;
        unk_C30++;
        prev->unk_00 = n;
        pos.unk_00->unk_04 = n;
        n->unk_00 = pos.unk_00;
        n->unk_04 = prev;
        new (&n->unk_08) T_088D6204(fill(v));
    }
    It_088D6204 end() {
        It_088D6204 it;
        it.unk_00 = (N_088D6204 *)&unk_C24;
        return it;
    }
};

void func_088D6204(M_088D6204 *arg0, s32 arg1, f32 arg2, f32 *arg3) {
    T_088D6204 t;

    t.unk_04 = arg1;
    t.unk_08 = arg2;
    t.unk_0C = *arg3;
    arg0->insert(arg0->end(), t);
}

}
