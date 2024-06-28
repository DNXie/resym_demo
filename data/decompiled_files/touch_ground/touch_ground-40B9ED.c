#include "/share/binary_recovery/clang-parser/defs.hh"
char *__fastcall sub_40B9ED(char *a1, size_t a2)
{
  char *v3; // rbx
  char v4; // al
  size_t v5; // rax
  char *v6; // rbx
  char *buf; // [rsp+8h] [rbp-1148h]
  char v8; // [rsp+14h] [rbp-113Ch]
  char v9; // [rsp+15h] [rbp-113Bh]
  bool v10; // [rsp+16h] [rbp-113Ah]
  int fd; // [rsp+18h] [rbp-1138h]
  int v12; // [rsp+24h] [rbp-112Ch]
  DIR *dirp; // [rsp+28h] [rbp-1128h]
  __dev_t v14; // [rsp+30h] [rbp-1120h]
  __ino_t v15; // [rsp+38h] [rbp-1118h]
  char *s; // [rsp+40h] [rbp-1110h]
  const char *sa; // [rsp+40h] [rbp-1110h]
  char *sb; // [rsp+40h] [rbp-1110h]
  size_t v19; // [rsp+48h] [rbp-1108h]
  struct dirent *v20; // [rsp+50h] [rbp-1100h]
  __dev_t v21; // [rsp+58h] [rbp-10F8h]
  __ino_t v22; // [rsp+60h] [rbp-10F0h]
  __dev_t v23; // [rsp+70h] [rbp-10E0h]
  __ino_t v24; // [rsp+78h] [rbp-10D8h]
  size_t n; // [rsp+88h] [rbp-10C8h]
  size_t v26; // [rsp+90h] [rbp-10C0h]
  char *v27; // [rsp+98h] [rbp-10B8h]
  struct stat stat_buf; // [rsp+A0h] [rbp-10B0h] BYREF
  char v29[4104]; // [rsp+130h] [rbp-1020h] BYREF
  unsigned __int64 v30; // [rsp+1138h] [rbp-18h]

  buf = a1;
  v30 = __readfsqword(0x28u);
  fd = -100;
  v8 = 0;
  dirp = 0LL;
  v19 = a2;
  s = getcwd(a1, a2);
  if ( s || a2 && *__errno_location() == 34 )
    return s;
  if ( *__errno_location() == 22 && !a1 && !a2 )
  {
    sa = getcwd(v29, 0x1000uLL);
    if ( sa )
      return strdup(sa);
  }
  if ( !a2 )
  {
    if ( a1 )
    {
      *__errno_location() = 22;
      return 0LL;
    }
    v19 = 4096LL;
  }
  if ( a1 )
  {
    sb = a1;
  }
  else
  {
    sb = (char *)malloc(v19);
    if ( !sb )
      return 0LL;
  }
  v3 = &sb[v19 - 1];
  *v3 = 0;
  if ( (int)sub_40C870(".", &stat_buf) < 0 )
    goto LABEL_75;
  v14 = stat_buf.st_dev;
  v15 = stat_buf.st_ino;
  if ( (int)sub_40C870("/", &stat_buf) < 0 )
    goto LABEL_75;
  v21 = stat_buf.st_dev;
  v22 = stat_buf.st_ino;
  while ( 2 )
  {
    if ( v14 != v21 || v15 != v22 )
    {
      v9 = 1;
      fd = openat(fd, "..", 0);
      if ( fd >= 0 )
      {
        v8 = 1;
        if ( !(unsigned int)sub_40C860(fd, &stat_buf) )
        {
          if ( dirp && closedir(dirp) )
          {
            dirp = 0LL;
          }
          else
          {
            v23 = stat_buf.st_dev;
            v24 = stat_buf.st_ino;
            v10 = stat_buf.st_dev != v14;
            dirp = fdopendir(fd);
            if ( dirp )
            {
              v8 = 0;
              while ( 1 )
              {
                *__errno_location() = 0;
                v20 = readdir(dirp);
                if ( !v20 && !*__errno_location() && v9 )
                {
                  v9 = 0;
                  rewinddir(dirp);
                  v20 = readdir(dirp);
                }
                if ( !v20 )
                {
                  if ( !*__errno_location() )
                    *__errno_location() = 2;
                  goto LABEL_75;
                }
                if ( v20->d_name[0] != 46 || v20->d_name[1] && (v20->d_name[1] != 46 || v20->d_name[2]) )
                {
                  if ( !v9 || (v20->d_ino != v15 && !v10 ? (v4 = 0) : (v4 = 1), (v4 & 1) != 0) )
                  {
                    if ( !(unsigned int)sub_40C880(fd, v20->d_name, &stat_buf, 256)
                      && (stat_buf.st_mode & 0xF000) == 0x4000
                      && stat_buf.st_dev == v14
                      && stat_buf.st_ino == v15 )
                    {
                      break;
                    }
                  }
                }
              }
              n = strlen(v20->d_name);
              if ( v3 - sb > n )
              {
LABEL_61:
                v6 = &v3[-n];
                memcpy(v6, v20->d_name, n);
                v3 = v6 - 1;
                *v3 = 47;
                v14 = v23;
                v15 = v24;
                continue;
              }
              if ( a2 )
              {
                *__errno_location() = 34;
                goto LABEL_75;
              }
              v26 = v19;
              v5 = n;
              if ( v19 >= n )
                v5 = v19;
              v19 += v5;
              if ( v19 >= v26 )
              {
                v27 = (char *)realloc(sb, v19);
                if ( v27 )
                {
                  v3 = (char *)memcpy(&v27[v19 + v3 - sb - v26], &v27[v3 - sb], v26 - (v3 - sb));
                  sb = v27;
                  goto LABEL_61;
                }
              }
              *__errno_location() = 12;
            }
          }
        }
      }
      goto LABEL_75;
    }
    break;
  }
  if ( dirp && closedir(dirp) )
  {
    dirp = 0LL;
LABEL_75:
    v12 = *__errno_location();
    if ( dirp )
      closedir(dirp);
    if ( v8 )
      close(fd);
    if ( !a1 )
      free(sb);
    *__errno_location() = v12;
    return 0LL;
  }
  if ( &sb[v19 - 1] == v3 )
    *--v3 = 47;
  memmove(sb, v3, &sb[v19] - v3);
  if ( !a2 )
    buf = (char *)realloc(sb, &sb[v19] - v3);
  if ( !buf )
    buf = sb;
  return buf;
}
