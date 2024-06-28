#include "/share/binary_recovery/clang-parser/defs.hh"
void sub_40F44F()
{
  unsigned int i; // [rsp+4h] [rbp-Ch]
  void **ptr; // [rsp+8h] [rbp-8h]

  ptr = (void **)off_620410;
  for ( i = 1; i < dword_6203F0; ++i )
    free(ptr[2 * i + 1]);
  if ( ptr[1] != &unk_622960 )
  {
    free(ptr[1]);
    qword_620400 = 256LL;
    off_620408 = &unk_622960;
  }
  if ( ptr != (void **)&qword_620400 )
  {
    free(ptr);
    off_620410 = (__int64)&qword_620400;
  }
  dword_6203F0 = 1;
}
