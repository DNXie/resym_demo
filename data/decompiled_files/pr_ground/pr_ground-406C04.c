#include "/share/binary_recovery/clang-parser/defs.hh"
void sub_406C04()
{
  unsigned int i; // [rsp+4h] [rbp-Ch]
  void **ptr; // [rsp+8h] [rbp-8h]

  ptr = (void **)off_6102D0;
  for ( i = 1; i < dword_6102B0; ++i )
    free(ptr[2 * i + 1]);
  if ( ptr[1] != &unk_6104A0 )
  {
    free(ptr[1]);
    qword_6102C0 = 256LL;
    off_6102C8 = &unk_6104A0;
  }
  if ( ptr != (void **)&qword_6102C0 )
  {
    free(ptr);
    off_6102D0 = &qword_6102C0;
  }
  dword_6102B0 = 1;
}
