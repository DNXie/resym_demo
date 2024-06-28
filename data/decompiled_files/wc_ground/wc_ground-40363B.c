#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_40363B(__int64 a1, int *a2)
{
  int v2; // eax
  __int64 result; // rax
  __int64 *v4; // rax

  if ( *(_QWORD *)a1 )
  {
    if ( getdelim((char **)(a1 + 16), (size_t *)(a1 + 24), 0, *(FILE **)a1) >= 0 )
    {
      *a2 = 1;
      ++*(_QWORD *)(a1 + 8);
      result = *(_QWORD *)(a1 + 16);
    }
    else
    {
      if ( feof(*(FILE **)a1) )
        v2 = 2;
      else
        v2 = 4;
      *a2 = v2;
      result = 0LL;
    }
  }
  else if ( **(_QWORD **)(a1 + 40) )
  {
    *a2 = 1;
    v4 = *(__int64 **)(a1 + 40);
    *(_QWORD *)(a1 + 40) = v4 + 1;
    result = *v4;
  }
  else
  {
    *a2 = 2;
    result = 0LL;
  }
  return result;
}
