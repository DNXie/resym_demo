#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_403844(const char *a1, const char *a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r12
  char *v5; // rbx
  int *v6; // rax
  const char *v7; // rax
  unsigned __int8 v11; // [rsp+2Fh] [rbp-31h]
  char *v12; // [rsp+30h] [rbp-30h]
  char *v13; // [rsp+38h] [rbp-28h]
  char *ptr; // [rsp+48h] [rbp-18h]

  v12 = 0LL;
  v13 = 0LL;
  v11 = 1;
  if ( !byte_6163A0 && (*(_DWORD *)(a4 + 24) & 0xF000) == 40960 )
    goto LABEL_7;
  ptr = canonicalize_file_name(a1);
  if ( !ptr )
  {
    v4 = sub_405DD3(a1);
    v5 = gettext("failed to canonicalize %s");
    v6 = __errno_location();
    error(0, *v6, v5, v4);
    goto LABEL_9;
  }
  v12 = sub_4036C1(ptr);
  free(ptr);
  if ( v12 )
  {
    v11 = 0;
  }
  else
  {
LABEL_7:
    v13 = (char *)sub_404FB4(a1, a4);
    if ( v13 )
    {
      v12 = sub_4036C1(v13);
      v11 = 0;
    }
  }
LABEL_9:
  if ( v12 )
  {
    v7 = v12;
  }
  else if ( v13 )
  {
    v7 = v13;
  }
  else
  {
    v7 = "?";
  }
  sub_402CF4(a2, a3, (__int64)v7);
  free(v13);
  return v11;
}
