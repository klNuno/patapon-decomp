#include "common.h"
extern "C" {
void *func_0886095C(void);
extern void func_08863F00(void *, char *);
void func_08864024(void *, char *);
extern char D_089F938C[];

static inline void unk_00(char *const &arg0) {
    func_08863F00(func_0886095C(), arg0);
    func_08864024(func_0886095C(), arg0);
}

void func_088769AC(void) {
    unk_00(D_089F938C);
}
}
