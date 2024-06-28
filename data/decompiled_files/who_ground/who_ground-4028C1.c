#include "/share/binary_recovery/clang-parser/defs.hh"
int __fastcall sub_4028C1(__int64 a1, __int64 a2)
{
  char *v3; // rax
  __int64 v7; // [rsp+18h] [rbp-18h]
  const char *v8; // [rsp+20h] [rbp-10h]
  char *ptr; // [rsp+28h] [rbp-8h]

  v7 = 0LL;
  v8 = &locale;
  while ( a1-- )
  {
    if ( *(_BYTE *)(a2 + 44) && *(_WORD *)a2 == 7 )
    {
      ptr = (char *)sub_405DA4(a2);
      printf("%s%s", v8, ptr);
      free(ptr);
      v8 = " ";
      ++v7;
    }
    a2 += 384LL;
  }
  v3 = gettext("\n# users=%lu\n");
  return printf(v3, v7);
}
