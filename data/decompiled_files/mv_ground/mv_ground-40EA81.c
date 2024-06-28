#include "/share/binary_recovery/clang-parser/defs.hh"
_BOOL8 __fastcall sub_40EA81(_BYTE *a1, _BYTE *a2)
{
  bool v2; // al
  int *v3; // rax
  int *v4; // rax
  bool v5; // al
  bool v7; // [rsp+1Dh] [rbp-153h]
  const char *s1; // [rsp+20h] [rbp-150h]
  const char *s2; // [rsp+28h] [rbp-148h]
  size_t v10; // [rsp+30h] [rbp-140h]
  size_t n; // [rsp+38h] [rbp-138h]
  char *ptr; // [rsp+40h] [rbp-130h]
  char *filename; // [rsp+48h] [rbp-128h]
  struct stat stat_buf; // [rsp+50h] [rbp-120h] BYREF
  struct stat v15; // [rsp+E0h] [rbp-90h] BYREF

  s1 = sub_40ADC9(a1);
  s2 = sub_40ADC9(a2);
  v10 = sub_40AE32(s1);
  n = sub_40AE32(s2);
  v2 = v10 == n && !memcmp(s1, s2, n);
  v7 = 0;
  if ( v2 )
  {
    ptr = (char *)sub_40AC7B((__int64)a1);
    filename = (char *)sub_40AC7B((__int64)a2);
    if ( (unsigned int)sub_415420(ptr, &stat_buf) )
    {
      v3 = __errno_location();
      error(1, *v3, "%s", ptr);
    }
    if ( (unsigned int)sub_415420(filename, &v15) )
    {
      v4 = __errno_location();
      error(1, *v4, "%s", filename);
    }
    v5 = stat_buf.st_ino == v15.st_ino && stat_buf.st_dev == v15.st_dev;
    v7 = v5;
    free(ptr);
    free(filename);
  }
  return v7;
}
