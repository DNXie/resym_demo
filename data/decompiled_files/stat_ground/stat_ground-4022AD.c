#include "/share/binary_recovery/clang-parser/defs.hh"
const char *__fastcall sub_4022AD(__int64 *a1)
{
  __int64 v1; // rax

  v1 = *a1;
  if ( *a1 == 19920822 )
    return "sysv2";
  if ( v1 > 19920822 )
  {
    if ( v1 == 1481003842 )
      return "xfs";
    if ( v1 > 1481003842 )
    {
      if ( v1 == 1936814952 )
        return "squashfs";
      if ( v1 > 1936814952 )
      {
        if ( v1 == 2508478710LL )
          return "hugetlbfs";
        if ( v1 > 2508478710LL )
        {
          if ( v1 == 4185718668LL )
            return "selinux";
          if ( v1 > 4185718668LL )
          {
            if ( v1 == 4187351113LL )
              return "hpfs";
            if ( v1 == 4283649346LL )
              return "cifs";
          }
          else
          {
            if ( v1 == 2768370933LL )
              return "vxfs";
            if ( v1 == 2881100148LL )
              return "xenfs";
          }
        }
        else
        {
          if ( v1 == 1952539503 )
            return "ocfs2";
          if ( v1 > 1952539503 )
          {
            if ( v1 == 2240043254LL )
              return "ramfs";
            if ( v1 == 2435016766LL )
              return "btrfs";
          }
          else if ( v1 == 1937076805 )
          {
            return "coda";
          }
        }
      }
      else
      {
        if ( v1 == 1702057286 )
          return "fuseblk";
        if ( v1 > 1702057286 )
        {
          if ( v1 == 1799439955 )
            return "k-afs";
          if ( v1 > 1799439955 )
          {
            if ( v1 == 1852207972 )
              return "nfsd";
            if ( v1 == 1935894131 )
              return "securityfs";
          }
          else if ( v1 == 1733912937 )
          {
            return "rpc_pipefs";
          }
        }
        else
        {
          if ( v1 == 1650812274 )
            return "sysfs";
          if ( v1 > 1650812274 )
          {
            if ( v1 == 1684170528 )
              return "debugfs";
            if ( v1 == 1702057283 )
              return "fusectl";
          }
          else if ( v1 == 1634035564 )
          {
            return "pstorefs";
          }
        }
      }
    }
    else
    {
      if ( v1 == 827541066 )
        return "jfs";
      if ( v1 > 827541066 )
      {
        if ( v1 == 1382369651 )
          return "reiserfs";
        if ( v1 > 1382369651 )
        {
          if ( v1 == 1397118030 )
            return "ntfs";
          if ( v1 > 1397118030 )
          {
            if ( v1 == 1397703499 )
              return "sockfs";
            if ( v1 == 1410924800 )
              return "ufs";
          }
          else if ( v1 == 1397113167 )
          {
            return "afs";
          }
        }
        else
        {
          if ( v1 == 1112100429 )
            return "binfmt_misc";
          if ( v1 > 1112100429 )
          {
            if ( v1 == 1161678120 )
              return "cramfs-wend";
            if ( v1 == 1196443219 )
              return "gpfs";
          }
          else if ( v1 == 1111905073 )
          {
            return "befs";
          }
        }
      }
      else
      {
        if ( v1 == 352400198 )
          return "udf";
        if ( v1 > 352400198 )
        {
          if ( v1 == 464386766 )
            return "bfs";
          if ( v1 > 464386766 )
          {
            if ( v1 == 684539205 )
              return "cramfs";
            if ( v1 == 732765674 )
              return "inotifyfs";
          }
          else if ( v1 == 427819522 )
          {
            return "mqueue";
          }
        }
        else
        {
          if ( v1 == 151263540 )
            return "anon-inode FS";
          if ( v1 > 151263540 )
          {
            if ( v1 == 195894762 )
              return "futexfs";
            if ( v1 == 198183888 )
              return "lustre";
          }
          else if ( v1 == 19920823 )
          {
            return "coh";
          }
        }
      }
    }
  }
  else
  {
    if ( v1 == 26985 )
      return "nfs";
    if ( v1 > 26985 )
    {
      if ( v1 == 61267 )
        return "ext2/ext3";
      if ( v1 > 61267 )
      {
        if ( v1 == 16914836 )
          return "tmpfs";
        if ( v1 > 16914836 )
        {
          if ( v1 == 19911021 )
            return "xia";
          if ( v1 > 19911021 )
          {
            if ( v1 == 19920820 )
              return "xenix";
            if ( v1 == 19920821 )
              return "sysv4";
          }
          else
          {
            if ( v1 == 16914839 )
              return "v9fs";
            if ( v1 == 18225520 )
              return "gfs/gfs2";
          }
        }
        else
        {
          if ( v1 == 72020 )
            return "ufs";
          if ( v1 > 72020 )
          {
            if ( v1 == 2613483 )
              return "cgroupfs";
            if ( (_UNKNOWN *)v1 == &unk_414A53 )
              return "efs";
          }
          else if ( v1 == 61791 )
          {
            return "ecryptfs";
          }
        }
      }
      else
      {
        if ( v1 == 40865 )
          return "openprom";
        if ( v1 > 40865 )
        {
          if ( v1 == 44533 )
            return "adfs";
          if ( v1 > 44533 )
          {
            if ( v1 == 44543 )
              return "affs";
            if ( v1 == 61265 )
              return "ext2";
          }
          else if ( v1 == 40866 )
          {
            return "usbdevfs";
          }
        }
        else
        {
          if ( v1 == 29366 )
            return "jffs2";
          if ( v1 > 29366 )
          {
            if ( v1 == 38496 )
              return "isofs";
            if ( v1 == 40864 )
              return "proc";
          }
          else if ( v1 == 29301 )
          {
            return "romfs";
          }
        }
      }
    }
    else
    {
      if ( v1 == 9336 )
        return "minix v2 (30 char.)";
      if ( v1 > 9336 )
      {
        if ( v1 == 16964 )
          return "hfs";
        if ( v1 > 16964 )
        {
          if ( v1 == 19802 )
            return "minix3";
          if ( v1 > 19802 )
          {
            if ( v1 == 20859 )
              return "smb";
            if ( v1 == 22092 )
              return "novell";
          }
          else if ( v1 == 19780 )
          {
            return "msdos";
          }
        }
        else
        {
          if ( v1 == 0x4000 )
            return "isofs";
          if ( v1 > 0x4000 )
          {
            if ( v1 == 16388 )
              return "isofs";
            if ( v1 == 16390 )
              return "fat";
          }
          else if ( v1 == 13364 )
          {
            return "nilfs";
          }
        }
      }
      else
      {
        if ( v1 == 4989 )
          return "ext";
        if ( v1 > 4989 )
        {
          if ( v1 == 5007 )
            return "minix (30 char.)";
          if ( v1 > 5007 )
          {
            if ( v1 == 7377 )
              return "devpts";
            if ( v1 == 9320 )
              return "minix v2";
          }
          else if ( v1 == 4991 )
          {
            return "minix";
          }
        }
        else
        {
          if ( v1 == 391 )
            return "autofs";
          if ( v1 > 391 )
          {
            if ( v1 == 1984 )
              return "jffs";
            if ( v1 == 4979 )
              return "devfs";
          }
          else if ( v1 == 47 )
          {
            return "qnx4";
          }
        }
      }
    }
  }
  sprintf(s, "UNKNOWN (0x%lx)", *a1);
  return s;
}
