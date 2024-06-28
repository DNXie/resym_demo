#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_402F2A(FILE *a1, _DWORD *a2)
{
  __int64 v3; // [rsp+18h] [rbp-B8h]
  char *ptr; // [rsp+20h] [rbp-B0h]
  size_t v5; // [rsp+28h] [rbp-A8h]
  int v6[40]; // [rsp+30h] [rbp-A0h] BYREF

  ptr = (char *)malloc(0x8048uLL);
  if ( !ptr )
    return 1LL;
  sub_402D22(v6);
LABEL_4:
  v3 = 0LL;
  while ( 1 )
  {
    v5 = fread_unlocked(&ptr[v3], 1uLL, 0x8000 - v3, a1);
    v3 += v5;
    if ( v3 == 0x8000 )
    {
      sub_403330(ptr, 0x8000LL, v6);
      goto LABEL_4;
    }
    if ( !v5 )
      break;
    if ( feof_unlocked(a1) )
      goto LABEL_12;
  }
  if ( ferror_unlocked(a1) )
  {
    free(ptr);
    return 1LL;
  }
LABEL_12:
  if ( v3 )
    sub_403109(ptr, v3, v6);
  sub_402E0E(v6, a2);
  free(ptr);
  return 0LL;
}
