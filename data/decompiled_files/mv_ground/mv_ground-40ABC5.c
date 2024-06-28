#include "/share/binary_recovery/clang-parser/defs.hh"
DIR *__fastcall sub_40ABC5(const char *a1)
{
  int v2; // [rsp+14h] [rbp-1Ch]
  int v3; // [rsp+18h] [rbp-18h]
  int fd; // [rsp+1Ch] [rbp-14h]
  DIR *dirp; // [rsp+20h] [rbp-10h]
  DIR *v6; // [rsp+28h] [rbp-8h]

  dirp = opendir(a1);
  if ( dirp )
  {
    v3 = dirfd(dirp);
    if ( v3 >= 0 && v3 <= 2 )
    {
      fd = sub_40EEBE((unsigned int)v3);
      if ( fd >= 0 )
      {
        v6 = fdopendir(fd);
        v2 = *__errno_location();
        if ( !v6 )
          close(fd);
      }
      else
      {
        v2 = *__errno_location();
        v6 = 0LL;
      }
      closedir(dirp);
      *__errno_location() = v2;
      dirp = v6;
    }
  }
  return dirp;
}
