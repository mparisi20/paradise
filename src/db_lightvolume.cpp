#include "headers.h"

// Module #2700

void dbLightVolumeInit(dbLightVolume_s* lightVolume, dbModel_s* model) {
  dbModelTextureUnitInit(&lightVolume->lightTextureList, model);
}

void dbLightVolumeRelease(dbLightVolume_s* lightVolume) {
  dbModelTextureUnitRelease(&lightVolume->lightTextureList);
}

int dbLightVolumeGetNumLights(const dbLightVolume_s* lightVolume) {
  return lightVolume->lightVolumeListSize;
}

int dbLightVolumeGetType(const dbLightVolume_s* lightVolume, int index) {
  return lightVolume->lightVolumeList[index].type;
}

dbTexture_s* dbLightVolumeGetColourTexture(const dbLightVolume_s* lightVolume,
                                           int index) {
  if (lightVolume->lightVolumeList[index].colourTextureIndex >= 0 &&
      lightVolume->lightVolumeList[index].colourTextureIndex <
        static_cast<int32_t>(lightVolume->lightTextureList.numTextures))
    return lightVolume->lightTextureList.textureHeaders[
      lightVolume->lightVolumeList[index].colourTextureIndex];
  else
    return nullptr;
}

dbTexture_s* dbLightVolumeGetNoiseTexture(const dbLightVolume_s* lightVolume,
                                          int index) {
  if (lightVolume->lightVolumeList[index].noiseTextureIndex >= 0 &&
      lightVolume->lightVolumeList[index].noiseTextureIndex <
        static_cast<int32_t>(lightVolume->lightTextureList.numTextures))
    return lightVolume->lightTextureList.textureHeaders[
      lightVolume->lightVolumeList[index].noiseTextureIndex];
  else
    return nullptr;
}

float dbLightVolumeGetFOV(const dbLightVolume_s* lightVolume, int index) {
  return lightVolume->lightVolumeList[index].fov;
}

const mlVec* dbLightVolumeGetPosition(const dbLightVolume_s* lightVolume,
                                      int index) {
  return reinterpret_cast<const mlVec*>(
    &lightVolume->lightVolumeList[index].position);
}

const mlVec* dbLightVolumeGetDirection(const dbLightVolume_s* lightVolume,
                                       int index) {
  return reinterpret_cast<const mlVec*>(
    &lightVolume->lightVolumeList[index].direction);
}

const mlVec* dbLightVolumeGetUpVector(const dbLightVolume_s* lightVolume,
                                      int index) {
  return reinterpret_cast<const mlVec*>(&lightVolume->lightVolumeList[index].up);
}

const mlV4* dbLightVolumeGetColour(const dbLightVolume_s* lightVolume, int index) {
  return reinterpret_cast<const mlV4*>(&lightVolume->lightVolumeList[index].colour);
}

float dbLightVolumeGetRadius(const dbLightVolume_s* lightVolume, int index) {
  return lightVolume->lightVolumeList[index].radius;
}

float dbLightVolumeGetAttenuationDistance(const dbLightVolume_s* lightVolume,
                                          int index) {
  return lightVolume->lightVolumeList[index].lightShaftAttenuationRadius;
}

int dbLightVolumeGetJointIndex(const dbLightVolume_s* lightVolume, int index) {
  return lightVolume->lightVolumeList[index].jointIndex;
}

int dbLightVolumeGetIsMainLight(const dbLightVolume_s* lightVolume, int index) {
  return lightVolume->lightVolumeList[index].isMainLight;
}

float dbLightVolumeGetAnimationDurationSecs(const dbLightVolume_s* lightVolume,
                                            int index) {
  return lightVolume->lightVolumeList[index].animationDurationSecs;
}

float dbLightVolumeGetAnimationTimestepSecs(const dbLightVolume_s* lightVolume,
                                            int index) {
  return lightVolume->lightVolumeList[index].animationTimestepSecs;
}

const float* dbLightVolumeGetKeyframedIntensityPtr(const dbLightVolume_s* lightVolume,
                                                   int index) {
  return lightVolume->lightVolumeList[index].keyframedIntensity;
}
