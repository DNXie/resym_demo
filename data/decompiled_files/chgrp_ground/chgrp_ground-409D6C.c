#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall sub_409D6C(__int64 a1)
{
  _QWORD *i; // [rsp+18h] [rbp-18h]
  _QWORD *j; // [rsp+18h] [rbp-18h]
  _QWORD *ptr; // [rsp+20h] [rbp-10h]
  _QWORD *ptra; // [rsp+20h] [rbp-10h]
  _QWORD *ptrb; // [rsp+20h] [rbp-10h]
  _QWORD *v6; // [rsp+28h] [rbp-8h]
  _QWORD *v7; // [rsp+28h] [rbp-8h]

  if ( *(_QWORD *)(a1 + 64) && *(_QWORD *)(a1 + 32) )
  {
    for ( i = *(_QWORD **)a1; *(_QWORD *)(a1 + 8) > (unsigned __int64)i; i += 2 )
    {
      if ( *i )
      {
        for ( ptr = i; ptr; ptr = (_QWORD *)ptr[1] )
          (*(void (__fastcall **)(_QWORD))(a1 + 64))(*ptr);
      }
    }
  }
  for ( j = *(_QWORD **)a1; *(_QWORD *)(a1 + 8) > (unsigned __int64)j; j += 2 )
  {
    for ( ptra = (_QWORD *)j[1]; ptra; ptra = v6 )
    {
      v6 = (_QWORD *)ptra[1];
      free(ptra);
    }
  }
  for ( ptrb = *(_QWORD **)(a1 + 72); ptrb; ptrb = v7 )
  {
    v7 = (_QWORD *)ptrb[1];
    free(ptrb);
  }
  free(*(void **)a1);
  free((void *)a1);
}
