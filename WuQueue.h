#pragma once

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct {
  int32_t itemSize;
  int32_t start;
  int32_t length;
  int32_t capacity;
  uint8_t* items;
} WuQueue;

WuQueue* WuQueueCreate(int32_t itemSize, int32_t capacity);
void WuQueueInit(WuQueue* q, int32_t itemSize, int32_t capacity);
void WuQueuePush(WuQueue* q, const void* item);
int32_t WuQueuePop(WuQueue* q, void* item);

#ifdef __cplusplus
}
#endif
