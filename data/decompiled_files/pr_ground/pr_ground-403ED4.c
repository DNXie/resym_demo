#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_403ED4(unsigned __int8 a1)
{
  unsigned int v1; // eax
  unsigned __int8 *v2; // rdx
  __int64 result; // rax

  if ( (unsigned int)dword_610350 >= (unsigned __int64)qword_610358 )
    qword_610348 = (void *)sub_40A7E6(qword_610348, &qword_610358);
  v1 = dword_610350++;
  v2 = (unsigned __int8 *)qword_610348 + v1;
  result = a1;
  *v2 = a1;
  return result;
}
