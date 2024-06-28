#include "/share/binary_recovery/clang-parser/defs.hh"
void sub_4031D1()
{
  unsigned int i; // [rsp+4h] [rbp-Ch]
  void **ptr; // [rsp+8h] [rbp-8h]

  ptr = (void **)off_60C1F0;
  for ( i = 1; i < dword_60C1D0; ++i )
    free(ptr[2 * i + 1]);
  if ( ptr[1] != &unk_60C2A0 )
  {
    free(ptr[1]);
    qword_60C1E0 = 256LL;
    off_60C1E8 = &unk_60C2A0;
  }
  if ( ptr != (void **)&qword_60C1E0 )
  {
    free(ptr);
    off_60C1F0 = &qword_60C1E0;
  }
  dword_60C1D0 = 1;
}
