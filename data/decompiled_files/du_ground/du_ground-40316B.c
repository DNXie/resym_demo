#include "/share/binary_recovery/clang-parser/defs.hh"
_BOOL8 __fastcall sub_40316B(_QWORD *a1, unsigned int a2)
{
  __int64 v2; // r12
  char *v3; // rbx
  int *v4; // rax
  char *v5; // rbx
  int *v6; // rax
  bool v8; // [rsp+1Fh] [rbp-21h]
  __int64 i; // [rsp+20h] [rbp-20h]
  __int64 v10; // [rsp+28h] [rbp-18h]

  v8 = 1;
  if ( *a1 )
  {
    for ( i = sub_4126E7(a1, a2, 0LL); ; v8 = (v8 & (unsigned __int8)sub_402A8D(i, v10)) != 0 )
    {
      v10 = fts_read(i);
      if ( !v10 )
        break;
    }
    if ( *__errno_location() )
    {
      v2 = sub_40DA72(*(_QWORD *)(i + 32));
      v3 = gettext("fts_read failed: %s");
      v4 = __errno_location();
      error(0, *v4, v3, v2);
      v8 = 0;
    }
    qword_61B3E8 = 0LL;
    if ( (unsigned int)fts_close(i) )
    {
      v5 = gettext("fts_close failed");
      v6 = __errno_location();
      error(0, *v6, v5);
      v8 = 0;
    }
  }
  return v8;
}
