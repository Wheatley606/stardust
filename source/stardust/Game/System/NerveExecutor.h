#pragma once

class Spine;
class Nerve;

class NerveExecutor {
public:
    NerveExecutor(const char *pName);

    virtual ~NerveExecutor();

    void initNerve(const Nerve *pNerve, int);
    void updateNerve();
    void setNerve(const Nerve *pNerve);
    bool isNerve(const Nerve *pNerve) const;
    unsigned int getNerveStep() const;

    Spine* mSpine; // _8
};
static_assert(sizeof(NerveExecutor) == 0x10, "NerveExecutor Size");