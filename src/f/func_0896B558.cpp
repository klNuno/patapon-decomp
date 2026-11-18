#include "common.h"

extern "C" {

void func_0896B084(u32 *, u32 *);

struct Less {
    bool operator()(const u32 &a, const u32 &b) const { return a < b; }
};

inline void sort3(u32 *arg0, u32 *arg1, u32 *arg2, const Less &comp) {
    bool c1 = !comp(*arg2, *arg0);
    bool c2 = !comp(*arg1, *arg2);

    if (c1 && c2) {
        return;
    }
    if (!c1 && !c2) {
        func_0896B084(arg0, arg1);
        return;
    }
    if (comp(*arg1, *arg0)) {
        func_0896B084(arg0, arg1);
    }
    if (c1) {
        func_0896B084(arg1, arg2);
    } else {
        func_0896B084(arg0, arg2);
    }
}

void func_0896B558(u32 *arg0, u32 *arg1, u32 *arg2) {
    sort3(arg0, arg1, arg2, Less());
}

}
