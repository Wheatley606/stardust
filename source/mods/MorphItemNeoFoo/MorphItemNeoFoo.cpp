#include "MorphItemNeoFoo.h"

MorphItemNeoFoo::MorphItemNeoFoo(const char *pName) : MorphItemObjNeo(pName) {

}

u32 MorphItemNeoFoo::getPowerUp() {
    return MORPH_FOO;
}

void MorphItemNeoFoo::emitAppearEffects() {
    //MR::emitEffect(this, "AppearFoo");
    //MR::startActionSound(this, "OjMorphItemAppear", -1, -1, -1);
}