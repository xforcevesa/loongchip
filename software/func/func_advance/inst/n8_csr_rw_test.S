#include <asm.h>
#include <regdef.h>
#include <inst_test.h>

LEAF(n8_csr_rw_test) 
    addi.w  s0, s0, 1 
    //clear ti
    li      t0, 0x1
    csrwr   t0, csr_ticlr 

###crmd 
//make sure inst fetch address translate is right
    li      t0, 0x9 
    csrwr   t0, csr_dmw0 
    
    li      t2, 0xfffffff0
    csrwr   t2, csr_crmd 
    csrrd   t0, csr_crmd  
    li      t1, 0x1f0
    csrwr   t2, csr_crmd 
    bne     t0, t1, inst_error 

    //let DA=1, PG=0
    li      t0, 0x8
    li      t1, 0x18
    csrxchg t0, t1, csr_crmd

###prmd 
    li      t2, 0xffffffff 
    csrwr   t2, csr_prmd 
    csrrd   t0, csr_prmd 
    li      t1, 0x7 
    bne     t0, t1, inst_error 

    li      t2, 0xfffffff8 
    csrwr   t2, csr_prmd 
    csrrd   t0, csr_prmd 
    li      t1, 0x0 
    bne     t0, t1, inst_error  

###euen 
    li      t2, 0xffffffff 
    csrwr   t2, csr_euen
    csrrd   t0, csr_euen 
    li      t1, 0x0    //not implement float point inst, read only
    srli.w   t0, t0, 0x1
    bne     t0, t1, inst_error  

    li      t2, 0xfffffffe
    csrwr   t2, csr_euen
    csrrd   t0, csr_euen 
    li      t1, 0x0
    srli.w   t0, t0, 0x1
    bne     t0, t1, inst_error  

###ectl 
    li      t2, 0xffffffff 
    csrwr   t2, csr_ectl 
    csrrd   t0, csr_ectl 
    li      t1, 0x1fff 
    bne     t0, t1, inst_error 

    li      t2, 0xffffe000 
    csrwr   t2, csr_ectl 
    csrrd   t0, csr_ectl 
    li      t1, 0x0 
    bne     t0, t1, inst_error 

###estat 
    li      t3, 0x7fff1ffc
    li      t2, 0xffffffff 
    csrrd   t0, csr_estat
    csrwr   t2, csr_estat 
    csrrd   t0, csr_estat  
    and     t2, t2, t3 
    li      t1, 0x3 
    or      t1, t1, t2 
    bne     t0, t1, inst_error  

    li      t2, 0x8000e000 
    csrwr   t2, csr_estat 
    csrrd   t0, csr_estat 
    and     t2, t2, t3 
    li      t1, 0x0 
    or      t1, t1, t2 
    bne     t0, t1, inst_error 

###era
    li      t2, 0xffffffff 
    csrwr   t2, csr_era 
    csrrd   t0, csr_era 
    li      t1, 0xffffffff 
    bne     t0, t1, inst_error 

    li      t2, 0x0
    csrwr   t2, csr_era 
    csrrd   t0, csr_era 
    li      t1, 0x0
    bne     t0, t1, inst_error 

###badv 
    li      t2, 0xffffffff 
    csrwr   t2, csr_badv 
    csrrd   t0, csr_badv 
    li      t1, 0xffffffff 
    bne     t0, t1, inst_error 

    li      t2, 0x0
    csrwr   t2, csr_badv 
    csrrd   t0, csr_badv 
    li      t1, 0x0
    bne     t0, t1, inst_error 

###eentry
    li      t2, 0xffffffff 
    csrwr   t2, csr_eentry 
    csrrd   t0, csr_eentry 
    li      t1, 0xffffffc0  
    csrwr   t2, csr_eentry 
    bne     t0, t1, inst_error  

    li      t2, 0x3f 
    csrwr   t2, csr_eentry 
    csrrd   t0, csr_eentry 
    li      t1, 0x0 
    csrwr   t2, csr_eentry 
    bne     t0, t1, inst_error 

#tlbidx
	li    t1, 0xffffffff
    csrwr t1, csr_tlbidx
    csrrd t2, csr_tlbidx
    csrwr t1, csr_tlbidx
    li    t0, 0xffffffff
    li    t1, TLBENTRIES
    sll.w t0, t0, t1
    nor   t0, t0, zero
    li    t1, 0xbf000000
    or    t0, t0, t1
	li    t1, 0xffffffff
    and   t0, t0, t1
    bne   t0, t2, inst_error

	li    t1, 0xabcdabcd
    csrwr t1, csr_tlbidx
    csrrd t2, csr_tlbidx
    csrwr t1, csr_tlbidx
    li    t0, 0xffffffff
    li    t1, TLBENTRIES
    sll.w t0, t0, t1
    nor   t0, t0, zero
    li    t1, 0xbf000000
    or    t0, t0, t1
	li    t1, 0xabcdabcd
    and   t0, t0, t1
    bne   t0, t2, inst_error

	li    t1, 0xdcbadcba
    csrwr t1, csr_tlbidx
    csrrd t2, csr_tlbidx
    csrwr t1, csr_tlbidx
    li    t0, 0xffffffff
    li    t1, TLBENTRIES
    sll.w t0, t0, t1
    nor   t0, t0, zero
    li    t1, 0xbf000000
    or    t0, t0, t1
	li    t1, 0xdcbadcba
    and   t0, t0, t1
    bne   t0, t2, inst_error

#tlbehi
	li    t1, 0xabcdabcd
    csrwr t1, csr_tlbehi
    csrrd t2, csr_tlbehi
    csrwr t1, csr_tlbehi
	li    t1, 0xabcda000
    bne   t1, t2, inst_error
	
    li    t1, 0xdcbafcba
    csrwr t1, csr_tlbehi
    csrrd t2, csr_tlbehi
    csrwr t1, csr_tlbehi
	li    t1, 0xdcbae000
    bne   t1, t2, inst_error

#tlbelo0
    li    t1, 0xffffffff
    csrwr t1, csr_tlbelo0
    csrrd t2, csr_tlbelo0
    csrwr t1, csr_tlbelo0
    li    t1, 0xffffff7f
    bne   t1, t2, inst_error

    li    t1, 0xabcdabcd
    csrwr t1, csr_tlbelo0
    csrrd t2, csr_tlbelo0
    csrwr t1, csr_tlbelo0
    li    t1, 0xabcdab4d
    bne   t1, t2, inst_error

    li    t1, 0xdcbadcba
    csrwr t1, csr_tlbelo0
    csrrd t2, csr_tlbelo0
    csrwr t1, csr_tlbelo0
    li    t1, 0xdcbadc3a
    bne   t1, t2, inst_error

#tlbelo1
    li    t1, 0xffffffff
    csrwr t1, csr_tlbelo1
    csrrd t2, csr_tlbelo1
    csrwr t1, csr_tlbelo1
    li    t1, 0xffffff7f
    bne   t1, t2, inst_error

    li    t1, 0xabcdabcd
    csrwr t1, csr_tlbelo1
    csrrd t2, csr_tlbelo1
    csrwr t1, csr_tlbelo1
    li    t1, 0xabcdab4d
    bne   t1, t2, inst_error

    li    t1, 0xdcbadcba
    csrwr t1, csr_tlbelo1
    csrrd t2, csr_tlbelo1
    csrwr t1, csr_tlbelo1
    li    t1, 0xdcbadc3a
    bne   t1, t2, inst_error

#asid
    li    t1, 0xffffffff
    csrwr t1, csr_asid
    csrrd t2, csr_asid
    csrwr t1, csr_asid
    li    t1, 0x000a03ff
    bne   t1, t2, inst_error

    li    t1, 0xabcdabcd            
    csrwr t1, csr_asid
    csrrd t2, csr_asid
    csrwr t1, csr_asid
    li    t1, 0x000a03cd
    bne   t1, t2, inst_error

    li    t1, 0xdcbadcba
    csrwr t1, csr_asid
    csrrd t2, csr_asid
    csrwr t1, csr_asid
    li    t1, 0x000a00ba
    bne   t1, t2, inst_error

#pgdl
    li    t1, 0xffffffff
    csrwr t1, csr_pgdl
    csrrd t2, csr_pgdl
    csrwr t1, csr_pgdl
    li    t1, 0xfffff000
    bne   t1, t2, inst_error

    li    t1, 0xabcdabcd
    csrwr t1, csr_pgdl
    csrrd t2, csr_pgdl
    csrwr t1, csr_pgdl
    li    t1, 0xabcda000
    bne   t1, t2, inst_error

    li    t1, 0xdcbadcba
    csrwr t1, csr_pgdl
    csrrd t2, csr_pgdl
    csrwr t1, csr_pgdl
    li    t1, 0xdcbad000
    bne   t1, t2, inst_error

#pgdh
    li    t1, 0xffffffff
    csrwr t1, csr_pgdh
    csrrd t2, csr_pgdh
    csrwr t1, csr_pgdh
    li    t1, 0xfffff000
    bne   t1, t2, inst_error

    li    t1, 0xabcdabcd
    csrwr t1, csr_pgdh
    csrrd t2, csr_pgdh
    csrwr t1, csr_pgdh
    li    t1, 0xabcda000
    bne   t1, t2, inst_error

    li    t1, 0xdcbadcba
    csrwr t1, csr_pgdh
    csrrd t2, csr_pgdh
    csrwr t1, csr_pgdh
    li    t1, 0xdcbad000
    bne   t1, t2, inst_error

#pgd
    li    t1, 0x0
    csrwr t1, csr_badv
    li    t2, 0xabcdefff
    csrwr t2, csr_pgdl
    csrrd t3, csr_pgd
    li    t2, 0xabcde000
    bne   t3, t2, inst_error

    li    t1, 0x023abc13
    csrwr t1, csr_badv
    li    t2, 0x12345abc
    csrwr t2, csr_pgdl
    csrrd t3, csr_pgd
    li    t2, 0x12345000
    bne   t3, t2, inst_error

    li    t1, 0xf0000000
    csrwr t1, csr_badv
    li    t2, 0xab32efff
    csrwr t2, csr_pgdh
    csrrd t3, csr_pgd
    li    t2, 0xab32e000
    bne   t3, t2, inst_error

    li    t1, 0xf2340000
    csrwr t1, csr_badv
    li    t2, 0xabfffabc
    csrwr t2, csr_pgdh
    csrrd t3, csr_pgd
    li    t2, 0xabfff000
    bne   t3, t2, inst_error

#BUG
###cpuid
    li      t3, 0x1ff
    li      t2, 0xffffffff 
    csrwr   t2, csr_cpuid 
    csrrd   t0, csr_cpuid  
    and     t2, t2, t3 
    li      t1, 0x0 
    or      t1, t1, t2 
    bne     t0, t1, inst_error  

    li      t2, 0xfffffe00 
    csrwr   t2, csr_cpuid 
    csrrd   t0, csr_cpuid 
    and     t2, t2, t3 
    li      t1, 0x0 
    or      t1, t1, t2 
    bne     t0, t1, inst_error  

###save0
    li      t2, 0xffffffff 
    csrwr   t2, csr_save0 
    csrrd   t0, csr_save0 
    li      t1, 0xffffffff 
    bne     t0, t1, inst_error 

    li      t2, 0x0
    csrwr   t2, csr_save0 
    csrrd   t0, csr_save0 
    li      t1, 0x0
    bne     t0, t1, inst_error 

###save1
    li      t2, 0xffffffff 
    csrwr   t2, csr_save1 
    csrrd   t0, csr_save1 
    li      t1, 0xffffffff 
    bne     t0, t1, inst_error 

    li      t2, 0x0
    csrwr   t2, csr_save1 
    csrrd   t0, csr_save1 
    li      t1, 0x0
    bne     t0, t1, inst_error 

###save2
    li      t2, 0xffffffff 
    csrwr   t2, csr_save2 
    csrrd   t0, csr_save2 
    li      t1, 0xffffffff 
    bne     t0, t1, inst_error 

    li      t2, 0x0
    csrwr   t2, csr_save2 
    csrrd   t0, csr_save2 
    li      t1, 0x0
    bne     t0, t1, inst_error 

###save3
    li      t2, 0xffffffff 
    csrwr   t2, csr_save3 
    csrrd   t0, csr_save3 
    li      t1, 0xffffffff 
    bne     t0, t1, inst_error 

    li      t2, 0x0
    csrwr   t2, csr_save3 
    csrrd   t0, csr_save3 
    li      t1, 0x0
    bne     t0, t1, inst_error 

###tid 
    li      t2, 0xffffffff 
    csrwr   t2, csr_tid 
    csrrd   t0, csr_tid 
    li      t1, 0xffffffff 
    bne     t0, t1, inst_error 

    li      t2, 0x0
    csrwr   t2, csr_tid 
    csrrd   t0, csr_tid 
    li      t1, 0x0
    bne     t0, t1, inst_error 

###tcfg
    li      t2, 0xffffffff 
    csrwr   t2, csr_tcfg 
    csrrd   t3, csr_tcfg 
    
    li    t0, 0xffffffff
    li    t1, TIMER_BITS
    sll.w t0, t0, t1
    li    t2, 0x20
    bne   t1, t2, 1f
    li    t0, 0x0
1:
    nor   t0, t0, zero

    li    t1, 0xffffffff 
    and   t1, t1, t0
    bne   t3, t1, inst_error 

    li      t2, 0x0
    csrwr   t2, csr_tcfg 
    csrrd   t3, csr_tcfg 

    li    t0, 0xffffffff
    li    t1, TIMER_BITS
    sll.w t0, t0, t1
    li    t2, 0x20
    bne   t1, t2, 1f
    li    t0, 0x0
1:
    nor   t0, t0, zero

    li    t1, 0x0
    and   t1, t1, t0
    bne   t3, t1, inst_error 

###tval 
    csrwr   zero, csr_tcfg

    li      t3, 0xffffffff

    li      t2, 0xffffffff 
    csrwr   t2, csr_tval 
    csrrd   t0, csr_tval 
    and     t2, t2, t3 
    li      t1, 0x0 
    or      t1, t1, t2 
    bne     t0, t1, inst_error 

    li      t2, 0x0
    csrwr   t2, csr_tval 
    csrrd   t0, csr_tval 
    and     t2, t2, t3 
    li      t1, 0x0 
    or      t1, t1, t2 
    bne     t0, t1, inst_error 

###ticlr 
    li      t2, 0xffffffff 
    csrwr   t2, csr_ticlr 
    csrrd   t0, csr_ticlr 
    li      t1, 0x0  
    bne     t0, t1, inst_error 

    li      t2, 0xfffffffe
    csrwr   t2, csr_ticlr 
    csrrd   t0, csr_ticlr 
    li      t1, 0x0  
    bne     t0, t1, inst_error 


###llbctl 
    li      t0, 0x2 
    li      t1, 0x2 
    csrxchg t1, t0, csr_llbctl 
    li      t3, 0x1 
    li      t2, 0xffffffff 
    csrwr   t2, csr_llbctl 
    csrrd   t0, csr_llbctl 
    and     t2, t2, t3 
    li      t1, 0x4 
    or      t1, t1, t2 
    bne     t0, t1, inst_error  

    li      t2, 0xfffffff8 
    csrwr   t2, csr_llbctl 
    csrrd   t0, csr_llbctl 
    and     t2, t2, t3 
    li      t1, 0x0 
    or      t1, t1, t2 
    bne     t0, t1, inst_error

###tlbrentry
    li    t1, 0xffffffff
    csrwr t1, csr_tlbrentry
    csrrd t2, csr_tlbrentry
    csrwr t1, csr_tlbrentry
    li    t1, 0xffffffc0
    bne   t1, t2, inst_error

    li    t1, 0xabcdabcd
    csrwr t1, csr_tlbrentry
    csrrd t2, csr_tlbrentry
    csrwr t1, csr_tlbrentry
    li    t1, 0xabcdabc0
    bne   t1, t2, inst_error

    li    t1, 0xdcbadcba
    csrwr t1, csr_tlbrentry
    csrrd t2, csr_tlbrentry
    csrwr t1, csr_tlbrentry
    li    t1, 0xdcbadc80
    bne   t1, t2, inst_error

#BUG
###dmw
    li    t1, 0xffffffff
    csrwr t1, csr_dmw0
    csrrd t2, csr_dmw0
    li    t1, 0xee000039
    bne   t1, t2, inst_error

    li    t1, 0xabcdabcd
    csrwr t1, csr_dmw0
    csrrd t2, csr_dmw0
    li    t1, 0xaa000009
    bne   t1, t2, inst_error

    li    t1, 0xdcbadcba
    csrwr t1, csr_dmw0
    csrrd t2, csr_dmw0
    li    t1, 0xcc000038
    bne   t1, t2, inst_error

    li    t1, 0xffffffff
    csrwr t1, csr_dmw1
    csrrd t2, csr_dmw1
    li    t1, 0xee000039
    bne   t1, t2, inst_error

    li    t1, 0xabcdabcd
    csrwr t1, csr_dmw1
    csrrd t2, csr_dmw1
    li    t1, 0xaa000009
    bne   t1, t2, inst_error

    li    t1, 0xdcbadcba
    csrwr t1, csr_dmw1
    csrrd t2, csr_dmw1
    li    t1, 0xcc000038
    bne   t1, t2, inst_error

    csrwr zero, csr_dmw0
    csrwr zero, csr_dmw1

###score +++
  addi.w  s3, s3, 1
###output (s0<<24)|s3 
inst_error:
  slli.w  t1, s0, 24 
  or      t0, t1, s3 
  st.w    t0, s1, 0 
  jirl    zero, ra, 0 
END(n8_csr_rw_test)
