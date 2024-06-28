#include "/share/binary_recovery/clang-parser/defs.hh"
size_t __fastcall sub_409818(__int64 *a1, unsigned __int8 a2, struct obstack *a3, unsigned __int64 a4)
{
  __int64 v4; // rax
  bool v5; // al
  bool v9; // [rsp+27h] [rbp-39h]
  __int64 v10; // [rsp+30h] [rbp-30h]
  size_t v11; // [rsp+40h] [rbp-20h]

  if ( a2 )
    v4 = a1[1];
  else
    v4 = *a1;
  v10 = v4;
  v5 = byte_61D6C0 && ((unsigned __int8)sub_409DC7(a1, a2) || sub_402C5C(4u));
  v9 = v5;
  if ( a3 && byte_61D6B8 )
  {
    if ( a3->next_free + 8 > a3->chunk_limit )
      _obstack_newchunk(a3, 8);
    memcpy(a3->next_free, &qword_61D7E0, 8uLL);
    a3->next_free += 8;
  }
  v11 = sub_4092DE(stdout, v10, qword_61D700, 0LL);
  qword_61D7E0 += v11;
  if ( a3 && byte_61D6B8 )
  {
    if ( a3->next_free + 8 > a3->chunk_limit )
      _obstack_newchunk(a3, 8);
    memcpy(a3->next_free, &qword_61D7E0, 8uLL);
    a3->next_free += 8;
  }
  if ( v9 )
  {
    sub_402D78();
    sub_409A29();
    if ( a4 / qword_61D720 != (a4 + v11 - 1) / qword_61D720 )
      sub_40A1D5(&unk_61D510);
  }
  return v11;
}
