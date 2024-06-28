#include "/share/binary_recovery/clang-parser/defs.hh"
char **__fastcall sub_4024E4(unsigned __int64 *a1)
{
  bool v1; // dl
  char **result; // rax
  unsigned __int8 v3; // [rsp+1Fh] [rbp-11h]
  char *v4; // [rsp+20h] [rbp-10h]
  unsigned __int64 v5; // [rsp+28h] [rbp-8h]

  v5 = *a1;
  v4 = (char *)(*((int *)a1 + 2) - 1LL + *a1);
  v3 = *v4;
  *((_BYTE *)a1 + 16) = (strchr("([`'\"", *(char *)*a1) != 0LL) | a1[2] & 0xFE;
  *((_BYTE *)a1 + 16) = (4 * (((*__ctype_b_loc())[v3] & 4) != 0)) | a1[2] & 0xFB;
  while ( v5 < (unsigned __int64)v4 && strchr(")]'\"", *v4) )
    --v4;
  v1 = strchr(".?!", *v4) != 0LL;
  result = (char **)a1;
  *((_BYTE *)a1 + 16) = (2 * v1) | a1[2] & 0xFD;
  return result;
}
