#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_401A80(char *a1)
{
  int v1; // eax
  char *v2; // rax
  char *v3; // rax
  char *v4; // rax
  char *v5; // rax
  char *v6; // rax
  __int64 result; // rax
  bool v9; // [rsp+17h] [rbp-29h]

  v9 = 1;
  while ( 1 )
  {
    result = (unsigned __int8)*a1;
    if ( !(_BYTE)result )
      return result;
    v1 = *a1;
    if ( v1 == 61 )
      goto LABEL_18;
    if ( v1 > 61 )
    {
      if ( v1 == 92 || v1 == 94 )
      {
        v9 = !v9;
        goto LABEL_23;
      }
      goto LABEL_22;
    }
    if ( v1 != 39 )
    {
      if ( v1 == 58 )
      {
LABEL_18:
        if ( v9 )
        {
          if ( stru_609260.next_free + 1 > stru_609260.chunk_limit )
            _obstack_newchunk(&stru_609260, 1);
          v5 = stru_609260.next_free;
          stru_609260.next_free = v5 + 1;
          *v5 = 92;
        }
      }
LABEL_22:
      v9 = 1;
      goto LABEL_23;
    }
    if ( stru_609260.next_free + 1 > stru_609260.chunk_limit )
      _obstack_newchunk(&stru_609260, 1);
    v2 = stru_609260.next_free;
    stru_609260.next_free = v2 + 1;
    *v2 = 39;
    if ( stru_609260.next_free + 1 > stru_609260.chunk_limit )
      _obstack_newchunk(&stru_609260, 1);
    v3 = stru_609260.next_free;
    stru_609260.next_free = v3 + 1;
    *v3 = 92;
    if ( stru_609260.next_free + 1 > stru_609260.chunk_limit )
      _obstack_newchunk(&stru_609260, 1);
    v4 = stru_609260.next_free;
    stru_609260.next_free = v4 + 1;
    *v4 = 39;
    v9 = 1;
LABEL_23:
    if ( stru_609260.next_free + 1 > stru_609260.chunk_limit )
      _obstack_newchunk(&stru_609260, 1);
    v6 = stru_609260.next_free;
    stru_609260.next_free = v6 + 1;
    *v6 = *a1++;
  }
}
