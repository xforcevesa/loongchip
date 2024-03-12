// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vsimu_top__Syms.h"


void Vsimu_top___024root__trace_chg_sub_1(Vsimu_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimu_top___024root__trace_chg_sub_1\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 4083);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgBit(oldp+0,((1U & (~ (IData)((0xfffffffffffULL 
                                               & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX))))));
        bufp->chgBit(oldp+1,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT____Vcellout__gfor__BRA__20__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+2,((1U & (IData)((0x7ffffffffffULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                               >> 1U))))));
        bufp->chgBit(oldp+3,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                              [0x15U])));
        bufp->chgBit(oldp+4,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                    [0x15U] >> 1U))));
        bufp->chgBit(oldp+5,((1U & (~ (IData)((0x7ffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 1U)))))));
        bufp->chgBit(oldp+6,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT____Vcellout__gfor__BRA__21__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+7,((1U & (IData)((0x3ffffffffffULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                               >> 2U))))));
        bufp->chgBit(oldp+8,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                              [0x16U])));
        bufp->chgBit(oldp+9,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                    [0x16U] >> 1U))));
        bufp->chgBit(oldp+10,((1U & (~ (IData)((0x3ffffffffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 2U)))))));
        bufp->chgBit(oldp+11,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT____Vcellout__gfor__BRA__22__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+12,((1U & (IData)((0x1ffffffffffULL 
                                             & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                >> 3U))))));
        bufp->chgBit(oldp+13,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                               [0x17U])));
        bufp->chgBit(oldp+14,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                     [0x17U] >> 1U))));
        bufp->chgBit(oldp+15,((1U & (~ (IData)((0x1ffffffffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 3U)))))));
        bufp->chgBit(oldp+16,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT____Vcellout__gfor__BRA__23__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+17,((1U & (IData)((0xffffffffffULL 
                                             & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                >> 4U))))));
        bufp->chgBit(oldp+18,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                               [0x18U])));
        bufp->chgBit(oldp+19,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                     [0x18U] >> 1U))));
        bufp->chgBit(oldp+20,((1U & (~ (IData)((0xffffffffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 4U)))))));
        bufp->chgBit(oldp+21,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT____Vcellout__gfor__BRA__24__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+22,((1U & (IData)((0x7fffffffffULL 
                                             & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                >> 5U))))));
        bufp->chgBit(oldp+23,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                               [0x19U])));
        bufp->chgBit(oldp+24,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                     [0x19U] >> 1U))));
        bufp->chgBit(oldp+25,((1U & (~ (IData)((0x7fffffffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 5U)))))));
        bufp->chgBit(oldp+26,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT____Vcellout__gfor__BRA__25__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+27,((1U & (IData)((0x3fffffffffULL 
                                             & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                >> 6U))))));
        bufp->chgBit(oldp+28,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                               [0x1aU])));
        bufp->chgBit(oldp+29,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                     [0x1aU] >> 1U))));
        bufp->chgBit(oldp+30,((1U & (~ (IData)((0x3fffffffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 6U)))))));
        bufp->chgBit(oldp+31,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT____Vcellout__gfor__BRA__26__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+32,((1U & (IData)((0x1fffffffffULL 
                                             & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                >> 7U))))));
        bufp->chgBit(oldp+33,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                               [0x1bU])));
        bufp->chgBit(oldp+34,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                     [0x1bU] >> 1U))));
        bufp->chgBit(oldp+35,((1U & (~ (IData)((0x1fffffffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 7U)))))));
        bufp->chgBit(oldp+36,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT____Vcellout__gfor__BRA__27__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+37,((1U & (IData)((0xfffffffffULL 
                                             & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                >> 8U))))));
        bufp->chgBit(oldp+38,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                               [0x1cU])));
        bufp->chgBit(oldp+39,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                     [0x1cU] >> 1U))));
        bufp->chgBit(oldp+40,((1U & (~ (IData)((0xfffffffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 8U)))))));
        bufp->chgBit(oldp+41,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT____Vcellout__gfor__BRA__28__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+42,((1U & (IData)((0x7ffffffffULL 
                                             & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                >> 9U))))));
        bufp->chgBit(oldp+43,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                               [0x1dU])));
        bufp->chgBit(oldp+44,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                     [0x1dU] >> 1U))));
        bufp->chgBit(oldp+45,((1U & (~ (IData)((0x7ffffffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 9U)))))));
        bufp->chgBit(oldp+46,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT____Vcellout__gfor__BRA__29__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+47,((1U & (IData)((0x3ffffffffffc0000ULL 
                                             & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                << 0x12U))))));
        bufp->chgBit(oldp+48,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                               [2U])));
        bufp->chgBit(oldp+49,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                     [2U] >> 1U))));
        bufp->chgBit(oldp+50,((1U & (~ (IData)((0x3ffffffffffc0000ULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   << 0x12U)))))));
        bufp->chgBit(oldp+51,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT____Vcellout__gfor__BRA__2__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+52,((1U & (IData)((0x3ffffffffULL 
                                             & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                >> 0xaU))))));
        bufp->chgBit(oldp+53,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                               [0x1eU])));
        bufp->chgBit(oldp+54,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                     [0x1eU] >> 1U))));
        bufp->chgBit(oldp+55,((1U & (~ (IData)((0x3ffffffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 0xaU)))))));
        bufp->chgBit(oldp+56,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT____Vcellout__gfor__BRA__30__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+57,((1U & (IData)((0x1ffffffffULL 
                                             & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                >> 0xbU))))));
        bufp->chgBit(oldp+58,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                               [0x1fU])));
        bufp->chgBit(oldp+59,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                     [0x1fU] >> 1U))));
        bufp->chgBit(oldp+60,((1U & (~ (IData)((0x1ffffffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 0xbU)))))));
        bufp->chgBit(oldp+61,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT____Vcellout__gfor__BRA__31__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+62,((1U & (IData)((0xffffffffULL 
                                             & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                >> 0xcU))))));
        bufp->chgBit(oldp+63,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                               [0x20U])));
        bufp->chgBit(oldp+64,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                     [0x20U] >> 1U))));
        bufp->chgBit(oldp+65,((1U & (~ (IData)((0xffffffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 0xcU)))))));
        bufp->chgBit(oldp+66,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT____Vcellout__gfor__BRA__32__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+67,((1U & (IData)((0x7fffffffULL 
                                             & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                >> 0xdU))))));
        bufp->chgBit(oldp+68,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                               [0x21U])));
        bufp->chgBit(oldp+69,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                     [0x21U] >> 1U))));
        bufp->chgBit(oldp+70,((1U & (~ (IData)((0x7fffffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 0xdU)))))));
        bufp->chgBit(oldp+71,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT____Vcellout__gfor__BRA__33__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+72,((1U & (IData)((0x3fffffffULL 
                                             & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                >> 0xeU))))));
        bufp->chgBit(oldp+73,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                               [0x22U])));
        bufp->chgBit(oldp+74,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                     [0x22U] >> 1U))));
        bufp->chgBit(oldp+75,((1U & (~ (IData)((0x3fffffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 0xeU)))))));
        bufp->chgBit(oldp+76,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT____Vcellout__gfor__BRA__34__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+77,((1U & (IData)((0x1fffffffULL 
                                             & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                >> 0xfU))))));
        bufp->chgBit(oldp+78,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                               [0x23U])));
        bufp->chgBit(oldp+79,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                     [0x23U] >> 1U))));
        bufp->chgBit(oldp+80,((1U & (~ (IData)((0x1fffffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 0xfU)))))));
        bufp->chgBit(oldp+81,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT____Vcellout__gfor__BRA__35__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+82,((1U & (IData)((0xfffffffULL 
                                             & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                >> 0x10U))))));
        bufp->chgBit(oldp+83,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                               [0x24U])));
        bufp->chgBit(oldp+84,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                     [0x24U] >> 1U))));
        bufp->chgBit(oldp+85,((1U & (~ (IData)((0xfffffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 0x10U)))))));
        bufp->chgBit(oldp+86,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT____Vcellout__gfor__BRA__36__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+87,((1U & (IData)((0x7ffffffULL 
                                             & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                >> 0x11U))))));
        bufp->chgBit(oldp+88,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                               [0x25U])));
        bufp->chgBit(oldp+89,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                     [0x25U] >> 1U))));
        bufp->chgBit(oldp+90,((1U & (~ (IData)((0x7ffffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 0x11U)))))));
        bufp->chgBit(oldp+91,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT____Vcellout__gfor__BRA__37__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+92,((1U & (IData)((0x3ffffffULL 
                                             & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                >> 0x12U))))));
        bufp->chgBit(oldp+93,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                               [0x26U])));
        bufp->chgBit(oldp+94,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                     [0x26U] >> 1U))));
        bufp->chgBit(oldp+95,((1U & (~ (IData)((0x3ffffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 0x12U)))))));
        bufp->chgBit(oldp+96,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT____Vcellout__gfor__BRA__38__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+97,((1U & (IData)((0x1ffffffULL 
                                             & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                >> 0x13U))))));
        bufp->chgBit(oldp+98,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                               [0x27U])));
        bufp->chgBit(oldp+99,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                     [0x27U] >> 1U))));
        bufp->chgBit(oldp+100,((1U & (~ (IData)((0x1ffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x13U)))))));
        bufp->chgBit(oldp+101,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT____Vcellout__gfor__BRA__39__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+102,((1U & (IData)((0x1ffffffffffe0000ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 << 0x11U))))));
        bufp->chgBit(oldp+103,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                [3U])));
        bufp->chgBit(oldp+104,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                      [3U] >> 1U))));
        bufp->chgBit(oldp+105,((1U & (~ (IData)((0x1ffffffffffe0000ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    << 0x11U)))))));
        bufp->chgBit(oldp+106,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT____Vcellout__gfor__BRA__3__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+107,((1U & (IData)((0xffffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x14U))))));
        bufp->chgBit(oldp+108,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                [0x28U])));
        bufp->chgBit(oldp+109,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                      [0x28U] >> 1U))));
        bufp->chgBit(oldp+110,((1U & (~ (IData)((0xffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x14U)))))));
        bufp->chgBit(oldp+111,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT____Vcellout__gfor__BRA__40__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+112,((1U & (IData)((0x7fffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x15U))))));
        bufp->chgBit(oldp+113,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                [0x29U])));
        bufp->chgBit(oldp+114,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                      [0x29U] >> 1U))));
        bufp->chgBit(oldp+115,((1U & (~ (IData)((0x7fffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x15U)))))));
        bufp->chgBit(oldp+116,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT____Vcellout__gfor__BRA__41__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+117,((1U & (IData)((0x3fffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x16U))))));
        bufp->chgBit(oldp+118,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                [0x2aU])));
        bufp->chgBit(oldp+119,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                      [0x2aU] >> 1U))));
        bufp->chgBit(oldp+120,((1U & (~ (IData)((0x3fffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x16U)))))));
        bufp->chgBit(oldp+121,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT____Vcellout__gfor__BRA__42__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+122,((1U & (IData)((0x1fffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x17U))))));
        bufp->chgBit(oldp+123,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                [0x2bU])));
        bufp->chgBit(oldp+124,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                      [0x2bU] >> 1U))));
        bufp->chgBit(oldp+125,((1U & (~ (IData)((0x1fffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x17U)))))));
        bufp->chgBit(oldp+126,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT____Vcellout__gfor__BRA__43__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+127,((1U & (IData)((0xfffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x18U))))));
        bufp->chgBit(oldp+128,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                [0x2cU])));
        bufp->chgBit(oldp+129,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                      [0x2cU] >> 1U))));
        bufp->chgBit(oldp+130,((1U & (~ (IData)((0xfffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x18U)))))));
        bufp->chgBit(oldp+131,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT____Vcellout__gfor__BRA__44__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+132,((1U & (IData)((0x7ffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x19U))))));
        bufp->chgBit(oldp+133,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                [0x2dU])));
        bufp->chgBit(oldp+134,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                      [0x2dU] >> 1U))));
        bufp->chgBit(oldp+135,((1U & (~ (IData)((0x7ffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x19U)))))));
        bufp->chgBit(oldp+136,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT____Vcellout__gfor__BRA__45__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+137,((1U & (IData)((0x3ffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x1aU))))));
        bufp->chgBit(oldp+138,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                [0x2eU])));
        bufp->chgBit(oldp+139,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                      [0x2eU] >> 1U))));
        bufp->chgBit(oldp+140,((1U & (~ (IData)((0x3ffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x1aU)))))));
        bufp->chgBit(oldp+141,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT____Vcellout__gfor__BRA__46__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+142,((1U & (IData)((0x1ffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x1bU))))));
        bufp->chgBit(oldp+143,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                [0x2fU])));
        bufp->chgBit(oldp+144,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                      [0x2fU] >> 1U))));
        bufp->chgBit(oldp+145,((1U & (~ (IData)((0x1ffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x1bU)))))));
        bufp->chgBit(oldp+146,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT____Vcellout__gfor__BRA__47__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+147,((1U & (IData)((0xffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x1cU))))));
        bufp->chgBit(oldp+148,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                [0x30U])));
        bufp->chgBit(oldp+149,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                      [0x30U] >> 1U))));
        bufp->chgBit(oldp+150,((1U & (~ (IData)((0xffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x1cU)))))));
        bufp->chgBit(oldp+151,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT____Vcellout__gfor__BRA__48__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+152,((1U & (IData)((0x7fffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x1dU))))));
        bufp->chgBit(oldp+153,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                [0x31U])));
        bufp->chgBit(oldp+154,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                      [0x31U] >> 1U))));
        bufp->chgBit(oldp+155,((1U & (~ (IData)((0x7fffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x1dU)))))));
        bufp->chgBit(oldp+156,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT____Vcellout__gfor__BRA__49__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+157,((1U & (IData)((0xfffffffffff0000ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 << 0x10U))))));
        bufp->chgBit(oldp+158,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                [4U])));
        bufp->chgBit(oldp+159,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                      [4U] >> 1U))));
        bufp->chgBit(oldp+160,((1U & (~ (IData)((0xfffffffffff0000ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    << 0x10U)))))));
        bufp->chgBit(oldp+161,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT____Vcellout__gfor__BRA__4__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+162,((1U & (IData)((0x3fffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x1eU))))));
        bufp->chgBit(oldp+163,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                [0x32U])));
        bufp->chgBit(oldp+164,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                      [0x32U] >> 1U))));
        bufp->chgBit(oldp+165,((1U & (~ (IData)((0x3fffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x1eU)))))));
        bufp->chgBit(oldp+166,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT____Vcellout__gfor__BRA__50__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+167,((1U & (IData)((0x1fffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x1fU))))));
        bufp->chgBit(oldp+168,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                [0x33U])));
        bufp->chgBit(oldp+169,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                      [0x33U] >> 1U))));
        bufp->chgBit(oldp+170,((1U & (~ (IData)((0x1fffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x1fU)))))));
        bufp->chgBit(oldp+171,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT____Vcellout__gfor__BRA__51__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+172,((1U & (IData)((0xfffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x20U))))));
        bufp->chgBit(oldp+173,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                [0x34U])));
        bufp->chgBit(oldp+174,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                      [0x34U] >> 1U))));
        bufp->chgBit(oldp+175,((1U & (~ (IData)((0xfffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x20U)))))));
        bufp->chgBit(oldp+176,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT____Vcellout__gfor__BRA__52__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+177,((1U & (IData)((0x7ffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x21U))))));
        bufp->chgBit(oldp+178,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                [0x35U])));
        bufp->chgBit(oldp+179,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                      [0x35U] >> 1U))));
        bufp->chgBit(oldp+180,((1U & (~ (IData)((0x7ffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x21U)))))));
        bufp->chgBit(oldp+181,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT____Vcellout__gfor__BRA__53__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+182,((1U & (IData)((0x3ffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x22U))))));
        bufp->chgBit(oldp+183,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                [0x36U])));
        bufp->chgBit(oldp+184,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                      [0x36U] >> 1U))));
        bufp->chgBit(oldp+185,((1U & (~ (IData)((0x3ffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x22U)))))));
        bufp->chgBit(oldp+186,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT____Vcellout__gfor__BRA__54__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+187,((1U & (IData)((0x1ffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x23U))))));
        bufp->chgBit(oldp+188,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                [0x37U])));
        bufp->chgBit(oldp+189,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                      [0x37U] >> 1U))));
        bufp->chgBit(oldp+190,((1U & (~ (IData)((0x1ffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x23U)))))));
        bufp->chgBit(oldp+191,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT____Vcellout__gfor__BRA__55__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+192,((1U & (IData)((0xffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x24U))))));
        bufp->chgBit(oldp+193,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                [0x38U])));
        bufp->chgBit(oldp+194,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                      [0x38U] >> 1U))));
        bufp->chgBit(oldp+195,((1U & (~ (IData)((0xffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x24U)))))));
        bufp->chgBit(oldp+196,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT____Vcellout__gfor__BRA__56__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+197,((1U & (IData)((0x7fULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x25U))))));
        bufp->chgBit(oldp+198,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                [0x39U])));
        bufp->chgBit(oldp+199,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                      [0x39U] >> 1U))));
        bufp->chgBit(oldp+200,((1U & (~ (IData)((0x7fULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x25U)))))));
        bufp->chgBit(oldp+201,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT____Vcellout__gfor__BRA__57__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+202,((1U & (IData)((0x3fULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x26U))))));
        bufp->chgBit(oldp+203,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                [0x3aU])));
        bufp->chgBit(oldp+204,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                      [0x3aU] >> 1U))));
        bufp->chgBit(oldp+205,((1U & (~ (IData)((0x3fULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x26U)))))));
        bufp->chgBit(oldp+206,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT____Vcellout__gfor__BRA__58__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+207,((1U & (IData)((0x1fULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x27U))))));
        bufp->chgBit(oldp+208,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                [0x3bU])));
        bufp->chgBit(oldp+209,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                      [0x3bU] >> 1U))));
        bufp->chgBit(oldp+210,((1U & (~ (IData)((0x1fULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x27U)))))));
        bufp->chgBit(oldp+211,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT____Vcellout__gfor__BRA__59__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+212,((1U & (IData)((0x7ffffffffff8000ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 << 0xfU))))));
        bufp->chgBit(oldp+213,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                [5U])));
        bufp->chgBit(oldp+214,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                      [5U] >> 1U))));
        bufp->chgBit(oldp+215,((1U & (~ (IData)((0x7ffffffffff8000ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    << 0xfU)))))));
        bufp->chgBit(oldp+216,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT____Vcellout__gfor__BRA__5__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+217,((1U & (IData)((0xfULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x28U))))));
        bufp->chgBit(oldp+218,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                [0x3cU])));
        bufp->chgBit(oldp+219,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                      [0x3cU] >> 1U))));
        bufp->chgBit(oldp+220,((1U & (~ (IData)((0xfULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x28U)))))));
        bufp->chgBit(oldp+221,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT____Vcellout__gfor__BRA__60__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+222,((1U & (IData)((7ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x29U))))));
        bufp->chgBit(oldp+223,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                [0x3dU])));
        bufp->chgBit(oldp+224,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                      [0x3dU] >> 1U))));
        bufp->chgBit(oldp+225,((1U & (~ (IData)((7ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x29U)))))));
        bufp->chgBit(oldp+226,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT____Vcellout__gfor__BRA__61__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+227,((1U & (IData)((3ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x2aU))))));
        bufp->chgBit(oldp+228,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                [0x3eU])));
        bufp->chgBit(oldp+229,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                      [0x3eU] >> 1U))));
        bufp->chgBit(oldp+230,((1U & (~ (IData)((3ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x2aU)))))));
        bufp->chgBit(oldp+231,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT____Vcellout__gfor__BRA__62__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+232,((1U & (IData)((1ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x2bU))))));
        bufp->chgBit(oldp+233,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                [0x3fU])));
        bufp->chgBit(oldp+234,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                      [0x3fU] >> 1U))));
        bufp->chgBit(oldp+235,((1U & (~ (IData)((1ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x2bU)))))));
        bufp->chgBit(oldp+236,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT____Vcellout__gfor__BRA__63__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+237,((1U & (IData)((0x3ffffffffffc000ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 << 0xeU))))));
        bufp->chgBit(oldp+238,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                [6U])));
        bufp->chgBit(oldp+239,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                      [6U] >> 1U))));
        bufp->chgBit(oldp+240,((1U & (~ (IData)((0x3ffffffffffc000ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    << 0xeU)))))));
        bufp->chgBit(oldp+241,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT____Vcellout__gfor__BRA__6__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+242,((1U & (IData)((0x1ffffffffffe000ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 << 0xdU))))));
        bufp->chgBit(oldp+243,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                [7U])));
        bufp->chgBit(oldp+244,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                      [7U] >> 1U))));
        bufp->chgBit(oldp+245,((1U & (~ (IData)((0x1ffffffffffe000ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    << 0xdU)))))));
        bufp->chgBit(oldp+246,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT____Vcellout__gfor__BRA__7__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+247,((1U & (IData)((0xfffffffffff000ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 << 0xcU))))));
        bufp->chgBit(oldp+248,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                [8U])));
        bufp->chgBit(oldp+249,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                      [8U] >> 1U))));
        bufp->chgBit(oldp+250,((1U & (~ (IData)((0xfffffffffff000ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    << 0xcU)))))));
        bufp->chgBit(oldp+251,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT____Vcellout__gfor__BRA__8__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+252,((1U & (IData)((0x7ffffffffff800ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 << 0xbU))))));
        bufp->chgBit(oldp+253,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                [9U])));
        bufp->chgBit(oldp+254,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                      [9U] >> 1U))));
        bufp->chgBit(oldp+255,((1U & (~ (IData)((0x7ffffffffff800ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    << 0xbU)))))));
        bufp->chgBit(oldp+256,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT____Vcellout__gfor__BRA__9__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+257,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                              >> 0x15U)))));
        bufp->chgBit(oldp+258,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                              >> 0x14U)))));
        bufp->chgCData(oldp+259,((7U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                >> 0x15U)))),3);
        bufp->chgQData(oldp+260,((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                  << 0x16U)),64);
        bufp->chgQData(oldp+262,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellout__boothfor__BRA__22__KET____DOT__ai__OutX),64);
        bufp->chgBit(oldp+264,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__neg2x) 
                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__negx))));
        bufp->chgBit(oldp+265,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__negx));
        bufp->chgBit(oldp+266,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__x));
        bufp->chgBit(oldp+267,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__neg2x));
        bufp->chgBit(oldp+268,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT____Vcellout__fir__OutX));
        bufp->chgBit(oldp+269,((1U & (IData)((0x3ffffffffff000ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 << 0xcU))))));
        bufp->chgBit(oldp+270,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                [0xaU])));
        bufp->chgBit(oldp+271,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                      [0xaU] >> 1U))));
        bufp->chgBit(oldp+272,((1U & (~ (IData)((0x3ffffffffff000ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    << 0xcU)))))));
        bufp->chgBit(oldp+273,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT____Vcellout__gfor__BRA__10__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+274,((1U & (IData)((0x1ffffffffff800ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 << 0xbU))))));
        bufp->chgBit(oldp+275,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                [0xbU])));
        bufp->chgBit(oldp+276,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                      [0xbU] >> 1U))));
        bufp->chgBit(oldp+277,((1U & (~ (IData)((0x1ffffffffff800ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    << 0xbU)))))));
        bufp->chgBit(oldp+278,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT____Vcellout__gfor__BRA__11__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+279,((1U & (IData)((0xffffffffffc00ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 << 0xaU))))));
        bufp->chgBit(oldp+280,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                [0xcU])));
        bufp->chgBit(oldp+281,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                      [0xcU] >> 1U))));
        bufp->chgBit(oldp+282,((1U & (~ (IData)((0xffffffffffc00ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    << 0xaU)))))));
        bufp->chgBit(oldp+283,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT____Vcellout__gfor__BRA__12__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+284,((1U & (IData)((0x7fffffffffe00ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 << 9U))))));
        bufp->chgBit(oldp+285,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                [0xdU])));
        bufp->chgBit(oldp+286,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                      [0xdU] >> 1U))));
        bufp->chgBit(oldp+287,((1U & (~ (IData)((0x7fffffffffe00ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    << 9U)))))));
        bufp->chgBit(oldp+288,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT____Vcellout__gfor__BRA__13__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+289,((1U & (IData)((0x3ffffffffff00ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 << 8U))))));
        bufp->chgBit(oldp+290,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                [0xeU])));
        bufp->chgBit(oldp+291,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                      [0xeU] >> 1U))));
        bufp->chgBit(oldp+292,((1U & (~ (IData)((0x3ffffffffff00ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    << 8U)))))));
        bufp->chgBit(oldp+293,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT____Vcellout__gfor__BRA__14__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+294,((1U & (IData)((0x1ffffffffff80ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 << 7U))))));
        bufp->chgBit(oldp+295,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                [0xfU])));
        bufp->chgBit(oldp+296,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                      [0xfU] >> 1U))));
        bufp->chgBit(oldp+297,((1U & (~ (IData)((0x1ffffffffff80ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    << 7U)))))));
        bufp->chgBit(oldp+298,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT____Vcellout__gfor__BRA__15__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+299,((1U & (IData)((0xffffffffffc0ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 << 6U))))));
        bufp->chgBit(oldp+300,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                [0x10U])));
        bufp->chgBit(oldp+301,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                      [0x10U] >> 1U))));
        bufp->chgBit(oldp+302,((1U & (~ (IData)((0xffffffffffc0ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    << 6U)))))));
        bufp->chgBit(oldp+303,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT____Vcellout__gfor__BRA__16__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+304,((1U & (IData)((0x7fffffffffe0ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 << 5U))))));
        bufp->chgBit(oldp+305,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                [0x11U])));
        bufp->chgBit(oldp+306,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                      [0x11U] >> 1U))));
        bufp->chgBit(oldp+307,((1U & (~ (IData)((0x7fffffffffe0ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    << 5U)))))));
        bufp->chgBit(oldp+308,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT____Vcellout__gfor__BRA__17__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+309,((1U & (IData)((0x3ffffffffff0ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 << 4U))))));
        bufp->chgBit(oldp+310,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                [0x12U])));
        bufp->chgBit(oldp+311,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                      [0x12U] >> 1U))));
        bufp->chgBit(oldp+312,((1U & (~ (IData)((0x3ffffffffff0ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    << 4U)))))));
        bufp->chgBit(oldp+313,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT____Vcellout__gfor__BRA__18__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+314,((1U & (IData)((0x1ffffffffff8ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 << 3U))))));
        bufp->chgBit(oldp+315,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                [0x13U])));
        bufp->chgBit(oldp+316,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                      [0x13U] >> 1U))));
        bufp->chgBit(oldp+317,((1U & (~ (IData)((0x1ffffffffff8ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    << 3U)))))));
        bufp->chgBit(oldp+318,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT____Vcellout__gfor__BRA__19__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+319,((1U & (IData)((0x7fffffffffe00000ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 << 0x15U))))));
        bufp->chgBit(oldp+320,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                [1U])));
        bufp->chgBit(oldp+321,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                      [1U] >> 1U))));
        bufp->chgBit(oldp+322,((1U & (~ (IData)((0x7fffffffffe00000ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    << 0x15U)))))));
        bufp->chgBit(oldp+323,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT____Vcellout__gfor__BRA__1__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+324,((1U & (IData)((0xffffffffffcULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 << 2U))))));
        bufp->chgBit(oldp+325,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                [0x14U])));
        bufp->chgBit(oldp+326,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                      [0x14U] >> 1U))));
        bufp->chgBit(oldp+327,((1U & (~ (IData)((0xffffffffffcULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    << 2U)))))));
        bufp->chgBit(oldp+328,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT____Vcellout__gfor__BRA__20__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+329,((1U & (IData)((0x7fffffffffeULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 << 1U))))));
        bufp->chgBit(oldp+330,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                [0x15U])));
        bufp->chgBit(oldp+331,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                      [0x15U] >> 1U))));
        bufp->chgBit(oldp+332,((1U & (~ (IData)((0x7fffffffffeULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    << 1U)))))));
        bufp->chgBit(oldp+333,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT____Vcellout__gfor__BRA__21__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+334,((1U & (IData)((0x3ffffffffffULL 
                                              & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX)))));
        bufp->chgBit(oldp+335,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                [0x16U])));
        bufp->chgBit(oldp+336,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                      [0x16U] >> 1U))));
        bufp->chgBit(oldp+337,((1U & (~ (IData)((0x3ffffffffffULL 
                                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX))))));
        bufp->chgBit(oldp+338,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT____Vcellout__gfor__BRA__22__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+339,((1U & (IData)((0x1ffffffffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 1U))))));
        bufp->chgBit(oldp+340,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                [0x17U])));
        bufp->chgBit(oldp+341,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                      [0x17U] >> 1U))));
        bufp->chgBit(oldp+342,((1U & (~ (IData)((0x1ffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 1U)))))));
        bufp->chgBit(oldp+343,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT____Vcellout__gfor__BRA__23__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+344,((1U & (IData)((0xffffffffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 2U))))));
        bufp->chgBit(oldp+345,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                [0x18U])));
        bufp->chgBit(oldp+346,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                      [0x18U] >> 1U))));
        bufp->chgBit(oldp+347,((1U & (~ (IData)((0xffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 2U)))))));
        bufp->chgBit(oldp+348,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT____Vcellout__gfor__BRA__24__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+349,((1U & (IData)((0x7fffffffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 3U))))));
        bufp->chgBit(oldp+350,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                [0x19U])));
        bufp->chgBit(oldp+351,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                      [0x19U] >> 1U))));
        bufp->chgBit(oldp+352,((1U & (~ (IData)((0x7fffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 3U)))))));
        bufp->chgBit(oldp+353,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT____Vcellout__gfor__BRA__25__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+354,((1U & (IData)((0x3fffffffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 4U))))));
        bufp->chgBit(oldp+355,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                [0x1aU])));
        bufp->chgBit(oldp+356,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                      [0x1aU] >> 1U))));
        bufp->chgBit(oldp+357,((1U & (~ (IData)((0x3fffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 4U)))))));
        bufp->chgBit(oldp+358,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT____Vcellout__gfor__BRA__26__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+359,((1U & (IData)((0x1fffffffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 5U))))));
        bufp->chgBit(oldp+360,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                [0x1bU])));
        bufp->chgBit(oldp+361,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                      [0x1bU] >> 1U))));
        bufp->chgBit(oldp+362,((1U & (~ (IData)((0x1fffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 5U)))))));
        bufp->chgBit(oldp+363,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT____Vcellout__gfor__BRA__27__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+364,((1U & (IData)((0xfffffffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 6U))))));
        bufp->chgBit(oldp+365,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                [0x1cU])));
        bufp->chgBit(oldp+366,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                      [0x1cU] >> 1U))));
        bufp->chgBit(oldp+367,((1U & (~ (IData)((0xfffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 6U)))))));
        bufp->chgBit(oldp+368,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT____Vcellout__gfor__BRA__28__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+369,((1U & (IData)((0x7ffffffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 7U))))));
        bufp->chgBit(oldp+370,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                [0x1dU])));
        bufp->chgBit(oldp+371,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                      [0x1dU] >> 1U))));
        bufp->chgBit(oldp+372,((1U & (~ (IData)((0x7ffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 7U)))))));
        bufp->chgBit(oldp+373,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT____Vcellout__gfor__BRA__29__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+374,((1U & (IData)((0x3ffffffffff00000ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 << 0x14U))))));
        bufp->chgBit(oldp+375,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                [2U])));
        bufp->chgBit(oldp+376,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                      [2U] >> 1U))));
        bufp->chgBit(oldp+377,((1U & (~ (IData)((0x3ffffffffff00000ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    << 0x14U)))))));
        bufp->chgBit(oldp+378,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT____Vcellout__gfor__BRA__2__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+379,((1U & (IData)((0x3ffffffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 8U))))));
        bufp->chgBit(oldp+380,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                [0x1eU])));
        bufp->chgBit(oldp+381,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                      [0x1eU] >> 1U))));
        bufp->chgBit(oldp+382,((1U & (~ (IData)((0x3ffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 8U)))))));
        bufp->chgBit(oldp+383,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT____Vcellout__gfor__BRA__30__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+384,((1U & (IData)((0x1ffffffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 9U))))));
        bufp->chgBit(oldp+385,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                [0x1fU])));
        bufp->chgBit(oldp+386,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                      [0x1fU] >> 1U))));
        bufp->chgBit(oldp+387,((1U & (~ (IData)((0x1ffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 9U)))))));
        bufp->chgBit(oldp+388,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT____Vcellout__gfor__BRA__31__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+389,((1U & (IData)((0xffffffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0xaU))))));
        bufp->chgBit(oldp+390,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                [0x20U])));
        bufp->chgBit(oldp+391,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                      [0x20U] >> 1U))));
        bufp->chgBit(oldp+392,((1U & (~ (IData)((0xffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0xaU)))))));
        bufp->chgBit(oldp+393,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT____Vcellout__gfor__BRA__32__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+394,((1U & (IData)((0x7fffffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0xbU))))));
        bufp->chgBit(oldp+395,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                [0x21U])));
        bufp->chgBit(oldp+396,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                      [0x21U] >> 1U))));
        bufp->chgBit(oldp+397,((1U & (~ (IData)((0x7fffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0xbU)))))));
        bufp->chgBit(oldp+398,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT____Vcellout__gfor__BRA__33__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+399,((1U & (IData)((0x3fffffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0xcU))))));
        bufp->chgBit(oldp+400,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                [0x22U])));
        bufp->chgBit(oldp+401,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                      [0x22U] >> 1U))));
        bufp->chgBit(oldp+402,((1U & (~ (IData)((0x3fffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0xcU)))))));
        bufp->chgBit(oldp+403,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT____Vcellout__gfor__BRA__34__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+404,((1U & (IData)((0x1fffffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0xdU))))));
        bufp->chgBit(oldp+405,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                [0x23U])));
        bufp->chgBit(oldp+406,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                      [0x23U] >> 1U))));
        bufp->chgBit(oldp+407,((1U & (~ (IData)((0x1fffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0xdU)))))));
        bufp->chgBit(oldp+408,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT____Vcellout__gfor__BRA__35__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+409,((1U & (IData)((0xfffffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0xeU))))));
        bufp->chgBit(oldp+410,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                [0x24U])));
        bufp->chgBit(oldp+411,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                      [0x24U] >> 1U))));
        bufp->chgBit(oldp+412,((1U & (~ (IData)((0xfffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0xeU)))))));
        bufp->chgBit(oldp+413,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT____Vcellout__gfor__BRA__36__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+414,((1U & (IData)((0x7ffffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0xfU))))));
        bufp->chgBit(oldp+415,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                [0x25U])));
        bufp->chgBit(oldp+416,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                      [0x25U] >> 1U))));
        bufp->chgBit(oldp+417,((1U & (~ (IData)((0x7ffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0xfU)))))));
        bufp->chgBit(oldp+418,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT____Vcellout__gfor__BRA__37__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+419,((1U & (IData)((0x3ffffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x10U))))));
        bufp->chgBit(oldp+420,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                [0x26U])));
        bufp->chgBit(oldp+421,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                      [0x26U] >> 1U))));
        bufp->chgBit(oldp+422,((1U & (~ (IData)((0x3ffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x10U)))))));
        bufp->chgBit(oldp+423,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT____Vcellout__gfor__BRA__38__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+424,((1U & (IData)((0x1ffffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x11U))))));
        bufp->chgBit(oldp+425,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                [0x27U])));
        bufp->chgBit(oldp+426,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                      [0x27U] >> 1U))));
        bufp->chgBit(oldp+427,((1U & (~ (IData)((0x1ffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x11U)))))));
        bufp->chgBit(oldp+428,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT____Vcellout__gfor__BRA__39__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+429,((1U & (IData)((0x1ffffffffff80000ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 << 0x13U))))));
        bufp->chgBit(oldp+430,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                [3U])));
        bufp->chgBit(oldp+431,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                      [3U] >> 1U))));
        bufp->chgBit(oldp+432,((1U & (~ (IData)((0x1ffffffffff80000ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    << 0x13U)))))));
        bufp->chgBit(oldp+433,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT____Vcellout__gfor__BRA__3__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+434,((1U & (IData)((0xffffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x12U))))));
        bufp->chgBit(oldp+435,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                [0x28U])));
        bufp->chgBit(oldp+436,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                      [0x28U] >> 1U))));
        bufp->chgBit(oldp+437,((1U & (~ (IData)((0xffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x12U)))))));
        bufp->chgBit(oldp+438,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT____Vcellout__gfor__BRA__40__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+439,((1U & (IData)((0x7fffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x13U))))));
        bufp->chgBit(oldp+440,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                [0x29U])));
        bufp->chgBit(oldp+441,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                      [0x29U] >> 1U))));
        bufp->chgBit(oldp+442,((1U & (~ (IData)((0x7fffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x13U)))))));
        bufp->chgBit(oldp+443,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT____Vcellout__gfor__BRA__41__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+444,((1U & (IData)((0x3fffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x14U))))));
        bufp->chgBit(oldp+445,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                [0x2aU])));
        bufp->chgBit(oldp+446,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                      [0x2aU] >> 1U))));
        bufp->chgBit(oldp+447,((1U & (~ (IData)((0x3fffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x14U)))))));
        bufp->chgBit(oldp+448,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT____Vcellout__gfor__BRA__42__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+449,((1U & (IData)((0x1fffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x15U))))));
        bufp->chgBit(oldp+450,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                [0x2bU])));
        bufp->chgBit(oldp+451,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                      [0x2bU] >> 1U))));
        bufp->chgBit(oldp+452,((1U & (~ (IData)((0x1fffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x15U)))))));
        bufp->chgBit(oldp+453,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT____Vcellout__gfor__BRA__43__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+454,((1U & (IData)((0xfffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x16U))))));
        bufp->chgBit(oldp+455,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                [0x2cU])));
        bufp->chgBit(oldp+456,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                      [0x2cU] >> 1U))));
        bufp->chgBit(oldp+457,((1U & (~ (IData)((0xfffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x16U)))))));
        bufp->chgBit(oldp+458,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT____Vcellout__gfor__BRA__44__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+459,((1U & (IData)((0x7ffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x17U))))));
        bufp->chgBit(oldp+460,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                [0x2dU])));
        bufp->chgBit(oldp+461,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                      [0x2dU] >> 1U))));
        bufp->chgBit(oldp+462,((1U & (~ (IData)((0x7ffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x17U)))))));
        bufp->chgBit(oldp+463,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT____Vcellout__gfor__BRA__45__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+464,((1U & (IData)((0x3ffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x18U))))));
        bufp->chgBit(oldp+465,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                [0x2eU])));
        bufp->chgBit(oldp+466,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                      [0x2eU] >> 1U))));
        bufp->chgBit(oldp+467,((1U & (~ (IData)((0x3ffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x18U)))))));
        bufp->chgBit(oldp+468,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT____Vcellout__gfor__BRA__46__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+469,((1U & (IData)((0x1ffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x19U))))));
        bufp->chgBit(oldp+470,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                [0x2fU])));
        bufp->chgBit(oldp+471,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                      [0x2fU] >> 1U))));
        bufp->chgBit(oldp+472,((1U & (~ (IData)((0x1ffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x19U)))))));
        bufp->chgBit(oldp+473,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT____Vcellout__gfor__BRA__47__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+474,((1U & (IData)((0xffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x1aU))))));
        bufp->chgBit(oldp+475,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                [0x30U])));
        bufp->chgBit(oldp+476,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                      [0x30U] >> 1U))));
        bufp->chgBit(oldp+477,((1U & (~ (IData)((0xffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x1aU)))))));
        bufp->chgBit(oldp+478,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT____Vcellout__gfor__BRA__48__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+479,((1U & (IData)((0x7fffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x1bU))))));
        bufp->chgBit(oldp+480,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                [0x31U])));
        bufp->chgBit(oldp+481,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                      [0x31U] >> 1U))));
        bufp->chgBit(oldp+482,((1U & (~ (IData)((0x7fffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x1bU)))))));
        bufp->chgBit(oldp+483,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT____Vcellout__gfor__BRA__49__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+484,((1U & (IData)((0xffffffffffc0000ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 << 0x12U))))));
        bufp->chgBit(oldp+485,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                [4U])));
        bufp->chgBit(oldp+486,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                      [4U] >> 1U))));
        bufp->chgBit(oldp+487,((1U & (~ (IData)((0xffffffffffc0000ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    << 0x12U)))))));
        bufp->chgBit(oldp+488,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT____Vcellout__gfor__BRA__4__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+489,((1U & (IData)((0x3fffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x1cU))))));
        bufp->chgBit(oldp+490,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                [0x32U])));
        bufp->chgBit(oldp+491,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                      [0x32U] >> 1U))));
        bufp->chgBit(oldp+492,((1U & (~ (IData)((0x3fffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x1cU)))))));
        bufp->chgBit(oldp+493,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT____Vcellout__gfor__BRA__50__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+494,((1U & (IData)((0x1fffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x1dU))))));
        bufp->chgBit(oldp+495,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                [0x33U])));
        bufp->chgBit(oldp+496,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                      [0x33U] >> 1U))));
        bufp->chgBit(oldp+497,((1U & (~ (IData)((0x1fffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x1dU)))))));
        bufp->chgBit(oldp+498,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT____Vcellout__gfor__BRA__51__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+499,((1U & (IData)((0xfffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x1eU))))));
        bufp->chgBit(oldp+500,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                [0x34U])));
        bufp->chgBit(oldp+501,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                      [0x34U] >> 1U))));
        bufp->chgBit(oldp+502,((1U & (~ (IData)((0xfffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x1eU)))))));
        bufp->chgBit(oldp+503,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT____Vcellout__gfor__BRA__52__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+504,((1U & (IData)((0x7ffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x1fU))))));
        bufp->chgBit(oldp+505,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                [0x35U])));
        bufp->chgBit(oldp+506,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                      [0x35U] >> 1U))));
        bufp->chgBit(oldp+507,((1U & (~ (IData)((0x7ffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x1fU)))))));
        bufp->chgBit(oldp+508,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT____Vcellout__gfor__BRA__53__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+509,((1U & (IData)((0x3ffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x20U))))));
        bufp->chgBit(oldp+510,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                [0x36U])));
        bufp->chgBit(oldp+511,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                      [0x36U] >> 1U))));
        bufp->chgBit(oldp+512,((1U & (~ (IData)((0x3ffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x20U)))))));
        bufp->chgBit(oldp+513,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT____Vcellout__gfor__BRA__54__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+514,((1U & (IData)((0x1ffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x21U))))));
        bufp->chgBit(oldp+515,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                [0x37U])));
        bufp->chgBit(oldp+516,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                      [0x37U] >> 1U))));
        bufp->chgBit(oldp+517,((1U & (~ (IData)((0x1ffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x21U)))))));
        bufp->chgBit(oldp+518,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT____Vcellout__gfor__BRA__55__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+519,((1U & (IData)((0xffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x22U))))));
        bufp->chgBit(oldp+520,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                [0x38U])));
        bufp->chgBit(oldp+521,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                      [0x38U] >> 1U))));
        bufp->chgBit(oldp+522,((1U & (~ (IData)((0xffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x22U)))))));
        bufp->chgBit(oldp+523,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT____Vcellout__gfor__BRA__56__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+524,((1U & (IData)((0x7fULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x23U))))));
        bufp->chgBit(oldp+525,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                [0x39U])));
        bufp->chgBit(oldp+526,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                      [0x39U] >> 1U))));
        bufp->chgBit(oldp+527,((1U & (~ (IData)((0x7fULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x23U)))))));
        bufp->chgBit(oldp+528,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT____Vcellout__gfor__BRA__57__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+529,((1U & (IData)((0x3fULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x24U))))));
        bufp->chgBit(oldp+530,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                [0x3aU])));
        bufp->chgBit(oldp+531,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                      [0x3aU] >> 1U))));
        bufp->chgBit(oldp+532,((1U & (~ (IData)((0x3fULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x24U)))))));
        bufp->chgBit(oldp+533,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT____Vcellout__gfor__BRA__58__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+534,((1U & (IData)((0x1fULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x25U))))));
        bufp->chgBit(oldp+535,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                [0x3bU])));
        bufp->chgBit(oldp+536,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                      [0x3bU] >> 1U))));
        bufp->chgBit(oldp+537,((1U & (~ (IData)((0x1fULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x25U)))))));
        bufp->chgBit(oldp+538,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT____Vcellout__gfor__BRA__59__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+539,((1U & (IData)((0x7fffffffffe0000ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 << 0x11U))))));
        bufp->chgBit(oldp+540,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                [5U])));
        bufp->chgBit(oldp+541,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                      [5U] >> 1U))));
        bufp->chgBit(oldp+542,((1U & (~ (IData)((0x7fffffffffe0000ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    << 0x11U)))))));
        bufp->chgBit(oldp+543,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT____Vcellout__gfor__BRA__5__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+544,((1U & (IData)((0xfULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x26U))))));
        bufp->chgBit(oldp+545,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                [0x3cU])));
        bufp->chgBit(oldp+546,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                      [0x3cU] >> 1U))));
        bufp->chgBit(oldp+547,((1U & (~ (IData)((0xfULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x26U)))))));
        bufp->chgBit(oldp+548,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT____Vcellout__gfor__BRA__60__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+549,((1U & (IData)((7ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x27U))))));
        bufp->chgBit(oldp+550,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                [0x3dU])));
        bufp->chgBit(oldp+551,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                      [0x3dU] >> 1U))));
        bufp->chgBit(oldp+552,((1U & (~ (IData)((7ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x27U)))))));
        bufp->chgBit(oldp+553,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT____Vcellout__gfor__BRA__61__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+554,((1U & (IData)((3ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x28U))))));
        bufp->chgBit(oldp+555,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                [0x3eU])));
        bufp->chgBit(oldp+556,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                      [0x3eU] >> 1U))));
        bufp->chgBit(oldp+557,((1U & (~ (IData)((3ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x28U)))))));
        bufp->chgBit(oldp+558,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT____Vcellout__gfor__BRA__62__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+559,((1U & (IData)((1ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x29U))))));
        bufp->chgBit(oldp+560,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                [0x3fU])));
        bufp->chgBit(oldp+561,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                      [0x3fU] >> 1U))));
        bufp->chgBit(oldp+562,((1U & (~ (IData)((1ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x29U)))))));
        bufp->chgBit(oldp+563,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT____Vcellout__gfor__BRA__63__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+564,((1U & (IData)((0x3ffffffffff0000ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 << 0x10U))))));
        bufp->chgBit(oldp+565,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                [6U])));
        bufp->chgBit(oldp+566,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                      [6U] >> 1U))));
        bufp->chgBit(oldp+567,((1U & (~ (IData)((0x3ffffffffff0000ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    << 0x10U)))))));
        bufp->chgBit(oldp+568,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT____Vcellout__gfor__BRA__6__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+569,((1U & (IData)((0x1ffffffffff8000ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 << 0xfU))))));
        bufp->chgBit(oldp+570,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                [7U])));
        bufp->chgBit(oldp+571,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                      [7U] >> 1U))));
        bufp->chgBit(oldp+572,((1U & (~ (IData)((0x1ffffffffff8000ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    << 0xfU)))))));
        bufp->chgBit(oldp+573,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT____Vcellout__gfor__BRA__7__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+574,((1U & (IData)((0xffffffffffc000ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 << 0xeU))))));
        bufp->chgBit(oldp+575,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                [8U])));
        bufp->chgBit(oldp+576,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                      [8U] >> 1U))));
        bufp->chgBit(oldp+577,((1U & (~ (IData)((0xffffffffffc000ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    << 0xeU)))))));
        bufp->chgBit(oldp+578,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT____Vcellout__gfor__BRA__8__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+579,((1U & (IData)((0x7fffffffffe000ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 << 0xdU))))));
        bufp->chgBit(oldp+580,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                [9U])));
        bufp->chgBit(oldp+581,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                      [9U] >> 1U))));
        bufp->chgBit(oldp+582,((1U & (~ (IData)((0x7fffffffffe000ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    << 0xdU)))))));
        bufp->chgBit(oldp+583,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT____Vcellout__gfor__BRA__9__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+584,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                              >> 0x17U)))));
        bufp->chgBit(oldp+585,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                              >> 0x16U)))));
        bufp->chgCData(oldp+586,((7U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                >> 0x17U)))),3);
        bufp->chgQData(oldp+587,((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                  << 0x18U)),64);
        bufp->chgQData(oldp+589,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellout__boothfor__BRA__24__KET____DOT__ai__OutX),64);
        bufp->chgBit(oldp+591,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__neg2x) 
                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__negx))));
        bufp->chgBit(oldp+592,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__negx));
        bufp->chgBit(oldp+593,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__x));
        bufp->chgBit(oldp+594,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__neg2x));
        bufp->chgBit(oldp+595,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT____Vcellout__fir__OutX));
        bufp->chgBit(oldp+596,((1U & (IData)((0x3fffffffffc000ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 << 0xeU))))));
        bufp->chgBit(oldp+597,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                [0xaU])));
        bufp->chgBit(oldp+598,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                      [0xaU] >> 1U))));
        bufp->chgBit(oldp+599,((1U & (~ (IData)((0x3fffffffffc000ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    << 0xeU)))))));
        bufp->chgBit(oldp+600,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT____Vcellout__gfor__BRA__10__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+601,((1U & (IData)((0x1fffffffffe000ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 << 0xdU))))));
        bufp->chgBit(oldp+602,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                [0xbU])));
        bufp->chgBit(oldp+603,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                      [0xbU] >> 1U))));
        bufp->chgBit(oldp+604,((1U & (~ (IData)((0x1fffffffffe000ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    << 0xdU)))))));
        bufp->chgBit(oldp+605,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT____Vcellout__gfor__BRA__11__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+606,((1U & (IData)((0xffffffffff000ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 << 0xcU))))));
        bufp->chgBit(oldp+607,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                [0xcU])));
        bufp->chgBit(oldp+608,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                      [0xcU] >> 1U))));
        bufp->chgBit(oldp+609,((1U & (~ (IData)((0xffffffffff000ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    << 0xcU)))))));
        bufp->chgBit(oldp+610,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT____Vcellout__gfor__BRA__12__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+611,((1U & (IData)((0x7fffffffff800ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 << 0xbU))))));
        bufp->chgBit(oldp+612,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                [0xdU])));
        bufp->chgBit(oldp+613,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                      [0xdU] >> 1U))));
        bufp->chgBit(oldp+614,((1U & (~ (IData)((0x7fffffffff800ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    << 0xbU)))))));
        bufp->chgBit(oldp+615,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT____Vcellout__gfor__BRA__13__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+616,((1U & (IData)((0x3fffffffffc00ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 << 0xaU))))));
        bufp->chgBit(oldp+617,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                [0xeU])));
        bufp->chgBit(oldp+618,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                      [0xeU] >> 1U))));
        bufp->chgBit(oldp+619,((1U & (~ (IData)((0x3fffffffffc00ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    << 0xaU)))))));
        bufp->chgBit(oldp+620,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT____Vcellout__gfor__BRA__14__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+621,((1U & (IData)((0x1fffffffffe00ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 << 9U))))));
        bufp->chgBit(oldp+622,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                [0xfU])));
        bufp->chgBit(oldp+623,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                      [0xfU] >> 1U))));
        bufp->chgBit(oldp+624,((1U & (~ (IData)((0x1fffffffffe00ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    << 9U)))))));
        bufp->chgBit(oldp+625,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT____Vcellout__gfor__BRA__15__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+626,((1U & (IData)((0xffffffffff00ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 << 8U))))));
        bufp->chgBit(oldp+627,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                [0x10U])));
        bufp->chgBit(oldp+628,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                      [0x10U] >> 1U))));
        bufp->chgBit(oldp+629,((1U & (~ (IData)((0xffffffffff00ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    << 8U)))))));
        bufp->chgBit(oldp+630,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT____Vcellout__gfor__BRA__16__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+631,((1U & (IData)((0x7fffffffff80ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 << 7U))))));
        bufp->chgBit(oldp+632,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                [0x11U])));
        bufp->chgBit(oldp+633,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                      [0x11U] >> 1U))));
        bufp->chgBit(oldp+634,((1U & (~ (IData)((0x7fffffffff80ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    << 7U)))))));
        bufp->chgBit(oldp+635,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT____Vcellout__gfor__BRA__17__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+636,((1U & (IData)((0x3fffffffffc0ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 << 6U))))));
        bufp->chgBit(oldp+637,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                [0x12U])));
        bufp->chgBit(oldp+638,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                      [0x12U] >> 1U))));
        bufp->chgBit(oldp+639,((1U & (~ (IData)((0x3fffffffffc0ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    << 6U)))))));
        bufp->chgBit(oldp+640,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT____Vcellout__gfor__BRA__18__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+641,((1U & (IData)((0x1fffffffffe0ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 << 5U))))));
        bufp->chgBit(oldp+642,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                [0x13U])));
        bufp->chgBit(oldp+643,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                      [0x13U] >> 1U))));
        bufp->chgBit(oldp+644,((1U & (~ (IData)((0x1fffffffffe0ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    << 5U)))))));
        bufp->chgBit(oldp+645,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT____Vcellout__gfor__BRA__19__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+646,((1U & (IData)((0x7fffffffff800000ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 << 0x17U))))));
        bufp->chgBit(oldp+647,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                [1U])));
        bufp->chgBit(oldp+648,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                      [1U] >> 1U))));
        bufp->chgBit(oldp+649,((1U & (~ (IData)((0x7fffffffff800000ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    << 0x17U)))))));
        bufp->chgBit(oldp+650,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT____Vcellout__gfor__BRA__1__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+651,((1U & (IData)((0xffffffffff0ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 << 4U))))));
        bufp->chgBit(oldp+652,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                [0x14U])));
        bufp->chgBit(oldp+653,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                      [0x14U] >> 1U))));
        bufp->chgBit(oldp+654,((1U & (~ (IData)((0xffffffffff0ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    << 4U)))))));
        bufp->chgBit(oldp+655,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT____Vcellout__gfor__BRA__20__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+656,((1U & (IData)((0x7fffffffff8ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 << 3U))))));
        bufp->chgBit(oldp+657,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                [0x15U])));
        bufp->chgBit(oldp+658,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                      [0x15U] >> 1U))));
        bufp->chgBit(oldp+659,((1U & (~ (IData)((0x7fffffffff8ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    << 3U)))))));
        bufp->chgBit(oldp+660,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT____Vcellout__gfor__BRA__21__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+661,((1U & (IData)((0x3fffffffffcULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 << 2U))))));
        bufp->chgBit(oldp+662,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                [0x16U])));
        bufp->chgBit(oldp+663,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                      [0x16U] >> 1U))));
        bufp->chgBit(oldp+664,((1U & (~ (IData)((0x3fffffffffcULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    << 2U)))))));
        bufp->chgBit(oldp+665,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT____Vcellout__gfor__BRA__22__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+666,((1U & (IData)((0x1fffffffffeULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 << 1U))))));
        bufp->chgBit(oldp+667,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                [0x17U])));
        bufp->chgBit(oldp+668,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                      [0x17U] >> 1U))));
        bufp->chgBit(oldp+669,((1U & (~ (IData)((0x1fffffffffeULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    << 1U)))))));
        bufp->chgBit(oldp+670,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT____Vcellout__gfor__BRA__23__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+671,((1U & (IData)((0xffffffffffULL 
                                              & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX)))));
        bufp->chgBit(oldp+672,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                [0x18U])));
        bufp->chgBit(oldp+673,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                      [0x18U] >> 1U))));
        bufp->chgBit(oldp+674,((1U & (~ (IData)((0xffffffffffULL 
                                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX))))));
        bufp->chgBit(oldp+675,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT____Vcellout__gfor__BRA__24__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+676,((1U & (IData)((0x7fffffffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 1U))))));
        bufp->chgBit(oldp+677,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                [0x19U])));
        bufp->chgBit(oldp+678,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                      [0x19U] >> 1U))));
        bufp->chgBit(oldp+679,((1U & (~ (IData)((0x7fffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 1U)))))));
        bufp->chgBit(oldp+680,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT____Vcellout__gfor__BRA__25__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+681,((1U & (IData)((0x3fffffffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 2U))))));
        bufp->chgBit(oldp+682,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                [0x1aU])));
        bufp->chgBit(oldp+683,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                      [0x1aU] >> 1U))));
        bufp->chgBit(oldp+684,((1U & (~ (IData)((0x3fffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 2U)))))));
        bufp->chgBit(oldp+685,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT____Vcellout__gfor__BRA__26__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+686,((1U & (IData)((0x1fffffffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 3U))))));
        bufp->chgBit(oldp+687,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                [0x1bU])));
        bufp->chgBit(oldp+688,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                      [0x1bU] >> 1U))));
        bufp->chgBit(oldp+689,((1U & (~ (IData)((0x1fffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 3U)))))));
        bufp->chgBit(oldp+690,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT____Vcellout__gfor__BRA__27__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+691,((1U & (IData)((0xfffffffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 4U))))));
        bufp->chgBit(oldp+692,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                [0x1cU])));
        bufp->chgBit(oldp+693,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                      [0x1cU] >> 1U))));
        bufp->chgBit(oldp+694,((1U & (~ (IData)((0xfffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 4U)))))));
        bufp->chgBit(oldp+695,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT____Vcellout__gfor__BRA__28__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+696,((1U & (IData)((0x7ffffffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 5U))))));
        bufp->chgBit(oldp+697,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                [0x1dU])));
        bufp->chgBit(oldp+698,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                      [0x1dU] >> 1U))));
        bufp->chgBit(oldp+699,((1U & (~ (IData)((0x7ffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 5U)))))));
        bufp->chgBit(oldp+700,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT____Vcellout__gfor__BRA__29__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+701,((1U & (IData)((0x3fffffffffc00000ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 << 0x16U))))));
        bufp->chgBit(oldp+702,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                [2U])));
        bufp->chgBit(oldp+703,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                      [2U] >> 1U))));
        bufp->chgBit(oldp+704,((1U & (~ (IData)((0x3fffffffffc00000ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    << 0x16U)))))));
        bufp->chgBit(oldp+705,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT____Vcellout__gfor__BRA__2__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+706,((1U & (IData)((0x3ffffffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 6U))))));
        bufp->chgBit(oldp+707,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                [0x1eU])));
        bufp->chgBit(oldp+708,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                      [0x1eU] >> 1U))));
        bufp->chgBit(oldp+709,((1U & (~ (IData)((0x3ffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 6U)))))));
        bufp->chgBit(oldp+710,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT____Vcellout__gfor__BRA__30__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+711,((1U & (IData)((0x1ffffffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 7U))))));
        bufp->chgBit(oldp+712,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                [0x1fU])));
        bufp->chgBit(oldp+713,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                      [0x1fU] >> 1U))));
        bufp->chgBit(oldp+714,((1U & (~ (IData)((0x1ffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 7U)))))));
        bufp->chgBit(oldp+715,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT____Vcellout__gfor__BRA__31__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+716,((1U & (IData)((0xffffffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 8U))))));
        bufp->chgBit(oldp+717,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                [0x20U])));
        bufp->chgBit(oldp+718,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                      [0x20U] >> 1U))));
        bufp->chgBit(oldp+719,((1U & (~ (IData)((0xffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 8U)))))));
        bufp->chgBit(oldp+720,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT____Vcellout__gfor__BRA__32__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+721,((1U & (IData)((0x7fffffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 9U))))));
        bufp->chgBit(oldp+722,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                [0x21U])));
        bufp->chgBit(oldp+723,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                      [0x21U] >> 1U))));
        bufp->chgBit(oldp+724,((1U & (~ (IData)((0x7fffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 9U)))))));
        bufp->chgBit(oldp+725,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT____Vcellout__gfor__BRA__33__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+726,((1U & (IData)((0x3fffffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0xaU))))));
        bufp->chgBit(oldp+727,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                [0x22U])));
        bufp->chgBit(oldp+728,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                      [0x22U] >> 1U))));
        bufp->chgBit(oldp+729,((1U & (~ (IData)((0x3fffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0xaU)))))));
        bufp->chgBit(oldp+730,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT____Vcellout__gfor__BRA__34__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+731,((1U & (IData)((0x1fffffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0xbU))))));
        bufp->chgBit(oldp+732,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                [0x23U])));
        bufp->chgBit(oldp+733,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                      [0x23U] >> 1U))));
        bufp->chgBit(oldp+734,((1U & (~ (IData)((0x1fffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0xbU)))))));
        bufp->chgBit(oldp+735,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT____Vcellout__gfor__BRA__35__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+736,((1U & (IData)((0xfffffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0xcU))))));
        bufp->chgBit(oldp+737,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                [0x24U])));
        bufp->chgBit(oldp+738,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                      [0x24U] >> 1U))));
        bufp->chgBit(oldp+739,((1U & (~ (IData)((0xfffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0xcU)))))));
        bufp->chgBit(oldp+740,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT____Vcellout__gfor__BRA__36__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+741,((1U & (IData)((0x7ffffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0xdU))))));
        bufp->chgBit(oldp+742,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                [0x25U])));
        bufp->chgBit(oldp+743,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                      [0x25U] >> 1U))));
        bufp->chgBit(oldp+744,((1U & (~ (IData)((0x7ffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0xdU)))))));
        bufp->chgBit(oldp+745,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT____Vcellout__gfor__BRA__37__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+746,((1U & (IData)((0x3ffffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0xeU))))));
        bufp->chgBit(oldp+747,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                [0x26U])));
        bufp->chgBit(oldp+748,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                      [0x26U] >> 1U))));
        bufp->chgBit(oldp+749,((1U & (~ (IData)((0x3ffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0xeU)))))));
        bufp->chgBit(oldp+750,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT____Vcellout__gfor__BRA__38__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+751,((1U & (IData)((0x1ffffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0xfU))))));
        bufp->chgBit(oldp+752,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                [0x27U])));
        bufp->chgBit(oldp+753,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                      [0x27U] >> 1U))));
        bufp->chgBit(oldp+754,((1U & (~ (IData)((0x1ffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0xfU)))))));
        bufp->chgBit(oldp+755,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT____Vcellout__gfor__BRA__39__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+756,((1U & (IData)((0x1fffffffffe00000ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 << 0x15U))))));
        bufp->chgBit(oldp+757,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                [3U])));
        bufp->chgBit(oldp+758,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                      [3U] >> 1U))));
        bufp->chgBit(oldp+759,((1U & (~ (IData)((0x1fffffffffe00000ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    << 0x15U)))))));
        bufp->chgBit(oldp+760,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT____Vcellout__gfor__BRA__3__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+761,((1U & (IData)((0xffffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x10U))))));
        bufp->chgBit(oldp+762,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                [0x28U])));
        bufp->chgBit(oldp+763,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                      [0x28U] >> 1U))));
        bufp->chgBit(oldp+764,((1U & (~ (IData)((0xffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x10U)))))));
        bufp->chgBit(oldp+765,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT____Vcellout__gfor__BRA__40__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+766,((1U & (IData)((0x7fffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x11U))))));
        bufp->chgBit(oldp+767,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                [0x29U])));
        bufp->chgBit(oldp+768,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                      [0x29U] >> 1U))));
        bufp->chgBit(oldp+769,((1U & (~ (IData)((0x7fffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x11U)))))));
        bufp->chgBit(oldp+770,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT____Vcellout__gfor__BRA__41__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+771,((1U & (IData)((0x3fffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x12U))))));
        bufp->chgBit(oldp+772,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                [0x2aU])));
        bufp->chgBit(oldp+773,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                      [0x2aU] >> 1U))));
        bufp->chgBit(oldp+774,((1U & (~ (IData)((0x3fffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x12U)))))));
        bufp->chgBit(oldp+775,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT____Vcellout__gfor__BRA__42__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+776,((1U & (IData)((0x1fffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x13U))))));
        bufp->chgBit(oldp+777,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                [0x2bU])));
        bufp->chgBit(oldp+778,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                      [0x2bU] >> 1U))));
        bufp->chgBit(oldp+779,((1U & (~ (IData)((0x1fffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x13U)))))));
        bufp->chgBit(oldp+780,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT____Vcellout__gfor__BRA__43__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+781,((1U & (IData)((0xfffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x14U))))));
        bufp->chgBit(oldp+782,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                [0x2cU])));
        bufp->chgBit(oldp+783,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                      [0x2cU] >> 1U))));
        bufp->chgBit(oldp+784,((1U & (~ (IData)((0xfffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x14U)))))));
        bufp->chgBit(oldp+785,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT____Vcellout__gfor__BRA__44__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+786,((1U & (IData)((0x7ffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x15U))))));
        bufp->chgBit(oldp+787,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                [0x2dU])));
        bufp->chgBit(oldp+788,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                      [0x2dU] >> 1U))));
        bufp->chgBit(oldp+789,((1U & (~ (IData)((0x7ffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x15U)))))));
        bufp->chgBit(oldp+790,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT____Vcellout__gfor__BRA__45__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+791,((1U & (IData)((0x3ffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x16U))))));
        bufp->chgBit(oldp+792,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                [0x2eU])));
        bufp->chgBit(oldp+793,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                      [0x2eU] >> 1U))));
        bufp->chgBit(oldp+794,((1U & (~ (IData)((0x3ffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x16U)))))));
        bufp->chgBit(oldp+795,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT____Vcellout__gfor__BRA__46__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+796,((1U & (IData)((0x1ffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x17U))))));
        bufp->chgBit(oldp+797,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                [0x2fU])));
        bufp->chgBit(oldp+798,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                      [0x2fU] >> 1U))));
        bufp->chgBit(oldp+799,((1U & (~ (IData)((0x1ffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x17U)))))));
        bufp->chgBit(oldp+800,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT____Vcellout__gfor__BRA__47__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+801,((1U & (IData)((0xffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x18U))))));
        bufp->chgBit(oldp+802,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                [0x30U])));
        bufp->chgBit(oldp+803,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                      [0x30U] >> 1U))));
        bufp->chgBit(oldp+804,((1U & (~ (IData)((0xffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x18U)))))));
        bufp->chgBit(oldp+805,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT____Vcellout__gfor__BRA__48__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+806,((1U & (IData)((0x7fffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x19U))))));
        bufp->chgBit(oldp+807,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                [0x31U])));
        bufp->chgBit(oldp+808,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                      [0x31U] >> 1U))));
        bufp->chgBit(oldp+809,((1U & (~ (IData)((0x7fffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x19U)))))));
        bufp->chgBit(oldp+810,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT____Vcellout__gfor__BRA__49__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+811,((1U & (IData)((0xffffffffff00000ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 << 0x14U))))));
        bufp->chgBit(oldp+812,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                [4U])));
        bufp->chgBit(oldp+813,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                      [4U] >> 1U))));
        bufp->chgBit(oldp+814,((1U & (~ (IData)((0xffffffffff00000ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    << 0x14U)))))));
        bufp->chgBit(oldp+815,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT____Vcellout__gfor__BRA__4__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+816,((1U & (IData)((0x3fffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x1aU))))));
        bufp->chgBit(oldp+817,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                [0x32U])));
        bufp->chgBit(oldp+818,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                      [0x32U] >> 1U))));
        bufp->chgBit(oldp+819,((1U & (~ (IData)((0x3fffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x1aU)))))));
        bufp->chgBit(oldp+820,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT____Vcellout__gfor__BRA__50__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+821,((1U & (IData)((0x1fffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x1bU))))));
        bufp->chgBit(oldp+822,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                [0x33U])));
        bufp->chgBit(oldp+823,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                      [0x33U] >> 1U))));
        bufp->chgBit(oldp+824,((1U & (~ (IData)((0x1fffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x1bU)))))));
        bufp->chgBit(oldp+825,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT____Vcellout__gfor__BRA__51__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+826,((1U & (IData)((0xfffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x1cU))))));
        bufp->chgBit(oldp+827,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                [0x34U])));
        bufp->chgBit(oldp+828,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                      [0x34U] >> 1U))));
        bufp->chgBit(oldp+829,((1U & (~ (IData)((0xfffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x1cU)))))));
        bufp->chgBit(oldp+830,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT____Vcellout__gfor__BRA__52__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+831,((1U & (IData)((0x7ffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x1dU))))));
        bufp->chgBit(oldp+832,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                [0x35U])));
        bufp->chgBit(oldp+833,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                      [0x35U] >> 1U))));
        bufp->chgBit(oldp+834,((1U & (~ (IData)((0x7ffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x1dU)))))));
        bufp->chgBit(oldp+835,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT____Vcellout__gfor__BRA__53__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+836,((1U & (IData)((0x3ffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x1eU))))));
        bufp->chgBit(oldp+837,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                [0x36U])));
        bufp->chgBit(oldp+838,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                      [0x36U] >> 1U))));
        bufp->chgBit(oldp+839,((1U & (~ (IData)((0x3ffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x1eU)))))));
        bufp->chgBit(oldp+840,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT____Vcellout__gfor__BRA__54__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+841,((1U & (IData)((0x1ffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x1fU))))));
        bufp->chgBit(oldp+842,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                [0x37U])));
        bufp->chgBit(oldp+843,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                      [0x37U] >> 1U))));
        bufp->chgBit(oldp+844,((1U & (~ (IData)((0x1ffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x1fU)))))));
        bufp->chgBit(oldp+845,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT____Vcellout__gfor__BRA__55__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+846,((1U & (IData)((0xffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x20U))))));
        bufp->chgBit(oldp+847,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                [0x38U])));
        bufp->chgBit(oldp+848,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                      [0x38U] >> 1U))));
        bufp->chgBit(oldp+849,((1U & (~ (IData)((0xffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x20U)))))));
        bufp->chgBit(oldp+850,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT____Vcellout__gfor__BRA__56__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+851,((1U & (IData)((0x7fULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x21U))))));
        bufp->chgBit(oldp+852,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                [0x39U])));
        bufp->chgBit(oldp+853,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                      [0x39U] >> 1U))));
        bufp->chgBit(oldp+854,((1U & (~ (IData)((0x7fULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x21U)))))));
        bufp->chgBit(oldp+855,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT____Vcellout__gfor__BRA__57__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+856,((1U & (IData)((0x3fULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x22U))))));
        bufp->chgBit(oldp+857,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                [0x3aU])));
        bufp->chgBit(oldp+858,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                      [0x3aU] >> 1U))));
        bufp->chgBit(oldp+859,((1U & (~ (IData)((0x3fULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x22U)))))));
        bufp->chgBit(oldp+860,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT____Vcellout__gfor__BRA__58__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+861,((1U & (IData)((0x1fULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x23U))))));
        bufp->chgBit(oldp+862,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                [0x3bU])));
        bufp->chgBit(oldp+863,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                      [0x3bU] >> 1U))));
        bufp->chgBit(oldp+864,((1U & (~ (IData)((0x1fULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x23U)))))));
        bufp->chgBit(oldp+865,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT____Vcellout__gfor__BRA__59__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+866,((1U & (IData)((0x7fffffffff80000ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 << 0x13U))))));
        bufp->chgBit(oldp+867,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                [5U])));
        bufp->chgBit(oldp+868,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                      [5U] >> 1U))));
        bufp->chgBit(oldp+869,((1U & (~ (IData)((0x7fffffffff80000ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    << 0x13U)))))));
        bufp->chgBit(oldp+870,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT____Vcellout__gfor__BRA__5__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+871,((1U & (IData)((0xfULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x24U))))));
        bufp->chgBit(oldp+872,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                [0x3cU])));
        bufp->chgBit(oldp+873,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                      [0x3cU] >> 1U))));
        bufp->chgBit(oldp+874,((1U & (~ (IData)((0xfULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x24U)))))));
        bufp->chgBit(oldp+875,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT____Vcellout__gfor__BRA__60__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+876,((1U & (IData)((7ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x25U))))));
        bufp->chgBit(oldp+877,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                [0x3dU])));
        bufp->chgBit(oldp+878,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                      [0x3dU] >> 1U))));
        bufp->chgBit(oldp+879,((1U & (~ (IData)((7ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x25U)))))));
        bufp->chgBit(oldp+880,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT____Vcellout__gfor__BRA__61__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+881,((1U & (IData)((3ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x26U))))));
        bufp->chgBit(oldp+882,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                [0x3eU])));
        bufp->chgBit(oldp+883,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                      [0x3eU] >> 1U))));
        bufp->chgBit(oldp+884,((1U & (~ (IData)((3ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x26U)))))));
        bufp->chgBit(oldp+885,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT____Vcellout__gfor__BRA__62__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+886,((1U & (IData)((1ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x27U))))));
        bufp->chgBit(oldp+887,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                [0x3fU])));
        bufp->chgBit(oldp+888,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                      [0x3fU] >> 1U))));
        bufp->chgBit(oldp+889,((1U & (~ (IData)((1ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x27U)))))));
        bufp->chgBit(oldp+890,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT____Vcellout__gfor__BRA__63__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+891,((1U & (IData)((0x3fffffffffc0000ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 << 0x12U))))));
        bufp->chgBit(oldp+892,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                [6U])));
        bufp->chgBit(oldp+893,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                      [6U] >> 1U))));
        bufp->chgBit(oldp+894,((1U & (~ (IData)((0x3fffffffffc0000ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    << 0x12U)))))));
        bufp->chgBit(oldp+895,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT____Vcellout__gfor__BRA__6__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+896,((1U & (IData)((0x1fffffffffe0000ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 << 0x11U))))));
        bufp->chgBit(oldp+897,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                [7U])));
        bufp->chgBit(oldp+898,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                      [7U] >> 1U))));
        bufp->chgBit(oldp+899,((1U & (~ (IData)((0x1fffffffffe0000ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    << 0x11U)))))));
        bufp->chgBit(oldp+900,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT____Vcellout__gfor__BRA__7__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+901,((1U & (IData)((0xffffffffff0000ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 << 0x10U))))));
        bufp->chgBit(oldp+902,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                [8U])));
        bufp->chgBit(oldp+903,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                      [8U] >> 1U))));
        bufp->chgBit(oldp+904,((1U & (~ (IData)((0xffffffffff0000ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    << 0x10U)))))));
        bufp->chgBit(oldp+905,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT____Vcellout__gfor__BRA__8__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+906,((1U & (IData)((0x7fffffffff8000ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 << 0xfU))))));
        bufp->chgBit(oldp+907,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                [9U])));
        bufp->chgBit(oldp+908,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                      [9U] >> 1U))));
        bufp->chgBit(oldp+909,((1U & (~ (IData)((0x7fffffffff8000ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    << 0xfU)))))));
        bufp->chgBit(oldp+910,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT____Vcellout__gfor__BRA__9__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+911,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                              >> 0x19U)))));
        bufp->chgBit(oldp+912,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                              >> 0x18U)))));
        bufp->chgCData(oldp+913,((7U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                >> 0x19U)))),3);
        bufp->chgQData(oldp+914,((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                  << 0x1aU)),64);
        bufp->chgQData(oldp+916,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellout__boothfor__BRA__26__KET____DOT__ai__OutX),64);
        bufp->chgBit(oldp+918,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__neg2x) 
                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__negx))));
        bufp->chgBit(oldp+919,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__negx));
        bufp->chgBit(oldp+920,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__x));
        bufp->chgBit(oldp+921,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__neg2x));
        bufp->chgBit(oldp+922,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT____Vcellout__fir__OutX));
        bufp->chgBit(oldp+923,((1U & (IData)((0x3fffffffff0000ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 << 0x10U))))));
        bufp->chgBit(oldp+924,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                [0xaU])));
        bufp->chgBit(oldp+925,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                      [0xaU] >> 1U))));
        bufp->chgBit(oldp+926,((1U & (~ (IData)((0x3fffffffff0000ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    << 0x10U)))))));
        bufp->chgBit(oldp+927,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT____Vcellout__gfor__BRA__10__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+928,((1U & (IData)((0x1fffffffff8000ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 << 0xfU))))));
        bufp->chgBit(oldp+929,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                [0xbU])));
        bufp->chgBit(oldp+930,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                      [0xbU] >> 1U))));
        bufp->chgBit(oldp+931,((1U & (~ (IData)((0x1fffffffff8000ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    << 0xfU)))))));
        bufp->chgBit(oldp+932,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT____Vcellout__gfor__BRA__11__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+933,((1U & (IData)((0xfffffffffc000ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 << 0xeU))))));
        bufp->chgBit(oldp+934,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                [0xcU])));
        bufp->chgBit(oldp+935,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                      [0xcU] >> 1U))));
        bufp->chgBit(oldp+936,((1U & (~ (IData)((0xfffffffffc000ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    << 0xeU)))))));
        bufp->chgBit(oldp+937,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT____Vcellout__gfor__BRA__12__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+938,((1U & (IData)((0x7ffffffffe000ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 << 0xdU))))));
        bufp->chgBit(oldp+939,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                [0xdU])));
        bufp->chgBit(oldp+940,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                      [0xdU] >> 1U))));
        bufp->chgBit(oldp+941,((1U & (~ (IData)((0x7ffffffffe000ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    << 0xdU)))))));
        bufp->chgBit(oldp+942,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT____Vcellout__gfor__BRA__13__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+943,((1U & (IData)((0x3fffffffff000ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 << 0xcU))))));
        bufp->chgBit(oldp+944,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                [0xeU])));
        bufp->chgBit(oldp+945,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                      [0xeU] >> 1U))));
        bufp->chgBit(oldp+946,((1U & (~ (IData)((0x3fffffffff000ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    << 0xcU)))))));
        bufp->chgBit(oldp+947,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT____Vcellout__gfor__BRA__14__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+948,((1U & (IData)((0x1fffffffff800ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 << 0xbU))))));
        bufp->chgBit(oldp+949,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                [0xfU])));
        bufp->chgBit(oldp+950,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                      [0xfU] >> 1U))));
        bufp->chgBit(oldp+951,((1U & (~ (IData)((0x1fffffffff800ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    << 0xbU)))))));
        bufp->chgBit(oldp+952,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT____Vcellout__gfor__BRA__15__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+953,((1U & (IData)((0xfffffffffc00ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 << 0xaU))))));
        bufp->chgBit(oldp+954,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                [0x10U])));
        bufp->chgBit(oldp+955,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                      [0x10U] >> 1U))));
        bufp->chgBit(oldp+956,((1U & (~ (IData)((0xfffffffffc00ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    << 0xaU)))))));
        bufp->chgBit(oldp+957,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT____Vcellout__gfor__BRA__16__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+958,((1U & (IData)((0x7ffffffffe00ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 << 9U))))));
        bufp->chgBit(oldp+959,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                [0x11U])));
        bufp->chgBit(oldp+960,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                      [0x11U] >> 1U))));
        bufp->chgBit(oldp+961,((1U & (~ (IData)((0x7ffffffffe00ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    << 9U)))))));
        bufp->chgBit(oldp+962,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT____Vcellout__gfor__BRA__17__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+963,((1U & (IData)((0x3fffffffff00ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 << 8U))))));
        bufp->chgBit(oldp+964,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                [0x12U])));
        bufp->chgBit(oldp+965,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                      [0x12U] >> 1U))));
        bufp->chgBit(oldp+966,((1U & (~ (IData)((0x3fffffffff00ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    << 8U)))))));
        bufp->chgBit(oldp+967,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT____Vcellout__gfor__BRA__18__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+968,((1U & (IData)((0x1fffffffff80ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 << 7U))))));
        bufp->chgBit(oldp+969,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                [0x13U])));
        bufp->chgBit(oldp+970,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                      [0x13U] >> 1U))));
        bufp->chgBit(oldp+971,((1U & (~ (IData)((0x1fffffffff80ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    << 7U)))))));
        bufp->chgBit(oldp+972,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT____Vcellout__gfor__BRA__19__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+973,((1U & (IData)((0x7ffffffffe000000ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 << 0x19U))))));
        bufp->chgBit(oldp+974,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                [1U])));
        bufp->chgBit(oldp+975,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                      [1U] >> 1U))));
        bufp->chgBit(oldp+976,((1U & (~ (IData)((0x7ffffffffe000000ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    << 0x19U)))))));
        bufp->chgBit(oldp+977,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT____Vcellout__gfor__BRA__1__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+978,((1U & (IData)((0xfffffffffc0ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 << 6U))))));
        bufp->chgBit(oldp+979,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                [0x14U])));
        bufp->chgBit(oldp+980,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                      [0x14U] >> 1U))));
        bufp->chgBit(oldp+981,((1U & (~ (IData)((0xfffffffffc0ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    << 6U)))))));
        bufp->chgBit(oldp+982,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT____Vcellout__gfor__BRA__20__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+983,((1U & (IData)((0x7ffffffffe0ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 << 5U))))));
        bufp->chgBit(oldp+984,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                [0x15U])));
        bufp->chgBit(oldp+985,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                      [0x15U] >> 1U))));
        bufp->chgBit(oldp+986,((1U & (~ (IData)((0x7ffffffffe0ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    << 5U)))))));
        bufp->chgBit(oldp+987,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT____Vcellout__gfor__BRA__21__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+988,((1U & (IData)((0x3fffffffff0ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 << 4U))))));
        bufp->chgBit(oldp+989,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                [0x16U])));
        bufp->chgBit(oldp+990,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                      [0x16U] >> 1U))));
        bufp->chgBit(oldp+991,((1U & (~ (IData)((0x3fffffffff0ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    << 4U)))))));
        bufp->chgBit(oldp+992,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT____Vcellout__gfor__BRA__22__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+993,((1U & (IData)((0x1fffffffff8ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 << 3U))))));
        bufp->chgBit(oldp+994,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                [0x17U])));
        bufp->chgBit(oldp+995,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                      [0x17U] >> 1U))));
        bufp->chgBit(oldp+996,((1U & (~ (IData)((0x1fffffffff8ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    << 3U)))))));
        bufp->chgBit(oldp+997,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT____Vcellout__gfor__BRA__23__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+998,((1U & (IData)((0xfffffffffcULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 << 2U))))));
        bufp->chgBit(oldp+999,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                [0x18U])));
        bufp->chgBit(oldp+1000,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                       [0x18U] >> 1U))));
        bufp->chgBit(oldp+1001,((1U & (~ (IData)((0xfffffffffcULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 2U)))))));
        bufp->chgBit(oldp+1002,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT____Vcellout__gfor__BRA__24__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+1003,((1U & (IData)((0x7ffffffffeULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  << 1U))))));
        bufp->chgBit(oldp+1004,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                 [0x19U])));
        bufp->chgBit(oldp+1005,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                       [0x19U] >> 1U))));
        bufp->chgBit(oldp+1006,((1U & (~ (IData)((0x7ffffffffeULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 1U)))))));
        bufp->chgBit(oldp+1007,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT____Vcellout__gfor__BRA__25__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+1008,((1U & (IData)((0x3fffffffffULL 
                                               & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX)))));
        bufp->chgBit(oldp+1009,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                 [0x1aU])));
        bufp->chgBit(oldp+1010,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                       [0x1aU] >> 1U))));
        bufp->chgBit(oldp+1011,((1U & (~ (IData)((0x3fffffffffULL 
                                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX))))));
        bufp->chgBit(oldp+1012,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT____Vcellout__gfor__BRA__26__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+1013,((1U & (IData)((0x1fffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 1U))))));
        bufp->chgBit(oldp+1014,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                 [0x1bU])));
        bufp->chgBit(oldp+1015,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                       [0x1bU] >> 1U))));
        bufp->chgBit(oldp+1016,((1U & (~ (IData)((0x1fffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 1U)))))));
        bufp->chgBit(oldp+1017,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT____Vcellout__gfor__BRA__27__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+1018,((1U & (IData)((0xfffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 2U))))));
        bufp->chgBit(oldp+1019,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                 [0x1cU])));
        bufp->chgBit(oldp+1020,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                       [0x1cU] >> 1U))));
        bufp->chgBit(oldp+1021,((1U & (~ (IData)((0xfffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 2U)))))));
        bufp->chgBit(oldp+1022,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT____Vcellout__gfor__BRA__28__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+1023,((1U & (IData)((0x7ffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 3U))))));
        bufp->chgBit(oldp+1024,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                 [0x1dU])));
        bufp->chgBit(oldp+1025,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                       [0x1dU] >> 1U))));
        bufp->chgBit(oldp+1026,((1U & (~ (IData)((0x7ffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 3U)))))));
        bufp->chgBit(oldp+1027,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT____Vcellout__gfor__BRA__29__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+1028,((1U & (IData)((0x3fffffffff000000ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  << 0x18U))))));
        bufp->chgBit(oldp+1029,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                 [2U])));
        bufp->chgBit(oldp+1030,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                       [2U] >> 1U))));
        bufp->chgBit(oldp+1031,((1U & (~ (IData)((0x3fffffffff000000ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0x18U)))))));
        bufp->chgBit(oldp+1032,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT____Vcellout__gfor__BRA__2__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+1033,((1U & (IData)((0x3ffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 4U))))));
        bufp->chgBit(oldp+1034,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                 [0x1eU])));
        bufp->chgBit(oldp+1035,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                       [0x1eU] >> 1U))));
        bufp->chgBit(oldp+1036,((1U & (~ (IData)((0x3ffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 4U)))))));
        bufp->chgBit(oldp+1037,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT____Vcellout__gfor__BRA__30__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+1038,((1U & (IData)((0x1ffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 5U))))));
        bufp->chgBit(oldp+1039,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                 [0x1fU])));
        bufp->chgBit(oldp+1040,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                       [0x1fU] >> 1U))));
        bufp->chgBit(oldp+1041,((1U & (~ (IData)((0x1ffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 5U)))))));
        bufp->chgBit(oldp+1042,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT____Vcellout__gfor__BRA__31__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+1043,((1U & (IData)((0xffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 6U))))));
        bufp->chgBit(oldp+1044,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                 [0x20U])));
        bufp->chgBit(oldp+1045,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                       [0x20U] >> 1U))));
        bufp->chgBit(oldp+1046,((1U & (~ (IData)((0xffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 6U)))))));
        bufp->chgBit(oldp+1047,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT____Vcellout__gfor__BRA__32__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+1048,((1U & (IData)((0x7fffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 7U))))));
        bufp->chgBit(oldp+1049,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                 [0x21U])));
        bufp->chgBit(oldp+1050,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                       [0x21U] >> 1U))));
        bufp->chgBit(oldp+1051,((1U & (~ (IData)((0x7fffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 7U)))))));
        bufp->chgBit(oldp+1052,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT____Vcellout__gfor__BRA__33__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+1053,((1U & (IData)((0x3fffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 8U))))));
        bufp->chgBit(oldp+1054,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                 [0x22U])));
        bufp->chgBit(oldp+1055,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                       [0x22U] >> 1U))));
        bufp->chgBit(oldp+1056,((1U & (~ (IData)((0x3fffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 8U)))))));
        bufp->chgBit(oldp+1057,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT____Vcellout__gfor__BRA__34__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+1058,((1U & (IData)((0x1fffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 9U))))));
        bufp->chgBit(oldp+1059,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                 [0x23U])));
        bufp->chgBit(oldp+1060,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                       [0x23U] >> 1U))));
        bufp->chgBit(oldp+1061,((1U & (~ (IData)((0x1fffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 9U)))))));
        bufp->chgBit(oldp+1062,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT____Vcellout__gfor__BRA__35__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+1063,((1U & (IData)((0xfffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0xaU))))));
        bufp->chgBit(oldp+1064,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                 [0x24U])));
        bufp->chgBit(oldp+1065,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                       [0x24U] >> 1U))));
        bufp->chgBit(oldp+1066,((1U & (~ (IData)((0xfffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0xaU)))))));
        bufp->chgBit(oldp+1067,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT____Vcellout__gfor__BRA__36__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+1068,((1U & (IData)((0x7ffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0xbU))))));
        bufp->chgBit(oldp+1069,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                 [0x25U])));
        bufp->chgBit(oldp+1070,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                       [0x25U] >> 1U))));
        bufp->chgBit(oldp+1071,((1U & (~ (IData)((0x7ffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0xbU)))))));
        bufp->chgBit(oldp+1072,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT____Vcellout__gfor__BRA__37__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+1073,((1U & (IData)((0x3ffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0xcU))))));
        bufp->chgBit(oldp+1074,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                 [0x26U])));
        bufp->chgBit(oldp+1075,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                       [0x26U] >> 1U))));
        bufp->chgBit(oldp+1076,((1U & (~ (IData)((0x3ffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0xcU)))))));
        bufp->chgBit(oldp+1077,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT____Vcellout__gfor__BRA__38__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+1078,((1U & (IData)((0x1ffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0xdU))))));
        bufp->chgBit(oldp+1079,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                 [0x27U])));
        bufp->chgBit(oldp+1080,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                       [0x27U] >> 1U))));
        bufp->chgBit(oldp+1081,((1U & (~ (IData)((0x1ffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0xdU)))))));
        bufp->chgBit(oldp+1082,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT____Vcellout__gfor__BRA__39__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+1083,((1U & (IData)((0x1fffffffff800000ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  << 0x17U))))));
        bufp->chgBit(oldp+1084,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                 [3U])));
        bufp->chgBit(oldp+1085,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                       [3U] >> 1U))));
        bufp->chgBit(oldp+1086,((1U & (~ (IData)((0x1fffffffff800000ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0x17U)))))));
        bufp->chgBit(oldp+1087,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT____Vcellout__gfor__BRA__3__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+1088,((1U & (IData)((0xffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0xeU))))));
        bufp->chgBit(oldp+1089,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                 [0x28U])));
        bufp->chgBit(oldp+1090,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                       [0x28U] >> 1U))));
        bufp->chgBit(oldp+1091,((1U & (~ (IData)((0xffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0xeU)))))));
        bufp->chgBit(oldp+1092,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT____Vcellout__gfor__BRA__40__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+1093,((1U & (IData)((0x7fffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0xfU))))));
        bufp->chgBit(oldp+1094,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                 [0x29U])));
        bufp->chgBit(oldp+1095,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                       [0x29U] >> 1U))));
        bufp->chgBit(oldp+1096,((1U & (~ (IData)((0x7fffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0xfU)))))));
        bufp->chgBit(oldp+1097,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT____Vcellout__gfor__BRA__41__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+1098,((1U & (IData)((0x3fffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x10U))))));
        bufp->chgBit(oldp+1099,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                 [0x2aU])));
        bufp->chgBit(oldp+1100,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                       [0x2aU] >> 1U))));
        bufp->chgBit(oldp+1101,((1U & (~ (IData)((0x3fffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x10U)))))));
        bufp->chgBit(oldp+1102,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT____Vcellout__gfor__BRA__42__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+1103,((1U & (IData)((0x1fffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x11U))))));
        bufp->chgBit(oldp+1104,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                 [0x2bU])));
        bufp->chgBit(oldp+1105,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                       [0x2bU] >> 1U))));
        bufp->chgBit(oldp+1106,((1U & (~ (IData)((0x1fffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x11U)))))));
        bufp->chgBit(oldp+1107,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT____Vcellout__gfor__BRA__43__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+1108,((1U & (IData)((0xfffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x12U))))));
        bufp->chgBit(oldp+1109,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                 [0x2cU])));
        bufp->chgBit(oldp+1110,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                       [0x2cU] >> 1U))));
        bufp->chgBit(oldp+1111,((1U & (~ (IData)((0xfffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x12U)))))));
        bufp->chgBit(oldp+1112,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT____Vcellout__gfor__BRA__44__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+1113,((1U & (IData)((0x7ffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x13U))))));
        bufp->chgBit(oldp+1114,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                 [0x2dU])));
        bufp->chgBit(oldp+1115,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                       [0x2dU] >> 1U))));
        bufp->chgBit(oldp+1116,((1U & (~ (IData)((0x7ffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x13U)))))));
        bufp->chgBit(oldp+1117,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT____Vcellout__gfor__BRA__45__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+1118,((1U & (IData)((0x3ffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x14U))))));
        bufp->chgBit(oldp+1119,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                 [0x2eU])));
        bufp->chgBit(oldp+1120,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                       [0x2eU] >> 1U))));
        bufp->chgBit(oldp+1121,((1U & (~ (IData)((0x3ffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x14U)))))));
        bufp->chgBit(oldp+1122,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT____Vcellout__gfor__BRA__46__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+1123,((1U & (IData)((0x1ffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x15U))))));
        bufp->chgBit(oldp+1124,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                 [0x2fU])));
        bufp->chgBit(oldp+1125,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                       [0x2fU] >> 1U))));
        bufp->chgBit(oldp+1126,((1U & (~ (IData)((0x1ffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x15U)))))));
        bufp->chgBit(oldp+1127,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT____Vcellout__gfor__BRA__47__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+1128,((1U & (IData)((0xffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x16U))))));
        bufp->chgBit(oldp+1129,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                 [0x30U])));
        bufp->chgBit(oldp+1130,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                       [0x30U] >> 1U))));
        bufp->chgBit(oldp+1131,((1U & (~ (IData)((0xffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x16U)))))));
        bufp->chgBit(oldp+1132,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT____Vcellout__gfor__BRA__48__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+1133,((1U & (IData)((0x7fffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x17U))))));
        bufp->chgBit(oldp+1134,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                 [0x31U])));
        bufp->chgBit(oldp+1135,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                       [0x31U] >> 1U))));
        bufp->chgBit(oldp+1136,((1U & (~ (IData)((0x7fffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x17U)))))));
        bufp->chgBit(oldp+1137,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT____Vcellout__gfor__BRA__49__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+1138,((1U & (IData)((0xfffffffffc00000ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  << 0x16U))))));
        bufp->chgBit(oldp+1139,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                 [4U])));
        bufp->chgBit(oldp+1140,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                       [4U] >> 1U))));
        bufp->chgBit(oldp+1141,((1U & (~ (IData)((0xfffffffffc00000ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0x16U)))))));
        bufp->chgBit(oldp+1142,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT____Vcellout__gfor__BRA__4__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+1143,((1U & (IData)((0x3fffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x18U))))));
        bufp->chgBit(oldp+1144,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                 [0x32U])));
        bufp->chgBit(oldp+1145,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                       [0x32U] >> 1U))));
        bufp->chgBit(oldp+1146,((1U & (~ (IData)((0x3fffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x18U)))))));
        bufp->chgBit(oldp+1147,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT____Vcellout__gfor__BRA__50__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+1148,((1U & (IData)((0x1fffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x19U))))));
        bufp->chgBit(oldp+1149,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                 [0x33U])));
        bufp->chgBit(oldp+1150,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                       [0x33U] >> 1U))));
        bufp->chgBit(oldp+1151,((1U & (~ (IData)((0x1fffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x19U)))))));
        bufp->chgBit(oldp+1152,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT____Vcellout__gfor__BRA__51__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+1153,((1U & (IData)((0xfffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x1aU))))));
        bufp->chgBit(oldp+1154,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                 [0x34U])));
        bufp->chgBit(oldp+1155,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                       [0x34U] >> 1U))));
        bufp->chgBit(oldp+1156,((1U & (~ (IData)((0xfffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x1aU)))))));
        bufp->chgBit(oldp+1157,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT____Vcellout__gfor__BRA__52__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+1158,((1U & (IData)((0x7ffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x1bU))))));
        bufp->chgBit(oldp+1159,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                 [0x35U])));
        bufp->chgBit(oldp+1160,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                       [0x35U] >> 1U))));
        bufp->chgBit(oldp+1161,((1U & (~ (IData)((0x7ffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x1bU)))))));
        bufp->chgBit(oldp+1162,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT____Vcellout__gfor__BRA__53__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+1163,((1U & (IData)((0x3ffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x1cU))))));
        bufp->chgBit(oldp+1164,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                 [0x36U])));
        bufp->chgBit(oldp+1165,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                       [0x36U] >> 1U))));
        bufp->chgBit(oldp+1166,((1U & (~ (IData)((0x3ffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x1cU)))))));
        bufp->chgBit(oldp+1167,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT____Vcellout__gfor__BRA__54__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+1168,((1U & (IData)((0x1ffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x1dU))))));
        bufp->chgBit(oldp+1169,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                 [0x37U])));
        bufp->chgBit(oldp+1170,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                       [0x37U] >> 1U))));
        bufp->chgBit(oldp+1171,((1U & (~ (IData)((0x1ffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x1dU)))))));
        bufp->chgBit(oldp+1172,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT____Vcellout__gfor__BRA__55__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+1173,((1U & (IData)((0xffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x1eU))))));
        bufp->chgBit(oldp+1174,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                 [0x38U])));
        bufp->chgBit(oldp+1175,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                       [0x38U] >> 1U))));
        bufp->chgBit(oldp+1176,((1U & (~ (IData)((0xffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x1eU)))))));
        bufp->chgBit(oldp+1177,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT____Vcellout__gfor__BRA__56__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+1178,((1U & (IData)((0x7fULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x1fU))))));
        bufp->chgBit(oldp+1179,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                 [0x39U])));
        bufp->chgBit(oldp+1180,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                       [0x39U] >> 1U))));
        bufp->chgBit(oldp+1181,((1U & (~ (IData)((0x7fULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x1fU)))))));
        bufp->chgBit(oldp+1182,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT____Vcellout__gfor__BRA__57__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+1183,((1U & (IData)((0x3fULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x20U))))));
        bufp->chgBit(oldp+1184,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                 [0x3aU])));
        bufp->chgBit(oldp+1185,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                       [0x3aU] >> 1U))));
        bufp->chgBit(oldp+1186,((1U & (~ (IData)((0x3fULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x20U)))))));
        bufp->chgBit(oldp+1187,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT____Vcellout__gfor__BRA__58__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+1188,((1U & (IData)((0x1fULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x21U))))));
        bufp->chgBit(oldp+1189,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                 [0x3bU])));
        bufp->chgBit(oldp+1190,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                       [0x3bU] >> 1U))));
        bufp->chgBit(oldp+1191,((1U & (~ (IData)((0x1fULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x21U)))))));
        bufp->chgBit(oldp+1192,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT____Vcellout__gfor__BRA__59__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+1193,((1U & (IData)((0x7ffffffffe00000ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  << 0x15U))))));
        bufp->chgBit(oldp+1194,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                 [5U])));
        bufp->chgBit(oldp+1195,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                       [5U] >> 1U))));
        bufp->chgBit(oldp+1196,((1U & (~ (IData)((0x7ffffffffe00000ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0x15U)))))));
        bufp->chgBit(oldp+1197,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT____Vcellout__gfor__BRA__5__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+1198,((1U & (IData)((0xfULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x22U))))));
        bufp->chgBit(oldp+1199,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                 [0x3cU])));
        bufp->chgBit(oldp+1200,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                       [0x3cU] >> 1U))));
        bufp->chgBit(oldp+1201,((1U & (~ (IData)((0xfULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x22U)))))));
        bufp->chgBit(oldp+1202,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT____Vcellout__gfor__BRA__60__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+1203,((1U & (IData)((7ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x23U))))));
        bufp->chgBit(oldp+1204,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                 [0x3dU])));
        bufp->chgBit(oldp+1205,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                       [0x3dU] >> 1U))));
        bufp->chgBit(oldp+1206,((1U & (~ (IData)((7ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x23U)))))));
        bufp->chgBit(oldp+1207,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT____Vcellout__gfor__BRA__61__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+1208,((1U & (IData)((3ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x24U))))));
        bufp->chgBit(oldp+1209,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                 [0x3eU])));
        bufp->chgBit(oldp+1210,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                       [0x3eU] >> 1U))));
        bufp->chgBit(oldp+1211,((1U & (~ (IData)((3ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x24U)))))));
        bufp->chgBit(oldp+1212,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT____Vcellout__gfor__BRA__62__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+1213,((1U & (IData)((1ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x25U))))));
        bufp->chgBit(oldp+1214,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                 [0x3fU])));
        bufp->chgBit(oldp+1215,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                       [0x3fU] >> 1U))));
        bufp->chgBit(oldp+1216,((1U & (~ (IData)((1ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x25U)))))));
        bufp->chgBit(oldp+1217,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT____Vcellout__gfor__BRA__63__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+1218,((1U & (IData)((0x3fffffffff00000ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  << 0x14U))))));
        bufp->chgBit(oldp+1219,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                 [6U])));
        bufp->chgBit(oldp+1220,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                       [6U] >> 1U))));
        bufp->chgBit(oldp+1221,((1U & (~ (IData)((0x3fffffffff00000ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0x14U)))))));
        bufp->chgBit(oldp+1222,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT____Vcellout__gfor__BRA__6__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+1223,((1U & (IData)((0x1fffffffff80000ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  << 0x13U))))));
        bufp->chgBit(oldp+1224,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                 [7U])));
        bufp->chgBit(oldp+1225,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                       [7U] >> 1U))));
        bufp->chgBit(oldp+1226,((1U & (~ (IData)((0x1fffffffff80000ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0x13U)))))));
        bufp->chgBit(oldp+1227,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT____Vcellout__gfor__BRA__7__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+1228,((1U & (IData)((0xfffffffffc0000ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  << 0x12U))))));
        bufp->chgBit(oldp+1229,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                 [8U])));
        bufp->chgBit(oldp+1230,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                       [8U] >> 1U))));
        bufp->chgBit(oldp+1231,((1U & (~ (IData)((0xfffffffffc0000ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0x12U)))))));
        bufp->chgBit(oldp+1232,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT____Vcellout__gfor__BRA__8__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+1233,((1U & (IData)((0x7ffffffffe0000ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  << 0x11U))))));
        bufp->chgBit(oldp+1234,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                 [9U])));
        bufp->chgBit(oldp+1235,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                       [9U] >> 1U))));
        bufp->chgBit(oldp+1236,((1U & (~ (IData)((0x7ffffffffe0000ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0x11U)))))));
        bufp->chgBit(oldp+1237,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT____Vcellout__gfor__BRA__9__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+1238,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                               >> 0x1bU)))));
        bufp->chgBit(oldp+1239,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                               >> 0x1aU)))));
        bufp->chgCData(oldp+1240,((7U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                 >> 0x1bU)))),3);
        bufp->chgQData(oldp+1241,((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                   << 0x1cU)),64);
        bufp->chgQData(oldp+1243,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellout__boothfor__BRA__28__KET____DOT__ai__OutX),64);
        bufp->chgBit(oldp+1245,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__neg2x) 
                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__negx))));
        bufp->chgBit(oldp+1246,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__negx));
        bufp->chgBit(oldp+1247,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__x));
        bufp->chgBit(oldp+1248,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__neg2x));
        bufp->chgBit(oldp+1249,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT____Vcellout__fir__OutX));
        bufp->chgBit(oldp+1250,((1U & (IData)((0x3ffffffffc0000ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  << 0x12U))))));
        bufp->chgBit(oldp+1251,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                 [0xaU])));
        bufp->chgBit(oldp+1252,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                       [0xaU] >> 1U))));
        bufp->chgBit(oldp+1253,((1U & (~ (IData)((0x3ffffffffc0000ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0x12U)))))));
        bufp->chgBit(oldp+1254,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT____Vcellout__gfor__BRA__10__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+1255,((1U & (IData)((0x1ffffffffe0000ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  << 0x11U))))));
        bufp->chgBit(oldp+1256,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                 [0xbU])));
        bufp->chgBit(oldp+1257,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                       [0xbU] >> 1U))));
        bufp->chgBit(oldp+1258,((1U & (~ (IData)((0x1ffffffffe0000ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0x11U)))))));
        bufp->chgBit(oldp+1259,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT____Vcellout__gfor__BRA__11__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+1260,((1U & (IData)((0xfffffffff0000ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  << 0x10U))))));
        bufp->chgBit(oldp+1261,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                 [0xcU])));
        bufp->chgBit(oldp+1262,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                       [0xcU] >> 1U))));
        bufp->chgBit(oldp+1263,((1U & (~ (IData)((0xfffffffff0000ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0x10U)))))));
        bufp->chgBit(oldp+1264,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT____Vcellout__gfor__BRA__12__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+1265,((1U & (IData)((0x7ffffffff8000ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  << 0xfU))))));
        bufp->chgBit(oldp+1266,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                 [0xdU])));
        bufp->chgBit(oldp+1267,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                       [0xdU] >> 1U))));
        bufp->chgBit(oldp+1268,((1U & (~ (IData)((0x7ffffffff8000ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0xfU)))))));
        bufp->chgBit(oldp+1269,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT____Vcellout__gfor__BRA__13__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+1270,((1U & (IData)((0x3ffffffffc000ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  << 0xeU))))));
        bufp->chgBit(oldp+1271,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                 [0xeU])));
        bufp->chgBit(oldp+1272,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                       [0xeU] >> 1U))));
        bufp->chgBit(oldp+1273,((1U & (~ (IData)((0x3ffffffffc000ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0xeU)))))));
        bufp->chgBit(oldp+1274,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT____Vcellout__gfor__BRA__14__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+1275,((1U & (IData)((0x1ffffffffe000ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  << 0xdU))))));
        bufp->chgBit(oldp+1276,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                 [0xfU])));
        bufp->chgBit(oldp+1277,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                       [0xfU] >> 1U))));
        bufp->chgBit(oldp+1278,((1U & (~ (IData)((0x1ffffffffe000ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0xdU)))))));
        bufp->chgBit(oldp+1279,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT____Vcellout__gfor__BRA__15__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+1280,((1U & (IData)((0xfffffffff000ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  << 0xcU))))));
        bufp->chgBit(oldp+1281,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                 [0x10U])));
        bufp->chgBit(oldp+1282,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                       [0x10U] >> 1U))));
        bufp->chgBit(oldp+1283,((1U & (~ (IData)((0xfffffffff000ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0xcU)))))));
        bufp->chgBit(oldp+1284,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT____Vcellout__gfor__BRA__16__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+1285,((1U & (IData)((0x7ffffffff800ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  << 0xbU))))));
        bufp->chgBit(oldp+1286,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                 [0x11U])));
        bufp->chgBit(oldp+1287,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                       [0x11U] >> 1U))));
        bufp->chgBit(oldp+1288,((1U & (~ (IData)((0x7ffffffff800ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0xbU)))))));
        bufp->chgBit(oldp+1289,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT____Vcellout__gfor__BRA__17__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+1290,((1U & (IData)((0x3ffffffffc00ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  << 0xaU))))));
        bufp->chgBit(oldp+1291,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                 [0x12U])));
        bufp->chgBit(oldp+1292,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                       [0x12U] >> 1U))));
        bufp->chgBit(oldp+1293,((1U & (~ (IData)((0x3ffffffffc00ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0xaU)))))));
        bufp->chgBit(oldp+1294,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT____Vcellout__gfor__BRA__18__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+1295,((1U & (IData)((0x1ffffffffe00ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  << 9U))))));
        bufp->chgBit(oldp+1296,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                 [0x13U])));
        bufp->chgBit(oldp+1297,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                       [0x13U] >> 1U))));
        bufp->chgBit(oldp+1298,((1U & (~ (IData)((0x1ffffffffe00ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 9U)))))));
        bufp->chgBit(oldp+1299,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT____Vcellout__gfor__BRA__19__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+1300,((1U & (IData)((0x7ffffffff8000000ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  << 0x1bU))))));
        bufp->chgBit(oldp+1301,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                 [1U])));
        bufp->chgBit(oldp+1302,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                       [1U] >> 1U))));
        bufp->chgBit(oldp+1303,((1U & (~ (IData)((0x7ffffffff8000000ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0x1bU)))))));
        bufp->chgBit(oldp+1304,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT____Vcellout__gfor__BRA__1__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+1305,((1U & (IData)((0xfffffffff00ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  << 8U))))));
        bufp->chgBit(oldp+1306,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                 [0x14U])));
        bufp->chgBit(oldp+1307,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                       [0x14U] >> 1U))));
        bufp->chgBit(oldp+1308,((1U & (~ (IData)((0xfffffffff00ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 8U)))))));
        bufp->chgBit(oldp+1309,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT____Vcellout__gfor__BRA__20__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+1310,((1U & (IData)((0x7ffffffff80ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  << 7U))))));
        bufp->chgBit(oldp+1311,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                 [0x15U])));
        bufp->chgBit(oldp+1312,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                       [0x15U] >> 1U))));
        bufp->chgBit(oldp+1313,((1U & (~ (IData)((0x7ffffffff80ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 7U)))))));
        bufp->chgBit(oldp+1314,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT____Vcellout__gfor__BRA__21__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+1315,((1U & (IData)((0x3ffffffffc0ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  << 6U))))));
        bufp->chgBit(oldp+1316,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                 [0x16U])));
        bufp->chgBit(oldp+1317,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                       [0x16U] >> 1U))));
        bufp->chgBit(oldp+1318,((1U & (~ (IData)((0x3ffffffffc0ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 6U)))))));
        bufp->chgBit(oldp+1319,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT____Vcellout__gfor__BRA__22__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+1320,((1U & (IData)((0x1ffffffffe0ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  << 5U))))));
        bufp->chgBit(oldp+1321,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                 [0x17U])));
        bufp->chgBit(oldp+1322,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                       [0x17U] >> 1U))));
        bufp->chgBit(oldp+1323,((1U & (~ (IData)((0x1ffffffffe0ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 5U)))))));
        bufp->chgBit(oldp+1324,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT____Vcellout__gfor__BRA__23__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+1325,((1U & (IData)((0xfffffffff0ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  << 4U))))));
        bufp->chgBit(oldp+1326,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                 [0x18U])));
        bufp->chgBit(oldp+1327,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                       [0x18U] >> 1U))));
        bufp->chgBit(oldp+1328,((1U & (~ (IData)((0xfffffffff0ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 4U)))))));
        bufp->chgBit(oldp+1329,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT____Vcellout__gfor__BRA__24__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+1330,((1U & (IData)((0x7ffffffff8ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  << 3U))))));
        bufp->chgBit(oldp+1331,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                 [0x19U])));
        bufp->chgBit(oldp+1332,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                       [0x19U] >> 1U))));
        bufp->chgBit(oldp+1333,((1U & (~ (IData)((0x7ffffffff8ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 3U)))))));
        bufp->chgBit(oldp+1334,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT____Vcellout__gfor__BRA__25__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+1335,((1U & (IData)((0x3ffffffffcULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  << 2U))))));
        bufp->chgBit(oldp+1336,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                 [0x1aU])));
        bufp->chgBit(oldp+1337,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                       [0x1aU] >> 1U))));
        bufp->chgBit(oldp+1338,((1U & (~ (IData)((0x3ffffffffcULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 2U)))))));
        bufp->chgBit(oldp+1339,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT____Vcellout__gfor__BRA__26__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+1340,((1U & (IData)((0x1ffffffffeULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  << 1U))))));
        bufp->chgBit(oldp+1341,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                 [0x1bU])));
        bufp->chgBit(oldp+1342,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                       [0x1bU] >> 1U))));
        bufp->chgBit(oldp+1343,((1U & (~ (IData)((0x1ffffffffeULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 1U)))))));
        bufp->chgBit(oldp+1344,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT____Vcellout__gfor__BRA__27__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+1345,((1U & (IData)((0xfffffffffULL 
                                               & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX)))));
        bufp->chgBit(oldp+1346,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                 [0x1cU])));
        bufp->chgBit(oldp+1347,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                       [0x1cU] >> 1U))));
        bufp->chgBit(oldp+1348,((1U & (~ (IData)((0xfffffffffULL 
                                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX))))));
        bufp->chgBit(oldp+1349,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT____Vcellout__gfor__BRA__28__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+1350,((1U & (IData)((0x7ffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 1U))))));
        bufp->chgBit(oldp+1351,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                 [0x1dU])));
        bufp->chgBit(oldp+1352,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                       [0x1dU] >> 1U))));
        bufp->chgBit(oldp+1353,((1U & (~ (IData)((0x7ffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 1U)))))));
        bufp->chgBit(oldp+1354,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT____Vcellout__gfor__BRA__29__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+1355,((1U & (IData)((0x3ffffffffc000000ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  << 0x1aU))))));
        bufp->chgBit(oldp+1356,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                 [2U])));
        bufp->chgBit(oldp+1357,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                       [2U] >> 1U))));
        bufp->chgBit(oldp+1358,((1U & (~ (IData)((0x3ffffffffc000000ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0x1aU)))))));
        bufp->chgBit(oldp+1359,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT____Vcellout__gfor__BRA__2__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+1360,((1U & (IData)((0x3ffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 2U))))));
        bufp->chgBit(oldp+1361,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                 [0x1eU])));
        bufp->chgBit(oldp+1362,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                       [0x1eU] >> 1U))));
        bufp->chgBit(oldp+1363,((1U & (~ (IData)((0x3ffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 2U)))))));
        bufp->chgBit(oldp+1364,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT____Vcellout__gfor__BRA__30__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+1365,((1U & (IData)((0x1ffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 3U))))));
        bufp->chgBit(oldp+1366,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                 [0x1fU])));
        bufp->chgBit(oldp+1367,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                       [0x1fU] >> 1U))));
        bufp->chgBit(oldp+1368,((1U & (~ (IData)((0x1ffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 3U)))))));
        bufp->chgBit(oldp+1369,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT____Vcellout__gfor__BRA__31__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+1370,((1U & (IData)((0xffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 4U))))));
        bufp->chgBit(oldp+1371,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                 [0x20U])));
        bufp->chgBit(oldp+1372,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                       [0x20U] >> 1U))));
        bufp->chgBit(oldp+1373,((1U & (~ (IData)((0xffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 4U)))))));
        bufp->chgBit(oldp+1374,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT____Vcellout__gfor__BRA__32__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+1375,((1U & (IData)((0x7fffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 5U))))));
        bufp->chgBit(oldp+1376,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                 [0x21U])));
        bufp->chgBit(oldp+1377,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                       [0x21U] >> 1U))));
        bufp->chgBit(oldp+1378,((1U & (~ (IData)((0x7fffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 5U)))))));
        bufp->chgBit(oldp+1379,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT____Vcellout__gfor__BRA__33__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+1380,((1U & (IData)((0x3fffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 6U))))));
        bufp->chgBit(oldp+1381,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                 [0x22U])));
        bufp->chgBit(oldp+1382,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                       [0x22U] >> 1U))));
        bufp->chgBit(oldp+1383,((1U & (~ (IData)((0x3fffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 6U)))))));
        bufp->chgBit(oldp+1384,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT____Vcellout__gfor__BRA__34__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+1385,((1U & (IData)((0x1fffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 7U))))));
        bufp->chgBit(oldp+1386,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                 [0x23U])));
        bufp->chgBit(oldp+1387,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                       [0x23U] >> 1U))));
        bufp->chgBit(oldp+1388,((1U & (~ (IData)((0x1fffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 7U)))))));
        bufp->chgBit(oldp+1389,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT____Vcellout__gfor__BRA__35__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+1390,((1U & (IData)((0xfffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 8U))))));
        bufp->chgBit(oldp+1391,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                 [0x24U])));
        bufp->chgBit(oldp+1392,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                       [0x24U] >> 1U))));
        bufp->chgBit(oldp+1393,((1U & (~ (IData)((0xfffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 8U)))))));
        bufp->chgBit(oldp+1394,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT____Vcellout__gfor__BRA__36__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+1395,((1U & (IData)((0x7ffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 9U))))));
        bufp->chgBit(oldp+1396,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                 [0x25U])));
        bufp->chgBit(oldp+1397,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                       [0x25U] >> 1U))));
        bufp->chgBit(oldp+1398,((1U & (~ (IData)((0x7ffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 9U)))))));
        bufp->chgBit(oldp+1399,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT____Vcellout__gfor__BRA__37__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+1400,((1U & (IData)((0x3ffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0xaU))))));
        bufp->chgBit(oldp+1401,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                 [0x26U])));
        bufp->chgBit(oldp+1402,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                       [0x26U] >> 1U))));
        bufp->chgBit(oldp+1403,((1U & (~ (IData)((0x3ffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0xaU)))))));
        bufp->chgBit(oldp+1404,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT____Vcellout__gfor__BRA__38__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+1405,((1U & (IData)((0x1ffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0xbU))))));
        bufp->chgBit(oldp+1406,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                 [0x27U])));
        bufp->chgBit(oldp+1407,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                       [0x27U] >> 1U))));
        bufp->chgBit(oldp+1408,((1U & (~ (IData)((0x1ffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0xbU)))))));
        bufp->chgBit(oldp+1409,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT____Vcellout__gfor__BRA__39__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+1410,((1U & (IData)((0x1ffffffffe000000ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  << 0x19U))))));
        bufp->chgBit(oldp+1411,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                 [3U])));
        bufp->chgBit(oldp+1412,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                       [3U] >> 1U))));
        bufp->chgBit(oldp+1413,((1U & (~ (IData)((0x1ffffffffe000000ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0x19U)))))));
        bufp->chgBit(oldp+1414,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT____Vcellout__gfor__BRA__3__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+1415,((1U & (IData)((0xffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0xcU))))));
        bufp->chgBit(oldp+1416,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                 [0x28U])));
        bufp->chgBit(oldp+1417,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                       [0x28U] >> 1U))));
        bufp->chgBit(oldp+1418,((1U & (~ (IData)((0xffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0xcU)))))));
        bufp->chgBit(oldp+1419,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT____Vcellout__gfor__BRA__40__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+1420,((1U & (IData)((0x7fffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0xdU))))));
        bufp->chgBit(oldp+1421,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                 [0x29U])));
        bufp->chgBit(oldp+1422,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                       [0x29U] >> 1U))));
        bufp->chgBit(oldp+1423,((1U & (~ (IData)((0x7fffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0xdU)))))));
        bufp->chgBit(oldp+1424,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT____Vcellout__gfor__BRA__41__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+1425,((1U & (IData)((0x3fffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0xeU))))));
        bufp->chgBit(oldp+1426,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                 [0x2aU])));
        bufp->chgBit(oldp+1427,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                       [0x2aU] >> 1U))));
        bufp->chgBit(oldp+1428,((1U & (~ (IData)((0x3fffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0xeU)))))));
        bufp->chgBit(oldp+1429,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT____Vcellout__gfor__BRA__42__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+1430,((1U & (IData)((0x1fffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0xfU))))));
        bufp->chgBit(oldp+1431,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                 [0x2bU])));
        bufp->chgBit(oldp+1432,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                       [0x2bU] >> 1U))));
        bufp->chgBit(oldp+1433,((1U & (~ (IData)((0x1fffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0xfU)))))));
        bufp->chgBit(oldp+1434,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT____Vcellout__gfor__BRA__43__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+1435,((1U & (IData)((0xfffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x10U))))));
        bufp->chgBit(oldp+1436,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                 [0x2cU])));
        bufp->chgBit(oldp+1437,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                       [0x2cU] >> 1U))));
        bufp->chgBit(oldp+1438,((1U & (~ (IData)((0xfffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x10U)))))));
        bufp->chgBit(oldp+1439,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT____Vcellout__gfor__BRA__44__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+1440,((1U & (IData)((0x7ffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x11U))))));
        bufp->chgBit(oldp+1441,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                 [0x2dU])));
        bufp->chgBit(oldp+1442,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                       [0x2dU] >> 1U))));
        bufp->chgBit(oldp+1443,((1U & (~ (IData)((0x7ffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x11U)))))));
        bufp->chgBit(oldp+1444,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT____Vcellout__gfor__BRA__45__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+1445,((1U & (IData)((0x3ffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x12U))))));
        bufp->chgBit(oldp+1446,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                 [0x2eU])));
        bufp->chgBit(oldp+1447,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                       [0x2eU] >> 1U))));
        bufp->chgBit(oldp+1448,((1U & (~ (IData)((0x3ffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x12U)))))));
        bufp->chgBit(oldp+1449,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT____Vcellout__gfor__BRA__46__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+1450,((1U & (IData)((0x1ffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x13U))))));
        bufp->chgBit(oldp+1451,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                 [0x2fU])));
        bufp->chgBit(oldp+1452,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                       [0x2fU] >> 1U))));
        bufp->chgBit(oldp+1453,((1U & (~ (IData)((0x1ffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x13U)))))));
        bufp->chgBit(oldp+1454,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT____Vcellout__gfor__BRA__47__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+1455,((1U & (IData)((0xffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x14U))))));
        bufp->chgBit(oldp+1456,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                 [0x30U])));
        bufp->chgBit(oldp+1457,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                       [0x30U] >> 1U))));
        bufp->chgBit(oldp+1458,((1U & (~ (IData)((0xffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x14U)))))));
        bufp->chgBit(oldp+1459,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT____Vcellout__gfor__BRA__48__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+1460,((1U & (IData)((0x7fffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x15U))))));
        bufp->chgBit(oldp+1461,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                 [0x31U])));
        bufp->chgBit(oldp+1462,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                       [0x31U] >> 1U))));
        bufp->chgBit(oldp+1463,((1U & (~ (IData)((0x7fffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x15U)))))));
        bufp->chgBit(oldp+1464,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT____Vcellout__gfor__BRA__49__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+1465,((1U & (IData)((0xfffffffff000000ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  << 0x18U))))));
        bufp->chgBit(oldp+1466,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                 [4U])));
        bufp->chgBit(oldp+1467,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                       [4U] >> 1U))));
        bufp->chgBit(oldp+1468,((1U & (~ (IData)((0xfffffffff000000ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0x18U)))))));
        bufp->chgBit(oldp+1469,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT____Vcellout__gfor__BRA__4__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+1470,((1U & (IData)((0x3fffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x16U))))));
        bufp->chgBit(oldp+1471,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                 [0x32U])));
        bufp->chgBit(oldp+1472,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                       [0x32U] >> 1U))));
        bufp->chgBit(oldp+1473,((1U & (~ (IData)((0x3fffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x16U)))))));
        bufp->chgBit(oldp+1474,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT____Vcellout__gfor__BRA__50__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+1475,((1U & (IData)((0x1fffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x17U))))));
        bufp->chgBit(oldp+1476,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                 [0x33U])));
        bufp->chgBit(oldp+1477,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                       [0x33U] >> 1U))));
        bufp->chgBit(oldp+1478,((1U & (~ (IData)((0x1fffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x17U)))))));
        bufp->chgBit(oldp+1479,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT____Vcellout__gfor__BRA__51__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+1480,((1U & (IData)((0xfffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x18U))))));
        bufp->chgBit(oldp+1481,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                 [0x34U])));
        bufp->chgBit(oldp+1482,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                       [0x34U] >> 1U))));
        bufp->chgBit(oldp+1483,((1U & (~ (IData)((0xfffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x18U)))))));
        bufp->chgBit(oldp+1484,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT____Vcellout__gfor__BRA__52__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+1485,((1U & (IData)((0x7ffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x19U))))));
        bufp->chgBit(oldp+1486,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                 [0x35U])));
        bufp->chgBit(oldp+1487,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                       [0x35U] >> 1U))));
        bufp->chgBit(oldp+1488,((1U & (~ (IData)((0x7ffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x19U)))))));
        bufp->chgBit(oldp+1489,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT____Vcellout__gfor__BRA__53__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+1490,((1U & (IData)((0x3ffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x1aU))))));
        bufp->chgBit(oldp+1491,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                 [0x36U])));
        bufp->chgBit(oldp+1492,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                       [0x36U] >> 1U))));
        bufp->chgBit(oldp+1493,((1U & (~ (IData)((0x3ffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x1aU)))))));
        bufp->chgBit(oldp+1494,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT____Vcellout__gfor__BRA__54__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+1495,((1U & (IData)((0x1ffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x1bU))))));
        bufp->chgBit(oldp+1496,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                 [0x37U])));
        bufp->chgBit(oldp+1497,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                       [0x37U] >> 1U))));
        bufp->chgBit(oldp+1498,((1U & (~ (IData)((0x1ffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x1bU)))))));
        bufp->chgBit(oldp+1499,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT____Vcellout__gfor__BRA__55__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+1500,((1U & (IData)((0xffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x1cU))))));
        bufp->chgBit(oldp+1501,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                 [0x38U])));
        bufp->chgBit(oldp+1502,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                       [0x38U] >> 1U))));
        bufp->chgBit(oldp+1503,((1U & (~ (IData)((0xffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x1cU)))))));
        bufp->chgBit(oldp+1504,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT____Vcellout__gfor__BRA__56__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+1505,((1U & (IData)((0x7fULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x1dU))))));
        bufp->chgBit(oldp+1506,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                 [0x39U])));
        bufp->chgBit(oldp+1507,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                       [0x39U] >> 1U))));
        bufp->chgBit(oldp+1508,((1U & (~ (IData)((0x7fULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x1dU)))))));
        bufp->chgBit(oldp+1509,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT____Vcellout__gfor__BRA__57__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+1510,((1U & (IData)((0x3fULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x1eU))))));
        bufp->chgBit(oldp+1511,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                 [0x3aU])));
        bufp->chgBit(oldp+1512,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                       [0x3aU] >> 1U))));
        bufp->chgBit(oldp+1513,((1U & (~ (IData)((0x3fULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x1eU)))))));
        bufp->chgBit(oldp+1514,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT____Vcellout__gfor__BRA__58__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+1515,((1U & (IData)((0x1fULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x1fU))))));
        bufp->chgBit(oldp+1516,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                 [0x3bU])));
        bufp->chgBit(oldp+1517,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                       [0x3bU] >> 1U))));
        bufp->chgBit(oldp+1518,((1U & (~ (IData)((0x1fULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x1fU)))))));
        bufp->chgBit(oldp+1519,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT____Vcellout__gfor__BRA__59__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+1520,((1U & (IData)((0x7ffffffff800000ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  << 0x17U))))));
        bufp->chgBit(oldp+1521,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                 [5U])));
        bufp->chgBit(oldp+1522,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                       [5U] >> 1U))));
        bufp->chgBit(oldp+1523,((1U & (~ (IData)((0x7ffffffff800000ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0x17U)))))));
        bufp->chgBit(oldp+1524,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT____Vcellout__gfor__BRA__5__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+1525,((1U & (IData)((0xfULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x20U))))));
        bufp->chgBit(oldp+1526,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                 [0x3cU])));
        bufp->chgBit(oldp+1527,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                       [0x3cU] >> 1U))));
        bufp->chgBit(oldp+1528,((1U & (~ (IData)((0xfULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x20U)))))));
        bufp->chgBit(oldp+1529,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT____Vcellout__gfor__BRA__60__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+1530,((1U & (IData)((7ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x21U))))));
        bufp->chgBit(oldp+1531,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                 [0x3dU])));
        bufp->chgBit(oldp+1532,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                       [0x3dU] >> 1U))));
        bufp->chgBit(oldp+1533,((1U & (~ (IData)((7ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x21U)))))));
        bufp->chgBit(oldp+1534,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT____Vcellout__gfor__BRA__61__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+1535,((1U & (IData)((3ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x22U))))));
        bufp->chgBit(oldp+1536,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                 [0x3eU])));
        bufp->chgBit(oldp+1537,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                       [0x3eU] >> 1U))));
        bufp->chgBit(oldp+1538,((1U & (~ (IData)((3ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x22U)))))));
        bufp->chgBit(oldp+1539,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT____Vcellout__gfor__BRA__62__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+1540,((1U & (IData)((1ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x23U))))));
        bufp->chgBit(oldp+1541,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                 [0x3fU])));
        bufp->chgBit(oldp+1542,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                       [0x3fU] >> 1U))));
        bufp->chgBit(oldp+1543,((1U & (~ (IData)((1ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x23U)))))));
        bufp->chgBit(oldp+1544,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT____Vcellout__gfor__BRA__63__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+1545,((1U & (IData)((0x3ffffffffc00000ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  << 0x16U))))));
        bufp->chgBit(oldp+1546,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                 [6U])));
        bufp->chgBit(oldp+1547,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                       [6U] >> 1U))));
        bufp->chgBit(oldp+1548,((1U & (~ (IData)((0x3ffffffffc00000ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0x16U)))))));
        bufp->chgBit(oldp+1549,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT____Vcellout__gfor__BRA__6__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+1550,((1U & (IData)((0x1ffffffffe00000ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  << 0x15U))))));
        bufp->chgBit(oldp+1551,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                 [7U])));
        bufp->chgBit(oldp+1552,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                       [7U] >> 1U))));
        bufp->chgBit(oldp+1553,((1U & (~ (IData)((0x1ffffffffe00000ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0x15U)))))));
        bufp->chgBit(oldp+1554,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT____Vcellout__gfor__BRA__7__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+1555,((1U & (IData)((0xfffffffff00000ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  << 0x14U))))));
        bufp->chgBit(oldp+1556,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                 [8U])));
        bufp->chgBit(oldp+1557,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                       [8U] >> 1U))));
        bufp->chgBit(oldp+1558,((1U & (~ (IData)((0xfffffffff00000ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0x14U)))))));
        bufp->chgBit(oldp+1559,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT____Vcellout__gfor__BRA__8__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+1560,((1U & (IData)((0x7ffffffff80000ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  << 0x13U))))));
        bufp->chgBit(oldp+1561,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                 [9U])));
        bufp->chgBit(oldp+1562,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                       [9U] >> 1U))));
        bufp->chgBit(oldp+1563,((1U & (~ (IData)((0x7ffffffff80000ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0x13U)))))));
        bufp->chgBit(oldp+1564,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT____Vcellout__gfor__BRA__9__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+1565,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                               >> 0x1dU)))));
        bufp->chgBit(oldp+1566,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                               >> 0x1cU)))));
        bufp->chgCData(oldp+1567,((7U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                 >> 1U)))),3);
        bufp->chgQData(oldp+1568,((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                   << 2U)),64);
        bufp->chgQData(oldp+1570,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellout__boothfor__BRA__2__KET____DOT__ai__OutX),64);
        bufp->chgBit(oldp+1572,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__neg2x) 
                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__negx))));
        bufp->chgBit(oldp+1573,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__negx));
        bufp->chgBit(oldp+1574,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__x));
        bufp->chgBit(oldp+1575,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__neg2x));
        bufp->chgBit(oldp+1576,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT____Vcellout__fir__OutX));
        bufp->chgBit(oldp+1577,((1U & (IData)((0x3fffffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 8U))))));
        bufp->chgBit(oldp+1578,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                 [0xaU])));
        bufp->chgBit(oldp+1579,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                       [0xaU] >> 1U))));
        bufp->chgBit(oldp+1580,((1U & (~ (IData)((0x3fffffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 8U)))))));
        bufp->chgBit(oldp+1581,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT____Vcellout__gfor__BRA__10__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+1582,((1U & (IData)((0x1fffffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 9U))))));
        bufp->chgBit(oldp+1583,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                 [0xbU])));
        bufp->chgBit(oldp+1584,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                       [0xbU] >> 1U))));
        bufp->chgBit(oldp+1585,((1U & (~ (IData)((0x1fffffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 9U)))))));
        bufp->chgBit(oldp+1586,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT____Vcellout__gfor__BRA__11__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+1587,((1U & (IData)((0xfffffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0xaU))))));
        bufp->chgBit(oldp+1588,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                 [0xcU])));
        bufp->chgBit(oldp+1589,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                       [0xcU] >> 1U))));
        bufp->chgBit(oldp+1590,((1U & (~ (IData)((0xfffffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0xaU)))))));
        bufp->chgBit(oldp+1591,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT____Vcellout__gfor__BRA__12__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+1592,((1U & (IData)((0x7ffffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0xbU))))));
        bufp->chgBit(oldp+1593,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                 [0xdU])));
        bufp->chgBit(oldp+1594,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                       [0xdU] >> 1U))));
        bufp->chgBit(oldp+1595,((1U & (~ (IData)((0x7ffffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0xbU)))))));
        bufp->chgBit(oldp+1596,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT____Vcellout__gfor__BRA__13__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+1597,((1U & (IData)((0x3ffffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0xcU))))));
        bufp->chgBit(oldp+1598,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                 [0xeU])));
        bufp->chgBit(oldp+1599,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                       [0xeU] >> 1U))));
        bufp->chgBit(oldp+1600,((1U & (~ (IData)((0x3ffffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0xcU)))))));
        bufp->chgBit(oldp+1601,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT____Vcellout__gfor__BRA__14__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+1602,((1U & (IData)((0x1ffffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0xdU))))));
        bufp->chgBit(oldp+1603,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                 [0xfU])));
        bufp->chgBit(oldp+1604,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                       [0xfU] >> 1U))));
        bufp->chgBit(oldp+1605,((1U & (~ (IData)((0x1ffffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0xdU)))))));
        bufp->chgBit(oldp+1606,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT____Vcellout__gfor__BRA__15__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+1607,((1U & (IData)((0xffffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0xeU))))));
        bufp->chgBit(oldp+1608,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                 [0x10U])));
        bufp->chgBit(oldp+1609,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                       [0x10U] >> 1U))));
        bufp->chgBit(oldp+1610,((1U & (~ (IData)((0xffffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0xeU)))))));
        bufp->chgBit(oldp+1611,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT____Vcellout__gfor__BRA__16__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+1612,((1U & (IData)((0x7fffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0xfU))))));
        bufp->chgBit(oldp+1613,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                 [0x11U])));
        bufp->chgBit(oldp+1614,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                       [0x11U] >> 1U))));
        bufp->chgBit(oldp+1615,((1U & (~ (IData)((0x7fffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0xfU)))))));
        bufp->chgBit(oldp+1616,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT____Vcellout__gfor__BRA__17__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+1617,((1U & (IData)((0x3fffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x10U))))));
        bufp->chgBit(oldp+1618,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                 [0x12U])));
        bufp->chgBit(oldp+1619,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                       [0x12U] >> 1U))));
        bufp->chgBit(oldp+1620,((1U & (~ (IData)((0x3fffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x10U)))))));
        bufp->chgBit(oldp+1621,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT____Vcellout__gfor__BRA__18__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+1622,((1U & (IData)((0x1fffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x11U))))));
        bufp->chgBit(oldp+1623,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                 [0x13U])));
        bufp->chgBit(oldp+1624,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                       [0x13U] >> 1U))));
        bufp->chgBit(oldp+1625,((1U & (~ (IData)((0x1fffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x11U)))))));
        bufp->chgBit(oldp+1626,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT____Vcellout__gfor__BRA__19__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+1627,((1U & (IData)((0x7ffffffffffffffeULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  << 1U))))));
        bufp->chgBit(oldp+1628,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                 [1U])));
        bufp->chgBit(oldp+1629,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                       [1U] >> 1U))));
        bufp->chgBit(oldp+1630,((1U & (~ (IData)((0x7ffffffffffffffeULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 1U)))))));
        bufp->chgBit(oldp+1631,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT____Vcellout__gfor__BRA__1__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+1632,((1U & (IData)((0xfffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x12U))))));
        bufp->chgBit(oldp+1633,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                 [0x14U])));
        bufp->chgBit(oldp+1634,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                       [0x14U] >> 1U))));
        bufp->chgBit(oldp+1635,((1U & (~ (IData)((0xfffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x12U)))))));
        bufp->chgBit(oldp+1636,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT____Vcellout__gfor__BRA__20__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+1637,((1U & (IData)((0x7ffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x13U))))));
        bufp->chgBit(oldp+1638,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                 [0x15U])));
        bufp->chgBit(oldp+1639,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                       [0x15U] >> 1U))));
        bufp->chgBit(oldp+1640,((1U & (~ (IData)((0x7ffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x13U)))))));
        bufp->chgBit(oldp+1641,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT____Vcellout__gfor__BRA__21__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+1642,((1U & (IData)((0x3ffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x14U))))));
        bufp->chgBit(oldp+1643,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                 [0x16U])));
        bufp->chgBit(oldp+1644,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                       [0x16U] >> 1U))));
        bufp->chgBit(oldp+1645,((1U & (~ (IData)((0x3ffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x14U)))))));
        bufp->chgBit(oldp+1646,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT____Vcellout__gfor__BRA__22__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+1647,((1U & (IData)((0x1ffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x15U))))));
        bufp->chgBit(oldp+1648,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                 [0x17U])));
        bufp->chgBit(oldp+1649,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                       [0x17U] >> 1U))));
        bufp->chgBit(oldp+1650,((1U & (~ (IData)((0x1ffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x15U)))))));
        bufp->chgBit(oldp+1651,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT____Vcellout__gfor__BRA__23__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+1652,((1U & (IData)((0xffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x16U))))));
        bufp->chgBit(oldp+1653,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                 [0x18U])));
        bufp->chgBit(oldp+1654,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                       [0x18U] >> 1U))));
        bufp->chgBit(oldp+1655,((1U & (~ (IData)((0xffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x16U)))))));
        bufp->chgBit(oldp+1656,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT____Vcellout__gfor__BRA__24__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+1657,((1U & (IData)((0x7fffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x17U))))));
        bufp->chgBit(oldp+1658,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                 [0x19U])));
        bufp->chgBit(oldp+1659,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                       [0x19U] >> 1U))));
        bufp->chgBit(oldp+1660,((1U & (~ (IData)((0x7fffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x17U)))))));
        bufp->chgBit(oldp+1661,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT____Vcellout__gfor__BRA__25__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+1662,((1U & (IData)((0x3fffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x18U))))));
        bufp->chgBit(oldp+1663,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                 [0x1aU])));
        bufp->chgBit(oldp+1664,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                       [0x1aU] >> 1U))));
        bufp->chgBit(oldp+1665,((1U & (~ (IData)((0x3fffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x18U)))))));
        bufp->chgBit(oldp+1666,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT____Vcellout__gfor__BRA__26__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+1667,((1U & (IData)((0x1fffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x19U))))));
        bufp->chgBit(oldp+1668,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                 [0x1bU])));
        bufp->chgBit(oldp+1669,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                       [0x1bU] >> 1U))));
        bufp->chgBit(oldp+1670,((1U & (~ (IData)((0x1fffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x19U)))))));
        bufp->chgBit(oldp+1671,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT____Vcellout__gfor__BRA__27__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+1672,((1U & (IData)((0xfffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x1aU))))));
        bufp->chgBit(oldp+1673,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                 [0x1cU])));
        bufp->chgBit(oldp+1674,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                       [0x1cU] >> 1U))));
        bufp->chgBit(oldp+1675,((1U & (~ (IData)((0xfffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x1aU)))))));
        bufp->chgBit(oldp+1676,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT____Vcellout__gfor__BRA__28__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+1677,((1U & (IData)((0x7ffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x1bU))))));
        bufp->chgBit(oldp+1678,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                 [0x1dU])));
        bufp->chgBit(oldp+1679,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                       [0x1dU] >> 1U))));
        bufp->chgBit(oldp+1680,((1U & (~ (IData)((0x7ffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x1bU)))))));
        bufp->chgBit(oldp+1681,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT____Vcellout__gfor__BRA__29__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+1682,((1U & (IData)((0x3fffffffffffffffULL 
                                               & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX)))));
        bufp->chgBit(oldp+1683,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                 [2U])));
        bufp->chgBit(oldp+1684,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                       [2U] >> 1U))));
        bufp->chgBit(oldp+1685,((1U & (~ (IData)((0x3fffffffffffffffULL 
                                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX))))));
        bufp->chgBit(oldp+1686,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT____Vcellout__gfor__BRA__2__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+1687,((1U & (IData)((0x3ffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x1cU))))));
        bufp->chgBit(oldp+1688,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                 [0x1eU])));
        bufp->chgBit(oldp+1689,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                       [0x1eU] >> 1U))));
        bufp->chgBit(oldp+1690,((1U & (~ (IData)((0x3ffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x1cU)))))));
        bufp->chgBit(oldp+1691,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT____Vcellout__gfor__BRA__30__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+1692,((1U & (IData)((0x1ffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x1dU))))));
        bufp->chgBit(oldp+1693,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                 [0x1fU])));
        bufp->chgBit(oldp+1694,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                       [0x1fU] >> 1U))));
        bufp->chgBit(oldp+1695,((1U & (~ (IData)((0x1ffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x1dU)))))));
        bufp->chgBit(oldp+1696,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT____Vcellout__gfor__BRA__31__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+1697,((1U & (IData)((0xffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x1eU))))));
        bufp->chgBit(oldp+1698,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                 [0x20U])));
        bufp->chgBit(oldp+1699,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                       [0x20U] >> 1U))));
        bufp->chgBit(oldp+1700,((1U & (~ (IData)((0xffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x1eU)))))));
        bufp->chgBit(oldp+1701,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT____Vcellout__gfor__BRA__32__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+1702,((1U & (IData)((0x7fffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x1fU))))));
        bufp->chgBit(oldp+1703,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                 [0x21U])));
        bufp->chgBit(oldp+1704,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                       [0x21U] >> 1U))));
        bufp->chgBit(oldp+1705,((1U & (~ (IData)((0x7fffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x1fU)))))));
        bufp->chgBit(oldp+1706,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT____Vcellout__gfor__BRA__33__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+1707,((1U & (IData)((0x3fffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x20U))))));
        bufp->chgBit(oldp+1708,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                 [0x22U])));
        bufp->chgBit(oldp+1709,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                       [0x22U] >> 1U))));
        bufp->chgBit(oldp+1710,((1U & (~ (IData)((0x3fffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x20U)))))));
        bufp->chgBit(oldp+1711,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT____Vcellout__gfor__BRA__34__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+1712,((1U & (IData)((0x1fffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x21U))))));
        bufp->chgBit(oldp+1713,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                 [0x23U])));
        bufp->chgBit(oldp+1714,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                       [0x23U] >> 1U))));
        bufp->chgBit(oldp+1715,((1U & (~ (IData)((0x1fffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x21U)))))));
        bufp->chgBit(oldp+1716,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT____Vcellout__gfor__BRA__35__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+1717,((1U & (IData)((0xfffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x22U))))));
        bufp->chgBit(oldp+1718,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                 [0x24U])));
        bufp->chgBit(oldp+1719,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                       [0x24U] >> 1U))));
        bufp->chgBit(oldp+1720,((1U & (~ (IData)((0xfffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x22U)))))));
        bufp->chgBit(oldp+1721,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT____Vcellout__gfor__BRA__36__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+1722,((1U & (IData)((0x7ffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x23U))))));
        bufp->chgBit(oldp+1723,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                 [0x25U])));
        bufp->chgBit(oldp+1724,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                       [0x25U] >> 1U))));
        bufp->chgBit(oldp+1725,((1U & (~ (IData)((0x7ffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x23U)))))));
        bufp->chgBit(oldp+1726,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT____Vcellout__gfor__BRA__37__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+1727,((1U & (IData)((0x3ffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x24U))))));
        bufp->chgBit(oldp+1728,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                 [0x26U])));
        bufp->chgBit(oldp+1729,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                       [0x26U] >> 1U))));
        bufp->chgBit(oldp+1730,((1U & (~ (IData)((0x3ffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x24U)))))));
        bufp->chgBit(oldp+1731,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT____Vcellout__gfor__BRA__38__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+1732,((1U & (IData)((0x1ffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x25U))))));
        bufp->chgBit(oldp+1733,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                 [0x27U])));
        bufp->chgBit(oldp+1734,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                       [0x27U] >> 1U))));
        bufp->chgBit(oldp+1735,((1U & (~ (IData)((0x1ffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x25U)))))));
        bufp->chgBit(oldp+1736,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT____Vcellout__gfor__BRA__39__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+1737,((1U & (IData)((0x1fffffffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 1U))))));
        bufp->chgBit(oldp+1738,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                 [3U])));
        bufp->chgBit(oldp+1739,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                       [3U] >> 1U))));
        bufp->chgBit(oldp+1740,((1U & (~ (IData)((0x1fffffffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 1U)))))));
        bufp->chgBit(oldp+1741,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT____Vcellout__gfor__BRA__3__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+1742,((1U & (IData)((0xffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x26U))))));
        bufp->chgBit(oldp+1743,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                 [0x28U])));
        bufp->chgBit(oldp+1744,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                       [0x28U] >> 1U))));
        bufp->chgBit(oldp+1745,((1U & (~ (IData)((0xffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x26U)))))));
        bufp->chgBit(oldp+1746,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT____Vcellout__gfor__BRA__40__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+1747,((1U & (IData)((0x7fffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x27U))))));
        bufp->chgBit(oldp+1748,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                 [0x29U])));
        bufp->chgBit(oldp+1749,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                       [0x29U] >> 1U))));
        bufp->chgBit(oldp+1750,((1U & (~ (IData)((0x7fffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x27U)))))));
        bufp->chgBit(oldp+1751,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT____Vcellout__gfor__BRA__41__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+1752,((1U & (IData)((0x3fffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x28U))))));
        bufp->chgBit(oldp+1753,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                 [0x2aU])));
        bufp->chgBit(oldp+1754,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                       [0x2aU] >> 1U))));
        bufp->chgBit(oldp+1755,((1U & (~ (IData)((0x3fffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x28U)))))));
        bufp->chgBit(oldp+1756,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT____Vcellout__gfor__BRA__42__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+1757,((1U & (IData)((0x1fffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x29U))))));
        bufp->chgBit(oldp+1758,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                 [0x2bU])));
        bufp->chgBit(oldp+1759,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                       [0x2bU] >> 1U))));
        bufp->chgBit(oldp+1760,((1U & (~ (IData)((0x1fffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x29U)))))));
        bufp->chgBit(oldp+1761,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT____Vcellout__gfor__BRA__43__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+1762,((1U & (IData)((0xfffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x2aU))))));
        bufp->chgBit(oldp+1763,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                 [0x2cU])));
        bufp->chgBit(oldp+1764,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                       [0x2cU] >> 1U))));
        bufp->chgBit(oldp+1765,((1U & (~ (IData)((0xfffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x2aU)))))));
        bufp->chgBit(oldp+1766,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT____Vcellout__gfor__BRA__44__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+1767,((1U & (IData)((0x7ffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x2bU))))));
        bufp->chgBit(oldp+1768,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                 [0x2dU])));
        bufp->chgBit(oldp+1769,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                       [0x2dU] >> 1U))));
        bufp->chgBit(oldp+1770,((1U & (~ (IData)((0x7ffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x2bU)))))));
        bufp->chgBit(oldp+1771,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT____Vcellout__gfor__BRA__45__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+1772,((1U & (IData)((0x3ffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x2cU))))));
        bufp->chgBit(oldp+1773,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                 [0x2eU])));
        bufp->chgBit(oldp+1774,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                       [0x2eU] >> 1U))));
        bufp->chgBit(oldp+1775,((1U & (~ (IData)((0x3ffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x2cU)))))));
        bufp->chgBit(oldp+1776,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT____Vcellout__gfor__BRA__46__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+1777,((1U & (IData)((0x1ffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x2dU))))));
        bufp->chgBit(oldp+1778,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                 [0x2fU])));
        bufp->chgBit(oldp+1779,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                       [0x2fU] >> 1U))));
        bufp->chgBit(oldp+1780,((1U & (~ (IData)((0x1ffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x2dU)))))));
        bufp->chgBit(oldp+1781,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT____Vcellout__gfor__BRA__47__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+1782,((1U & (IData)((0xffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x2eU))))));
        bufp->chgBit(oldp+1783,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                 [0x30U])));
        bufp->chgBit(oldp+1784,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                       [0x30U] >> 1U))));
        bufp->chgBit(oldp+1785,((1U & (~ (IData)((0xffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x2eU)))))));
        bufp->chgBit(oldp+1786,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT____Vcellout__gfor__BRA__48__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+1787,((1U & (IData)((0x7fffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x2fU))))));
        bufp->chgBit(oldp+1788,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                 [0x31U])));
        bufp->chgBit(oldp+1789,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                       [0x31U] >> 1U))));
        bufp->chgBit(oldp+1790,((1U & (~ (IData)((0x7fffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x2fU)))))));
        bufp->chgBit(oldp+1791,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT____Vcellout__gfor__BRA__49__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+1792,((1U & (IData)((0xfffffffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 2U))))));
        bufp->chgBit(oldp+1793,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                 [4U])));
        bufp->chgBit(oldp+1794,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                       [4U] >> 1U))));
        bufp->chgBit(oldp+1795,((1U & (~ (IData)((0xfffffffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 2U)))))));
        bufp->chgBit(oldp+1796,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT____Vcellout__gfor__BRA__4__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+1797,((1U & (IData)((0x3fffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x30U))))));
        bufp->chgBit(oldp+1798,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                 [0x32U])));
        bufp->chgBit(oldp+1799,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                       [0x32U] >> 1U))));
        bufp->chgBit(oldp+1800,((1U & (~ (IData)((0x3fffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x30U)))))));
        bufp->chgBit(oldp+1801,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT____Vcellout__gfor__BRA__50__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+1802,((1U & (IData)((0x1fffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x31U))))));
        bufp->chgBit(oldp+1803,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                 [0x33U])));
        bufp->chgBit(oldp+1804,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                       [0x33U] >> 1U))));
        bufp->chgBit(oldp+1805,((1U & (~ (IData)((0x1fffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x31U)))))));
        bufp->chgBit(oldp+1806,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT____Vcellout__gfor__BRA__51__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+1807,((1U & (IData)((0xfffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x32U))))));
        bufp->chgBit(oldp+1808,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                 [0x34U])));
        bufp->chgBit(oldp+1809,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                       [0x34U] >> 1U))));
        bufp->chgBit(oldp+1810,((1U & (~ (IData)((0xfffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x32U)))))));
        bufp->chgBit(oldp+1811,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT____Vcellout__gfor__BRA__52__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+1812,((1U & (IData)((0x7ffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x33U))))));
        bufp->chgBit(oldp+1813,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                 [0x35U])));
        bufp->chgBit(oldp+1814,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                       [0x35U] >> 1U))));
        bufp->chgBit(oldp+1815,((1U & (~ (IData)((0x7ffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x33U)))))));
        bufp->chgBit(oldp+1816,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT____Vcellout__gfor__BRA__53__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+1817,((1U & (IData)((0x3ffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x34U))))));
        bufp->chgBit(oldp+1818,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                 [0x36U])));
        bufp->chgBit(oldp+1819,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                       [0x36U] >> 1U))));
        bufp->chgBit(oldp+1820,((1U & (~ (IData)((0x3ffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x34U)))))));
        bufp->chgBit(oldp+1821,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT____Vcellout__gfor__BRA__54__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+1822,((1U & (IData)((0x1ffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x35U))))));
        bufp->chgBit(oldp+1823,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                 [0x37U])));
        bufp->chgBit(oldp+1824,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                       [0x37U] >> 1U))));
        bufp->chgBit(oldp+1825,((1U & (~ (IData)((0x1ffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x35U)))))));
        bufp->chgBit(oldp+1826,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT____Vcellout__gfor__BRA__55__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+1827,((1U & (IData)((0xffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x36U))))));
        bufp->chgBit(oldp+1828,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                 [0x38U])));
        bufp->chgBit(oldp+1829,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                       [0x38U] >> 1U))));
        bufp->chgBit(oldp+1830,((1U & (~ (IData)((0xffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x36U)))))));
        bufp->chgBit(oldp+1831,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT____Vcellout__gfor__BRA__56__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+1832,((1U & (IData)((0x7fULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x37U))))));
        bufp->chgBit(oldp+1833,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                 [0x39U])));
        bufp->chgBit(oldp+1834,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                       [0x39U] >> 1U))));
        bufp->chgBit(oldp+1835,((1U & (~ (IData)((0x7fULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x37U)))))));
        bufp->chgBit(oldp+1836,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT____Vcellout__gfor__BRA__57__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+1837,((1U & (IData)((0x3fULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x38U))))));
        bufp->chgBit(oldp+1838,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                 [0x3aU])));
        bufp->chgBit(oldp+1839,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                       [0x3aU] >> 1U))));
        bufp->chgBit(oldp+1840,((1U & (~ (IData)((0x3fULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x38U)))))));
        bufp->chgBit(oldp+1841,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT____Vcellout__gfor__BRA__58__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+1842,((1U & (IData)((0x1fULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x39U))))));
        bufp->chgBit(oldp+1843,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                 [0x3bU])));
        bufp->chgBit(oldp+1844,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                       [0x3bU] >> 1U))));
        bufp->chgBit(oldp+1845,((1U & (~ (IData)((0x1fULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x39U)))))));
        bufp->chgBit(oldp+1846,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT____Vcellout__gfor__BRA__59__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+1847,((1U & (IData)((0x7ffffffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 3U))))));
        bufp->chgBit(oldp+1848,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                 [5U])));
        bufp->chgBit(oldp+1849,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                       [5U] >> 1U))));
        bufp->chgBit(oldp+1850,((1U & (~ (IData)((0x7ffffffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 3U)))))));
        bufp->chgBit(oldp+1851,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT____Vcellout__gfor__BRA__5__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+1852,((1U & (IData)((0xfULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x3aU))))));
        bufp->chgBit(oldp+1853,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                 [0x3cU])));
        bufp->chgBit(oldp+1854,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                       [0x3cU] >> 1U))));
        bufp->chgBit(oldp+1855,((1U & (~ (IData)((0xfULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x3aU)))))));
        bufp->chgBit(oldp+1856,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT____Vcellout__gfor__BRA__60__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+1857,((1U & (IData)((7ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x3bU))))));
        bufp->chgBit(oldp+1858,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                 [0x3dU])));
        bufp->chgBit(oldp+1859,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                       [0x3dU] >> 1U))));
        bufp->chgBit(oldp+1860,((1U & (~ (IData)((7ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x3bU)))))));
        bufp->chgBit(oldp+1861,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT____Vcellout__gfor__BRA__61__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+1862,((1U & (IData)((3ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x3cU))))));
        bufp->chgBit(oldp+1863,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                 [0x3eU])));
        bufp->chgBit(oldp+1864,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                       [0x3eU] >> 1U))));
        bufp->chgBit(oldp+1865,((1U & (~ (IData)((3ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x3cU)))))));
        bufp->chgBit(oldp+1866,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT____Vcellout__gfor__BRA__62__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+1867,((1U & (IData)((1ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x3dU))))));
        bufp->chgBit(oldp+1868,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                 [0x3fU])));
        bufp->chgBit(oldp+1869,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                       [0x3fU] >> 1U))));
        bufp->chgBit(oldp+1870,((1U & (~ (IData)((1ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x3dU)))))));
        bufp->chgBit(oldp+1871,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT____Vcellout__gfor__BRA__63__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+1872,((1U & (IData)((0x3ffffffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 4U))))));
        bufp->chgBit(oldp+1873,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                 [6U])));
        bufp->chgBit(oldp+1874,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                       [6U] >> 1U))));
        bufp->chgBit(oldp+1875,((1U & (~ (IData)((0x3ffffffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 4U)))))));
        bufp->chgBit(oldp+1876,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT____Vcellout__gfor__BRA__6__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+1877,((1U & (IData)((0x1ffffffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 5U))))));
        bufp->chgBit(oldp+1878,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                 [7U])));
        bufp->chgBit(oldp+1879,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                       [7U] >> 1U))));
        bufp->chgBit(oldp+1880,((1U & (~ (IData)((0x1ffffffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 5U)))))));
        bufp->chgBit(oldp+1881,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT____Vcellout__gfor__BRA__7__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+1882,((1U & (IData)((0xffffffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 6U))))));
        bufp->chgBit(oldp+1883,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                 [8U])));
        bufp->chgBit(oldp+1884,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                       [8U] >> 1U))));
        bufp->chgBit(oldp+1885,((1U & (~ (IData)((0xffffffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 6U)))))));
        bufp->chgBit(oldp+1886,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT____Vcellout__gfor__BRA__8__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+1887,((1U & (IData)((0x7fffffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 7U))))));
        bufp->chgBit(oldp+1888,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                 [9U])));
        bufp->chgBit(oldp+1889,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                       [9U] >> 1U))));
        bufp->chgBit(oldp+1890,((1U & (~ (IData)((0x7fffffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 7U)))))));
        bufp->chgBit(oldp+1891,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT____Vcellout__gfor__BRA__9__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+1892,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                               >> 3U)))));
        bufp->chgBit(oldp+1893,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                               >> 2U)))));
        bufp->chgBit(oldp+1894,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                               >> 1U)))));
        bufp->chgCData(oldp+1895,((7U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                 >> 0x1dU)))),3);
        bufp->chgQData(oldp+1896,((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                   << 0x1eU)),64);
        bufp->chgQData(oldp+1898,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellout__boothfor__BRA__30__KET____DOT__ai__OutX),64);
        bufp->chgBit(oldp+1900,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__neg2x) 
                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__negx))));
        bufp->chgBit(oldp+1901,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__negx));
        bufp->chgBit(oldp+1902,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__x));
        bufp->chgBit(oldp+1903,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__neg2x));
        bufp->chgBit(oldp+1904,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT____Vcellout__fir__OutX));
        bufp->chgBit(oldp+1905,((1U & (IData)((0x3ffffffff00000ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  << 0x14U))))));
        bufp->chgBit(oldp+1906,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                 [0xaU])));
        bufp->chgBit(oldp+1907,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                       [0xaU] >> 1U))));
        bufp->chgBit(oldp+1908,((1U & (~ (IData)((0x3ffffffff00000ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0x14U)))))));
        bufp->chgBit(oldp+1909,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT____Vcellout__gfor__BRA__10__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+1910,((1U & (IData)((0x1ffffffff80000ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  << 0x13U))))));
        bufp->chgBit(oldp+1911,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                 [0xbU])));
        bufp->chgBit(oldp+1912,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                       [0xbU] >> 1U))));
        bufp->chgBit(oldp+1913,((1U & (~ (IData)((0x1ffffffff80000ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0x13U)))))));
        bufp->chgBit(oldp+1914,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT____Vcellout__gfor__BRA__11__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+1915,((1U & (IData)((0xffffffffc0000ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  << 0x12U))))));
        bufp->chgBit(oldp+1916,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                 [0xcU])));
        bufp->chgBit(oldp+1917,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                       [0xcU] >> 1U))));
        bufp->chgBit(oldp+1918,((1U & (~ (IData)((0xffffffffc0000ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0x12U)))))));
        bufp->chgBit(oldp+1919,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT____Vcellout__gfor__BRA__12__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+1920,((1U & (IData)((0x7fffffffe0000ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  << 0x11U))))));
        bufp->chgBit(oldp+1921,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                 [0xdU])));
        bufp->chgBit(oldp+1922,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                       [0xdU] >> 1U))));
        bufp->chgBit(oldp+1923,((1U & (~ (IData)((0x7fffffffe0000ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0x11U)))))));
        bufp->chgBit(oldp+1924,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT____Vcellout__gfor__BRA__13__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+1925,((1U & (IData)((0x3ffffffff0000ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  << 0x10U))))));
        bufp->chgBit(oldp+1926,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                 [0xeU])));
        bufp->chgBit(oldp+1927,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                       [0xeU] >> 1U))));
        bufp->chgBit(oldp+1928,((1U & (~ (IData)((0x3ffffffff0000ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0x10U)))))));
        bufp->chgBit(oldp+1929,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT____Vcellout__gfor__BRA__14__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+1930,((1U & (IData)((0x1ffffffff8000ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  << 0xfU))))));
        bufp->chgBit(oldp+1931,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                 [0xfU])));
        bufp->chgBit(oldp+1932,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                       [0xfU] >> 1U))));
        bufp->chgBit(oldp+1933,((1U & (~ (IData)((0x1ffffffff8000ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0xfU)))))));
        bufp->chgBit(oldp+1934,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT____Vcellout__gfor__BRA__15__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+1935,((1U & (IData)((0xffffffffc000ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  << 0xeU))))));
        bufp->chgBit(oldp+1936,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                 [0x10U])));
        bufp->chgBit(oldp+1937,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                       [0x10U] >> 1U))));
        bufp->chgBit(oldp+1938,((1U & (~ (IData)((0xffffffffc000ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0xeU)))))));
        bufp->chgBit(oldp+1939,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT____Vcellout__gfor__BRA__16__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+1940,((1U & (IData)((0x7fffffffe000ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  << 0xdU))))));
        bufp->chgBit(oldp+1941,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                 [0x11U])));
        bufp->chgBit(oldp+1942,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                       [0x11U] >> 1U))));
        bufp->chgBit(oldp+1943,((1U & (~ (IData)((0x7fffffffe000ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0xdU)))))));
        bufp->chgBit(oldp+1944,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT____Vcellout__gfor__BRA__17__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+1945,((1U & (IData)((0x3ffffffff000ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  << 0xcU))))));
        bufp->chgBit(oldp+1946,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                 [0x12U])));
        bufp->chgBit(oldp+1947,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                       [0x12U] >> 1U))));
        bufp->chgBit(oldp+1948,((1U & (~ (IData)((0x3ffffffff000ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0xcU)))))));
        bufp->chgBit(oldp+1949,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT____Vcellout__gfor__BRA__18__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+1950,((1U & (IData)((0x1ffffffff800ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  << 0xbU))))));
        bufp->chgBit(oldp+1951,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                 [0x13U])));
        bufp->chgBit(oldp+1952,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                       [0x13U] >> 1U))));
        bufp->chgBit(oldp+1953,((1U & (~ (IData)((0x1ffffffff800ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0xbU)))))));
        bufp->chgBit(oldp+1954,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT____Vcellout__gfor__BRA__19__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+1955,((1U & (IData)((0x7fffffffe0000000ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  << 0x1dU))))));
        bufp->chgBit(oldp+1956,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                 [1U])));
        bufp->chgBit(oldp+1957,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                       [1U] >> 1U))));
        bufp->chgBit(oldp+1958,((1U & (~ (IData)((0x7fffffffe0000000ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0x1dU)))))));
        bufp->chgBit(oldp+1959,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT____Vcellout__gfor__BRA__1__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+1960,((1U & (IData)((0xffffffffc00ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  << 0xaU))))));
        bufp->chgBit(oldp+1961,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                 [0x14U])));
        bufp->chgBit(oldp+1962,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                       [0x14U] >> 1U))));
        bufp->chgBit(oldp+1963,((1U & (~ (IData)((0xffffffffc00ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0xaU)))))));
        bufp->chgBit(oldp+1964,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT____Vcellout__gfor__BRA__20__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+1965,((1U & (IData)((0x7fffffffe00ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  << 9U))))));
        bufp->chgBit(oldp+1966,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                 [0x15U])));
        bufp->chgBit(oldp+1967,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                       [0x15U] >> 1U))));
        bufp->chgBit(oldp+1968,((1U & (~ (IData)((0x7fffffffe00ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 9U)))))));
        bufp->chgBit(oldp+1969,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT____Vcellout__gfor__BRA__21__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+1970,((1U & (IData)((0x3ffffffff00ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  << 8U))))));
        bufp->chgBit(oldp+1971,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                 [0x16U])));
        bufp->chgBit(oldp+1972,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                       [0x16U] >> 1U))));
        bufp->chgBit(oldp+1973,((1U & (~ (IData)((0x3ffffffff00ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 8U)))))));
        bufp->chgBit(oldp+1974,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT____Vcellout__gfor__BRA__22__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+1975,((1U & (IData)((0x1ffffffff80ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  << 7U))))));
        bufp->chgBit(oldp+1976,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                 [0x17U])));
        bufp->chgBit(oldp+1977,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                       [0x17U] >> 1U))));
        bufp->chgBit(oldp+1978,((1U & (~ (IData)((0x1ffffffff80ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 7U)))))));
        bufp->chgBit(oldp+1979,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT____Vcellout__gfor__BRA__23__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+1980,((1U & (IData)((0xffffffffc0ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  << 6U))))));
        bufp->chgBit(oldp+1981,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                 [0x18U])));
        bufp->chgBit(oldp+1982,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                       [0x18U] >> 1U))));
        bufp->chgBit(oldp+1983,((1U & (~ (IData)((0xffffffffc0ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 6U)))))));
        bufp->chgBit(oldp+1984,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT____Vcellout__gfor__BRA__24__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+1985,((1U & (IData)((0x7fffffffe0ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  << 5U))))));
        bufp->chgBit(oldp+1986,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                 [0x19U])));
        bufp->chgBit(oldp+1987,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                       [0x19U] >> 1U))));
        bufp->chgBit(oldp+1988,((1U & (~ (IData)((0x7fffffffe0ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 5U)))))));
        bufp->chgBit(oldp+1989,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT____Vcellout__gfor__BRA__25__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+1990,((1U & (IData)((0x3ffffffff0ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  << 4U))))));
        bufp->chgBit(oldp+1991,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                 [0x1aU])));
        bufp->chgBit(oldp+1992,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                       [0x1aU] >> 1U))));
        bufp->chgBit(oldp+1993,((1U & (~ (IData)((0x3ffffffff0ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 4U)))))));
        bufp->chgBit(oldp+1994,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT____Vcellout__gfor__BRA__26__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+1995,((1U & (IData)((0x1ffffffff8ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  << 3U))))));
        bufp->chgBit(oldp+1996,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                 [0x1bU])));
        bufp->chgBit(oldp+1997,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                       [0x1bU] >> 1U))));
        bufp->chgBit(oldp+1998,((1U & (~ (IData)((0x1ffffffff8ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 3U)))))));
        bufp->chgBit(oldp+1999,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT____Vcellout__gfor__BRA__27__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+2000,((1U & (IData)((0xffffffffcULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  << 2U))))));
        bufp->chgBit(oldp+2001,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                 [0x1cU])));
        bufp->chgBit(oldp+2002,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                       [0x1cU] >> 1U))));
        bufp->chgBit(oldp+2003,((1U & (~ (IData)((0xffffffffcULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 2U)))))));
        bufp->chgBit(oldp+2004,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT____Vcellout__gfor__BRA__28__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+2005,((1U & (IData)((0x7fffffffeULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  << 1U))))));
        bufp->chgBit(oldp+2006,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                 [0x1dU])));
        bufp->chgBit(oldp+2007,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                       [0x1dU] >> 1U))));
        bufp->chgBit(oldp+2008,((1U & (~ (IData)((0x7fffffffeULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 1U)))))));
        bufp->chgBit(oldp+2009,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT____Vcellout__gfor__BRA__29__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+2010,((1U & (IData)((0x3ffffffff0000000ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  << 0x1cU))))));
        bufp->chgBit(oldp+2011,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                 [2U])));
        bufp->chgBit(oldp+2012,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                       [2U] >> 1U))));
        bufp->chgBit(oldp+2013,((1U & (~ (IData)((0x3ffffffff0000000ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0x1cU)))))));
        bufp->chgBit(oldp+2014,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT____Vcellout__gfor__BRA__2__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+2015,((1U & (IData)((0x3ffffffffULL 
                                               & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX)))));
        bufp->chgBit(oldp+2016,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                 [0x1eU])));
        bufp->chgBit(oldp+2017,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                       [0x1eU] >> 1U))));
        bufp->chgBit(oldp+2018,((1U & (~ (IData)((0x3ffffffffULL 
                                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX))))));
        bufp->chgBit(oldp+2019,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT____Vcellout__gfor__BRA__30__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+2020,((1U & (IData)((0x1ffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 1U))))));
        bufp->chgBit(oldp+2021,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                 [0x1fU])));
        bufp->chgBit(oldp+2022,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                       [0x1fU] >> 1U))));
        bufp->chgBit(oldp+2023,((1U & (~ (IData)((0x1ffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 1U)))))));
        bufp->chgBit(oldp+2024,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT____Vcellout__gfor__BRA__31__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+2025,((1U & (IData)((0xffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 2U))))));
        bufp->chgBit(oldp+2026,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                 [0x20U])));
        bufp->chgBit(oldp+2027,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                       [0x20U] >> 1U))));
        bufp->chgBit(oldp+2028,((1U & (~ (IData)((0xffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 2U)))))));
        bufp->chgBit(oldp+2029,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT____Vcellout__gfor__BRA__32__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+2030,((1U & (IData)((0x7fffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 3U))))));
        bufp->chgBit(oldp+2031,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                 [0x21U])));
        bufp->chgBit(oldp+2032,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                       [0x21U] >> 1U))));
        bufp->chgBit(oldp+2033,((1U & (~ (IData)((0x7fffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 3U)))))));
        bufp->chgBit(oldp+2034,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT____Vcellout__gfor__BRA__33__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+2035,((1U & (IData)((0x3fffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 4U))))));
        bufp->chgBit(oldp+2036,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                 [0x22U])));
        bufp->chgBit(oldp+2037,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                       [0x22U] >> 1U))));
        bufp->chgBit(oldp+2038,((1U & (~ (IData)((0x3fffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 4U)))))));
        bufp->chgBit(oldp+2039,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT____Vcellout__gfor__BRA__34__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+2040,((1U & (IData)((0x1fffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 5U))))));
        bufp->chgBit(oldp+2041,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                 [0x23U])));
        bufp->chgBit(oldp+2042,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                       [0x23U] >> 1U))));
        bufp->chgBit(oldp+2043,((1U & (~ (IData)((0x1fffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 5U)))))));
        bufp->chgBit(oldp+2044,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT____Vcellout__gfor__BRA__35__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+2045,((1U & (IData)((0xfffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 6U))))));
        bufp->chgBit(oldp+2046,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                 [0x24U])));
        bufp->chgBit(oldp+2047,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                       [0x24U] >> 1U))));
        bufp->chgBit(oldp+2048,((1U & (~ (IData)((0xfffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 6U)))))));
        bufp->chgBit(oldp+2049,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT____Vcellout__gfor__BRA__36__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+2050,((1U & (IData)((0x7ffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 7U))))));
        bufp->chgBit(oldp+2051,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                 [0x25U])));
        bufp->chgBit(oldp+2052,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                       [0x25U] >> 1U))));
        bufp->chgBit(oldp+2053,((1U & (~ (IData)((0x7ffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 7U)))))));
        bufp->chgBit(oldp+2054,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT____Vcellout__gfor__BRA__37__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+2055,((1U & (IData)((0x3ffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 8U))))));
        bufp->chgBit(oldp+2056,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                 [0x26U])));
        bufp->chgBit(oldp+2057,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                       [0x26U] >> 1U))));
        bufp->chgBit(oldp+2058,((1U & (~ (IData)((0x3ffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 8U)))))));
        bufp->chgBit(oldp+2059,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT____Vcellout__gfor__BRA__38__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+2060,((1U & (IData)((0x1ffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 9U))))));
        bufp->chgBit(oldp+2061,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                 [0x27U])));
        bufp->chgBit(oldp+2062,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                       [0x27U] >> 1U))));
        bufp->chgBit(oldp+2063,((1U & (~ (IData)((0x1ffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 9U)))))));
        bufp->chgBit(oldp+2064,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT____Vcellout__gfor__BRA__39__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+2065,((1U & (IData)((0x1ffffffff8000000ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  << 0x1bU))))));
        bufp->chgBit(oldp+2066,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                 [3U])));
        bufp->chgBit(oldp+2067,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                       [3U] >> 1U))));
        bufp->chgBit(oldp+2068,((1U & (~ (IData)((0x1ffffffff8000000ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0x1bU)))))));
        bufp->chgBit(oldp+2069,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT____Vcellout__gfor__BRA__3__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+2070,((1U & (IData)((0xffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0xaU))))));
        bufp->chgBit(oldp+2071,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                 [0x28U])));
        bufp->chgBit(oldp+2072,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                       [0x28U] >> 1U))));
        bufp->chgBit(oldp+2073,((1U & (~ (IData)((0xffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0xaU)))))));
        bufp->chgBit(oldp+2074,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT____Vcellout__gfor__BRA__40__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+2075,((1U & (IData)((0x7fffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0xbU))))));
        bufp->chgBit(oldp+2076,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                 [0x29U])));
        bufp->chgBit(oldp+2077,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                       [0x29U] >> 1U))));
        bufp->chgBit(oldp+2078,((1U & (~ (IData)((0x7fffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0xbU)))))));
        bufp->chgBit(oldp+2079,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT____Vcellout__gfor__BRA__41__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+2080,((1U & (IData)((0x3fffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0xcU))))));
        bufp->chgBit(oldp+2081,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                 [0x2aU])));
        bufp->chgBit(oldp+2082,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                       [0x2aU] >> 1U))));
        bufp->chgBit(oldp+2083,((1U & (~ (IData)((0x3fffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0xcU)))))));
        bufp->chgBit(oldp+2084,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT____Vcellout__gfor__BRA__42__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+2085,((1U & (IData)((0x1fffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0xdU))))));
        bufp->chgBit(oldp+2086,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                 [0x2bU])));
        bufp->chgBit(oldp+2087,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                       [0x2bU] >> 1U))));
        bufp->chgBit(oldp+2088,((1U & (~ (IData)((0x1fffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0xdU)))))));
        bufp->chgBit(oldp+2089,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT____Vcellout__gfor__BRA__43__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+2090,((1U & (IData)((0xfffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0xeU))))));
        bufp->chgBit(oldp+2091,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                 [0x2cU])));
        bufp->chgBit(oldp+2092,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                       [0x2cU] >> 1U))));
        bufp->chgBit(oldp+2093,((1U & (~ (IData)((0xfffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0xeU)))))));
        bufp->chgBit(oldp+2094,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT____Vcellout__gfor__BRA__44__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+2095,((1U & (IData)((0x7ffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0xfU))))));
        bufp->chgBit(oldp+2096,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                 [0x2dU])));
        bufp->chgBit(oldp+2097,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                       [0x2dU] >> 1U))));
        bufp->chgBit(oldp+2098,((1U & (~ (IData)((0x7ffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0xfU)))))));
        bufp->chgBit(oldp+2099,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT____Vcellout__gfor__BRA__45__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+2100,((1U & (IData)((0x3ffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x10U))))));
        bufp->chgBit(oldp+2101,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                 [0x2eU])));
        bufp->chgBit(oldp+2102,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                       [0x2eU] >> 1U))));
        bufp->chgBit(oldp+2103,((1U & (~ (IData)((0x3ffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x10U)))))));
        bufp->chgBit(oldp+2104,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT____Vcellout__gfor__BRA__46__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+2105,((1U & (IData)((0x1ffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x11U))))));
        bufp->chgBit(oldp+2106,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                 [0x2fU])));
        bufp->chgBit(oldp+2107,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                       [0x2fU] >> 1U))));
        bufp->chgBit(oldp+2108,((1U & (~ (IData)((0x1ffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x11U)))))));
        bufp->chgBit(oldp+2109,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT____Vcellout__gfor__BRA__47__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+2110,((1U & (IData)((0xffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x12U))))));
        bufp->chgBit(oldp+2111,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                 [0x30U])));
        bufp->chgBit(oldp+2112,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                       [0x30U] >> 1U))));
        bufp->chgBit(oldp+2113,((1U & (~ (IData)((0xffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x12U)))))));
        bufp->chgBit(oldp+2114,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT____Vcellout__gfor__BRA__48__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+2115,((1U & (IData)((0x7fffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x13U))))));
        bufp->chgBit(oldp+2116,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                 [0x31U])));
        bufp->chgBit(oldp+2117,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                       [0x31U] >> 1U))));
        bufp->chgBit(oldp+2118,((1U & (~ (IData)((0x7fffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x13U)))))));
        bufp->chgBit(oldp+2119,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT____Vcellout__gfor__BRA__49__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+2120,((1U & (IData)((0xffffffffc000000ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  << 0x1aU))))));
        bufp->chgBit(oldp+2121,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                 [4U])));
        bufp->chgBit(oldp+2122,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                       [4U] >> 1U))));
        bufp->chgBit(oldp+2123,((1U & (~ (IData)((0xffffffffc000000ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0x1aU)))))));
        bufp->chgBit(oldp+2124,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT____Vcellout__gfor__BRA__4__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+2125,((1U & (IData)((0x3fffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x14U))))));
        bufp->chgBit(oldp+2126,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                 [0x32U])));
        bufp->chgBit(oldp+2127,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                       [0x32U] >> 1U))));
        bufp->chgBit(oldp+2128,((1U & (~ (IData)((0x3fffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x14U)))))));
        bufp->chgBit(oldp+2129,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT____Vcellout__gfor__BRA__50__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+2130,((1U & (IData)((0x1fffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x15U))))));
        bufp->chgBit(oldp+2131,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                 [0x33U])));
        bufp->chgBit(oldp+2132,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                       [0x33U] >> 1U))));
        bufp->chgBit(oldp+2133,((1U & (~ (IData)((0x1fffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x15U)))))));
        bufp->chgBit(oldp+2134,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT____Vcellout__gfor__BRA__51__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+2135,((1U & (IData)((0xfffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x16U))))));
        bufp->chgBit(oldp+2136,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                 [0x34U])));
        bufp->chgBit(oldp+2137,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                       [0x34U] >> 1U))));
        bufp->chgBit(oldp+2138,((1U & (~ (IData)((0xfffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x16U)))))));
        bufp->chgBit(oldp+2139,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT____Vcellout__gfor__BRA__52__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+2140,((1U & (IData)((0x7ffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x17U))))));
        bufp->chgBit(oldp+2141,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                 [0x35U])));
        bufp->chgBit(oldp+2142,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                       [0x35U] >> 1U))));
        bufp->chgBit(oldp+2143,((1U & (~ (IData)((0x7ffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x17U)))))));
        bufp->chgBit(oldp+2144,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT____Vcellout__gfor__BRA__53__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+2145,((1U & (IData)((0x3ffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x18U))))));
        bufp->chgBit(oldp+2146,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                 [0x36U])));
        bufp->chgBit(oldp+2147,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                       [0x36U] >> 1U))));
        bufp->chgBit(oldp+2148,((1U & (~ (IData)((0x3ffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x18U)))))));
        bufp->chgBit(oldp+2149,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT____Vcellout__gfor__BRA__54__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+2150,((1U & (IData)((0x1ffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x19U))))));
        bufp->chgBit(oldp+2151,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                 [0x37U])));
        bufp->chgBit(oldp+2152,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                       [0x37U] >> 1U))));
        bufp->chgBit(oldp+2153,((1U & (~ (IData)((0x1ffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x19U)))))));
        bufp->chgBit(oldp+2154,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT____Vcellout__gfor__BRA__55__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+2155,((1U & (IData)((0xffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x1aU))))));
        bufp->chgBit(oldp+2156,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                 [0x38U])));
        bufp->chgBit(oldp+2157,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                       [0x38U] >> 1U))));
        bufp->chgBit(oldp+2158,((1U & (~ (IData)((0xffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x1aU)))))));
        bufp->chgBit(oldp+2159,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT____Vcellout__gfor__BRA__56__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+2160,((1U & (IData)((0x7fULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x1bU))))));
        bufp->chgBit(oldp+2161,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                 [0x39U])));
        bufp->chgBit(oldp+2162,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                       [0x39U] >> 1U))));
        bufp->chgBit(oldp+2163,((1U & (~ (IData)((0x7fULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x1bU)))))));
        bufp->chgBit(oldp+2164,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT____Vcellout__gfor__BRA__57__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+2165,((1U & (IData)((0x3fULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x1cU))))));
        bufp->chgBit(oldp+2166,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                 [0x3aU])));
        bufp->chgBit(oldp+2167,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                       [0x3aU] >> 1U))));
        bufp->chgBit(oldp+2168,((1U & (~ (IData)((0x3fULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x1cU)))))));
        bufp->chgBit(oldp+2169,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT____Vcellout__gfor__BRA__58__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+2170,((1U & (IData)((0x1fULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x1dU))))));
        bufp->chgBit(oldp+2171,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                 [0x3bU])));
        bufp->chgBit(oldp+2172,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                       [0x3bU] >> 1U))));
        bufp->chgBit(oldp+2173,((1U & (~ (IData)((0x1fULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x1dU)))))));
        bufp->chgBit(oldp+2174,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT____Vcellout__gfor__BRA__59__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+2175,((1U & (IData)((0x7fffffffe000000ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  << 0x19U))))));
        bufp->chgBit(oldp+2176,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                 [5U])));
        bufp->chgBit(oldp+2177,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                       [5U] >> 1U))));
        bufp->chgBit(oldp+2178,((1U & (~ (IData)((0x7fffffffe000000ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0x19U)))))));
        bufp->chgBit(oldp+2179,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT____Vcellout__gfor__BRA__5__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+2180,((1U & (IData)((0xfULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x1eU))))));
        bufp->chgBit(oldp+2181,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                 [0x3cU])));
        bufp->chgBit(oldp+2182,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                       [0x3cU] >> 1U))));
        bufp->chgBit(oldp+2183,((1U & (~ (IData)((0xfULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x1eU)))))));
        bufp->chgBit(oldp+2184,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT____Vcellout__gfor__BRA__60__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+2185,((1U & (IData)((7ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x1fU))))));
        bufp->chgBit(oldp+2186,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                 [0x3dU])));
        bufp->chgBit(oldp+2187,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                       [0x3dU] >> 1U))));
        bufp->chgBit(oldp+2188,((1U & (~ (IData)((7ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x1fU)))))));
        bufp->chgBit(oldp+2189,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT____Vcellout__gfor__BRA__61__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+2190,((1U & (IData)((3ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x20U))))));
        bufp->chgBit(oldp+2191,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                 [0x3eU])));
        bufp->chgBit(oldp+2192,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                       [0x3eU] >> 1U))));
        bufp->chgBit(oldp+2193,((1U & (~ (IData)((3ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x20U)))))));
        bufp->chgBit(oldp+2194,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT____Vcellout__gfor__BRA__62__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+2195,((1U & (IData)((1ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x21U))))));
        bufp->chgBit(oldp+2196,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                 [0x3fU])));
        bufp->chgBit(oldp+2197,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                       [0x3fU] >> 1U))));
        bufp->chgBit(oldp+2198,((1U & (~ (IData)((1ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x21U)))))));
        bufp->chgBit(oldp+2199,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT____Vcellout__gfor__BRA__63__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+2200,((1U & (IData)((0x3ffffffff000000ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  << 0x18U))))));
        bufp->chgBit(oldp+2201,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                 [6U])));
        bufp->chgBit(oldp+2202,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                       [6U] >> 1U))));
        bufp->chgBit(oldp+2203,((1U & (~ (IData)((0x3ffffffff000000ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0x18U)))))));
        bufp->chgBit(oldp+2204,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT____Vcellout__gfor__BRA__6__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+2205,((1U & (IData)((0x1ffffffff800000ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  << 0x17U))))));
        bufp->chgBit(oldp+2206,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                 [7U])));
        bufp->chgBit(oldp+2207,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                       [7U] >> 1U))));
        bufp->chgBit(oldp+2208,((1U & (~ (IData)((0x1ffffffff800000ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0x17U)))))));
        bufp->chgBit(oldp+2209,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT____Vcellout__gfor__BRA__7__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+2210,((1U & (IData)((0xffffffffc00000ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  << 0x16U))))));
        bufp->chgBit(oldp+2211,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                 [8U])));
        bufp->chgBit(oldp+2212,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                       [8U] >> 1U))));
        bufp->chgBit(oldp+2213,((1U & (~ (IData)((0xffffffffc00000ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0x16U)))))));
        bufp->chgBit(oldp+2214,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT____Vcellout__gfor__BRA__8__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+2215,((1U & (IData)((0x7fffffffe00000ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  << 0x15U))))));
        bufp->chgBit(oldp+2216,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                 [9U])));
        bufp->chgBit(oldp+2217,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                       [9U] >> 1U))));
        bufp->chgBit(oldp+2218,((1U & (~ (IData)((0x7fffffffe00000ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0x15U)))))));
        bufp->chgBit(oldp+2219,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT____Vcellout__gfor__BRA__9__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+2220,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                               >> 0x1fU)))));
        bufp->chgBit(oldp+2221,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                               >> 0x1eU)))));
        bufp->chgCData(oldp+2222,((7U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                 >> 3U)))),3);
        bufp->chgQData(oldp+2223,((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                   << 4U)),64);
        bufp->chgQData(oldp+2225,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellout__boothfor__BRA__4__KET____DOT__ai__OutX),64);
        bufp->chgBit(oldp+2227,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__neg2x) 
                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__negx))));
        bufp->chgBit(oldp+2228,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__negx));
        bufp->chgBit(oldp+2229,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__x));
        bufp->chgBit(oldp+2230,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__neg2x));
        bufp->chgBit(oldp+2231,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT____Vcellout__fir__OutX));
        bufp->chgBit(oldp+2232,((1U & (IData)((0x3fffffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 6U))))));
        bufp->chgBit(oldp+2233,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                 [0xaU])));
        bufp->chgBit(oldp+2234,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                       [0xaU] >> 1U))));
        bufp->chgBit(oldp+2235,((1U & (~ (IData)((0x3fffffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 6U)))))));
        bufp->chgBit(oldp+2236,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT____Vcellout__gfor__BRA__10__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+2237,((1U & (IData)((0x1fffffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 7U))))));
        bufp->chgBit(oldp+2238,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                 [0xbU])));
        bufp->chgBit(oldp+2239,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                       [0xbU] >> 1U))));
        bufp->chgBit(oldp+2240,((1U & (~ (IData)((0x1fffffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 7U)))))));
        bufp->chgBit(oldp+2241,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT____Vcellout__gfor__BRA__11__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+2242,((1U & (IData)((0xfffffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 8U))))));
        bufp->chgBit(oldp+2243,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                 [0xcU])));
        bufp->chgBit(oldp+2244,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                       [0xcU] >> 1U))));
        bufp->chgBit(oldp+2245,((1U & (~ (IData)((0xfffffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 8U)))))));
        bufp->chgBit(oldp+2246,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT____Vcellout__gfor__BRA__12__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+2247,((1U & (IData)((0x7ffffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 9U))))));
        bufp->chgBit(oldp+2248,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                 [0xdU])));
        bufp->chgBit(oldp+2249,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                       [0xdU] >> 1U))));
        bufp->chgBit(oldp+2250,((1U & (~ (IData)((0x7ffffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 9U)))))));
        bufp->chgBit(oldp+2251,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT____Vcellout__gfor__BRA__13__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+2252,((1U & (IData)((0x3ffffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0xaU))))));
        bufp->chgBit(oldp+2253,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                 [0xeU])));
        bufp->chgBit(oldp+2254,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                       [0xeU] >> 1U))));
        bufp->chgBit(oldp+2255,((1U & (~ (IData)((0x3ffffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0xaU)))))));
        bufp->chgBit(oldp+2256,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT____Vcellout__gfor__BRA__14__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+2257,((1U & (IData)((0x1ffffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0xbU))))));
        bufp->chgBit(oldp+2258,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                 [0xfU])));
        bufp->chgBit(oldp+2259,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                       [0xfU] >> 1U))));
        bufp->chgBit(oldp+2260,((1U & (~ (IData)((0x1ffffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0xbU)))))));
        bufp->chgBit(oldp+2261,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT____Vcellout__gfor__BRA__15__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+2262,((1U & (IData)((0xffffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0xcU))))));
        bufp->chgBit(oldp+2263,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                 [0x10U])));
        bufp->chgBit(oldp+2264,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                       [0x10U] >> 1U))));
        bufp->chgBit(oldp+2265,((1U & (~ (IData)((0xffffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0xcU)))))));
        bufp->chgBit(oldp+2266,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT____Vcellout__gfor__BRA__16__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+2267,((1U & (IData)((0x7fffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0xdU))))));
        bufp->chgBit(oldp+2268,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                 [0x11U])));
        bufp->chgBit(oldp+2269,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                       [0x11U] >> 1U))));
        bufp->chgBit(oldp+2270,((1U & (~ (IData)((0x7fffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0xdU)))))));
        bufp->chgBit(oldp+2271,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT____Vcellout__gfor__BRA__17__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+2272,((1U & (IData)((0x3fffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0xeU))))));
        bufp->chgBit(oldp+2273,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                 [0x12U])));
        bufp->chgBit(oldp+2274,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                       [0x12U] >> 1U))));
        bufp->chgBit(oldp+2275,((1U & (~ (IData)((0x3fffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0xeU)))))));
        bufp->chgBit(oldp+2276,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT____Vcellout__gfor__BRA__18__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+2277,((1U & (IData)((0x1fffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0xfU))))));
        bufp->chgBit(oldp+2278,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                 [0x13U])));
        bufp->chgBit(oldp+2279,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                       [0x13U] >> 1U))));
        bufp->chgBit(oldp+2280,((1U & (~ (IData)((0x1fffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0xfU)))))));
        bufp->chgBit(oldp+2281,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT____Vcellout__gfor__BRA__19__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+2282,((1U & (IData)((0x7ffffffffffffff8ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  << 3U))))));
        bufp->chgBit(oldp+2283,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                 [1U])));
        bufp->chgBit(oldp+2284,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                       [1U] >> 1U))));
        bufp->chgBit(oldp+2285,((1U & (~ (IData)((0x7ffffffffffffff8ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 3U)))))));
        bufp->chgBit(oldp+2286,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT____Vcellout__gfor__BRA__1__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+2287,((1U & (IData)((0xfffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x10U))))));
        bufp->chgBit(oldp+2288,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                 [0x14U])));
        bufp->chgBit(oldp+2289,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                       [0x14U] >> 1U))));
        bufp->chgBit(oldp+2290,((1U & (~ (IData)((0xfffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x10U)))))));
        bufp->chgBit(oldp+2291,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT____Vcellout__gfor__BRA__20__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+2292,((1U & (IData)((0x7ffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x11U))))));
        bufp->chgBit(oldp+2293,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                 [0x15U])));
        bufp->chgBit(oldp+2294,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                       [0x15U] >> 1U))));
        bufp->chgBit(oldp+2295,((1U & (~ (IData)((0x7ffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x11U)))))));
        bufp->chgBit(oldp+2296,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT____Vcellout__gfor__BRA__21__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+2297,((1U & (IData)((0x3ffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x12U))))));
        bufp->chgBit(oldp+2298,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                 [0x16U])));
        bufp->chgBit(oldp+2299,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                       [0x16U] >> 1U))));
        bufp->chgBit(oldp+2300,((1U & (~ (IData)((0x3ffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x12U)))))));
        bufp->chgBit(oldp+2301,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT____Vcellout__gfor__BRA__22__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+2302,((1U & (IData)((0x1ffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x13U))))));
        bufp->chgBit(oldp+2303,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                 [0x17U])));
        bufp->chgBit(oldp+2304,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                       [0x17U] >> 1U))));
        bufp->chgBit(oldp+2305,((1U & (~ (IData)((0x1ffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x13U)))))));
        bufp->chgBit(oldp+2306,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT____Vcellout__gfor__BRA__23__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+2307,((1U & (IData)((0xffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x14U))))));
        bufp->chgBit(oldp+2308,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                 [0x18U])));
        bufp->chgBit(oldp+2309,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                       [0x18U] >> 1U))));
        bufp->chgBit(oldp+2310,((1U & (~ (IData)((0xffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x14U)))))));
        bufp->chgBit(oldp+2311,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT____Vcellout__gfor__BRA__24__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+2312,((1U & (IData)((0x7fffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x15U))))));
        bufp->chgBit(oldp+2313,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                 [0x19U])));
        bufp->chgBit(oldp+2314,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                       [0x19U] >> 1U))));
        bufp->chgBit(oldp+2315,((1U & (~ (IData)((0x7fffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x15U)))))));
        bufp->chgBit(oldp+2316,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT____Vcellout__gfor__BRA__25__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+2317,((1U & (IData)((0x3fffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x16U))))));
        bufp->chgBit(oldp+2318,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                 [0x1aU])));
        bufp->chgBit(oldp+2319,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                       [0x1aU] >> 1U))));
        bufp->chgBit(oldp+2320,((1U & (~ (IData)((0x3fffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x16U)))))));
        bufp->chgBit(oldp+2321,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT____Vcellout__gfor__BRA__26__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+2322,((1U & (IData)((0x1fffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x17U))))));
        bufp->chgBit(oldp+2323,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                 [0x1bU])));
        bufp->chgBit(oldp+2324,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                       [0x1bU] >> 1U))));
        bufp->chgBit(oldp+2325,((1U & (~ (IData)((0x1fffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x17U)))))));
        bufp->chgBit(oldp+2326,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT____Vcellout__gfor__BRA__27__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+2327,((1U & (IData)((0xfffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x18U))))));
        bufp->chgBit(oldp+2328,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                 [0x1cU])));
        bufp->chgBit(oldp+2329,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                       [0x1cU] >> 1U))));
        bufp->chgBit(oldp+2330,((1U & (~ (IData)((0xfffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x18U)))))));
        bufp->chgBit(oldp+2331,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT____Vcellout__gfor__BRA__28__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+2332,((1U & (IData)((0x7ffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x19U))))));
        bufp->chgBit(oldp+2333,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                 [0x1dU])));
        bufp->chgBit(oldp+2334,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                       [0x1dU] >> 1U))));
        bufp->chgBit(oldp+2335,((1U & (~ (IData)((0x7ffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x19U)))))));
        bufp->chgBit(oldp+2336,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT____Vcellout__gfor__BRA__29__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+2337,((1U & (IData)((0x3ffffffffffffffcULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  << 2U))))));
        bufp->chgBit(oldp+2338,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                 [2U])));
        bufp->chgBit(oldp+2339,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                       [2U] >> 1U))));
        bufp->chgBit(oldp+2340,((1U & (~ (IData)((0x3ffffffffffffffcULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 2U)))))));
        bufp->chgBit(oldp+2341,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT____Vcellout__gfor__BRA__2__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+2342,((1U & (IData)((0x3ffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x1aU))))));
        bufp->chgBit(oldp+2343,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                 [0x1eU])));
        bufp->chgBit(oldp+2344,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                       [0x1eU] >> 1U))));
        bufp->chgBit(oldp+2345,((1U & (~ (IData)((0x3ffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x1aU)))))));
        bufp->chgBit(oldp+2346,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT____Vcellout__gfor__BRA__30__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+2347,((1U & (IData)((0x1ffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x1bU))))));
        bufp->chgBit(oldp+2348,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                 [0x1fU])));
        bufp->chgBit(oldp+2349,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                       [0x1fU] >> 1U))));
        bufp->chgBit(oldp+2350,((1U & (~ (IData)((0x1ffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x1bU)))))));
        bufp->chgBit(oldp+2351,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT____Vcellout__gfor__BRA__31__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+2352,((1U & (IData)((0xffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x1cU))))));
        bufp->chgBit(oldp+2353,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                 [0x20U])));
        bufp->chgBit(oldp+2354,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                       [0x20U] >> 1U))));
        bufp->chgBit(oldp+2355,((1U & (~ (IData)((0xffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x1cU)))))));
        bufp->chgBit(oldp+2356,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT____Vcellout__gfor__BRA__32__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+2357,((1U & (IData)((0x7fffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x1dU))))));
        bufp->chgBit(oldp+2358,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                 [0x21U])));
        bufp->chgBit(oldp+2359,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                       [0x21U] >> 1U))));
        bufp->chgBit(oldp+2360,((1U & (~ (IData)((0x7fffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x1dU)))))));
        bufp->chgBit(oldp+2361,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT____Vcellout__gfor__BRA__33__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+2362,((1U & (IData)((0x3fffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x1eU))))));
        bufp->chgBit(oldp+2363,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                 [0x22U])));
        bufp->chgBit(oldp+2364,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                       [0x22U] >> 1U))));
        bufp->chgBit(oldp+2365,((1U & (~ (IData)((0x3fffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x1eU)))))));
        bufp->chgBit(oldp+2366,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT____Vcellout__gfor__BRA__34__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+2367,((1U & (IData)((0x1fffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x1fU))))));
        bufp->chgBit(oldp+2368,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                 [0x23U])));
        bufp->chgBit(oldp+2369,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                       [0x23U] >> 1U))));
        bufp->chgBit(oldp+2370,((1U & (~ (IData)((0x1fffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x1fU)))))));
        bufp->chgBit(oldp+2371,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT____Vcellout__gfor__BRA__35__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+2372,((1U & (IData)((0xfffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x20U))))));
        bufp->chgBit(oldp+2373,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                 [0x24U])));
        bufp->chgBit(oldp+2374,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                       [0x24U] >> 1U))));
        bufp->chgBit(oldp+2375,((1U & (~ (IData)((0xfffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x20U)))))));
        bufp->chgBit(oldp+2376,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT____Vcellout__gfor__BRA__36__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+2377,((1U & (IData)((0x7ffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x21U))))));
        bufp->chgBit(oldp+2378,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                 [0x25U])));
        bufp->chgBit(oldp+2379,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                       [0x25U] >> 1U))));
        bufp->chgBit(oldp+2380,((1U & (~ (IData)((0x7ffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x21U)))))));
        bufp->chgBit(oldp+2381,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT____Vcellout__gfor__BRA__37__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+2382,((1U & (IData)((0x3ffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x22U))))));
        bufp->chgBit(oldp+2383,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                 [0x26U])));
        bufp->chgBit(oldp+2384,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                       [0x26U] >> 1U))));
        bufp->chgBit(oldp+2385,((1U & (~ (IData)((0x3ffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x22U)))))));
        bufp->chgBit(oldp+2386,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT____Vcellout__gfor__BRA__38__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+2387,((1U & (IData)((0x1ffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x23U))))));
        bufp->chgBit(oldp+2388,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                 [0x27U])));
        bufp->chgBit(oldp+2389,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                       [0x27U] >> 1U))));
        bufp->chgBit(oldp+2390,((1U & (~ (IData)((0x1ffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x23U)))))));
        bufp->chgBit(oldp+2391,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT____Vcellout__gfor__BRA__39__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+2392,((1U & (IData)((0x1ffffffffffffffeULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  << 1U))))));
        bufp->chgBit(oldp+2393,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                 [3U])));
        bufp->chgBit(oldp+2394,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                       [3U] >> 1U))));
        bufp->chgBit(oldp+2395,((1U & (~ (IData)((0x1ffffffffffffffeULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 1U)))))));
        bufp->chgBit(oldp+2396,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT____Vcellout__gfor__BRA__3__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+2397,((1U & (IData)((0xffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x24U))))));
        bufp->chgBit(oldp+2398,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                 [0x28U])));
        bufp->chgBit(oldp+2399,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                       [0x28U] >> 1U))));
        bufp->chgBit(oldp+2400,((1U & (~ (IData)((0xffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x24U)))))));
        bufp->chgBit(oldp+2401,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT____Vcellout__gfor__BRA__40__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+2402,((1U & (IData)((0x7fffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x25U))))));
        bufp->chgBit(oldp+2403,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                 [0x29U])));
        bufp->chgBit(oldp+2404,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                       [0x29U] >> 1U))));
        bufp->chgBit(oldp+2405,((1U & (~ (IData)((0x7fffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x25U)))))));
        bufp->chgBit(oldp+2406,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT____Vcellout__gfor__BRA__41__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+2407,((1U & (IData)((0x3fffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x26U))))));
        bufp->chgBit(oldp+2408,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                 [0x2aU])));
        bufp->chgBit(oldp+2409,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                       [0x2aU] >> 1U))));
        bufp->chgBit(oldp+2410,((1U & (~ (IData)((0x3fffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x26U)))))));
        bufp->chgBit(oldp+2411,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT____Vcellout__gfor__BRA__42__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+2412,((1U & (IData)((0x1fffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x27U))))));
        bufp->chgBit(oldp+2413,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                 [0x2bU])));
        bufp->chgBit(oldp+2414,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                       [0x2bU] >> 1U))));
        bufp->chgBit(oldp+2415,((1U & (~ (IData)((0x1fffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x27U)))))));
        bufp->chgBit(oldp+2416,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT____Vcellout__gfor__BRA__43__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+2417,((1U & (IData)((0xfffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x28U))))));
        bufp->chgBit(oldp+2418,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                 [0x2cU])));
        bufp->chgBit(oldp+2419,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                       [0x2cU] >> 1U))));
        bufp->chgBit(oldp+2420,((1U & (~ (IData)((0xfffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x28U)))))));
        bufp->chgBit(oldp+2421,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT____Vcellout__gfor__BRA__44__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+2422,((1U & (IData)((0x7ffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x29U))))));
        bufp->chgBit(oldp+2423,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                 [0x2dU])));
        bufp->chgBit(oldp+2424,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                       [0x2dU] >> 1U))));
        bufp->chgBit(oldp+2425,((1U & (~ (IData)((0x7ffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x29U)))))));
        bufp->chgBit(oldp+2426,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT____Vcellout__gfor__BRA__45__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+2427,((1U & (IData)((0x3ffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x2aU))))));
        bufp->chgBit(oldp+2428,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                 [0x2eU])));
        bufp->chgBit(oldp+2429,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                       [0x2eU] >> 1U))));
        bufp->chgBit(oldp+2430,((1U & (~ (IData)((0x3ffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x2aU)))))));
        bufp->chgBit(oldp+2431,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT____Vcellout__gfor__BRA__46__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+2432,((1U & (IData)((0x1ffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x2bU))))));
        bufp->chgBit(oldp+2433,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                 [0x2fU])));
        bufp->chgBit(oldp+2434,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                       [0x2fU] >> 1U))));
        bufp->chgBit(oldp+2435,((1U & (~ (IData)((0x1ffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x2bU)))))));
        bufp->chgBit(oldp+2436,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT____Vcellout__gfor__BRA__47__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+2437,((1U & (IData)((0xffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x2cU))))));
        bufp->chgBit(oldp+2438,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                 [0x30U])));
        bufp->chgBit(oldp+2439,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                       [0x30U] >> 1U))));
        bufp->chgBit(oldp+2440,((1U & (~ (IData)((0xffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x2cU)))))));
        bufp->chgBit(oldp+2441,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT____Vcellout__gfor__BRA__48__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+2442,((1U & (IData)((0x7fffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x2dU))))));
        bufp->chgBit(oldp+2443,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                 [0x31U])));
        bufp->chgBit(oldp+2444,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                       [0x31U] >> 1U))));
        bufp->chgBit(oldp+2445,((1U & (~ (IData)((0x7fffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x2dU)))))));
        bufp->chgBit(oldp+2446,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT____Vcellout__gfor__BRA__49__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+2447,((1U & (IData)((0xfffffffffffffffULL 
                                               & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX)))));
        bufp->chgBit(oldp+2448,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                 [4U])));
        bufp->chgBit(oldp+2449,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                       [4U] >> 1U))));
        bufp->chgBit(oldp+2450,((1U & (~ (IData)((0xfffffffffffffffULL 
                                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX))))));
        bufp->chgBit(oldp+2451,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT____Vcellout__gfor__BRA__4__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+2452,((1U & (IData)((0x3fffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x2eU))))));
        bufp->chgBit(oldp+2453,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                 [0x32U])));
        bufp->chgBit(oldp+2454,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                       [0x32U] >> 1U))));
        bufp->chgBit(oldp+2455,((1U & (~ (IData)((0x3fffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x2eU)))))));
        bufp->chgBit(oldp+2456,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT____Vcellout__gfor__BRA__50__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+2457,((1U & (IData)((0x1fffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x2fU))))));
        bufp->chgBit(oldp+2458,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                 [0x33U])));
        bufp->chgBit(oldp+2459,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                       [0x33U] >> 1U))));
        bufp->chgBit(oldp+2460,((1U & (~ (IData)((0x1fffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x2fU)))))));
        bufp->chgBit(oldp+2461,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT____Vcellout__gfor__BRA__51__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+2462,((1U & (IData)((0xfffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x30U))))));
        bufp->chgBit(oldp+2463,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                 [0x34U])));
        bufp->chgBit(oldp+2464,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                       [0x34U] >> 1U))));
        bufp->chgBit(oldp+2465,((1U & (~ (IData)((0xfffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x30U)))))));
        bufp->chgBit(oldp+2466,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT____Vcellout__gfor__BRA__52__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+2467,((1U & (IData)((0x7ffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x31U))))));
        bufp->chgBit(oldp+2468,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                 [0x35U])));
        bufp->chgBit(oldp+2469,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                       [0x35U] >> 1U))));
        bufp->chgBit(oldp+2470,((1U & (~ (IData)((0x7ffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x31U)))))));
        bufp->chgBit(oldp+2471,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT____Vcellout__gfor__BRA__53__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+2472,((1U & (IData)((0x3ffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x32U))))));
        bufp->chgBit(oldp+2473,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                 [0x36U])));
        bufp->chgBit(oldp+2474,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                       [0x36U] >> 1U))));
        bufp->chgBit(oldp+2475,((1U & (~ (IData)((0x3ffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x32U)))))));
        bufp->chgBit(oldp+2476,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT____Vcellout__gfor__BRA__54__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+2477,((1U & (IData)((0x1ffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x33U))))));
        bufp->chgBit(oldp+2478,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                 [0x37U])));
        bufp->chgBit(oldp+2479,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                       [0x37U] >> 1U))));
        bufp->chgBit(oldp+2480,((1U & (~ (IData)((0x1ffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x33U)))))));
        bufp->chgBit(oldp+2481,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT____Vcellout__gfor__BRA__55__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+2482,((1U & (IData)((0xffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x34U))))));
        bufp->chgBit(oldp+2483,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                 [0x38U])));
        bufp->chgBit(oldp+2484,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                       [0x38U] >> 1U))));
        bufp->chgBit(oldp+2485,((1U & (~ (IData)((0xffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x34U)))))));
        bufp->chgBit(oldp+2486,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT____Vcellout__gfor__BRA__56__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+2487,((1U & (IData)((0x7fULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x35U))))));
        bufp->chgBit(oldp+2488,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                 [0x39U])));
        bufp->chgBit(oldp+2489,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                       [0x39U] >> 1U))));
        bufp->chgBit(oldp+2490,((1U & (~ (IData)((0x7fULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x35U)))))));
        bufp->chgBit(oldp+2491,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT____Vcellout__gfor__BRA__57__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+2492,((1U & (IData)((0x3fULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x36U))))));
        bufp->chgBit(oldp+2493,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                 [0x3aU])));
        bufp->chgBit(oldp+2494,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                       [0x3aU] >> 1U))));
        bufp->chgBit(oldp+2495,((1U & (~ (IData)((0x3fULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x36U)))))));
        bufp->chgBit(oldp+2496,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT____Vcellout__gfor__BRA__58__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+2497,((1U & (IData)((0x1fULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x37U))))));
        bufp->chgBit(oldp+2498,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                 [0x3bU])));
        bufp->chgBit(oldp+2499,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                       [0x3bU] >> 1U))));
        bufp->chgBit(oldp+2500,((1U & (~ (IData)((0x1fULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x37U)))))));
        bufp->chgBit(oldp+2501,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT____Vcellout__gfor__BRA__59__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+2502,((1U & (IData)((0x7ffffffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 1U))))));
        bufp->chgBit(oldp+2503,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                 [5U])));
        bufp->chgBit(oldp+2504,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                       [5U] >> 1U))));
        bufp->chgBit(oldp+2505,((1U & (~ (IData)((0x7ffffffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 1U)))))));
        bufp->chgBit(oldp+2506,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT____Vcellout__gfor__BRA__5__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+2507,((1U & (IData)((0xfULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x38U))))));
        bufp->chgBit(oldp+2508,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                 [0x3cU])));
        bufp->chgBit(oldp+2509,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                       [0x3cU] >> 1U))));
        bufp->chgBit(oldp+2510,((1U & (~ (IData)((0xfULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x38U)))))));
        bufp->chgBit(oldp+2511,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT____Vcellout__gfor__BRA__60__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+2512,((1U & (IData)((7ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x39U))))));
        bufp->chgBit(oldp+2513,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                 [0x3dU])));
        bufp->chgBit(oldp+2514,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                       [0x3dU] >> 1U))));
        bufp->chgBit(oldp+2515,((1U & (~ (IData)((7ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x39U)))))));
        bufp->chgBit(oldp+2516,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT____Vcellout__gfor__BRA__61__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+2517,((1U & (IData)((3ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x3aU))))));
        bufp->chgBit(oldp+2518,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                 [0x3eU])));
        bufp->chgBit(oldp+2519,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                       [0x3eU] >> 1U))));
        bufp->chgBit(oldp+2520,((1U & (~ (IData)((3ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x3aU)))))));
        bufp->chgBit(oldp+2521,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT____Vcellout__gfor__BRA__62__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+2522,((1U & (IData)((1ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x3bU))))));
        bufp->chgBit(oldp+2523,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                 [0x3fU])));
        bufp->chgBit(oldp+2524,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                       [0x3fU] >> 1U))));
        bufp->chgBit(oldp+2525,((1U & (~ (IData)((1ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x3bU)))))));
        bufp->chgBit(oldp+2526,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT____Vcellout__gfor__BRA__63__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+2527,((1U & (IData)((0x3ffffffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 2U))))));
        bufp->chgBit(oldp+2528,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                 [6U])));
        bufp->chgBit(oldp+2529,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                       [6U] >> 1U))));
        bufp->chgBit(oldp+2530,((1U & (~ (IData)((0x3ffffffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 2U)))))));
        bufp->chgBit(oldp+2531,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT____Vcellout__gfor__BRA__6__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+2532,((1U & (IData)((0x1ffffffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 3U))))));
        bufp->chgBit(oldp+2533,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                 [7U])));
        bufp->chgBit(oldp+2534,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                       [7U] >> 1U))));
        bufp->chgBit(oldp+2535,((1U & (~ (IData)((0x1ffffffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 3U)))))));
        bufp->chgBit(oldp+2536,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT____Vcellout__gfor__BRA__7__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+2537,((1U & (IData)((0xffffffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 4U))))));
        bufp->chgBit(oldp+2538,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                 [8U])));
        bufp->chgBit(oldp+2539,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                       [8U] >> 1U))));
        bufp->chgBit(oldp+2540,((1U & (~ (IData)((0xffffffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 4U)))))));
        bufp->chgBit(oldp+2541,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT____Vcellout__gfor__BRA__8__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+2542,((1U & (IData)((0x7fffffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 5U))))));
        bufp->chgBit(oldp+2543,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                 [9U])));
        bufp->chgBit(oldp+2544,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                       [9U] >> 1U))));
        bufp->chgBit(oldp+2545,((1U & (~ (IData)((0x7fffffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 5U)))))));
        bufp->chgBit(oldp+2546,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT____Vcellout__gfor__BRA__9__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+2547,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                               >> 5U)))));
        bufp->chgBit(oldp+2548,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                               >> 4U)))));
        bufp->chgCData(oldp+2549,((7U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                 >> 5U)))),3);
        bufp->chgQData(oldp+2550,((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                   << 6U)),64);
        bufp->chgQData(oldp+2552,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellout__boothfor__BRA__6__KET____DOT__ai__OutX),64);
        bufp->chgBit(oldp+2554,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__neg2x) 
                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__negx))));
        bufp->chgBit(oldp+2555,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__negx));
        bufp->chgBit(oldp+2556,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__x));
        bufp->chgBit(oldp+2557,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__neg2x));
        bufp->chgBit(oldp+2558,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT____Vcellout__fir__OutX));
        bufp->chgBit(oldp+2559,((1U & (IData)((0x3fffffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 4U))))));
        bufp->chgBit(oldp+2560,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                 [0xaU])));
        bufp->chgBit(oldp+2561,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                       [0xaU] >> 1U))));
        bufp->chgBit(oldp+2562,((1U & (~ (IData)((0x3fffffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 4U)))))));
        bufp->chgBit(oldp+2563,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT____Vcellout__gfor__BRA__10__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+2564,((1U & (IData)((0x1fffffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 5U))))));
        bufp->chgBit(oldp+2565,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                 [0xbU])));
        bufp->chgBit(oldp+2566,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                       [0xbU] >> 1U))));
        bufp->chgBit(oldp+2567,((1U & (~ (IData)((0x1fffffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 5U)))))));
        bufp->chgBit(oldp+2568,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT____Vcellout__gfor__BRA__11__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+2569,((1U & (IData)((0xfffffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 6U))))));
        bufp->chgBit(oldp+2570,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                 [0xcU])));
        bufp->chgBit(oldp+2571,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                       [0xcU] >> 1U))));
        bufp->chgBit(oldp+2572,((1U & (~ (IData)((0xfffffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 6U)))))));
        bufp->chgBit(oldp+2573,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT____Vcellout__gfor__BRA__12__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+2574,((1U & (IData)((0x7ffffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 7U))))));
        bufp->chgBit(oldp+2575,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                 [0xdU])));
        bufp->chgBit(oldp+2576,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                       [0xdU] >> 1U))));
        bufp->chgBit(oldp+2577,((1U & (~ (IData)((0x7ffffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 7U)))))));
        bufp->chgBit(oldp+2578,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT____Vcellout__gfor__BRA__13__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+2579,((1U & (IData)((0x3ffffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 8U))))));
        bufp->chgBit(oldp+2580,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                 [0xeU])));
        bufp->chgBit(oldp+2581,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                       [0xeU] >> 1U))));
        bufp->chgBit(oldp+2582,((1U & (~ (IData)((0x3ffffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 8U)))))));
        bufp->chgBit(oldp+2583,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT____Vcellout__gfor__BRA__14__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+2584,((1U & (IData)((0x1ffffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 9U))))));
        bufp->chgBit(oldp+2585,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                 [0xfU])));
        bufp->chgBit(oldp+2586,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                       [0xfU] >> 1U))));
        bufp->chgBit(oldp+2587,((1U & (~ (IData)((0x1ffffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 9U)))))));
        bufp->chgBit(oldp+2588,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT____Vcellout__gfor__BRA__15__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+2589,((1U & (IData)((0xffffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0xaU))))));
        bufp->chgBit(oldp+2590,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                 [0x10U])));
        bufp->chgBit(oldp+2591,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                       [0x10U] >> 1U))));
        bufp->chgBit(oldp+2592,((1U & (~ (IData)((0xffffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0xaU)))))));
        bufp->chgBit(oldp+2593,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT____Vcellout__gfor__BRA__16__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+2594,((1U & (IData)((0x7fffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0xbU))))));
        bufp->chgBit(oldp+2595,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                 [0x11U])));
        bufp->chgBit(oldp+2596,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                       [0x11U] >> 1U))));
        bufp->chgBit(oldp+2597,((1U & (~ (IData)((0x7fffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0xbU)))))));
        bufp->chgBit(oldp+2598,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT____Vcellout__gfor__BRA__17__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+2599,((1U & (IData)((0x3fffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0xcU))))));
        bufp->chgBit(oldp+2600,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                 [0x12U])));
        bufp->chgBit(oldp+2601,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                       [0x12U] >> 1U))));
        bufp->chgBit(oldp+2602,((1U & (~ (IData)((0x3fffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0xcU)))))));
        bufp->chgBit(oldp+2603,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT____Vcellout__gfor__BRA__18__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+2604,((1U & (IData)((0x1fffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0xdU))))));
        bufp->chgBit(oldp+2605,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                 [0x13U])));
        bufp->chgBit(oldp+2606,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                       [0x13U] >> 1U))));
        bufp->chgBit(oldp+2607,((1U & (~ (IData)((0x1fffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0xdU)))))));
        bufp->chgBit(oldp+2608,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT____Vcellout__gfor__BRA__19__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+2609,((1U & (IData)((0x7fffffffffffffe0ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  << 5U))))));
        bufp->chgBit(oldp+2610,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                 [1U])));
        bufp->chgBit(oldp+2611,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                       [1U] >> 1U))));
        bufp->chgBit(oldp+2612,((1U & (~ (IData)((0x7fffffffffffffe0ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 5U)))))));
        bufp->chgBit(oldp+2613,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT____Vcellout__gfor__BRA__1__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+2614,((1U & (IData)((0xfffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0xeU))))));
        bufp->chgBit(oldp+2615,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                 [0x14U])));
        bufp->chgBit(oldp+2616,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                       [0x14U] >> 1U))));
        bufp->chgBit(oldp+2617,((1U & (~ (IData)((0xfffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0xeU)))))));
        bufp->chgBit(oldp+2618,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT____Vcellout__gfor__BRA__20__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+2619,((1U & (IData)((0x7ffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0xfU))))));
        bufp->chgBit(oldp+2620,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                 [0x15U])));
        bufp->chgBit(oldp+2621,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                       [0x15U] >> 1U))));
        bufp->chgBit(oldp+2622,((1U & (~ (IData)((0x7ffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0xfU)))))));
        bufp->chgBit(oldp+2623,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT____Vcellout__gfor__BRA__21__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+2624,((1U & (IData)((0x3ffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x10U))))));
        bufp->chgBit(oldp+2625,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                 [0x16U])));
        bufp->chgBit(oldp+2626,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                       [0x16U] >> 1U))));
        bufp->chgBit(oldp+2627,((1U & (~ (IData)((0x3ffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x10U)))))));
        bufp->chgBit(oldp+2628,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT____Vcellout__gfor__BRA__22__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+2629,((1U & (IData)((0x1ffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x11U))))));
        bufp->chgBit(oldp+2630,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                 [0x17U])));
        bufp->chgBit(oldp+2631,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                       [0x17U] >> 1U))));
        bufp->chgBit(oldp+2632,((1U & (~ (IData)((0x1ffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x11U)))))));
        bufp->chgBit(oldp+2633,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT____Vcellout__gfor__BRA__23__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+2634,((1U & (IData)((0xffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x12U))))));
        bufp->chgBit(oldp+2635,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                 [0x18U])));
        bufp->chgBit(oldp+2636,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                       [0x18U] >> 1U))));
        bufp->chgBit(oldp+2637,((1U & (~ (IData)((0xffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x12U)))))));
        bufp->chgBit(oldp+2638,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT____Vcellout__gfor__BRA__24__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+2639,((1U & (IData)((0x7fffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x13U))))));
        bufp->chgBit(oldp+2640,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                 [0x19U])));
        bufp->chgBit(oldp+2641,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                       [0x19U] >> 1U))));
        bufp->chgBit(oldp+2642,((1U & (~ (IData)((0x7fffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x13U)))))));
        bufp->chgBit(oldp+2643,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT____Vcellout__gfor__BRA__25__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+2644,((1U & (IData)((0x3fffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x14U))))));
        bufp->chgBit(oldp+2645,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                 [0x1aU])));
        bufp->chgBit(oldp+2646,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                       [0x1aU] >> 1U))));
        bufp->chgBit(oldp+2647,((1U & (~ (IData)((0x3fffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x14U)))))));
        bufp->chgBit(oldp+2648,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT____Vcellout__gfor__BRA__26__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+2649,((1U & (IData)((0x1fffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x15U))))));
        bufp->chgBit(oldp+2650,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                 [0x1bU])));
        bufp->chgBit(oldp+2651,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                       [0x1bU] >> 1U))));
        bufp->chgBit(oldp+2652,((1U & (~ (IData)((0x1fffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x15U)))))));
        bufp->chgBit(oldp+2653,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT____Vcellout__gfor__BRA__27__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+2654,((1U & (IData)((0xfffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x16U))))));
        bufp->chgBit(oldp+2655,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                 [0x1cU])));
        bufp->chgBit(oldp+2656,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                       [0x1cU] >> 1U))));
        bufp->chgBit(oldp+2657,((1U & (~ (IData)((0xfffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x16U)))))));
        bufp->chgBit(oldp+2658,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT____Vcellout__gfor__BRA__28__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+2659,((1U & (IData)((0x7ffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x17U))))));
        bufp->chgBit(oldp+2660,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                 [0x1dU])));
        bufp->chgBit(oldp+2661,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                       [0x1dU] >> 1U))));
        bufp->chgBit(oldp+2662,((1U & (~ (IData)((0x7ffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x17U)))))));
        bufp->chgBit(oldp+2663,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT____Vcellout__gfor__BRA__29__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+2664,((1U & (IData)((0x3ffffffffffffff0ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  << 4U))))));
        bufp->chgBit(oldp+2665,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                 [2U])));
        bufp->chgBit(oldp+2666,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                       [2U] >> 1U))));
        bufp->chgBit(oldp+2667,((1U & (~ (IData)((0x3ffffffffffffff0ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 4U)))))));
        bufp->chgBit(oldp+2668,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT____Vcellout__gfor__BRA__2__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+2669,((1U & (IData)((0x3ffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x18U))))));
        bufp->chgBit(oldp+2670,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                 [0x1eU])));
        bufp->chgBit(oldp+2671,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                       [0x1eU] >> 1U))));
        bufp->chgBit(oldp+2672,((1U & (~ (IData)((0x3ffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x18U)))))));
        bufp->chgBit(oldp+2673,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT____Vcellout__gfor__BRA__30__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+2674,((1U & (IData)((0x1ffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x19U))))));
        bufp->chgBit(oldp+2675,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                 [0x1fU])));
        bufp->chgBit(oldp+2676,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                       [0x1fU] >> 1U))));
        bufp->chgBit(oldp+2677,((1U & (~ (IData)((0x1ffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x19U)))))));
        bufp->chgBit(oldp+2678,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT____Vcellout__gfor__BRA__31__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+2679,((1U & (IData)((0xffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x1aU))))));
        bufp->chgBit(oldp+2680,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                 [0x20U])));
        bufp->chgBit(oldp+2681,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                       [0x20U] >> 1U))));
        bufp->chgBit(oldp+2682,((1U & (~ (IData)((0xffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x1aU)))))));
        bufp->chgBit(oldp+2683,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT____Vcellout__gfor__BRA__32__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+2684,((1U & (IData)((0x7fffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x1bU))))));
        bufp->chgBit(oldp+2685,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                 [0x21U])));
        bufp->chgBit(oldp+2686,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                       [0x21U] >> 1U))));
        bufp->chgBit(oldp+2687,((1U & (~ (IData)((0x7fffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x1bU)))))));
        bufp->chgBit(oldp+2688,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT____Vcellout__gfor__BRA__33__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+2689,((1U & (IData)((0x3fffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x1cU))))));
        bufp->chgBit(oldp+2690,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                 [0x22U])));
        bufp->chgBit(oldp+2691,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                       [0x22U] >> 1U))));
        bufp->chgBit(oldp+2692,((1U & (~ (IData)((0x3fffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x1cU)))))));
        bufp->chgBit(oldp+2693,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT____Vcellout__gfor__BRA__34__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+2694,((1U & (IData)((0x1fffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x1dU))))));
        bufp->chgBit(oldp+2695,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                 [0x23U])));
        bufp->chgBit(oldp+2696,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                       [0x23U] >> 1U))));
        bufp->chgBit(oldp+2697,((1U & (~ (IData)((0x1fffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x1dU)))))));
        bufp->chgBit(oldp+2698,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT____Vcellout__gfor__BRA__35__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+2699,((1U & (IData)((0xfffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x1eU))))));
        bufp->chgBit(oldp+2700,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                 [0x24U])));
        bufp->chgBit(oldp+2701,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                       [0x24U] >> 1U))));
        bufp->chgBit(oldp+2702,((1U & (~ (IData)((0xfffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x1eU)))))));
        bufp->chgBit(oldp+2703,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT____Vcellout__gfor__BRA__36__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+2704,((1U & (IData)((0x7ffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x1fU))))));
        bufp->chgBit(oldp+2705,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                 [0x25U])));
        bufp->chgBit(oldp+2706,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                       [0x25U] >> 1U))));
        bufp->chgBit(oldp+2707,((1U & (~ (IData)((0x7ffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x1fU)))))));
        bufp->chgBit(oldp+2708,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT____Vcellout__gfor__BRA__37__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+2709,((1U & (IData)((0x3ffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x20U))))));
        bufp->chgBit(oldp+2710,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                 [0x26U])));
        bufp->chgBit(oldp+2711,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                       [0x26U] >> 1U))));
        bufp->chgBit(oldp+2712,((1U & (~ (IData)((0x3ffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x20U)))))));
        bufp->chgBit(oldp+2713,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT____Vcellout__gfor__BRA__38__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+2714,((1U & (IData)((0x1ffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x21U))))));
        bufp->chgBit(oldp+2715,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                 [0x27U])));
        bufp->chgBit(oldp+2716,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                       [0x27U] >> 1U))));
        bufp->chgBit(oldp+2717,((1U & (~ (IData)((0x1ffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x21U)))))));
        bufp->chgBit(oldp+2718,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT____Vcellout__gfor__BRA__39__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+2719,((1U & (IData)((0x1ffffffffffffff8ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  << 3U))))));
        bufp->chgBit(oldp+2720,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                 [3U])));
        bufp->chgBit(oldp+2721,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                       [3U] >> 1U))));
        bufp->chgBit(oldp+2722,((1U & (~ (IData)((0x1ffffffffffffff8ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 3U)))))));
        bufp->chgBit(oldp+2723,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT____Vcellout__gfor__BRA__3__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+2724,((1U & (IData)((0xffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x22U))))));
        bufp->chgBit(oldp+2725,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                 [0x28U])));
        bufp->chgBit(oldp+2726,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                       [0x28U] >> 1U))));
        bufp->chgBit(oldp+2727,((1U & (~ (IData)((0xffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x22U)))))));
        bufp->chgBit(oldp+2728,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT____Vcellout__gfor__BRA__40__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+2729,((1U & (IData)((0x7fffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x23U))))));
        bufp->chgBit(oldp+2730,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                 [0x29U])));
        bufp->chgBit(oldp+2731,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                       [0x29U] >> 1U))));
        bufp->chgBit(oldp+2732,((1U & (~ (IData)((0x7fffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x23U)))))));
        bufp->chgBit(oldp+2733,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT____Vcellout__gfor__BRA__41__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+2734,((1U & (IData)((0x3fffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x24U))))));
        bufp->chgBit(oldp+2735,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                 [0x2aU])));
        bufp->chgBit(oldp+2736,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                       [0x2aU] >> 1U))));
        bufp->chgBit(oldp+2737,((1U & (~ (IData)((0x3fffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x24U)))))));
        bufp->chgBit(oldp+2738,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT____Vcellout__gfor__BRA__42__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+2739,((1U & (IData)((0x1fffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x25U))))));
        bufp->chgBit(oldp+2740,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                 [0x2bU])));
        bufp->chgBit(oldp+2741,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                       [0x2bU] >> 1U))));
        bufp->chgBit(oldp+2742,((1U & (~ (IData)((0x1fffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x25U)))))));
        bufp->chgBit(oldp+2743,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT____Vcellout__gfor__BRA__43__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+2744,((1U & (IData)((0xfffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x26U))))));
        bufp->chgBit(oldp+2745,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                 [0x2cU])));
        bufp->chgBit(oldp+2746,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                       [0x2cU] >> 1U))));
        bufp->chgBit(oldp+2747,((1U & (~ (IData)((0xfffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x26U)))))));
        bufp->chgBit(oldp+2748,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT____Vcellout__gfor__BRA__44__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+2749,((1U & (IData)((0x7ffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x27U))))));
        bufp->chgBit(oldp+2750,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                 [0x2dU])));
        bufp->chgBit(oldp+2751,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                       [0x2dU] >> 1U))));
        bufp->chgBit(oldp+2752,((1U & (~ (IData)((0x7ffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x27U)))))));
        bufp->chgBit(oldp+2753,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT____Vcellout__gfor__BRA__45__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+2754,((1U & (IData)((0x3ffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x28U))))));
        bufp->chgBit(oldp+2755,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                 [0x2eU])));
        bufp->chgBit(oldp+2756,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                       [0x2eU] >> 1U))));
        bufp->chgBit(oldp+2757,((1U & (~ (IData)((0x3ffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x28U)))))));
        bufp->chgBit(oldp+2758,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT____Vcellout__gfor__BRA__46__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+2759,((1U & (IData)((0x1ffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x29U))))));
        bufp->chgBit(oldp+2760,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                 [0x2fU])));
        bufp->chgBit(oldp+2761,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                       [0x2fU] >> 1U))));
        bufp->chgBit(oldp+2762,((1U & (~ (IData)((0x1ffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x29U)))))));
        bufp->chgBit(oldp+2763,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT____Vcellout__gfor__BRA__47__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+2764,((1U & (IData)((0xffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x2aU))))));
        bufp->chgBit(oldp+2765,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                 [0x30U])));
        bufp->chgBit(oldp+2766,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                       [0x30U] >> 1U))));
        bufp->chgBit(oldp+2767,((1U & (~ (IData)((0xffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x2aU)))))));
        bufp->chgBit(oldp+2768,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT____Vcellout__gfor__BRA__48__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+2769,((1U & (IData)((0x7fffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x2bU))))));
        bufp->chgBit(oldp+2770,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                 [0x31U])));
        bufp->chgBit(oldp+2771,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                       [0x31U] >> 1U))));
        bufp->chgBit(oldp+2772,((1U & (~ (IData)((0x7fffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x2bU)))))));
        bufp->chgBit(oldp+2773,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT____Vcellout__gfor__BRA__49__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+2774,((1U & (IData)((0xffffffffffffffcULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  << 2U))))));
        bufp->chgBit(oldp+2775,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                 [4U])));
        bufp->chgBit(oldp+2776,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                       [4U] >> 1U))));
        bufp->chgBit(oldp+2777,((1U & (~ (IData)((0xffffffffffffffcULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 2U)))))));
        bufp->chgBit(oldp+2778,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT____Vcellout__gfor__BRA__4__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+2779,((1U & (IData)((0x3fffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x2cU))))));
        bufp->chgBit(oldp+2780,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                 [0x32U])));
        bufp->chgBit(oldp+2781,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                       [0x32U] >> 1U))));
        bufp->chgBit(oldp+2782,((1U & (~ (IData)((0x3fffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x2cU)))))));
        bufp->chgBit(oldp+2783,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT____Vcellout__gfor__BRA__50__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+2784,((1U & (IData)((0x1fffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x2dU))))));
        bufp->chgBit(oldp+2785,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                 [0x33U])));
        bufp->chgBit(oldp+2786,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                       [0x33U] >> 1U))));
        bufp->chgBit(oldp+2787,((1U & (~ (IData)((0x1fffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x2dU)))))));
        bufp->chgBit(oldp+2788,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT____Vcellout__gfor__BRA__51__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+2789,((1U & (IData)((0xfffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x2eU))))));
        bufp->chgBit(oldp+2790,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                 [0x34U])));
        bufp->chgBit(oldp+2791,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                       [0x34U] >> 1U))));
        bufp->chgBit(oldp+2792,((1U & (~ (IData)((0xfffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x2eU)))))));
        bufp->chgBit(oldp+2793,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT____Vcellout__gfor__BRA__52__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+2794,((1U & (IData)((0x7ffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x2fU))))));
        bufp->chgBit(oldp+2795,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                 [0x35U])));
        bufp->chgBit(oldp+2796,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                       [0x35U] >> 1U))));
        bufp->chgBit(oldp+2797,((1U & (~ (IData)((0x7ffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x2fU)))))));
        bufp->chgBit(oldp+2798,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT____Vcellout__gfor__BRA__53__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+2799,((1U & (IData)((0x3ffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x30U))))));
        bufp->chgBit(oldp+2800,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                 [0x36U])));
        bufp->chgBit(oldp+2801,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                       [0x36U] >> 1U))));
        bufp->chgBit(oldp+2802,((1U & (~ (IData)((0x3ffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x30U)))))));
        bufp->chgBit(oldp+2803,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT____Vcellout__gfor__BRA__54__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+2804,((1U & (IData)((0x1ffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x31U))))));
        bufp->chgBit(oldp+2805,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                 [0x37U])));
        bufp->chgBit(oldp+2806,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                       [0x37U] >> 1U))));
        bufp->chgBit(oldp+2807,((1U & (~ (IData)((0x1ffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x31U)))))));
        bufp->chgBit(oldp+2808,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT____Vcellout__gfor__BRA__55__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+2809,((1U & (IData)((0xffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x32U))))));
        bufp->chgBit(oldp+2810,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                 [0x38U])));
        bufp->chgBit(oldp+2811,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                       [0x38U] >> 1U))));
        bufp->chgBit(oldp+2812,((1U & (~ (IData)((0xffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x32U)))))));
        bufp->chgBit(oldp+2813,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT____Vcellout__gfor__BRA__56__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+2814,((1U & (IData)((0x7fULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x33U))))));
        bufp->chgBit(oldp+2815,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                 [0x39U])));
        bufp->chgBit(oldp+2816,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                       [0x39U] >> 1U))));
        bufp->chgBit(oldp+2817,((1U & (~ (IData)((0x7fULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x33U)))))));
        bufp->chgBit(oldp+2818,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT____Vcellout__gfor__BRA__57__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+2819,((1U & (IData)((0x3fULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x34U))))));
        bufp->chgBit(oldp+2820,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                 [0x3aU])));
        bufp->chgBit(oldp+2821,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                       [0x3aU] >> 1U))));
        bufp->chgBit(oldp+2822,((1U & (~ (IData)((0x3fULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x34U)))))));
        bufp->chgBit(oldp+2823,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT____Vcellout__gfor__BRA__58__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+2824,((1U & (IData)((0x1fULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x35U))))));
        bufp->chgBit(oldp+2825,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                 [0x3bU])));
        bufp->chgBit(oldp+2826,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                       [0x3bU] >> 1U))));
        bufp->chgBit(oldp+2827,((1U & (~ (IData)((0x1fULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x35U)))))));
        bufp->chgBit(oldp+2828,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT____Vcellout__gfor__BRA__59__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+2829,((1U & (IData)((0x7fffffffffffffeULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  << 1U))))));
        bufp->chgBit(oldp+2830,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                 [5U])));
        bufp->chgBit(oldp+2831,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                       [5U] >> 1U))));
        bufp->chgBit(oldp+2832,((1U & (~ (IData)((0x7fffffffffffffeULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 1U)))))));
        bufp->chgBit(oldp+2833,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT____Vcellout__gfor__BRA__5__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+2834,((1U & (IData)((0xfULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x36U))))));
        bufp->chgBit(oldp+2835,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                 [0x3cU])));
        bufp->chgBit(oldp+2836,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                       [0x3cU] >> 1U))));
        bufp->chgBit(oldp+2837,((1U & (~ (IData)((0xfULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x36U)))))));
        bufp->chgBit(oldp+2838,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT____Vcellout__gfor__BRA__60__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+2839,((1U & (IData)((7ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x37U))))));
        bufp->chgBit(oldp+2840,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                 [0x3dU])));
        bufp->chgBit(oldp+2841,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                       [0x3dU] >> 1U))));
        bufp->chgBit(oldp+2842,((1U & (~ (IData)((7ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x37U)))))));
        bufp->chgBit(oldp+2843,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT____Vcellout__gfor__BRA__61__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+2844,((1U & (IData)((3ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x38U))))));
        bufp->chgBit(oldp+2845,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                 [0x3eU])));
        bufp->chgBit(oldp+2846,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                       [0x3eU] >> 1U))));
        bufp->chgBit(oldp+2847,((1U & (~ (IData)((3ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x38U)))))));
        bufp->chgBit(oldp+2848,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT____Vcellout__gfor__BRA__62__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+2849,((1U & (IData)((1ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x39U))))));
        bufp->chgBit(oldp+2850,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                 [0x3fU])));
        bufp->chgBit(oldp+2851,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                       [0x3fU] >> 1U))));
        bufp->chgBit(oldp+2852,((1U & (~ (IData)((1ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x39U)))))));
        bufp->chgBit(oldp+2853,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT____Vcellout__gfor__BRA__63__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+2854,((1U & (IData)((0x3ffffffffffffffULL 
                                               & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX)))));
        bufp->chgBit(oldp+2855,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                 [6U])));
        bufp->chgBit(oldp+2856,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                       [6U] >> 1U))));
        bufp->chgBit(oldp+2857,((1U & (~ (IData)((0x3ffffffffffffffULL 
                                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX))))));
        bufp->chgBit(oldp+2858,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT____Vcellout__gfor__BRA__6__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+2859,((1U & (IData)((0x1ffffffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 1U))))));
        bufp->chgBit(oldp+2860,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                 [7U])));
        bufp->chgBit(oldp+2861,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                       [7U] >> 1U))));
        bufp->chgBit(oldp+2862,((1U & (~ (IData)((0x1ffffffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 1U)))))));
        bufp->chgBit(oldp+2863,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT____Vcellout__gfor__BRA__7__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+2864,((1U & (IData)((0xffffffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 2U))))));
        bufp->chgBit(oldp+2865,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                 [8U])));
        bufp->chgBit(oldp+2866,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                       [8U] >> 1U))));
        bufp->chgBit(oldp+2867,((1U & (~ (IData)((0xffffffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 2U)))))));
        bufp->chgBit(oldp+2868,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT____Vcellout__gfor__BRA__8__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+2869,((1U & (IData)((0x7fffffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 3U))))));
        bufp->chgBit(oldp+2870,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                 [9U])));
        bufp->chgBit(oldp+2871,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                       [9U] >> 1U))));
        bufp->chgBit(oldp+2872,((1U & (~ (IData)((0x7fffffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 3U)))))));
        bufp->chgBit(oldp+2873,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT____Vcellout__gfor__BRA__9__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+2874,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                               >> 7U)))));
        bufp->chgBit(oldp+2875,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                               >> 6U)))));
        bufp->chgCData(oldp+2876,((7U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                 >> 7U)))),3);
        bufp->chgQData(oldp+2877,((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                   << 8U)),64);
        bufp->chgQData(oldp+2879,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellout__boothfor__BRA__8__KET____DOT__ai__OutX),64);
        bufp->chgBit(oldp+2881,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__neg2x) 
                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__negx))));
        bufp->chgBit(oldp+2882,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__negx));
        bufp->chgBit(oldp+2883,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__x));
        bufp->chgBit(oldp+2884,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__neg2x));
        bufp->chgBit(oldp+2885,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT____Vcellout__fir__OutX));
        bufp->chgBit(oldp+2886,((1U & (IData)((0x3fffffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 2U))))));
        bufp->chgBit(oldp+2887,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                 [0xaU])));
        bufp->chgBit(oldp+2888,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                       [0xaU] >> 1U))));
        bufp->chgBit(oldp+2889,((1U & (~ (IData)((0x3fffffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 2U)))))));
        bufp->chgBit(oldp+2890,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT____Vcellout__gfor__BRA__10__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+2891,((1U & (IData)((0x1fffffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 3U))))));
        bufp->chgBit(oldp+2892,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                 [0xbU])));
        bufp->chgBit(oldp+2893,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                       [0xbU] >> 1U))));
        bufp->chgBit(oldp+2894,((1U & (~ (IData)((0x1fffffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 3U)))))));
        bufp->chgBit(oldp+2895,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT____Vcellout__gfor__BRA__11__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+2896,((1U & (IData)((0xfffffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 4U))))));
        bufp->chgBit(oldp+2897,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                 [0xcU])));
        bufp->chgBit(oldp+2898,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                       [0xcU] >> 1U))));
        bufp->chgBit(oldp+2899,((1U & (~ (IData)((0xfffffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 4U)))))));
        bufp->chgBit(oldp+2900,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT____Vcellout__gfor__BRA__12__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+2901,((1U & (IData)((0x7ffffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 5U))))));
        bufp->chgBit(oldp+2902,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                 [0xdU])));
        bufp->chgBit(oldp+2903,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                       [0xdU] >> 1U))));
        bufp->chgBit(oldp+2904,((1U & (~ (IData)((0x7ffffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 5U)))))));
        bufp->chgBit(oldp+2905,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT____Vcellout__gfor__BRA__13__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+2906,((1U & (IData)((0x3ffffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 6U))))));
        bufp->chgBit(oldp+2907,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                 [0xeU])));
        bufp->chgBit(oldp+2908,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                       [0xeU] >> 1U))));
        bufp->chgBit(oldp+2909,((1U & (~ (IData)((0x3ffffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 6U)))))));
        bufp->chgBit(oldp+2910,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT____Vcellout__gfor__BRA__14__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+2911,((1U & (IData)((0x1ffffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 7U))))));
        bufp->chgBit(oldp+2912,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                 [0xfU])));
        bufp->chgBit(oldp+2913,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                       [0xfU] >> 1U))));
        bufp->chgBit(oldp+2914,((1U & (~ (IData)((0x1ffffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 7U)))))));
        bufp->chgBit(oldp+2915,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT____Vcellout__gfor__BRA__15__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+2916,((1U & (IData)((0xffffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 8U))))));
        bufp->chgBit(oldp+2917,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                 [0x10U])));
        bufp->chgBit(oldp+2918,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                       [0x10U] >> 1U))));
        bufp->chgBit(oldp+2919,((1U & (~ (IData)((0xffffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 8U)))))));
        bufp->chgBit(oldp+2920,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT____Vcellout__gfor__BRA__16__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+2921,((1U & (IData)((0x7fffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 9U))))));
        bufp->chgBit(oldp+2922,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                 [0x11U])));
        bufp->chgBit(oldp+2923,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                       [0x11U] >> 1U))));
        bufp->chgBit(oldp+2924,((1U & (~ (IData)((0x7fffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 9U)))))));
        bufp->chgBit(oldp+2925,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT____Vcellout__gfor__BRA__17__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+2926,((1U & (IData)((0x3fffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0xaU))))));
        bufp->chgBit(oldp+2927,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                 [0x12U])));
        bufp->chgBit(oldp+2928,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                       [0x12U] >> 1U))));
        bufp->chgBit(oldp+2929,((1U & (~ (IData)((0x3fffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0xaU)))))));
        bufp->chgBit(oldp+2930,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT____Vcellout__gfor__BRA__18__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+2931,((1U & (IData)((0x1fffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0xbU))))));
        bufp->chgBit(oldp+2932,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                 [0x13U])));
        bufp->chgBit(oldp+2933,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                       [0x13U] >> 1U))));
        bufp->chgBit(oldp+2934,((1U & (~ (IData)((0x1fffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0xbU)))))));
        bufp->chgBit(oldp+2935,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT____Vcellout__gfor__BRA__19__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+2936,((1U & (IData)((0x7fffffffffffff80ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  << 7U))))));
        bufp->chgBit(oldp+2937,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                 [1U])));
        bufp->chgBit(oldp+2938,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                       [1U] >> 1U))));
        bufp->chgBit(oldp+2939,((1U & (~ (IData)((0x7fffffffffffff80ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 7U)))))));
        bufp->chgBit(oldp+2940,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT____Vcellout__gfor__BRA__1__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+2941,((1U & (IData)((0xfffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0xcU))))));
        bufp->chgBit(oldp+2942,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                 [0x14U])));
        bufp->chgBit(oldp+2943,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                       [0x14U] >> 1U))));
        bufp->chgBit(oldp+2944,((1U & (~ (IData)((0xfffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0xcU)))))));
        bufp->chgBit(oldp+2945,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT____Vcellout__gfor__BRA__20__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+2946,((1U & (IData)((0x7ffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0xdU))))));
        bufp->chgBit(oldp+2947,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                 [0x15U])));
        bufp->chgBit(oldp+2948,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                       [0x15U] >> 1U))));
        bufp->chgBit(oldp+2949,((1U & (~ (IData)((0x7ffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0xdU)))))));
        bufp->chgBit(oldp+2950,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT____Vcellout__gfor__BRA__21__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+2951,((1U & (IData)((0x3ffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0xeU))))));
        bufp->chgBit(oldp+2952,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                 [0x16U])));
        bufp->chgBit(oldp+2953,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                       [0x16U] >> 1U))));
        bufp->chgBit(oldp+2954,((1U & (~ (IData)((0x3ffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0xeU)))))));
        bufp->chgBit(oldp+2955,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT____Vcellout__gfor__BRA__22__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+2956,((1U & (IData)((0x1ffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0xfU))))));
        bufp->chgBit(oldp+2957,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                 [0x17U])));
        bufp->chgBit(oldp+2958,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                       [0x17U] >> 1U))));
        bufp->chgBit(oldp+2959,((1U & (~ (IData)((0x1ffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0xfU)))))));
        bufp->chgBit(oldp+2960,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT____Vcellout__gfor__BRA__23__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+2961,((1U & (IData)((0xffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x10U))))));
        bufp->chgBit(oldp+2962,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                 [0x18U])));
        bufp->chgBit(oldp+2963,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                       [0x18U] >> 1U))));
        bufp->chgBit(oldp+2964,((1U & (~ (IData)((0xffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x10U)))))));
        bufp->chgBit(oldp+2965,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT____Vcellout__gfor__BRA__24__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+2966,((1U & (IData)((0x7fffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x11U))))));
        bufp->chgBit(oldp+2967,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                 [0x19U])));
        bufp->chgBit(oldp+2968,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                       [0x19U] >> 1U))));
        bufp->chgBit(oldp+2969,((1U & (~ (IData)((0x7fffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x11U)))))));
        bufp->chgBit(oldp+2970,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT____Vcellout__gfor__BRA__25__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+2971,((1U & (IData)((0x3fffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x12U))))));
        bufp->chgBit(oldp+2972,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                 [0x1aU])));
        bufp->chgBit(oldp+2973,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                       [0x1aU] >> 1U))));
        bufp->chgBit(oldp+2974,((1U & (~ (IData)((0x3fffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x12U)))))));
        bufp->chgBit(oldp+2975,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT____Vcellout__gfor__BRA__26__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+2976,((1U & (IData)((0x1fffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x13U))))));
        bufp->chgBit(oldp+2977,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                 [0x1bU])));
        bufp->chgBit(oldp+2978,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                       [0x1bU] >> 1U))));
        bufp->chgBit(oldp+2979,((1U & (~ (IData)((0x1fffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x13U)))))));
        bufp->chgBit(oldp+2980,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT____Vcellout__gfor__BRA__27__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+2981,((1U & (IData)((0xfffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x14U))))));
        bufp->chgBit(oldp+2982,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                 [0x1cU])));
        bufp->chgBit(oldp+2983,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                       [0x1cU] >> 1U))));
        bufp->chgBit(oldp+2984,((1U & (~ (IData)((0xfffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x14U)))))));
        bufp->chgBit(oldp+2985,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT____Vcellout__gfor__BRA__28__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+2986,((1U & (IData)((0x7ffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x15U))))));
        bufp->chgBit(oldp+2987,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                 [0x1dU])));
        bufp->chgBit(oldp+2988,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                       [0x1dU] >> 1U))));
        bufp->chgBit(oldp+2989,((1U & (~ (IData)((0x7ffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x15U)))))));
        bufp->chgBit(oldp+2990,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT____Vcellout__gfor__BRA__29__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+2991,((1U & (IData)((0x3fffffffffffffc0ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  << 6U))))));
        bufp->chgBit(oldp+2992,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                 [2U])));
        bufp->chgBit(oldp+2993,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                       [2U] >> 1U))));
        bufp->chgBit(oldp+2994,((1U & (~ (IData)((0x3fffffffffffffc0ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 6U)))))));
        bufp->chgBit(oldp+2995,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT____Vcellout__gfor__BRA__2__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+2996,((1U & (IData)((0x3ffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x16U))))));
        bufp->chgBit(oldp+2997,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                 [0x1eU])));
        bufp->chgBit(oldp+2998,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                       [0x1eU] >> 1U))));
        bufp->chgBit(oldp+2999,((1U & (~ (IData)((0x3ffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x16U)))))));
        bufp->chgBit(oldp+3000,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT____Vcellout__gfor__BRA__30__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+3001,((1U & (IData)((0x1ffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x17U))))));
        bufp->chgBit(oldp+3002,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                 [0x1fU])));
        bufp->chgBit(oldp+3003,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                       [0x1fU] >> 1U))));
        bufp->chgBit(oldp+3004,((1U & (~ (IData)((0x1ffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x17U)))))));
        bufp->chgBit(oldp+3005,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT____Vcellout__gfor__BRA__31__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+3006,((1U & (IData)((0xffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x18U))))));
        bufp->chgBit(oldp+3007,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                 [0x20U])));
        bufp->chgBit(oldp+3008,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                       [0x20U] >> 1U))));
        bufp->chgBit(oldp+3009,((1U & (~ (IData)((0xffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x18U)))))));
        bufp->chgBit(oldp+3010,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT____Vcellout__gfor__BRA__32__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+3011,((1U & (IData)((0x7fffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x19U))))));
        bufp->chgBit(oldp+3012,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                 [0x21U])));
        bufp->chgBit(oldp+3013,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                       [0x21U] >> 1U))));
        bufp->chgBit(oldp+3014,((1U & (~ (IData)((0x7fffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x19U)))))));
        bufp->chgBit(oldp+3015,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT____Vcellout__gfor__BRA__33__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+3016,((1U & (IData)((0x3fffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x1aU))))));
        bufp->chgBit(oldp+3017,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                 [0x22U])));
        bufp->chgBit(oldp+3018,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                       [0x22U] >> 1U))));
        bufp->chgBit(oldp+3019,((1U & (~ (IData)((0x3fffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x1aU)))))));
        bufp->chgBit(oldp+3020,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT____Vcellout__gfor__BRA__34__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+3021,((1U & (IData)((0x1fffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x1bU))))));
        bufp->chgBit(oldp+3022,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                 [0x23U])));
        bufp->chgBit(oldp+3023,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                       [0x23U] >> 1U))));
        bufp->chgBit(oldp+3024,((1U & (~ (IData)((0x1fffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x1bU)))))));
        bufp->chgBit(oldp+3025,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT____Vcellout__gfor__BRA__35__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+3026,((1U & (IData)((0xfffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x1cU))))));
        bufp->chgBit(oldp+3027,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                 [0x24U])));
        bufp->chgBit(oldp+3028,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                       [0x24U] >> 1U))));
        bufp->chgBit(oldp+3029,((1U & (~ (IData)((0xfffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x1cU)))))));
        bufp->chgBit(oldp+3030,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT____Vcellout__gfor__BRA__36__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+3031,((1U & (IData)((0x7ffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x1dU))))));
        bufp->chgBit(oldp+3032,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                 [0x25U])));
        bufp->chgBit(oldp+3033,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                       [0x25U] >> 1U))));
        bufp->chgBit(oldp+3034,((1U & (~ (IData)((0x7ffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x1dU)))))));
        bufp->chgBit(oldp+3035,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT____Vcellout__gfor__BRA__37__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+3036,((1U & (IData)((0x3ffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x1eU))))));
        bufp->chgBit(oldp+3037,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                 [0x26U])));
        bufp->chgBit(oldp+3038,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                       [0x26U] >> 1U))));
        bufp->chgBit(oldp+3039,((1U & (~ (IData)((0x3ffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x1eU)))))));
        bufp->chgBit(oldp+3040,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT____Vcellout__gfor__BRA__38__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+3041,((1U & (IData)((0x1ffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x1fU))))));
        bufp->chgBit(oldp+3042,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                 [0x27U])));
        bufp->chgBit(oldp+3043,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                       [0x27U] >> 1U))));
        bufp->chgBit(oldp+3044,((1U & (~ (IData)((0x1ffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x1fU)))))));
        bufp->chgBit(oldp+3045,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT____Vcellout__gfor__BRA__39__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+3046,((1U & (IData)((0x1fffffffffffffe0ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  << 5U))))));
        bufp->chgBit(oldp+3047,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                 [3U])));
        bufp->chgBit(oldp+3048,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                       [3U] >> 1U))));
        bufp->chgBit(oldp+3049,((1U & (~ (IData)((0x1fffffffffffffe0ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 5U)))))));
        bufp->chgBit(oldp+3050,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT____Vcellout__gfor__BRA__3__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+3051,((1U & (IData)((0xffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x20U))))));
        bufp->chgBit(oldp+3052,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                 [0x28U])));
        bufp->chgBit(oldp+3053,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                       [0x28U] >> 1U))));
        bufp->chgBit(oldp+3054,((1U & (~ (IData)((0xffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x20U)))))));
        bufp->chgBit(oldp+3055,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT____Vcellout__gfor__BRA__40__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+3056,((1U & (IData)((0x7fffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x21U))))));
        bufp->chgBit(oldp+3057,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                 [0x29U])));
        bufp->chgBit(oldp+3058,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                       [0x29U] >> 1U))));
        bufp->chgBit(oldp+3059,((1U & (~ (IData)((0x7fffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x21U)))))));
        bufp->chgBit(oldp+3060,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT____Vcellout__gfor__BRA__41__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+3061,((1U & (IData)((0x3fffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x22U))))));
        bufp->chgBit(oldp+3062,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                 [0x2aU])));
        bufp->chgBit(oldp+3063,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                       [0x2aU] >> 1U))));
        bufp->chgBit(oldp+3064,((1U & (~ (IData)((0x3fffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x22U)))))));
        bufp->chgBit(oldp+3065,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT____Vcellout__gfor__BRA__42__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+3066,((1U & (IData)((0x1fffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x23U))))));
        bufp->chgBit(oldp+3067,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                 [0x2bU])));
        bufp->chgBit(oldp+3068,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                       [0x2bU] >> 1U))));
        bufp->chgBit(oldp+3069,((1U & (~ (IData)((0x1fffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x23U)))))));
        bufp->chgBit(oldp+3070,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT____Vcellout__gfor__BRA__43__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+3071,((1U & (IData)((0xfffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x24U))))));
        bufp->chgBit(oldp+3072,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                 [0x2cU])));
        bufp->chgBit(oldp+3073,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                       [0x2cU] >> 1U))));
        bufp->chgBit(oldp+3074,((1U & (~ (IData)((0xfffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x24U)))))));
        bufp->chgBit(oldp+3075,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT____Vcellout__gfor__BRA__44__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+3076,((1U & (IData)((0x7ffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x25U))))));
        bufp->chgBit(oldp+3077,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                 [0x2dU])));
        bufp->chgBit(oldp+3078,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                       [0x2dU] >> 1U))));
        bufp->chgBit(oldp+3079,((1U & (~ (IData)((0x7ffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x25U)))))));
        bufp->chgBit(oldp+3080,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT____Vcellout__gfor__BRA__45__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+3081,((1U & (IData)((0x3ffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x26U))))));
        bufp->chgBit(oldp+3082,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                 [0x2eU])));
        bufp->chgBit(oldp+3083,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                       [0x2eU] >> 1U))));
        bufp->chgBit(oldp+3084,((1U & (~ (IData)((0x3ffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x26U)))))));
        bufp->chgBit(oldp+3085,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT____Vcellout__gfor__BRA__46__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+3086,((1U & (IData)((0x1ffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x27U))))));
        bufp->chgBit(oldp+3087,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                 [0x2fU])));
        bufp->chgBit(oldp+3088,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                       [0x2fU] >> 1U))));
        bufp->chgBit(oldp+3089,((1U & (~ (IData)((0x1ffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x27U)))))));
        bufp->chgBit(oldp+3090,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT____Vcellout__gfor__BRA__47__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+3091,((1U & (IData)((0xffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x28U))))));
        bufp->chgBit(oldp+3092,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                 [0x30U])));
        bufp->chgBit(oldp+3093,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                       [0x30U] >> 1U))));
        bufp->chgBit(oldp+3094,((1U & (~ (IData)((0xffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x28U)))))));
        bufp->chgBit(oldp+3095,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT____Vcellout__gfor__BRA__48__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+3096,((1U & (IData)((0x7fffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x29U))))));
        bufp->chgBit(oldp+3097,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                 [0x31U])));
        bufp->chgBit(oldp+3098,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                       [0x31U] >> 1U))));
        bufp->chgBit(oldp+3099,((1U & (~ (IData)((0x7fffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x29U)))))));
        bufp->chgBit(oldp+3100,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT____Vcellout__gfor__BRA__49__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+3101,((1U & (IData)((0xffffffffffffff0ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  << 4U))))));
        bufp->chgBit(oldp+3102,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                 [4U])));
        bufp->chgBit(oldp+3103,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                       [4U] >> 1U))));
        bufp->chgBit(oldp+3104,((1U & (~ (IData)((0xffffffffffffff0ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 4U)))))));
        bufp->chgBit(oldp+3105,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT____Vcellout__gfor__BRA__4__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+3106,((1U & (IData)((0x3fffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x2aU))))));
        bufp->chgBit(oldp+3107,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                 [0x32U])));
        bufp->chgBit(oldp+3108,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                       [0x32U] >> 1U))));
        bufp->chgBit(oldp+3109,((1U & (~ (IData)((0x3fffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x2aU)))))));
        bufp->chgBit(oldp+3110,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT____Vcellout__gfor__BRA__50__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+3111,((1U & (IData)((0x1fffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x2bU))))));
        bufp->chgBit(oldp+3112,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                 [0x33U])));
        bufp->chgBit(oldp+3113,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                       [0x33U] >> 1U))));
        bufp->chgBit(oldp+3114,((1U & (~ (IData)((0x1fffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x2bU)))))));
        bufp->chgBit(oldp+3115,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT____Vcellout__gfor__BRA__51__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+3116,((1U & (IData)((0xfffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x2cU))))));
        bufp->chgBit(oldp+3117,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                 [0x34U])));
        bufp->chgBit(oldp+3118,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                       [0x34U] >> 1U))));
        bufp->chgBit(oldp+3119,((1U & (~ (IData)((0xfffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x2cU)))))));
        bufp->chgBit(oldp+3120,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT____Vcellout__gfor__BRA__52__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+3121,((1U & (IData)((0x7ffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x2dU))))));
        bufp->chgBit(oldp+3122,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                 [0x35U])));
        bufp->chgBit(oldp+3123,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                       [0x35U] >> 1U))));
        bufp->chgBit(oldp+3124,((1U & (~ (IData)((0x7ffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x2dU)))))));
        bufp->chgBit(oldp+3125,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT____Vcellout__gfor__BRA__53__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+3126,((1U & (IData)((0x3ffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x2eU))))));
        bufp->chgBit(oldp+3127,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                 [0x36U])));
        bufp->chgBit(oldp+3128,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                       [0x36U] >> 1U))));
        bufp->chgBit(oldp+3129,((1U & (~ (IData)((0x3ffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x2eU)))))));
        bufp->chgBit(oldp+3130,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT____Vcellout__gfor__BRA__54__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+3131,((1U & (IData)((0x1ffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x2fU))))));
        bufp->chgBit(oldp+3132,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                 [0x37U])));
        bufp->chgBit(oldp+3133,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                       [0x37U] >> 1U))));
        bufp->chgBit(oldp+3134,((1U & (~ (IData)((0x1ffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x2fU)))))));
        bufp->chgBit(oldp+3135,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT____Vcellout__gfor__BRA__55__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+3136,((1U & (IData)((0xffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x30U))))));
        bufp->chgBit(oldp+3137,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                 [0x38U])));
        bufp->chgBit(oldp+3138,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                       [0x38U] >> 1U))));
        bufp->chgBit(oldp+3139,((1U & (~ (IData)((0xffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x30U)))))));
        bufp->chgBit(oldp+3140,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT____Vcellout__gfor__BRA__56__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+3141,((1U & (IData)((0x7fULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x31U))))));
        bufp->chgBit(oldp+3142,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                 [0x39U])));
        bufp->chgBit(oldp+3143,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                       [0x39U] >> 1U))));
        bufp->chgBit(oldp+3144,((1U & (~ (IData)((0x7fULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x31U)))))));
        bufp->chgBit(oldp+3145,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT____Vcellout__gfor__BRA__57__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+3146,((1U & (IData)((0x3fULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x32U))))));
        bufp->chgBit(oldp+3147,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                 [0x3aU])));
        bufp->chgBit(oldp+3148,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                       [0x3aU] >> 1U))));
        bufp->chgBit(oldp+3149,((1U & (~ (IData)((0x3fULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x32U)))))));
        bufp->chgBit(oldp+3150,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT____Vcellout__gfor__BRA__58__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+3151,((1U & (IData)((0x1fULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x33U))))));
        bufp->chgBit(oldp+3152,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                 [0x3bU])));
        bufp->chgBit(oldp+3153,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                       [0x3bU] >> 1U))));
        bufp->chgBit(oldp+3154,((1U & (~ (IData)((0x1fULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x33U)))))));
        bufp->chgBit(oldp+3155,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT____Vcellout__gfor__BRA__59__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+3156,((1U & (IData)((0x7fffffffffffff8ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  << 3U))))));
        bufp->chgBit(oldp+3157,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                 [5U])));
        bufp->chgBit(oldp+3158,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                       [5U] >> 1U))));
        bufp->chgBit(oldp+3159,((1U & (~ (IData)((0x7fffffffffffff8ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 3U)))))));
        bufp->chgBit(oldp+3160,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT____Vcellout__gfor__BRA__5__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+3161,((1U & (IData)((0xfULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x34U))))));
        bufp->chgBit(oldp+3162,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                 [0x3cU])));
        bufp->chgBit(oldp+3163,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                       [0x3cU] >> 1U))));
        bufp->chgBit(oldp+3164,((1U & (~ (IData)((0xfULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x34U)))))));
        bufp->chgBit(oldp+3165,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT____Vcellout__gfor__BRA__60__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+3166,((1U & (IData)((7ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x35U))))));
        bufp->chgBit(oldp+3167,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                 [0x3dU])));
        bufp->chgBit(oldp+3168,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                       [0x3dU] >> 1U))));
        bufp->chgBit(oldp+3169,((1U & (~ (IData)((7ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x35U)))))));
        bufp->chgBit(oldp+3170,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT____Vcellout__gfor__BRA__61__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+3171,((1U & (IData)((3ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x36U))))));
        bufp->chgBit(oldp+3172,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                 [0x3eU])));
        bufp->chgBit(oldp+3173,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                       [0x3eU] >> 1U))));
        bufp->chgBit(oldp+3174,((1U & (~ (IData)((3ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x36U)))))));
        bufp->chgBit(oldp+3175,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT____Vcellout__gfor__BRA__62__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+3176,((1U & (IData)((1ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x37U))))));
        bufp->chgBit(oldp+3177,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                 [0x3fU])));
        bufp->chgBit(oldp+3178,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                       [0x3fU] >> 1U))));
        bufp->chgBit(oldp+3179,((1U & (~ (IData)((1ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x37U)))))));
        bufp->chgBit(oldp+3180,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT____Vcellout__gfor__BRA__63__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+3181,((1U & (IData)((0x3fffffffffffffcULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  << 2U))))));
        bufp->chgBit(oldp+3182,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                 [6U])));
        bufp->chgBit(oldp+3183,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                       [6U] >> 1U))));
        bufp->chgBit(oldp+3184,((1U & (~ (IData)((0x3fffffffffffffcULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 2U)))))));
        bufp->chgBit(oldp+3185,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT____Vcellout__gfor__BRA__6__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+3186,((1U & (IData)((0x1fffffffffffffeULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  << 1U))))));
        bufp->chgBit(oldp+3187,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                 [7U])));
        bufp->chgBit(oldp+3188,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                       [7U] >> 1U))));
        bufp->chgBit(oldp+3189,((1U & (~ (IData)((0x1fffffffffffffeULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 1U)))))));
        bufp->chgBit(oldp+3190,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT____Vcellout__gfor__BRA__7__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+3191,((1U & (IData)((0xffffffffffffffULL 
                                               & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX)))));
        bufp->chgBit(oldp+3192,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                 [8U])));
        bufp->chgBit(oldp+3193,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                       [8U] >> 1U))));
        bufp->chgBit(oldp+3194,((1U & (~ (IData)((0xffffffffffffffULL 
                                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX))))));
        bufp->chgBit(oldp+3195,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT____Vcellout__gfor__BRA__8__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+3196,((1U & (IData)((0x7fffffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 1U))))));
        bufp->chgBit(oldp+3197,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                 [9U])));
        bufp->chgBit(oldp+3198,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                       [9U] >> 1U))));
        bufp->chgBit(oldp+3199,((1U & (~ (IData)((0x7fffffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 1U)))))));
        bufp->chgBit(oldp+3200,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT____Vcellout__gfor__BRA__9__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+3201,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                               >> 8U)))));
        bufp->chgCData(oldp+3202,((6U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY) 
                                         << 1U))),3);
        bufp->chgQData(oldp+3203,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellout__fir__OutX),64);
        bufp->chgBit(oldp+3205,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__neg2x) 
                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__negx))));
        bufp->chgBit(oldp+3206,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__negx));
        bufp->chgBit(oldp+3207,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__x));
        bufp->chgBit(oldp+3208,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__neg2x));
        bufp->chgBit(oldp+3209,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX))));
        bufp->chgBit(oldp+3210,((1U & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX)))));
        bufp->chgBit(oldp+3211,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT____Vcellout__fir__OutX));
        bufp->chgBit(oldp+3212,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                               >> 0xaU)))));
        bufp->chgBit(oldp+3213,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                 [0xaU])));
        bufp->chgBit(oldp+3214,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                       [0xaU] >> 1U))));
        bufp->chgBit(oldp+3215,((1U & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0xaU))))));
        bufp->chgBit(oldp+3216,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT____Vcellout__gfor__BRA__10__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+3217,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                               >> 0xbU)))));
        bufp->chgBit(oldp+3218,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                 [0xbU])));
        bufp->chgBit(oldp+3219,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                       [0xbU] >> 1U))));
        bufp->chgBit(oldp+3220,((1U & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0xbU))))));
        bufp->chgBit(oldp+3221,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT____Vcellout__gfor__BRA__11__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+3222,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                               >> 0xcU)))));
        bufp->chgBit(oldp+3223,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                 [0xcU])));
        bufp->chgBit(oldp+3224,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                       [0xcU] >> 1U))));
        bufp->chgBit(oldp+3225,((1U & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0xcU))))));
        bufp->chgBit(oldp+3226,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT____Vcellout__gfor__BRA__12__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+3227,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                               >> 0xdU)))));
        bufp->chgBit(oldp+3228,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                 [0xdU])));
        bufp->chgBit(oldp+3229,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                       [0xdU] >> 1U))));
        bufp->chgBit(oldp+3230,((1U & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0xdU))))));
        bufp->chgBit(oldp+3231,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT____Vcellout__gfor__BRA__13__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+3232,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                               >> 0xeU)))));
        bufp->chgBit(oldp+3233,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                 [0xeU])));
        bufp->chgBit(oldp+3234,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                       [0xeU] >> 1U))));
        bufp->chgBit(oldp+3235,((1U & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0xeU))))));
        bufp->chgBit(oldp+3236,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT____Vcellout__gfor__BRA__14__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+3237,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                               >> 0xfU)))));
        bufp->chgBit(oldp+3238,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                 [0xfU])));
        bufp->chgBit(oldp+3239,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                       [0xfU] >> 1U))));
        bufp->chgBit(oldp+3240,((1U & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0xfU))))));
        bufp->chgBit(oldp+3241,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT____Vcellout__gfor__BRA__15__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+3242,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                               >> 0x10U)))));
        bufp->chgBit(oldp+3243,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                 [0x10U])));
        bufp->chgBit(oldp+3244,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                       [0x10U] >> 1U))));
        bufp->chgBit(oldp+3245,((1U & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x10U))))));
        bufp->chgBit(oldp+3246,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT____Vcellout__gfor__BRA__16__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+3247,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                               >> 0x11U)))));
        bufp->chgBit(oldp+3248,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                 [0x11U])));
        bufp->chgBit(oldp+3249,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                       [0x11U] >> 1U))));
        bufp->chgBit(oldp+3250,((1U & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x11U))))));
        bufp->chgBit(oldp+3251,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT____Vcellout__gfor__BRA__17__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+3252,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                               >> 0x12U)))));
        bufp->chgBit(oldp+3253,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                 [0x12U])));
        bufp->chgBit(oldp+3254,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                       [0x12U] >> 1U))));
        bufp->chgBit(oldp+3255,((1U & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x12U))))));
        bufp->chgBit(oldp+3256,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT____Vcellout__gfor__BRA__18__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+3257,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                               >> 0x13U)))));
        bufp->chgBit(oldp+3258,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                 [0x13U])));
        bufp->chgBit(oldp+3259,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                       [0x13U] >> 1U))));
        bufp->chgBit(oldp+3260,((1U & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x13U))))));
        bufp->chgBit(oldp+3261,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT____Vcellout__gfor__BRA__19__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+3262,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                               >> 1U)))));
        bufp->chgBit(oldp+3263,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                 [1U])));
        bufp->chgBit(oldp+3264,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                       [1U] >> 1U))));
        bufp->chgBit(oldp+3265,((1U & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 1U))))));
        bufp->chgBit(oldp+3266,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT____Vcellout__gfor__BRA__1__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+3267,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                               >> 0x14U)))));
        bufp->chgBit(oldp+3268,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                 [0x14U])));
        bufp->chgBit(oldp+3269,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                       [0x14U] >> 1U))));
        bufp->chgBit(oldp+3270,((1U & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x14U))))));
        bufp->chgBit(oldp+3271,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT____Vcellout__gfor__BRA__20__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+3272,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                               >> 0x15U)))));
        bufp->chgBit(oldp+3273,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                 [0x15U])));
        bufp->chgBit(oldp+3274,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                       [0x15U] >> 1U))));
        bufp->chgBit(oldp+3275,((1U & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x15U))))));
        bufp->chgBit(oldp+3276,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT____Vcellout__gfor__BRA__21__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+3277,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                               >> 0x16U)))));
        bufp->chgBit(oldp+3278,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                 [0x16U])));
        bufp->chgBit(oldp+3279,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                       [0x16U] >> 1U))));
        bufp->chgBit(oldp+3280,((1U & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x16U))))));
        bufp->chgBit(oldp+3281,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT____Vcellout__gfor__BRA__22__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+3282,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                               >> 0x17U)))));
        bufp->chgBit(oldp+3283,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                 [0x17U])));
        bufp->chgBit(oldp+3284,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                       [0x17U] >> 1U))));
        bufp->chgBit(oldp+3285,((1U & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x17U))))));
        bufp->chgBit(oldp+3286,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT____Vcellout__gfor__BRA__23__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+3287,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                               >> 0x18U)))));
        bufp->chgBit(oldp+3288,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                 [0x18U])));
        bufp->chgBit(oldp+3289,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                       [0x18U] >> 1U))));
        bufp->chgBit(oldp+3290,((1U & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x18U))))));
        bufp->chgBit(oldp+3291,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT____Vcellout__gfor__BRA__24__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+3292,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                               >> 0x19U)))));
        bufp->chgBit(oldp+3293,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                 [0x19U])));
        bufp->chgBit(oldp+3294,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                       [0x19U] >> 1U))));
        bufp->chgBit(oldp+3295,((1U & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x19U))))));
        bufp->chgBit(oldp+3296,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT____Vcellout__gfor__BRA__25__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+3297,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                               >> 0x1aU)))));
        bufp->chgBit(oldp+3298,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                 [0x1aU])));
        bufp->chgBit(oldp+3299,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                       [0x1aU] >> 1U))));
        bufp->chgBit(oldp+3300,((1U & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x1aU))))));
        bufp->chgBit(oldp+3301,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT____Vcellout__gfor__BRA__26__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+3302,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                               >> 0x1bU)))));
    }
}
