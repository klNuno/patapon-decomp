#include "common.h"

extern "C" {

typedef struct N_0887B7BC {
    struct N_0887B7BC *unk_00;
    struct N_0887B7BC *unk_04;
    u8 pad_08[8];
} N_0887B7BC;

class V_0887B7BC {
public:
    N_0887B7BC *unk_00;
    N_0887B7BC *unk_04;
    virtual N_0887B7BC *unk_08();
    virtual u32 unk_0C();
};

struct E_0887B7BC {
    u8 unk_00[1];
    E_0887B7BC() {}
};

struct P_0887B7BC {
    N_0887B7BC *unk_00;
    N_0887B7BC *unk_04;
    void *unk_08;
    u8 unk_0C[0x400];
    u8 *unk_40C;
    void *unk_410;
    void *unk_414;
    struct P_0887B7BC *unk_418;
    s32 unk_41C;
    E_0887B7BC unk_420;

    void set(const E_0887B7BC &e) { unk_420 = e; }
};

typedef struct {
    u8 unk_00;
    u8 unk_01;
    u8 pad_02[2];
    s32 unk_04;
    P_0887B7BC unk_08;
    s32 unk_42C;
    s32 unk_430;
} S_0887B7BC;

extern char D_08A451CC[];
extern char D_08A451BC[];

S_0887B7BC *func_0887B7BC(S_0887B7BC *arg0) {
    P_0887B7BC *p;
    N_0887B7BC *n;
    N_0887B7BC *prev;
    u32 i;

    arg0->unk_00 = 0;
    arg0->unk_01 = 1;
    arg0->unk_04 = 0;
    p = &arg0->unk_08;
    p->unk_08 = D_08A451CC;
    p->unk_08 = D_08A451BC;
    p->unk_40C = p->unk_0C;
    n = ((V_0887B7BC *)p)->unk_08();
    p->unk_00 = n;
    p->unk_04 = n + (((V_0887B7BC *)p)->unk_0C() - 1);
    n->unk_04 = (N_0887B7BC *)p;
    p->unk_04->unk_00 = (N_0887B7BC *)p;
    for (i = 1; i < ((V_0887B7BC *)p)->unk_0C(); i++) {
        prev = n;
        n++;
        prev->unk_00 = n;
        n->unk_04 = prev;
    }
    p->unk_418 = p;
    p->unk_41C = 0;
    p->unk_410 = &p->unk_410;
    p->unk_414 = &p->unk_410;
    p->set(E_0887B7BC());
    arg0->unk_42C = 0;
    arg0->unk_430 = 0;
    return arg0;
}

}
