#include "/share/binary_recovery/clang-parser/defs.hh"
void *sub_403BF5()
{
  __int64 v0; // rax
  void *result; // rax
  int v2; // [rsp+8h] [rbp-8h]
  int v3; // [rsp+Ch] [rbp-4h]

  v2 = dword_61037C * dword_61025C;
  v3 = dword_61037C * dword_61025C * (dword_610384 + 1);
  free(qword_610360);
  qword_610360 = (void *)sub_40A750(4LL * (v2 + 1));
  free(qword_610368);
  qword_610368 = (void *)sub_40A750(4LL * v2);
  free(qword_610348);
  if ( byte_6103D9 )
    v0 = 2 * v3;
  else
    v0 = v3;
  qword_610358 = v0;
  result = (void *)sub_40A750(v0);
  qword_610348 = result;
  return result;
}
