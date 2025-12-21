#include "MorphItemNeoIce.h"

MorphItemNeoIce::MorphItemNeoIce(const char *pName) : MorphItemObjNeo(pName) {

}

u32 MorphItemNeoIce::getPowerUp() {
    return MORPH_ICE;
}

void MorphItemNeoIce::emitAppearEffects() {
    //MR::emitEffect(this, "AppearIceFlower");
    //MR::startActionSound(this, "OjMorphFlowerAppear", -1, -1, -1);
}