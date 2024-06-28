#include "/share/binary_recovery/clang-parser/defs.hh"
void sub_402BAE()
{
  unsigned int i; // [rsp+4h] [rbp-Ch]
  void **ptr; // [rsp+8h] [rbp-8h]

  ptr = (void **)off_6061C0;
  for ( i = 1; i < dword_6061A0; ++i )
    free(ptr[2 * i + 1]);
  if ( ptr[1] != &unk_606280 )
  {
    free(ptr[1]);
    qword_6061B0 = 256LL;
    off_6061B8 = &unk_606280;
  }
  if ( ptr != (void **)&qword_6061B0 )
  {
    free(ptr);
    off_6061C0 = &qword_6061B0;
  }
  dword_6061A0 = 1;
}
