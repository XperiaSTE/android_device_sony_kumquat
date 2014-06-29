#include <unistd.h>
#include <fcntl.h>

#include "block.h"

#define F2FS_MAGIC 0xF2F52010

short is_f2fs(const char *device) {
    int fd = open(device, O_RDONLY);
    if (fd != -1) {
        unsigned magic;
        lseek(fd, 1024, SEEK_SET);
        read(fd, &magic, sizeof(unsigned));
        close(fd);

        if (magic == F2FS_MAGIC) return 1;
        return 0;
    }

    return -1;
}
