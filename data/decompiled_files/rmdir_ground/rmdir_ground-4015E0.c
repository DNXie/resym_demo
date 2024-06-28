#include "/share/binary_recovery/clang-parser/defs.hh"
bool __fastcall sub_4015E0(int a1, const char *a2)
{
  bool result; // al
  int v3; // [rsp+18h] [rbp-18h]
  int v4; // [rsp+1Ch] [rbp-14h]
  DIR *dirp; // [rsp+20h] [rbp-10h]
  struct dirent *v6; // [rsp+28h] [rbp-8h]

  v3 = openat(a1, a2, 198912);
  if ( v3 < 0 )
    return 0;
  dirp = fdopendir(v3);
  if ( dirp )
  {
    *__errno_location() = 0;
    v6 = sub_40159C(dirp);
    v4 = *__errno_location();
    closedir(dirp);
    if ( v6 )
      result = 0;
    else
      result = v4 == 0;
  }
  else
  {
    close(v3);
    result = 0;
  }
  return result;
}
