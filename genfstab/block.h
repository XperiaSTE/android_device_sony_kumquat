#ifndef BLOCK_H
#define BLOCK_H

#define BLOCK_SYSTEM "/dev/block/mmcblk0p10"
#define BLOCK_CACHE  "/dev/block/mmcblk0p12"
#define BLOCK_DATA   "/dev/block/mmcblk0p11"

short is_f2fs(const char *device);

#endif
