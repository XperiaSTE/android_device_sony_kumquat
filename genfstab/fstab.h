#ifndef FSTAB_H
#define FSTAB_H

#define FSTAB_PATH "/fstab.st-ericsson"

const char fstab_original_a[] =
"# Android fstab file.\n"
"# The filesystem that contains the filesystem checker binary (typically /system) cannot\n"
"# specify MF_CHECK, and must come before any filesystems that do specify MF_CHECK\n"
"#<src>                                      <mnt_point>       <type>    <mnt_flags and options>                                                                  <fs_mgr_flags>\n\n"
;

const char fstab_original_b[] =
"/dev/block/mmcblk0p6                        /modemfs          ext4      noatime,nosuid,nodev,nomblk_io_submit,errors=panic                                       wait,check\n"
;

const char fstab_system_f2fs[] = "/dev/block/mmcblk0p10                       /system           f2fs                                                                                               wait\n";
const char fstab_system_ext4[] = "/dev/block/mmcblk0p10                       /system           ext4      errors=panic                                                                             wait\n";

const char fstab_data_f2fs[] = "/dev/block/mmcblk0p11                       /data             f2fs      noatime,nosuid,nodev,discard,inline_xattr                                                wait,check\n";
const char fstab_data_ext4[] = "/dev/block/mmcblk0p11                       /data             ext4      nosuid,nodev,noatime,noauto_da_alloc,journal_async_commit,nomblk_io_submit,errors=panic  wait,check\n";

const char fstab_cache_f2fs[] = "/dev/block/mmcblk0p12                       /cache            f2fs      noatime,nosuid,nodev,discard,inline_xattr                                                wait,check\n";
const char fstab_cache_ext4[] = "/dev/block/mmcblk0p12                       /cache            ext4      noatime,nosuid,nodev,nomblk_io_submit,errors=panic                                       wait,check\n";

const char fstab_original_c[] =
"/dev/block/mmcblk0p9                        /boot             emmc      defaults                                                                                 defaults\n"
"/dev/block/mmcblk0p9                        /recovery         emmc      defaults                                                                                 defaults\n"
"/dev/block/zram0                            none              swap      defaults                                                                                 zramsize=67108864\n"
"/devices/sdi4/mmc_host/mmc1/mmc1            auto              vfat      nosuid,nodev                                                                             wait,voldmanaged=sdcard0:14,nonremovable,noemulatedsd\n"
"/devices/platform/musb-ux500.0/musb-hdrc    /storage/usbdisk  auto      defaults                                                                                 wait,voldmanaged=usbdisk:auto\n"
;

#endif
