#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_403A92(__int64 a1, __int64 a2, _BYTE *a3, char a4)
{
  int v4; // eax
  __int64 v5; // rbx
  char *v6; // rax
  __int64 result; // rax
  int *v8; // rax
  __int64 v9; // r12
  char *v10; // rbx
  int *v11; // rax
  struct stat v14; // [rsp+30h] [rbp-A0h] BYREF

  if ( a4 )
    v4 = 512;
  else
    v4 = 0;
  if ( unlinkat(*(_DWORD *)(a1 + 44), *(const char **)(a2 + 48), v4) )
  {
    if ( *__errno_location() == 30
      && (!(unsigned int)sub_403281(*(_DWORD *)(a1 + 44), *(char **)(a2 + 48), &v14) || *__errno_location() != 2) )
    {
      *__errno_location() = 30;
    }
    v8 = __errno_location();
    if ( sub_4039D3(a3, *v8) )
    {
      result = 2LL;
    }
    else
    {
      if ( *(_WORD *)(a2 + 112) == 4 )
        *__errno_location() = *(_DWORD *)(a2 + 64);
      v9 = sub_40D278(*(_QWORD *)(a2 + 56));
      v10 = gettext("cannot remove %s");
      v11 = __errno_location();
      error(0, *v11, v10, v9);
      sub_403A46(a2);
      result = 4LL;
    }
  }
  else
  {
    if ( a3[25] )
    {
      v5 = sub_40D278(*(_QWORD *)(a2 + 56));
      if ( a4 )
        v6 = gettext("removed directory: %s\n");
      else
        v6 = gettext("removed %s\n");
      printf(v6, v5);
    }
    result = 2LL;
  }
  return result;
}
