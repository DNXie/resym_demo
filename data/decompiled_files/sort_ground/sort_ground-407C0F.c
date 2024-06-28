#include "/share/binary_recovery/clang-parser/defs.hh"
int __fastcall sub_407C0F(void **a1, FILE *a2, char *a3)
{
  char *v3; // rax
  char *v4; // rax
  int result; // eax
  char *v6; // rax
  char v8; // [rsp+2Fh] [rbp-21h]
  char *v9; // [rsp+30h] [rbp-20h]
  void *ptr; // [rsp+38h] [rbp-18h]
  size_t n; // [rsp+40h] [rbp-10h]
  size_t v12; // [rsp+48h] [rbp-8h]

  ptr = *a1;
  n = (size_t)a1[1];
  v12 = (size_t)*a1 + n;
  if ( a3 || !byte_61DA18 )
  {
    *(_BYTE *)(v12 - 1) = byte_61D400;
    if ( fwrite_unlocked(ptr, 1uLL, n, a2) != n )
    {
      v6 = gettext("write failed");
      sub_402C5C(v6, a3);
    }
    result = v12 - 1;
    *(_BYTE *)(v12 - 1) = 0;
  }
  else
  {
    v9 = (char *)*a1;
    while ( (unsigned __int64)v9 < v12 )
    {
      v3 = v9++;
      v8 = *v3;
      if ( *v3 == 9 )
      {
        v8 = 62;
      }
      else if ( v9 == (char *)v12 )
      {
        v8 = 10;
      }
      if ( fputc_unlocked(v8, a2) == -1 )
      {
        v4 = gettext("write failed");
        sub_402C5C(v4, 0LL);
      }
    }
    result = sub_406331((__int64)a1);
  }
  return result;
}
