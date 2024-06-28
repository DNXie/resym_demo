#include "/share/binary_recovery/clang-parser/defs.hh"
unsigned __int64 __fastcall sub_403CB0(__int64 a1, unsigned __int64 a2, __int64 a3, size_t a4, __int64 *a5)
{
  __int64 *v5; // rax
  int v9; // [rsp+4Ch] [rbp-14h]
  __int64 *v10; // [rsp+50h] [rbp-10h]
  unsigned __int64 v11; // [rsp+58h] [rbp-8h]

  if ( a5 )
    v5 = a5;
  else
    v5 = &qword_609780;
  v10 = v5;
  v9 = *__errno_location();
  v11 = sub_403065(
          a1,
          a2,
          a3,
          a4,
          *(_DWORD *)v10,
          *((_DWORD *)v10 + 1),
          (__int64)(v10 + 1),
          (char *)v10[5],
          (char *)v10[6]);
  *__errno_location() = v9;
  return v11;
}
