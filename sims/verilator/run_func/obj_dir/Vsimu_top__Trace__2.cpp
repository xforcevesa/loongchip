// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vsimu_top__Syms.h"


void Vsimu_top___024root__trace_chg_sub_2(Vsimu_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimu_top___024root__trace_chg_sub_2\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 7386);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgBit(oldp+0,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                              [0x1bU])));
        bufp->chgBit(oldp+1,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                    [0x1bU] >> 1U))));
        bufp->chgBit(oldp+2,((1U & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                               >> 0x1bU))))));
        bufp->chgBit(oldp+3,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT____Vcellout__gfor__BRA__27__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+4,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                            >> 0x1cU)))));
        bufp->chgBit(oldp+5,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                              [0x1cU])));
        bufp->chgBit(oldp+6,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                    [0x1cU] >> 1U))));
        bufp->chgBit(oldp+7,((1U & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                               >> 0x1cU))))));
        bufp->chgBit(oldp+8,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT____Vcellout__gfor__BRA__28__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+9,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                            >> 0x1dU)))));
        bufp->chgBit(oldp+10,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                               [0x1dU])));
        bufp->chgBit(oldp+11,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                     [0x1dU] >> 1U))));
        bufp->chgBit(oldp+12,((1U & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                >> 0x1dU))))));
        bufp->chgBit(oldp+13,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT____Vcellout__gfor__BRA__29__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+14,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 2U)))));
        bufp->chgBit(oldp+15,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                               [2U])));
        bufp->chgBit(oldp+16,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                     [2U] >> 1U))));
        bufp->chgBit(oldp+17,((1U & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                >> 2U))))));
        bufp->chgBit(oldp+18,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT____Vcellout__gfor__BRA__2__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+19,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x1eU)))));
        bufp->chgBit(oldp+20,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                               [0x1eU])));
        bufp->chgBit(oldp+21,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                     [0x1eU] >> 1U))));
        bufp->chgBit(oldp+22,((1U & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                >> 0x1eU))))));
        bufp->chgBit(oldp+23,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT____Vcellout__gfor__BRA__30__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+24,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x1fU)))));
        bufp->chgBit(oldp+25,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                               [0x1fU])));
        bufp->chgBit(oldp+26,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                     [0x1fU] >> 1U))));
        bufp->chgBit(oldp+27,((1U & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                >> 0x1fU))))));
        bufp->chgBit(oldp+28,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT____Vcellout__gfor__BRA__31__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+29,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x20U)))));
        bufp->chgBit(oldp+30,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                               [0x20U])));
        bufp->chgBit(oldp+31,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                     [0x20U] >> 1U))));
        bufp->chgBit(oldp+32,((1U & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                >> 0x20U))))));
        bufp->chgBit(oldp+33,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT____Vcellout__gfor__BRA__32__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+34,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x21U)))));
        bufp->chgBit(oldp+35,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                               [0x21U])));
        bufp->chgBit(oldp+36,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                     [0x21U] >> 1U))));
        bufp->chgBit(oldp+37,((1U & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                >> 0x21U))))));
        bufp->chgBit(oldp+38,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT____Vcellout__gfor__BRA__33__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+39,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x22U)))));
        bufp->chgBit(oldp+40,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                               [0x22U])));
        bufp->chgBit(oldp+41,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                     [0x22U] >> 1U))));
        bufp->chgBit(oldp+42,((1U & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                >> 0x22U))))));
        bufp->chgBit(oldp+43,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT____Vcellout__gfor__BRA__34__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+44,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x23U)))));
        bufp->chgBit(oldp+45,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                               [0x23U])));
        bufp->chgBit(oldp+46,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                     [0x23U] >> 1U))));
        bufp->chgBit(oldp+47,((1U & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                >> 0x23U))))));
        bufp->chgBit(oldp+48,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT____Vcellout__gfor__BRA__35__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+49,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x24U)))));
        bufp->chgBit(oldp+50,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                               [0x24U])));
        bufp->chgBit(oldp+51,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                     [0x24U] >> 1U))));
        bufp->chgBit(oldp+52,((1U & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                >> 0x24U))))));
        bufp->chgBit(oldp+53,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT____Vcellout__gfor__BRA__36__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+54,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x25U)))));
        bufp->chgBit(oldp+55,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                               [0x25U])));
        bufp->chgBit(oldp+56,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                     [0x25U] >> 1U))));
        bufp->chgBit(oldp+57,((1U & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                >> 0x25U))))));
        bufp->chgBit(oldp+58,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT____Vcellout__gfor__BRA__37__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+59,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x26U)))));
        bufp->chgBit(oldp+60,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                               [0x26U])));
        bufp->chgBit(oldp+61,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                     [0x26U] >> 1U))));
        bufp->chgBit(oldp+62,((1U & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                >> 0x26U))))));
        bufp->chgBit(oldp+63,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT____Vcellout__gfor__BRA__38__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+64,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x27U)))));
        bufp->chgBit(oldp+65,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                               [0x27U])));
        bufp->chgBit(oldp+66,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                     [0x27U] >> 1U))));
        bufp->chgBit(oldp+67,((1U & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                >> 0x27U))))));
        bufp->chgBit(oldp+68,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT____Vcellout__gfor__BRA__39__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+69,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 3U)))));
        bufp->chgBit(oldp+70,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                               [3U])));
        bufp->chgBit(oldp+71,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                     [3U] >> 1U))));
        bufp->chgBit(oldp+72,((1U & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                >> 3U))))));
        bufp->chgBit(oldp+73,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT____Vcellout__gfor__BRA__3__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+74,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x28U)))));
        bufp->chgBit(oldp+75,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                               [0x28U])));
        bufp->chgBit(oldp+76,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                     [0x28U] >> 1U))));
        bufp->chgBit(oldp+77,((1U & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                >> 0x28U))))));
        bufp->chgBit(oldp+78,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT____Vcellout__gfor__BRA__40__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+79,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x29U)))));
        bufp->chgBit(oldp+80,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                               [0x29U])));
        bufp->chgBit(oldp+81,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                     [0x29U] >> 1U))));
        bufp->chgBit(oldp+82,((1U & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                >> 0x29U))))));
        bufp->chgBit(oldp+83,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT____Vcellout__gfor__BRA__41__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+84,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x2aU)))));
        bufp->chgBit(oldp+85,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                               [0x2aU])));
        bufp->chgBit(oldp+86,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                     [0x2aU] >> 1U))));
        bufp->chgBit(oldp+87,((1U & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                >> 0x2aU))))));
        bufp->chgBit(oldp+88,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT____Vcellout__gfor__BRA__42__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+89,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x2bU)))));
        bufp->chgBit(oldp+90,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                               [0x2bU])));
        bufp->chgBit(oldp+91,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                     [0x2bU] >> 1U))));
        bufp->chgBit(oldp+92,((1U & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                >> 0x2bU))))));
        bufp->chgBit(oldp+93,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT____Vcellout__gfor__BRA__43__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+94,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x2cU)))));
        bufp->chgBit(oldp+95,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                               [0x2cU])));
        bufp->chgBit(oldp+96,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                     [0x2cU] >> 1U))));
        bufp->chgBit(oldp+97,((1U & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                >> 0x2cU))))));
        bufp->chgBit(oldp+98,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT____Vcellout__gfor__BRA__44__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+99,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x2dU)))));
        bufp->chgBit(oldp+100,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                [0x2dU])));
        bufp->chgBit(oldp+101,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                      [0x2dU] >> 1U))));
        bufp->chgBit(oldp+102,((1U & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x2dU))))));
        bufp->chgBit(oldp+103,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT____Vcellout__gfor__BRA__45__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+104,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                              >> 0x2eU)))));
        bufp->chgBit(oldp+105,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                [0x2eU])));
        bufp->chgBit(oldp+106,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                      [0x2eU] >> 1U))));
        bufp->chgBit(oldp+107,((1U & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x2eU))))));
        bufp->chgBit(oldp+108,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT____Vcellout__gfor__BRA__46__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+109,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                              >> 0x2fU)))));
        bufp->chgBit(oldp+110,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                [0x2fU])));
        bufp->chgBit(oldp+111,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                      [0x2fU] >> 1U))));
        bufp->chgBit(oldp+112,((1U & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x2fU))))));
        bufp->chgBit(oldp+113,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT____Vcellout__gfor__BRA__47__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+114,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                              >> 0x30U)))));
        bufp->chgBit(oldp+115,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                [0x30U])));
        bufp->chgBit(oldp+116,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                      [0x30U] >> 1U))));
        bufp->chgBit(oldp+117,((1U & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x30U))))));
        bufp->chgBit(oldp+118,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT____Vcellout__gfor__BRA__48__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+119,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                              >> 0x31U)))));
        bufp->chgBit(oldp+120,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                [0x31U])));
        bufp->chgBit(oldp+121,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                      [0x31U] >> 1U))));
        bufp->chgBit(oldp+122,((1U & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x31U))))));
        bufp->chgBit(oldp+123,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT____Vcellout__gfor__BRA__49__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+124,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                              >> 4U)))));
        bufp->chgBit(oldp+125,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                [4U])));
        bufp->chgBit(oldp+126,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                      [4U] >> 1U))));
        bufp->chgBit(oldp+127,((1U & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 4U))))));
        bufp->chgBit(oldp+128,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT____Vcellout__gfor__BRA__4__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+129,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                              >> 0x32U)))));
        bufp->chgBit(oldp+130,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                [0x32U])));
        bufp->chgBit(oldp+131,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                      [0x32U] >> 1U))));
        bufp->chgBit(oldp+132,((1U & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x32U))))));
        bufp->chgBit(oldp+133,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT____Vcellout__gfor__BRA__50__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+134,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                              >> 0x33U)))));
        bufp->chgBit(oldp+135,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                [0x33U])));
        bufp->chgBit(oldp+136,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                      [0x33U] >> 1U))));
        bufp->chgBit(oldp+137,((1U & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x33U))))));
        bufp->chgBit(oldp+138,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT____Vcellout__gfor__BRA__51__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+139,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                              >> 0x34U)))));
        bufp->chgBit(oldp+140,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                [0x34U])));
        bufp->chgBit(oldp+141,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                      [0x34U] >> 1U))));
        bufp->chgBit(oldp+142,((1U & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x34U))))));
        bufp->chgBit(oldp+143,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT____Vcellout__gfor__BRA__52__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+144,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                              >> 0x35U)))));
        bufp->chgBit(oldp+145,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                [0x35U])));
        bufp->chgBit(oldp+146,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                      [0x35U] >> 1U))));
        bufp->chgBit(oldp+147,((1U & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x35U))))));
        bufp->chgBit(oldp+148,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT____Vcellout__gfor__BRA__53__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+149,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                              >> 0x36U)))));
        bufp->chgBit(oldp+150,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                [0x36U])));
        bufp->chgBit(oldp+151,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                      [0x36U] >> 1U))));
        bufp->chgBit(oldp+152,((1U & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x36U))))));
        bufp->chgBit(oldp+153,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT____Vcellout__gfor__BRA__54__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+154,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                              >> 0x37U)))));
        bufp->chgBit(oldp+155,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                [0x37U])));
        bufp->chgBit(oldp+156,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                      [0x37U] >> 1U))));
        bufp->chgBit(oldp+157,((1U & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x37U))))));
        bufp->chgBit(oldp+158,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT____Vcellout__gfor__BRA__55__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+159,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                              >> 0x38U)))));
        bufp->chgBit(oldp+160,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                [0x38U])));
        bufp->chgBit(oldp+161,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                      [0x38U] >> 1U))));
        bufp->chgBit(oldp+162,((1U & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x38U))))));
        bufp->chgBit(oldp+163,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT____Vcellout__gfor__BRA__56__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+164,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                              >> 0x39U)))));
        bufp->chgBit(oldp+165,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                [0x39U])));
        bufp->chgBit(oldp+166,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                      [0x39U] >> 1U))));
        bufp->chgBit(oldp+167,((1U & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x39U))))));
        bufp->chgBit(oldp+168,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT____Vcellout__gfor__BRA__57__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+169,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                              >> 0x3aU)))));
        bufp->chgBit(oldp+170,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                [0x3aU])));
        bufp->chgBit(oldp+171,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                      [0x3aU] >> 1U))));
        bufp->chgBit(oldp+172,((1U & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x3aU))))));
        bufp->chgBit(oldp+173,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT____Vcellout__gfor__BRA__58__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+174,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                              >> 0x3bU)))));
        bufp->chgBit(oldp+175,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                [0x3bU])));
        bufp->chgBit(oldp+176,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                      [0x3bU] >> 1U))));
        bufp->chgBit(oldp+177,((1U & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x3bU))))));
        bufp->chgBit(oldp+178,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT____Vcellout__gfor__BRA__59__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+179,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                              >> 5U)))));
        bufp->chgBit(oldp+180,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                [5U])));
        bufp->chgBit(oldp+181,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                      [5U] >> 1U))));
        bufp->chgBit(oldp+182,((1U & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 5U))))));
        bufp->chgBit(oldp+183,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT____Vcellout__gfor__BRA__5__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+184,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                              >> 0x3cU)))));
        bufp->chgBit(oldp+185,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                [0x3cU])));
        bufp->chgBit(oldp+186,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                      [0x3cU] >> 1U))));
        bufp->chgBit(oldp+187,((1U & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x3cU))))));
        bufp->chgBit(oldp+188,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT____Vcellout__gfor__BRA__60__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+189,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                              >> 0x3dU)))));
        bufp->chgBit(oldp+190,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                [0x3dU])));
        bufp->chgBit(oldp+191,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                      [0x3dU] >> 1U))));
        bufp->chgBit(oldp+192,((1U & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x3dU))))));
        bufp->chgBit(oldp+193,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT____Vcellout__gfor__BRA__61__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+194,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                              >> 0x3eU)))));
        bufp->chgBit(oldp+195,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                [0x3eU])));
        bufp->chgBit(oldp+196,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                      [0x3eU] >> 1U))));
        bufp->chgBit(oldp+197,((1U & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x3eU))))));
        bufp->chgBit(oldp+198,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT____Vcellout__gfor__BRA__62__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+199,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                              >> 0x3fU)))));
        bufp->chgBit(oldp+200,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                [0x3fU])));
        bufp->chgBit(oldp+201,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                      [0x3fU] >> 1U))));
        bufp->chgBit(oldp+202,((1U & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x3fU))))));
        bufp->chgBit(oldp+203,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT____Vcellout__gfor__BRA__63__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+204,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                              >> 6U)))));
        bufp->chgBit(oldp+205,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                [6U])));
        bufp->chgBit(oldp+206,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                      [6U] >> 1U))));
        bufp->chgBit(oldp+207,((1U & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 6U))))));
        bufp->chgBit(oldp+208,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT____Vcellout__gfor__BRA__6__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+209,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                              >> 7U)))));
        bufp->chgBit(oldp+210,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                [7U])));
        bufp->chgBit(oldp+211,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                      [7U] >> 1U))));
        bufp->chgBit(oldp+212,((1U & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 7U))))));
        bufp->chgBit(oldp+213,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT____Vcellout__gfor__BRA__7__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+214,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                              >> 8U)))));
        bufp->chgBit(oldp+215,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                [8U])));
        bufp->chgBit(oldp+216,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                      [8U] >> 1U))));
        bufp->chgBit(oldp+217,((1U & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 8U))))));
        bufp->chgBit(oldp+218,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT____Vcellout__gfor__BRA__8__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+219,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                              >> 9U)))));
        bufp->chgBit(oldp+220,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                [9U])));
        bufp->chgBit(oldp+221,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                      [9U] >> 1U))));
        bufp->chgBit(oldp+222,((1U & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 9U))))));
        bufp->chgBit(oldp+223,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT____Vcellout__gfor__BRA__9__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+224,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY))));
        bufp->chgIData(oldp+225,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData),17);
        bufp->chgSData(oldp+226,((0x3fffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry)),14);
        bufp->chgBit(oldp+227,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__FifSig) 
                                 & (IData)((0U != (0x3000U 
                                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry)))) 
                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0))));
        bufp->chgBit(oldp+228,((1U & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__FifSig)) 
                                       & (IData)((0x1000U 
                                                  == 
                                                  (0x3000U 
                                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry)))) 
                                      | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__FifSig)) 
                                          & (IData)(
                                                    (0x2000U 
                                                     == 
                                                     (0x3000U 
                                                      & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry)))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__FifSig) 
                                            & ((IData)(
                                                       (0U 
                                                        == 
                                                        (0x3000U 
                                                         & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry))) 
                                               | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0))))))));
        bufp->chgCData(oldp+229,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT____Vcellinp__second4__A) 
                                   << 4U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT____Vcellinp__second4__B) 
                                              << 3U) 
                                             | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT____Vcellinp__second4__C) 
                                                 << 2U) 
                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT____Vcellinp__second3__A) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT____Vcellinp__second3__B)))))),5);
        bufp->chgCData(oldp+230,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT____Vcellinp__third2__A) 
                                   << 3U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT____Vcellinp__third2__B) 
                                              << 2U) 
                                             | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT____Vcellinp__third2__C) 
                                                 << 1U) 
                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT____Vcellinp__third1__A))))),4);
        bufp->chgCData(oldp+231,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT____Vcellinp__fourth2__A) 
                                   << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT____Vcellinp__fourth2__B))),2);
        bufp->chgCData(oldp+232,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT____Vcellinp__fifth1__A) 
                                   << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT____Vcellinp__fifth1__B))),2);
        bufp->chgBit(oldp+233,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__FifSig));
        bufp->chgBit(oldp+234,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT____Vcellinp__fifth1__A));
        bufp->chgBit(oldp+235,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT____Vcellinp__fifth1__B));
        bufp->chgBit(oldp+236,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry 
                                      >> 0xbU))));
        bufp->chgBit(oldp+237,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT____Vcellinp__sixth1__B));
        bufp->chgBit(oldp+238,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0xcU]))));
        bufp->chgBit(oldp+239,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0xdU]))));
        bufp->chgBit(oldp+240,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0xeU]))));
        bufp->chgBit(oldp+241,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT____Vcellinp__second1__C));
        bufp->chgBit(oldp+242,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT____Vcellinp__second3__B));
        bufp->chgBit(oldp+243,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [9U]))));
        bufp->chgBit(oldp+244,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0xaU]))));
        bufp->chgBit(oldp+245,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0xbU]))));
        bufp->chgBit(oldp+246,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT____Vcellinp__second1__B));
        bufp->chgBit(oldp+247,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT____Vcellinp__second3__A));
        bufp->chgBit(oldp+248,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [6U]))));
        bufp->chgBit(oldp+249,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [7U]))));
        bufp->chgBit(oldp+250,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [8U]))));
        bufp->chgBit(oldp+251,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT____Vcellinp__second1__A));
        bufp->chgBit(oldp+252,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT____Vcellinp__second4__C));
        bufp->chgBit(oldp+253,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [3U]))));
        bufp->chgBit(oldp+254,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [4U]))));
        bufp->chgBit(oldp+255,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [5U]))));
        bufp->chgBit(oldp+256,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT____Vcellinp__second2__C));
        bufp->chgBit(oldp+257,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT____Vcellinp__second4__B));
        bufp->chgBit(oldp+258,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0U]))));
        bufp->chgBit(oldp+259,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [1U]))));
        bufp->chgBit(oldp+260,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [2U]))));
        bufp->chgBit(oldp+261,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT____Vcellinp__second2__B));
        bufp->chgBit(oldp+262,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT____Vcellinp__second4__A));
        bufp->chgBit(oldp+263,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry 
                                      >> 9U))));
        bufp->chgBit(oldp+264,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry 
                                      >> 8U))));
        bufp->chgBit(oldp+265,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry 
                                      >> 7U))));
        bufp->chgBit(oldp+266,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT____Vcellinp__fifth1__C));
        bufp->chgBit(oldp+267,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT____Vcellinp__fourth2__A));
        bufp->chgBit(oldp+268,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT____Vcellinp__fourth2__B));
        bufp->chgBit(oldp+269,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry 
                                      >> 0xaU))));
        bufp->chgBit(oldp+270,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT____Vcellinp__sixth1__C));
        bufp->chgBit(oldp+271,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry 
                                      >> 2U))));
        bufp->chgBit(oldp+272,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry 
                                      >> 1U))));
        bufp->chgBit(oldp+273,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry)));
        bufp->chgBit(oldp+274,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT____Vcellinp__third1__C));
        bufp->chgBit(oldp+275,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT____Vcellinp__third1__A));
        bufp->chgBit(oldp+276,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0x10U]))));
        bufp->chgBit(oldp+277,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry 
                                      >> 4U))));
        bufp->chgBit(oldp+278,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry 
                                      >> 3U))));
        bufp->chgBit(oldp+279,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT____Vcellinp__third1__B));
        bufp->chgBit(oldp+280,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT____Vcellinp__third2__C));
        bufp->chgBit(oldp+281,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0xfU]))));
        bufp->chgBit(oldp+282,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT____Vcellinp__fourth1__C));
        bufp->chgBit(oldp+283,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT____Vcellinp__third2__B));
        bufp->chgBit(oldp+284,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT____Vcellinp__fourth1__B));
        bufp->chgBit(oldp+285,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT____Vcellinp__third2__A));
        bufp->chgBit(oldp+286,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry 
                                      >> 0xdU))));
        bufp->chgBit(oldp+287,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry 
                                      >> 0xcU))));
        bufp->chgBit(oldp+288,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry 
                                      >> 6U))));
        bufp->chgBit(oldp+289,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry 
                                      >> 5U))));
        bufp->chgBit(oldp+290,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT____Vcellinp__fourth1__A));
        bufp->chgBit(oldp+291,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT____Vcellinp__fourth2__C));
        bufp->chgCData(oldp+292,(((4U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                  >> 0x20U)) 
                                         << 2U)) | 
                                  (3U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                 >> 0x1fU))))),3);
        bufp->chgQData(oldp+293,((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                  << 0x20U)),64);
        bufp->chgQData(oldp+295,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellout__las__OutX),64);
        bufp->chgBit(oldp+297,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__neg2x) 
                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__negx))));
        bufp->chgBit(oldp+298,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__negx));
        bufp->chgBit(oldp+299,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__x));
        bufp->chgBit(oldp+300,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__neg2x));
        bufp->chgBit(oldp+301,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT____Vcellout__fir__OutX));
        bufp->chgBit(oldp+302,((1U & (IData)((0x3fffffffc00000ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 << 0x16U))))));
        bufp->chgBit(oldp+303,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                [0xaU])));
        bufp->chgBit(oldp+304,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                      [0xaU] >> 1U))));
        bufp->chgBit(oldp+305,((1U & (~ (IData)((0x3fffffffc00000ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    << 0x16U)))))));
        bufp->chgBit(oldp+306,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT____Vcellout__gfor__BRA__10__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+307,((1U & (IData)((0x1fffffffe00000ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 << 0x15U))))));
        bufp->chgBit(oldp+308,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                [0xbU])));
        bufp->chgBit(oldp+309,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                      [0xbU] >> 1U))));
        bufp->chgBit(oldp+310,((1U & (~ (IData)((0x1fffffffe00000ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    << 0x15U)))))));
        bufp->chgBit(oldp+311,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT____Vcellout__gfor__BRA__11__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+312,((1U & (IData)((0xffffffff00000ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 << 0x14U))))));
        bufp->chgBit(oldp+313,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                [0xcU])));
        bufp->chgBit(oldp+314,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                      [0xcU] >> 1U))));
        bufp->chgBit(oldp+315,((1U & (~ (IData)((0xffffffff00000ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    << 0x14U)))))));
        bufp->chgBit(oldp+316,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT____Vcellout__gfor__BRA__12__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+317,((1U & (IData)((0x7fffffff80000ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 << 0x13U))))));
        bufp->chgBit(oldp+318,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                [0xdU])));
        bufp->chgBit(oldp+319,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                      [0xdU] >> 1U))));
        bufp->chgBit(oldp+320,((1U & (~ (IData)((0x7fffffff80000ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    << 0x13U)))))));
        bufp->chgBit(oldp+321,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT____Vcellout__gfor__BRA__13__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+322,((1U & (IData)((0x3fffffffc0000ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 << 0x12U))))));
        bufp->chgBit(oldp+323,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                [0xeU])));
        bufp->chgBit(oldp+324,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                      [0xeU] >> 1U))));
        bufp->chgBit(oldp+325,((1U & (~ (IData)((0x3fffffffc0000ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    << 0x12U)))))));
        bufp->chgBit(oldp+326,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT____Vcellout__gfor__BRA__14__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+327,((1U & (IData)((0x1fffffffe0000ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 << 0x11U))))));
        bufp->chgBit(oldp+328,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                [0xfU])));
        bufp->chgBit(oldp+329,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                      [0xfU] >> 1U))));
        bufp->chgBit(oldp+330,((1U & (~ (IData)((0x1fffffffe0000ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    << 0x11U)))))));
        bufp->chgBit(oldp+331,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT____Vcellout__gfor__BRA__15__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+332,((1U & (IData)((0xffffffff0000ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 << 0x10U))))));
        bufp->chgBit(oldp+333,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                [0x10U])));
        bufp->chgBit(oldp+334,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                      [0x10U] >> 1U))));
        bufp->chgBit(oldp+335,((1U & (~ (IData)((0xffffffff0000ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    << 0x10U)))))));
        bufp->chgBit(oldp+336,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT____Vcellout__gfor__BRA__16__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+337,((1U & (IData)((0x7fffffff8000ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 << 0xfU))))));
        bufp->chgBit(oldp+338,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                [0x11U])));
        bufp->chgBit(oldp+339,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                      [0x11U] >> 1U))));
        bufp->chgBit(oldp+340,((1U & (~ (IData)((0x7fffffff8000ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    << 0xfU)))))));
        bufp->chgBit(oldp+341,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT____Vcellout__gfor__BRA__17__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+342,((1U & (IData)((0x3fffffffc000ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 << 0xeU))))));
        bufp->chgBit(oldp+343,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                [0x12U])));
        bufp->chgBit(oldp+344,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                      [0x12U] >> 1U))));
        bufp->chgBit(oldp+345,((1U & (~ (IData)((0x3fffffffc000ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    << 0xeU)))))));
        bufp->chgBit(oldp+346,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT____Vcellout__gfor__BRA__18__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+347,((1U & (IData)((0x1fffffffe000ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 << 0xdU))))));
        bufp->chgBit(oldp+348,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                [0x13U])));
        bufp->chgBit(oldp+349,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                      [0x13U] >> 1U))));
        bufp->chgBit(oldp+350,((1U & (~ (IData)((0x1fffffffe000ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    << 0xdU)))))));
        bufp->chgBit(oldp+351,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT____Vcellout__gfor__BRA__19__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+352,((1U & (IData)((0x7fffffff80000000ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 << 0x1fU))))));
        bufp->chgBit(oldp+353,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                [1U])));
        bufp->chgBit(oldp+354,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                      [1U] >> 1U))));
        bufp->chgBit(oldp+355,((1U & (~ (IData)((0x7fffffff80000000ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    << 0x1fU)))))));
        bufp->chgBit(oldp+356,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT____Vcellout__gfor__BRA__1__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+357,((1U & (IData)((0xffffffff000ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 << 0xcU))))));
        bufp->chgBit(oldp+358,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                [0x14U])));
        bufp->chgBit(oldp+359,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                      [0x14U] >> 1U))));
        bufp->chgBit(oldp+360,((1U & (~ (IData)((0xffffffff000ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    << 0xcU)))))));
        bufp->chgBit(oldp+361,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT____Vcellout__gfor__BRA__20__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+362,((1U & (IData)((0x7fffffff800ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 << 0xbU))))));
        bufp->chgBit(oldp+363,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                [0x15U])));
        bufp->chgBit(oldp+364,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                      [0x15U] >> 1U))));
        bufp->chgBit(oldp+365,((1U & (~ (IData)((0x7fffffff800ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    << 0xbU)))))));
        bufp->chgBit(oldp+366,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT____Vcellout__gfor__BRA__21__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+367,((1U & (IData)((0x3fffffffc00ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 << 0xaU))))));
        bufp->chgBit(oldp+368,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                [0x16U])));
        bufp->chgBit(oldp+369,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                      [0x16U] >> 1U))));
        bufp->chgBit(oldp+370,((1U & (~ (IData)((0x3fffffffc00ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    << 0xaU)))))));
        bufp->chgBit(oldp+371,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT____Vcellout__gfor__BRA__22__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+372,((1U & (IData)((0x1fffffffe00ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 << 9U))))));
        bufp->chgBit(oldp+373,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                [0x17U])));
        bufp->chgBit(oldp+374,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                      [0x17U] >> 1U))));
        bufp->chgBit(oldp+375,((1U & (~ (IData)((0x1fffffffe00ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    << 9U)))))));
        bufp->chgBit(oldp+376,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT____Vcellout__gfor__BRA__23__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+377,((1U & (IData)((0xffffffff00ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 << 8U))))));
        bufp->chgBit(oldp+378,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                [0x18U])));
        bufp->chgBit(oldp+379,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                      [0x18U] >> 1U))));
        bufp->chgBit(oldp+380,((1U & (~ (IData)((0xffffffff00ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    << 8U)))))));
        bufp->chgBit(oldp+381,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT____Vcellout__gfor__BRA__24__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+382,((1U & (IData)((0x7fffffff80ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 << 7U))))));
        bufp->chgBit(oldp+383,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                [0x19U])));
        bufp->chgBit(oldp+384,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                      [0x19U] >> 1U))));
        bufp->chgBit(oldp+385,((1U & (~ (IData)((0x7fffffff80ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    << 7U)))))));
        bufp->chgBit(oldp+386,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT____Vcellout__gfor__BRA__25__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+387,((1U & (IData)((0x3fffffffc0ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 << 6U))))));
        bufp->chgBit(oldp+388,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                [0x1aU])));
        bufp->chgBit(oldp+389,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                      [0x1aU] >> 1U))));
        bufp->chgBit(oldp+390,((1U & (~ (IData)((0x3fffffffc0ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    << 6U)))))));
        bufp->chgBit(oldp+391,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT____Vcellout__gfor__BRA__26__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+392,((1U & (IData)((0x1fffffffe0ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 << 5U))))));
        bufp->chgBit(oldp+393,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                [0x1bU])));
        bufp->chgBit(oldp+394,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                      [0x1bU] >> 1U))));
        bufp->chgBit(oldp+395,((1U & (~ (IData)((0x1fffffffe0ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    << 5U)))))));
        bufp->chgBit(oldp+396,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT____Vcellout__gfor__BRA__27__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+397,((1U & (IData)((0xffffffff0ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 << 4U))))));
        bufp->chgBit(oldp+398,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                [0x1cU])));
        bufp->chgBit(oldp+399,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                      [0x1cU] >> 1U))));
        bufp->chgBit(oldp+400,((1U & (~ (IData)((0xffffffff0ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    << 4U)))))));
        bufp->chgBit(oldp+401,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT____Vcellout__gfor__BRA__28__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+402,((1U & (IData)((0x7fffffff8ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 << 3U))))));
        bufp->chgBit(oldp+403,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                [0x1dU])));
        bufp->chgBit(oldp+404,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                      [0x1dU] >> 1U))));
        bufp->chgBit(oldp+405,((1U & (~ (IData)((0x7fffffff8ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    << 3U)))))));
        bufp->chgBit(oldp+406,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT____Vcellout__gfor__BRA__29__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+407,((1U & (IData)((0x3fffffffc0000000ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 << 0x1eU))))));
        bufp->chgBit(oldp+408,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                [2U])));
        bufp->chgBit(oldp+409,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                      [2U] >> 1U))));
        bufp->chgBit(oldp+410,((1U & (~ (IData)((0x3fffffffc0000000ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    << 0x1eU)))))));
        bufp->chgBit(oldp+411,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT____Vcellout__gfor__BRA__2__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+412,((1U & (IData)((0x3fffffffcULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 << 2U))))));
        bufp->chgBit(oldp+413,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                [0x1eU])));
        bufp->chgBit(oldp+414,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                      [0x1eU] >> 1U))));
        bufp->chgBit(oldp+415,((1U & (~ (IData)((0x3fffffffcULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    << 2U)))))));
        bufp->chgBit(oldp+416,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT____Vcellout__gfor__BRA__30__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+417,((1U & (IData)((0x1fffffffeULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 << 1U))))));
        bufp->chgBit(oldp+418,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                [0x1fU])));
        bufp->chgBit(oldp+419,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                      [0x1fU] >> 1U))));
        bufp->chgBit(oldp+420,((1U & (~ (IData)((0x1fffffffeULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    << 1U)))))));
        bufp->chgBit(oldp+421,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT____Vcellout__gfor__BRA__31__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+422,((1U & (IData)((0xffffffffULL 
                                              & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX)))));
        bufp->chgBit(oldp+423,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                [0x20U])));
        bufp->chgBit(oldp+424,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                      [0x20U] >> 1U))));
        bufp->chgBit(oldp+425,((1U & (~ (IData)((0xffffffffULL 
                                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX))))));
        bufp->chgBit(oldp+426,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT____Vcellout__gfor__BRA__32__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+427,((1U & (IData)((0x7fffffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 1U))))));
        bufp->chgBit(oldp+428,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                [0x21U])));
        bufp->chgBit(oldp+429,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                      [0x21U] >> 1U))));
        bufp->chgBit(oldp+430,((1U & (~ (IData)((0x7fffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 1U)))))));
        bufp->chgBit(oldp+431,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT____Vcellout__gfor__BRA__33__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+432,((1U & (IData)((0x3fffffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 2U))))));
        bufp->chgBit(oldp+433,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                [0x22U])));
        bufp->chgBit(oldp+434,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                      [0x22U] >> 1U))));
        bufp->chgBit(oldp+435,((1U & (~ (IData)((0x3fffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 2U)))))));
        bufp->chgBit(oldp+436,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT____Vcellout__gfor__BRA__34__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+437,((1U & (IData)((0x1fffffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 3U))))));
        bufp->chgBit(oldp+438,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                [0x23U])));
        bufp->chgBit(oldp+439,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                      [0x23U] >> 1U))));
        bufp->chgBit(oldp+440,((1U & (~ (IData)((0x1fffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 3U)))))));
        bufp->chgBit(oldp+441,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT____Vcellout__gfor__BRA__35__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+442,((1U & (IData)((0xfffffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 4U))))));
        bufp->chgBit(oldp+443,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                [0x24U])));
        bufp->chgBit(oldp+444,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                      [0x24U] >> 1U))));
        bufp->chgBit(oldp+445,((1U & (~ (IData)((0xfffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 4U)))))));
        bufp->chgBit(oldp+446,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT____Vcellout__gfor__BRA__36__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+447,((1U & (IData)((0x7ffffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 5U))))));
        bufp->chgBit(oldp+448,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                [0x25U])));
        bufp->chgBit(oldp+449,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                      [0x25U] >> 1U))));
        bufp->chgBit(oldp+450,((1U & (~ (IData)((0x7ffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 5U)))))));
        bufp->chgBit(oldp+451,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT____Vcellout__gfor__BRA__37__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+452,((1U & (IData)((0x3ffffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 6U))))));
        bufp->chgBit(oldp+453,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                [0x26U])));
        bufp->chgBit(oldp+454,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                      [0x26U] >> 1U))));
        bufp->chgBit(oldp+455,((1U & (~ (IData)((0x3ffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 6U)))))));
        bufp->chgBit(oldp+456,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT____Vcellout__gfor__BRA__38__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+457,((1U & (IData)((0x1ffffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 7U))))));
        bufp->chgBit(oldp+458,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                [0x27U])));
        bufp->chgBit(oldp+459,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                      [0x27U] >> 1U))));
        bufp->chgBit(oldp+460,((1U & (~ (IData)((0x1ffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 7U)))))));
        bufp->chgBit(oldp+461,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT____Vcellout__gfor__BRA__39__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+462,((1U & (IData)((0x1fffffffe0000000ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 << 0x1dU))))));
        bufp->chgBit(oldp+463,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                [3U])));
        bufp->chgBit(oldp+464,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                      [3U] >> 1U))));
        bufp->chgBit(oldp+465,((1U & (~ (IData)((0x1fffffffe0000000ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    << 0x1dU)))))));
        bufp->chgBit(oldp+466,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT____Vcellout__gfor__BRA__3__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+467,((1U & (IData)((0xffffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 8U))))));
        bufp->chgBit(oldp+468,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                [0x28U])));
        bufp->chgBit(oldp+469,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                      [0x28U] >> 1U))));
        bufp->chgBit(oldp+470,((1U & (~ (IData)((0xffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 8U)))))));
        bufp->chgBit(oldp+471,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT____Vcellout__gfor__BRA__40__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+472,((1U & (IData)((0x7fffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 9U))))));
        bufp->chgBit(oldp+473,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                [0x29U])));
        bufp->chgBit(oldp+474,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                      [0x29U] >> 1U))));
        bufp->chgBit(oldp+475,((1U & (~ (IData)((0x7fffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 9U)))))));
        bufp->chgBit(oldp+476,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT____Vcellout__gfor__BRA__41__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+477,((1U & (IData)((0x3fffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0xaU))))));
        bufp->chgBit(oldp+478,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                [0x2aU])));
        bufp->chgBit(oldp+479,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                      [0x2aU] >> 1U))));
        bufp->chgBit(oldp+480,((1U & (~ (IData)((0x3fffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0xaU)))))));
        bufp->chgBit(oldp+481,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT____Vcellout__gfor__BRA__42__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+482,((1U & (IData)((0x1fffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0xbU))))));
        bufp->chgBit(oldp+483,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                [0x2bU])));
        bufp->chgBit(oldp+484,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                      [0x2bU] >> 1U))));
        bufp->chgBit(oldp+485,((1U & (~ (IData)((0x1fffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0xbU)))))));
        bufp->chgBit(oldp+486,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT____Vcellout__gfor__BRA__43__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+487,((1U & (IData)((0xfffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0xcU))))));
        bufp->chgBit(oldp+488,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                [0x2cU])));
        bufp->chgBit(oldp+489,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                      [0x2cU] >> 1U))));
        bufp->chgBit(oldp+490,((1U & (~ (IData)((0xfffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0xcU)))))));
        bufp->chgBit(oldp+491,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT____Vcellout__gfor__BRA__44__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+492,((1U & (IData)((0x7ffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0xdU))))));
        bufp->chgBit(oldp+493,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                [0x2dU])));
        bufp->chgBit(oldp+494,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                      [0x2dU] >> 1U))));
        bufp->chgBit(oldp+495,((1U & (~ (IData)((0x7ffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0xdU)))))));
        bufp->chgBit(oldp+496,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT____Vcellout__gfor__BRA__45__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+497,((1U & (IData)((0x3ffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0xeU))))));
        bufp->chgBit(oldp+498,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                [0x2eU])));
        bufp->chgBit(oldp+499,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                      [0x2eU] >> 1U))));
        bufp->chgBit(oldp+500,((1U & (~ (IData)((0x3ffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0xeU)))))));
        bufp->chgBit(oldp+501,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT____Vcellout__gfor__BRA__46__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+502,((1U & (IData)((0x1ffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0xfU))))));
        bufp->chgBit(oldp+503,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                [0x2fU])));
        bufp->chgBit(oldp+504,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                      [0x2fU] >> 1U))));
        bufp->chgBit(oldp+505,((1U & (~ (IData)((0x1ffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0xfU)))))));
        bufp->chgBit(oldp+506,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT____Vcellout__gfor__BRA__47__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+507,((1U & (IData)((0xffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x10U))))));
        bufp->chgBit(oldp+508,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                [0x30U])));
        bufp->chgBit(oldp+509,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                      [0x30U] >> 1U))));
        bufp->chgBit(oldp+510,((1U & (~ (IData)((0xffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x10U)))))));
        bufp->chgBit(oldp+511,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT____Vcellout__gfor__BRA__48__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+512,((1U & (IData)((0x7fffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x11U))))));
        bufp->chgBit(oldp+513,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                [0x31U])));
        bufp->chgBit(oldp+514,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                      [0x31U] >> 1U))));
        bufp->chgBit(oldp+515,((1U & (~ (IData)((0x7fffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x11U)))))));
        bufp->chgBit(oldp+516,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT____Vcellout__gfor__BRA__49__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+517,((1U & (IData)((0xffffffff0000000ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 << 0x1cU))))));
        bufp->chgBit(oldp+518,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                [4U])));
        bufp->chgBit(oldp+519,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                      [4U] >> 1U))));
        bufp->chgBit(oldp+520,((1U & (~ (IData)((0xffffffff0000000ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    << 0x1cU)))))));
        bufp->chgBit(oldp+521,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT____Vcellout__gfor__BRA__4__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+522,((1U & (IData)((0x3fffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x12U))))));
        bufp->chgBit(oldp+523,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                [0x32U])));
        bufp->chgBit(oldp+524,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                      [0x32U] >> 1U))));
        bufp->chgBit(oldp+525,((1U & (~ (IData)((0x3fffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x12U)))))));
        bufp->chgBit(oldp+526,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT____Vcellout__gfor__BRA__50__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+527,((1U & (IData)((0x1fffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x13U))))));
        bufp->chgBit(oldp+528,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                [0x33U])));
        bufp->chgBit(oldp+529,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                      [0x33U] >> 1U))));
        bufp->chgBit(oldp+530,((1U & (~ (IData)((0x1fffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x13U)))))));
        bufp->chgBit(oldp+531,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT____Vcellout__gfor__BRA__51__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+532,((1U & (IData)((0xfffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x14U))))));
        bufp->chgBit(oldp+533,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                [0x34U])));
        bufp->chgBit(oldp+534,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                      [0x34U] >> 1U))));
        bufp->chgBit(oldp+535,((1U & (~ (IData)((0xfffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x14U)))))));
        bufp->chgBit(oldp+536,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT____Vcellout__gfor__BRA__52__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+537,((1U & (IData)((0x7ffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x15U))))));
        bufp->chgBit(oldp+538,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                [0x35U])));
        bufp->chgBit(oldp+539,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                      [0x35U] >> 1U))));
        bufp->chgBit(oldp+540,((1U & (~ (IData)((0x7ffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x15U)))))));
        bufp->chgBit(oldp+541,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT____Vcellout__gfor__BRA__53__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+542,((1U & (IData)((0x3ffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x16U))))));
        bufp->chgBit(oldp+543,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                [0x36U])));
        bufp->chgBit(oldp+544,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                      [0x36U] >> 1U))));
        bufp->chgBit(oldp+545,((1U & (~ (IData)((0x3ffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x16U)))))));
        bufp->chgBit(oldp+546,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT____Vcellout__gfor__BRA__54__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+547,((1U & (IData)((0x1ffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x17U))))));
        bufp->chgBit(oldp+548,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                [0x37U])));
        bufp->chgBit(oldp+549,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                      [0x37U] >> 1U))));
        bufp->chgBit(oldp+550,((1U & (~ (IData)((0x1ffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x17U)))))));
        bufp->chgBit(oldp+551,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT____Vcellout__gfor__BRA__55__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+552,((1U & (IData)((0xffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x18U))))));
        bufp->chgBit(oldp+553,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                [0x38U])));
        bufp->chgBit(oldp+554,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                      [0x38U] >> 1U))));
        bufp->chgBit(oldp+555,((1U & (~ (IData)((0xffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x18U)))))));
        bufp->chgBit(oldp+556,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT____Vcellout__gfor__BRA__56__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+557,((1U & (IData)((0x7fULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x19U))))));
        bufp->chgBit(oldp+558,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                [0x39U])));
        bufp->chgBit(oldp+559,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                      [0x39U] >> 1U))));
        bufp->chgBit(oldp+560,((1U & (~ (IData)((0x7fULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x19U)))))));
        bufp->chgBit(oldp+561,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT____Vcellout__gfor__BRA__57__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+562,((1U & (IData)((0x3fULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x1aU))))));
        bufp->chgBit(oldp+563,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                [0x3aU])));
        bufp->chgBit(oldp+564,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                      [0x3aU] >> 1U))));
        bufp->chgBit(oldp+565,((1U & (~ (IData)((0x3fULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x1aU)))))));
        bufp->chgBit(oldp+566,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT____Vcellout__gfor__BRA__58__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+567,((1U & (IData)((0x1fULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x1bU))))));
        bufp->chgBit(oldp+568,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                [0x3bU])));
        bufp->chgBit(oldp+569,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                      [0x3bU] >> 1U))));
        bufp->chgBit(oldp+570,((1U & (~ (IData)((0x1fULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x1bU)))))));
        bufp->chgBit(oldp+571,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT____Vcellout__gfor__BRA__59__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+572,((1U & (IData)((0x7fffffff8000000ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 << 0x1bU))))));
        bufp->chgBit(oldp+573,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                [5U])));
        bufp->chgBit(oldp+574,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                      [5U] >> 1U))));
        bufp->chgBit(oldp+575,((1U & (~ (IData)((0x7fffffff8000000ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    << 0x1bU)))))));
        bufp->chgBit(oldp+576,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT____Vcellout__gfor__BRA__5__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+577,((1U & (IData)((0xfULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x1cU))))));
        bufp->chgBit(oldp+578,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                [0x3cU])));
        bufp->chgBit(oldp+579,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                      [0x3cU] >> 1U))));
        bufp->chgBit(oldp+580,((1U & (~ (IData)((0xfULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x1cU)))))));
        bufp->chgBit(oldp+581,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT____Vcellout__gfor__BRA__60__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+582,((1U & (IData)((7ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x1dU))))));
        bufp->chgBit(oldp+583,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                [0x3dU])));
        bufp->chgBit(oldp+584,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                      [0x3dU] >> 1U))));
        bufp->chgBit(oldp+585,((1U & (~ (IData)((7ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x1dU)))))));
        bufp->chgBit(oldp+586,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT____Vcellout__gfor__BRA__61__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+587,((1U & (IData)((3ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x1eU))))));
        bufp->chgBit(oldp+588,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                [0x3eU])));
        bufp->chgBit(oldp+589,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                      [0x3eU] >> 1U))));
        bufp->chgBit(oldp+590,((1U & (~ (IData)((3ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x1eU)))))));
        bufp->chgBit(oldp+591,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT____Vcellout__gfor__BRA__62__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+592,((1U & (IData)((1ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x1fU))))));
        bufp->chgBit(oldp+593,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                [0x3fU])));
        bufp->chgBit(oldp+594,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                      [0x3fU] >> 1U))));
        bufp->chgBit(oldp+595,((1U & (~ (IData)((1ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x1fU)))))));
        bufp->chgBit(oldp+596,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT____Vcellout__gfor__BRA__63__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+597,((1U & (IData)((0x3fffffffc000000ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 << 0x1aU))))));
        bufp->chgBit(oldp+598,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                [6U])));
        bufp->chgBit(oldp+599,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                      [6U] >> 1U))));
        bufp->chgBit(oldp+600,((1U & (~ (IData)((0x3fffffffc000000ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    << 0x1aU)))))));
        bufp->chgBit(oldp+601,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT____Vcellout__gfor__BRA__6__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+602,((1U & (IData)((0x1fffffffe000000ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 << 0x19U))))));
        bufp->chgBit(oldp+603,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                [7U])));
        bufp->chgBit(oldp+604,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                      [7U] >> 1U))));
        bufp->chgBit(oldp+605,((1U & (~ (IData)((0x1fffffffe000000ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    << 0x19U)))))));
        bufp->chgBit(oldp+606,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT____Vcellout__gfor__BRA__7__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+607,((1U & (IData)((0xffffffff000000ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 << 0x18U))))));
        bufp->chgBit(oldp+608,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                [8U])));
        bufp->chgBit(oldp+609,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                      [8U] >> 1U))));
        bufp->chgBit(oldp+610,((1U & (~ (IData)((0xffffffff000000ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    << 0x18U)))))));
        bufp->chgBit(oldp+611,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT____Vcellout__gfor__BRA__8__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+612,((1U & (IData)((0x7fffffff800000ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 << 0x17U))))));
        bufp->chgBit(oldp+613,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                [9U])));
        bufp->chgBit(oldp+614,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                      [9U] >> 1U))));
        bufp->chgBit(oldp+615,((1U & (~ (IData)((0x7fffffff800000ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    << 0x17U)))))));
        bufp->chgBit(oldp+616,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT____Vcellout__gfor__BRA__9__KET____DOT__ui__OutX));
        bufp->chgBit(oldp+617,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                              >> 0x20U)))));
        bufp->chgIData(oldp+618,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData),17);
        bufp->chgBit(oldp+619,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi__DOT__FifSig) 
                                 & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi__DOT____Vcellinp__sixth1__B) 
                                    | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0))));
        bufp->chgBit(oldp+620,((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi__DOT__FifSig)) 
                                 & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi__DOT__FifSig)) 
                                    & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi__DOT____Vcellinp__sixth1__C)) 
                                       & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi__DOT____Vcellinp__sixth1__B))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi__DOT__FifSig) 
                                      & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                          & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                         | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0)))))));
        bufp->chgCData(oldp+621,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi__DOT____Vcellinp__second4__A) 
                                   << 4U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi__DOT____Vcellinp__second4__B) 
                                              << 3U) 
                                             | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi__DOT____Vcellinp__second4__C) 
                                                 << 2U) 
                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi__DOT____Vcellinp__second3__A) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi__DOT____Vcellinp__second3__B)))))),5);
        bufp->chgCData(oldp+622,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi__DOT____Vcellinp__third2__A) 
                                   << 3U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi__DOT____Vcellinp__third2__B) 
                                              << 2U) 
                                             | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi__DOT____Vcellinp__third2__C) 
                                                 << 1U) 
                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi__DOT____Vcellinp__third1__A))))),4);
        bufp->chgCData(oldp+623,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi__DOT____Vcellinp__fourth2__A) 
                                   << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi__DOT____Vcellinp__fourth2__B))),2);
        bufp->chgCData(oldp+624,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi__DOT____Vcellinp__fifth1__A) 
                                   << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi__DOT____Vcellinp__fifth1__B))),2);
        bufp->chgBit(oldp+625,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi__DOT__FifSig));
        bufp->chgBit(oldp+626,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi__DOT____Vcellinp__fifth1__A));
        bufp->chgBit(oldp+627,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi__DOT____Vcellinp__fifth1__B));
        bufp->chgBit(oldp+628,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi__DOT____Vcellinp__fifth1__C));
        bufp->chgBit(oldp+629,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi__DOT____Vcellinp__sixth1__B));
        bufp->chgBit(oldp+630,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                              [0xcU] 
                                              >> 0xaU)))));
        bufp->chgBit(oldp+631,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                              [0xdU] 
                                              >> 0xaU)))));
        bufp->chgBit(oldp+632,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                              [0xeU] 
                                              >> 0xaU)))));
        bufp->chgBit(oldp+633,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi__DOT____Vcellinp__second1__C));
        bufp->chgBit(oldp+634,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi__DOT____Vcellinp__second3__B));
        bufp->chgBit(oldp+635,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                              [9U] 
                                              >> 0xaU)))));
        bufp->chgBit(oldp+636,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                              [0xaU] 
                                              >> 0xaU)))));
        bufp->chgBit(oldp+637,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                              [0xbU] 
                                              >> 0xaU)))));
        bufp->chgBit(oldp+638,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi__DOT____Vcellinp__second1__B));
        bufp->chgBit(oldp+639,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi__DOT____Vcellinp__second3__A));
        bufp->chgBit(oldp+640,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                              [6U] 
                                              >> 0xaU)))));
        bufp->chgBit(oldp+641,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                              [7U] 
                                              >> 0xaU)))));
        bufp->chgBit(oldp+642,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                              [8U] 
                                              >> 0xaU)))));
        bufp->chgBit(oldp+643,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi__DOT____Vcellinp__second1__A));
        bufp->chgBit(oldp+644,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi__DOT____Vcellinp__second4__C));
        bufp->chgBit(oldp+645,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                              [3U] 
                                              >> 0xaU)))));
        bufp->chgBit(oldp+646,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                              [4U] 
                                              >> 0xaU)))));
        bufp->chgBit(oldp+647,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                              [5U] 
                                              >> 0xaU)))));
        bufp->chgBit(oldp+648,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi__DOT____Vcellinp__second2__C));
        bufp->chgBit(oldp+649,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi__DOT____Vcellinp__second4__B));
        bufp->chgBit(oldp+650,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                              [0U] 
                                              >> 0xaU)))));
        bufp->chgBit(oldp+651,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                              [1U] 
                                              >> 0xaU)))));
        bufp->chgBit(oldp+652,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                              [2U] 
                                              >> 0xaU)))));
        bufp->chgBit(oldp+653,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi__DOT____Vcellinp__second2__B));
        bufp->chgBit(oldp+654,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi__DOT____Vcellinp__second4__A));
        bufp->chgBit(oldp+655,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi__DOT____Vcellinp__fourth1__A));
        bufp->chgBit(oldp+656,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi__DOT____Vcellinp__fourth1__B));
        bufp->chgBit(oldp+657,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi__DOT____Vcellinp__fourth1__C));
        bufp->chgBit(oldp+658,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi__DOT____Vcellinp__fifth1__C));
        bufp->chgBit(oldp+659,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi__DOT____Vcellinp__fourth2__A));
        bufp->chgBit(oldp+660,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi__DOT____Vcellinp__fourth2__B));
        bufp->chgBit(oldp+661,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi__DOT____Vcellinp__fourth2__C));
        bufp->chgBit(oldp+662,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi__DOT____Vcellinp__sixth1__C));
        bufp->chgBit(oldp+663,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi__DOT____Vcellinp__second1__A));
        bufp->chgBit(oldp+664,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi__DOT____Vcellinp__second1__B));
        bufp->chgBit(oldp+665,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi__DOT____Vcellinp__second1__C));
        bufp->chgBit(oldp+666,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi__DOT____Vcellinp__third1__C));
        bufp->chgBit(oldp+667,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi__DOT____Vcellinp__third1__A));
        bufp->chgBit(oldp+668,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                              [0x10U] 
                                              >> 0xaU)))));
        bufp->chgBit(oldp+669,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi__DOT____Vcellinp__second2__B));
        bufp->chgBit(oldp+670,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi__DOT____Vcellinp__second2__C));
        bufp->chgBit(oldp+671,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi__DOT____Vcellinp__third1__B));
        bufp->chgBit(oldp+672,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi__DOT____Vcellinp__third2__C));
        bufp->chgBit(oldp+673,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                              [0xfU] 
                                              >> 0xaU)))));
        bufp->chgBit(oldp+674,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi__DOT____Vcellinp__fourth1__C));
        bufp->chgBit(oldp+675,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi__DOT____Vcellinp__third2__B));
        bufp->chgBit(oldp+676,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi__DOT____Vcellinp__fourth1__B));
        bufp->chgBit(oldp+677,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi__DOT____Vcellinp__third2__A));
        bufp->chgBit(oldp+678,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi__DOT____Vcellinp__sixth1__B));
        bufp->chgBit(oldp+679,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi__DOT____Vcellinp__sixth1__C));
        bufp->chgBit(oldp+680,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi__DOT____Vcellinp__third1__B));
        bufp->chgBit(oldp+681,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi__DOT____Vcellinp__third1__C));
        bufp->chgBit(oldp+682,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi__DOT____Vcellinp__fourth1__A));
        bufp->chgBit(oldp+683,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi__DOT____Vcellinp__fourth2__C));
        bufp->chgIData(oldp+684,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__11__KET____DOT__bi__InData),17);
        bufp->chgBit(oldp+685,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi__DOT__FifSig) 
                                 & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi__DOT____Vcellinp__sixth1__B) 
                                    | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0))));
        bufp->chgBit(oldp+686,((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi__DOT__FifSig)) 
                                 & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi__DOT__FifSig)) 
                                    & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi__DOT____Vcellinp__sixth1__C)) 
                                       & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi__DOT____Vcellinp__sixth1__B))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi__DOT__FifSig) 
                                      & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                          & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                         | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0)))))));
        bufp->chgCData(oldp+687,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi__DOT____Vcellinp__second4__A) 
                                   << 4U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi__DOT____Vcellinp__second4__B) 
                                              << 3U) 
                                             | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi__DOT____Vcellinp__second4__C) 
                                                 << 2U) 
                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi__DOT____Vcellinp__second3__A) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi__DOT____Vcellinp__second3__B)))))),5);
        bufp->chgCData(oldp+688,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi__DOT____Vcellinp__third2__A) 
                                   << 3U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi__DOT____Vcellinp__third2__B) 
                                              << 2U) 
                                             | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi__DOT____Vcellinp__third2__C) 
                                                 << 1U) 
                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi__DOT____Vcellinp__third1__A))))),4);
        bufp->chgCData(oldp+689,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi__DOT____Vcellinp__fourth2__A) 
                                   << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi__DOT____Vcellinp__fourth2__B))),2);
        bufp->chgCData(oldp+690,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi__DOT____Vcellinp__fifth1__A) 
                                   << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi__DOT____Vcellinp__fifth1__B))),2);
        bufp->chgBit(oldp+691,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi__DOT__FifSig));
        bufp->chgBit(oldp+692,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi__DOT____Vcellinp__fifth1__A));
        bufp->chgBit(oldp+693,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi__DOT____Vcellinp__fifth1__B));
        bufp->chgBit(oldp+694,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi__DOT____Vcellinp__sixth1__B));
        bufp->chgBit(oldp+695,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                              [0xcU] 
                                              >> 0xbU)))));
        bufp->chgBit(oldp+696,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                              [0xdU] 
                                              >> 0xbU)))));
        bufp->chgBit(oldp+697,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                              [0xeU] 
                                              >> 0xbU)))));
        bufp->chgBit(oldp+698,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi__DOT____Vcellinp__second1__C));
        bufp->chgBit(oldp+699,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi__DOT____Vcellinp__second3__B));
        bufp->chgBit(oldp+700,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                              [9U] 
                                              >> 0xbU)))));
        bufp->chgBit(oldp+701,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                              [0xaU] 
                                              >> 0xbU)))));
        bufp->chgBit(oldp+702,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                              [0xbU] 
                                              >> 0xbU)))));
        bufp->chgBit(oldp+703,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi__DOT____Vcellinp__second1__B));
        bufp->chgBit(oldp+704,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi__DOT____Vcellinp__second3__A));
        bufp->chgBit(oldp+705,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                              [6U] 
                                              >> 0xbU)))));
        bufp->chgBit(oldp+706,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                              [7U] 
                                              >> 0xbU)))));
        bufp->chgBit(oldp+707,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                              [8U] 
                                              >> 0xbU)))));
        bufp->chgBit(oldp+708,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi__DOT____Vcellinp__second1__A));
        bufp->chgBit(oldp+709,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi__DOT____Vcellinp__second4__C));
        bufp->chgBit(oldp+710,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                              [3U] 
                                              >> 0xbU)))));
        bufp->chgBit(oldp+711,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                              [4U] 
                                              >> 0xbU)))));
        bufp->chgBit(oldp+712,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                              [5U] 
                                              >> 0xbU)))));
        bufp->chgBit(oldp+713,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi__DOT____Vcellinp__second2__C));
        bufp->chgBit(oldp+714,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi__DOT____Vcellinp__second4__B));
        bufp->chgBit(oldp+715,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                              [0U] 
                                              >> 0xbU)))));
        bufp->chgBit(oldp+716,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                              [1U] 
                                              >> 0xbU)))));
        bufp->chgBit(oldp+717,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                              [2U] 
                                              >> 0xbU)))));
        bufp->chgBit(oldp+718,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi__DOT____Vcellinp__second2__B));
        bufp->chgBit(oldp+719,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi__DOT____Vcellinp__second4__A));
        bufp->chgBit(oldp+720,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi__DOT____Vcellinp__fifth1__C));
        bufp->chgBit(oldp+721,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi__DOT____Vcellinp__fourth2__A));
        bufp->chgBit(oldp+722,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi__DOT____Vcellinp__fourth2__B));
        bufp->chgBit(oldp+723,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi__DOT____Vcellinp__sixth1__C));
        bufp->chgBit(oldp+724,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi__DOT____Vcellinp__third1__C));
        bufp->chgBit(oldp+725,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi__DOT____Vcellinp__third1__A));
        bufp->chgBit(oldp+726,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                              [0x10U] 
                                              >> 0xbU)))));
        bufp->chgBit(oldp+727,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi__DOT____Vcellinp__third1__B));
        bufp->chgBit(oldp+728,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi__DOT____Vcellinp__third2__C));
        bufp->chgBit(oldp+729,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                              [0xfU] 
                                              >> 0xbU)))));
        bufp->chgBit(oldp+730,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi__DOT____Vcellinp__fourth1__C));
        bufp->chgBit(oldp+731,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi__DOT____Vcellinp__third2__B));
        bufp->chgBit(oldp+732,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi__DOT____Vcellinp__fourth1__B));
        bufp->chgBit(oldp+733,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi__DOT____Vcellinp__third2__A));
        bufp->chgBit(oldp+734,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi__DOT____Vcellinp__fourth1__A));
        bufp->chgBit(oldp+735,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi__DOT____Vcellinp__fourth2__C));
        bufp->chgIData(oldp+736,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__12__KET____DOT__bi__InData),17);
        bufp->chgBit(oldp+737,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi__DOT__FifSig) 
                                 & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi__DOT____Vcellinp__sixth1__B) 
                                    | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0))));
        bufp->chgBit(oldp+738,((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi__DOT__FifSig)) 
                                 & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi__DOT__FifSig)) 
                                    & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi__DOT____Vcellinp__sixth1__C)) 
                                       & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi__DOT____Vcellinp__sixth1__B))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi__DOT__FifSig) 
                                      & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                          & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                         | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0)))))));
        bufp->chgCData(oldp+739,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi__DOT____Vcellinp__second4__A) 
                                   << 4U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi__DOT____Vcellinp__second4__B) 
                                              << 3U) 
                                             | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi__DOT____Vcellinp__second4__C) 
                                                 << 2U) 
                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi__DOT____Vcellinp__second3__A) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi__DOT____Vcellinp__second3__B)))))),5);
        bufp->chgCData(oldp+740,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi__DOT____Vcellinp__third2__A) 
                                   << 3U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi__DOT____Vcellinp__third2__B) 
                                              << 2U) 
                                             | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi__DOT____Vcellinp__third2__C) 
                                                 << 1U) 
                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi__DOT____Vcellinp__third1__A))))),4);
        bufp->chgCData(oldp+741,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi__DOT____Vcellinp__fourth2__A) 
                                   << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi__DOT____Vcellinp__fourth2__B))),2);
        bufp->chgCData(oldp+742,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi__DOT____Vcellinp__fifth1__A) 
                                   << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi__DOT____Vcellinp__fifth1__B))),2);
        bufp->chgBit(oldp+743,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi__DOT__FifSig));
        bufp->chgBit(oldp+744,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi__DOT____Vcellinp__fifth1__A));
        bufp->chgBit(oldp+745,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi__DOT____Vcellinp__fifth1__B));
        bufp->chgBit(oldp+746,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi__DOT____Vcellinp__sixth1__B));
        bufp->chgBit(oldp+747,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                              [0xcU] 
                                              >> 0xcU)))));
        bufp->chgBit(oldp+748,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                              [0xdU] 
                                              >> 0xcU)))));
        bufp->chgBit(oldp+749,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                              [0xeU] 
                                              >> 0xcU)))));
        bufp->chgBit(oldp+750,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi__DOT____Vcellinp__second1__C));
        bufp->chgBit(oldp+751,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi__DOT____Vcellinp__second3__B));
        bufp->chgBit(oldp+752,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                              [9U] 
                                              >> 0xcU)))));
        bufp->chgBit(oldp+753,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                              [0xaU] 
                                              >> 0xcU)))));
        bufp->chgBit(oldp+754,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                              [0xbU] 
                                              >> 0xcU)))));
        bufp->chgBit(oldp+755,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi__DOT____Vcellinp__second1__B));
        bufp->chgBit(oldp+756,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi__DOT____Vcellinp__second3__A));
        bufp->chgBit(oldp+757,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                              [6U] 
                                              >> 0xcU)))));
        bufp->chgBit(oldp+758,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                              [7U] 
                                              >> 0xcU)))));
        bufp->chgBit(oldp+759,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                              [8U] 
                                              >> 0xcU)))));
        bufp->chgBit(oldp+760,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi__DOT____Vcellinp__second1__A));
        bufp->chgBit(oldp+761,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi__DOT____Vcellinp__second4__C));
        bufp->chgBit(oldp+762,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                              [3U] 
                                              >> 0xcU)))));
        bufp->chgBit(oldp+763,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                              [4U] 
                                              >> 0xcU)))));
        bufp->chgBit(oldp+764,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                              [5U] 
                                              >> 0xcU)))));
        bufp->chgBit(oldp+765,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi__DOT____Vcellinp__second2__C));
        bufp->chgBit(oldp+766,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi__DOT____Vcellinp__second4__B));
        bufp->chgBit(oldp+767,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                              [0U] 
                                              >> 0xcU)))));
        bufp->chgBit(oldp+768,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                              [1U] 
                                              >> 0xcU)))));
        bufp->chgBit(oldp+769,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                              [2U] 
                                              >> 0xcU)))));
        bufp->chgBit(oldp+770,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi__DOT____Vcellinp__second2__B));
        bufp->chgBit(oldp+771,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi__DOT____Vcellinp__second4__A));
        bufp->chgBit(oldp+772,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi__DOT____Vcellinp__fifth1__C));
        bufp->chgBit(oldp+773,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi__DOT____Vcellinp__fourth2__A));
        bufp->chgBit(oldp+774,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi__DOT____Vcellinp__fourth2__B));
        bufp->chgBit(oldp+775,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi__DOT____Vcellinp__sixth1__C));
        bufp->chgBit(oldp+776,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi__DOT____Vcellinp__third1__C));
        bufp->chgBit(oldp+777,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi__DOT____Vcellinp__third1__A));
        bufp->chgBit(oldp+778,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                              [0x10U] 
                                              >> 0xcU)))));
        bufp->chgBit(oldp+779,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi__DOT____Vcellinp__third1__B));
        bufp->chgBit(oldp+780,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi__DOT____Vcellinp__third2__C));
        bufp->chgBit(oldp+781,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                              [0xfU] 
                                              >> 0xcU)))));
        bufp->chgBit(oldp+782,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi__DOT____Vcellinp__fourth1__C));
        bufp->chgBit(oldp+783,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi__DOT____Vcellinp__third2__B));
        bufp->chgBit(oldp+784,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi__DOT____Vcellinp__fourth1__B));
        bufp->chgBit(oldp+785,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi__DOT____Vcellinp__third2__A));
        bufp->chgBit(oldp+786,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi__DOT____Vcellinp__fourth1__A));
        bufp->chgBit(oldp+787,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi__DOT____Vcellinp__fourth2__C));
        bufp->chgIData(oldp+788,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__13__KET____DOT__bi__InData),17);
        bufp->chgBit(oldp+789,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi__DOT__FifSig) 
                                 & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi__DOT____Vcellinp__sixth1__B) 
                                    | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0))));
        bufp->chgBit(oldp+790,((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi__DOT__FifSig)) 
                                 & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi__DOT__FifSig)) 
                                    & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi__DOT____Vcellinp__sixth1__C)) 
                                       & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi__DOT____Vcellinp__sixth1__B))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi__DOT__FifSig) 
                                      & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                          & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                         | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0)))))));
        bufp->chgCData(oldp+791,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi__DOT____Vcellinp__second4__A) 
                                   << 4U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi__DOT____Vcellinp__second4__B) 
                                              << 3U) 
                                             | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi__DOT____Vcellinp__second4__C) 
                                                 << 2U) 
                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi__DOT____Vcellinp__second3__A) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi__DOT____Vcellinp__second3__B)))))),5);
        bufp->chgCData(oldp+792,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi__DOT____Vcellinp__third2__A) 
                                   << 3U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi__DOT____Vcellinp__third2__B) 
                                              << 2U) 
                                             | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi__DOT____Vcellinp__third2__C) 
                                                 << 1U) 
                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi__DOT____Vcellinp__third1__A))))),4);
        bufp->chgCData(oldp+793,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi__DOT____Vcellinp__fourth2__A) 
                                   << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi__DOT____Vcellinp__fourth2__B))),2);
        bufp->chgCData(oldp+794,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi__DOT____Vcellinp__fifth1__A) 
                                   << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi__DOT____Vcellinp__fifth1__B))),2);
        bufp->chgBit(oldp+795,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi__DOT__FifSig));
        bufp->chgBit(oldp+796,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi__DOT____Vcellinp__fifth1__A));
        bufp->chgBit(oldp+797,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi__DOT____Vcellinp__fifth1__B));
        bufp->chgBit(oldp+798,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi__DOT____Vcellinp__sixth1__B));
        bufp->chgBit(oldp+799,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                              [0xcU] 
                                              >> 0xdU)))));
        bufp->chgBit(oldp+800,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                              [0xdU] 
                                              >> 0xdU)))));
        bufp->chgBit(oldp+801,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                              [0xeU] 
                                              >> 0xdU)))));
        bufp->chgBit(oldp+802,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi__DOT____Vcellinp__second1__C));
        bufp->chgBit(oldp+803,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi__DOT____Vcellinp__second3__B));
        bufp->chgBit(oldp+804,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                              [9U] 
                                              >> 0xdU)))));
        bufp->chgBit(oldp+805,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                              [0xaU] 
                                              >> 0xdU)))));
        bufp->chgBit(oldp+806,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                              [0xbU] 
                                              >> 0xdU)))));
        bufp->chgBit(oldp+807,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi__DOT____Vcellinp__second1__B));
        bufp->chgBit(oldp+808,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi__DOT____Vcellinp__second3__A));
        bufp->chgBit(oldp+809,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                              [6U] 
                                              >> 0xdU)))));
        bufp->chgBit(oldp+810,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                              [7U] 
                                              >> 0xdU)))));
        bufp->chgBit(oldp+811,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                              [8U] 
                                              >> 0xdU)))));
        bufp->chgBit(oldp+812,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi__DOT____Vcellinp__second1__A));
        bufp->chgBit(oldp+813,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi__DOT____Vcellinp__second4__C));
        bufp->chgBit(oldp+814,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                              [3U] 
                                              >> 0xdU)))));
        bufp->chgBit(oldp+815,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                              [4U] 
                                              >> 0xdU)))));
        bufp->chgBit(oldp+816,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                              [5U] 
                                              >> 0xdU)))));
        bufp->chgBit(oldp+817,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi__DOT____Vcellinp__second2__C));
        bufp->chgBit(oldp+818,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi__DOT____Vcellinp__second4__B));
        bufp->chgBit(oldp+819,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                              [0U] 
                                              >> 0xdU)))));
        bufp->chgBit(oldp+820,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                              [1U] 
                                              >> 0xdU)))));
        bufp->chgBit(oldp+821,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                              [2U] 
                                              >> 0xdU)))));
        bufp->chgBit(oldp+822,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi__DOT____Vcellinp__second2__B));
        bufp->chgBit(oldp+823,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi__DOT____Vcellinp__second4__A));
        bufp->chgBit(oldp+824,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi__DOT____Vcellinp__fifth1__C));
        bufp->chgBit(oldp+825,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi__DOT____Vcellinp__fourth2__A));
        bufp->chgBit(oldp+826,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi__DOT____Vcellinp__fourth2__B));
        bufp->chgBit(oldp+827,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi__DOT____Vcellinp__sixth1__C));
        bufp->chgBit(oldp+828,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi__DOT____Vcellinp__third1__C));
        bufp->chgBit(oldp+829,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi__DOT____Vcellinp__third1__A));
        bufp->chgBit(oldp+830,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                              [0x10U] 
                                              >> 0xdU)))));
        bufp->chgBit(oldp+831,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi__DOT____Vcellinp__third1__B));
        bufp->chgBit(oldp+832,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi__DOT____Vcellinp__third2__C));
        bufp->chgBit(oldp+833,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                              [0xfU] 
                                              >> 0xdU)))));
        bufp->chgBit(oldp+834,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi__DOT____Vcellinp__fourth1__C));
        bufp->chgBit(oldp+835,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi__DOT____Vcellinp__third2__B));
        bufp->chgBit(oldp+836,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi__DOT____Vcellinp__fourth1__B));
        bufp->chgBit(oldp+837,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi__DOT____Vcellinp__third2__A));
        bufp->chgBit(oldp+838,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi__DOT____Vcellinp__fourth1__A));
        bufp->chgBit(oldp+839,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi__DOT____Vcellinp__fourth2__C));
        bufp->chgIData(oldp+840,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__14__KET____DOT__bi__InData),17);
        bufp->chgBit(oldp+841,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi__DOT__FifSig) 
                                 & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi__DOT____Vcellinp__sixth1__B) 
                                    | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0))));
        bufp->chgBit(oldp+842,((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi__DOT__FifSig)) 
                                 & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi__DOT__FifSig)) 
                                    & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi__DOT____Vcellinp__sixth1__C)) 
                                       & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi__DOT____Vcellinp__sixth1__B))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi__DOT__FifSig) 
                                      & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                          & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                         | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0)))))));
        bufp->chgCData(oldp+843,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi__DOT____Vcellinp__second4__A) 
                                   << 4U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi__DOT____Vcellinp__second4__B) 
                                              << 3U) 
                                             | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi__DOT____Vcellinp__second4__C) 
                                                 << 2U) 
                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi__DOT____Vcellinp__second3__A) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi__DOT____Vcellinp__second3__B)))))),5);
        bufp->chgCData(oldp+844,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi__DOT____Vcellinp__third2__A) 
                                   << 3U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi__DOT____Vcellinp__third2__B) 
                                              << 2U) 
                                             | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi__DOT____Vcellinp__third2__C) 
                                                 << 1U) 
                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi__DOT____Vcellinp__third1__A))))),4);
        bufp->chgCData(oldp+845,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi__DOT____Vcellinp__fourth2__A) 
                                   << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi__DOT____Vcellinp__fourth2__B))),2);
        bufp->chgCData(oldp+846,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi__DOT____Vcellinp__fifth1__A) 
                                   << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi__DOT____Vcellinp__fifth1__B))),2);
        bufp->chgBit(oldp+847,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi__DOT__FifSig));
        bufp->chgBit(oldp+848,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi__DOT____Vcellinp__fifth1__A));
        bufp->chgBit(oldp+849,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi__DOT____Vcellinp__fifth1__B));
        bufp->chgBit(oldp+850,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi__DOT____Vcellinp__sixth1__B));
        bufp->chgBit(oldp+851,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                              [0xcU] 
                                              >> 0xeU)))));
        bufp->chgBit(oldp+852,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                              [0xdU] 
                                              >> 0xeU)))));
        bufp->chgBit(oldp+853,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                              [0xeU] 
                                              >> 0xeU)))));
        bufp->chgBit(oldp+854,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi__DOT____Vcellinp__second1__C));
        bufp->chgBit(oldp+855,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi__DOT____Vcellinp__second3__B));
        bufp->chgBit(oldp+856,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                              [9U] 
                                              >> 0xeU)))));
        bufp->chgBit(oldp+857,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                              [0xaU] 
                                              >> 0xeU)))));
        bufp->chgBit(oldp+858,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                              [0xbU] 
                                              >> 0xeU)))));
        bufp->chgBit(oldp+859,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi__DOT____Vcellinp__second1__B));
        bufp->chgBit(oldp+860,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi__DOT____Vcellinp__second3__A));
        bufp->chgBit(oldp+861,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                              [6U] 
                                              >> 0xeU)))));
        bufp->chgBit(oldp+862,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                              [7U] 
                                              >> 0xeU)))));
        bufp->chgBit(oldp+863,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                              [8U] 
                                              >> 0xeU)))));
        bufp->chgBit(oldp+864,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi__DOT____Vcellinp__second1__A));
        bufp->chgBit(oldp+865,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi__DOT____Vcellinp__second4__C));
        bufp->chgBit(oldp+866,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                              [3U] 
                                              >> 0xeU)))));
        bufp->chgBit(oldp+867,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                              [4U] 
                                              >> 0xeU)))));
        bufp->chgBit(oldp+868,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                              [5U] 
                                              >> 0xeU)))));
        bufp->chgBit(oldp+869,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi__DOT____Vcellinp__second2__C));
        bufp->chgBit(oldp+870,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi__DOT____Vcellinp__second4__B));
        bufp->chgBit(oldp+871,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                              [0U] 
                                              >> 0xeU)))));
        bufp->chgBit(oldp+872,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                              [1U] 
                                              >> 0xeU)))));
        bufp->chgBit(oldp+873,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                              [2U] 
                                              >> 0xeU)))));
        bufp->chgBit(oldp+874,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi__DOT____Vcellinp__second2__B));
        bufp->chgBit(oldp+875,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi__DOT____Vcellinp__second4__A));
        bufp->chgBit(oldp+876,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi__DOT____Vcellinp__fifth1__C));
        bufp->chgBit(oldp+877,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi__DOT____Vcellinp__fourth2__A));
        bufp->chgBit(oldp+878,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi__DOT____Vcellinp__fourth2__B));
        bufp->chgBit(oldp+879,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi__DOT____Vcellinp__sixth1__C));
        bufp->chgBit(oldp+880,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi__DOT____Vcellinp__third1__C));
        bufp->chgBit(oldp+881,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi__DOT____Vcellinp__third1__A));
        bufp->chgBit(oldp+882,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                              [0x10U] 
                                              >> 0xeU)))));
        bufp->chgBit(oldp+883,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi__DOT____Vcellinp__third1__B));
        bufp->chgBit(oldp+884,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi__DOT____Vcellinp__third2__C));
        bufp->chgBit(oldp+885,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                              [0xfU] 
                                              >> 0xeU)))));
        bufp->chgBit(oldp+886,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi__DOT____Vcellinp__fourth1__C));
        bufp->chgBit(oldp+887,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi__DOT____Vcellinp__third2__B));
        bufp->chgBit(oldp+888,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi__DOT____Vcellinp__fourth1__B));
        bufp->chgBit(oldp+889,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi__DOT____Vcellinp__third2__A));
        bufp->chgBit(oldp+890,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi__DOT____Vcellinp__fourth1__A));
        bufp->chgBit(oldp+891,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi__DOT____Vcellinp__fourth2__C));
        bufp->chgIData(oldp+892,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__15__KET____DOT__bi__InData),17);
        bufp->chgBit(oldp+893,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi__DOT__FifSig) 
                                 & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi__DOT____Vcellinp__sixth1__B) 
                                    | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0))));
        bufp->chgBit(oldp+894,((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi__DOT__FifSig)) 
                                 & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi__DOT__FifSig)) 
                                    & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi__DOT____Vcellinp__sixth1__C)) 
                                       & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi__DOT____Vcellinp__sixth1__B))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi__DOT__FifSig) 
                                      & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                          & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                         | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0)))))));
        bufp->chgCData(oldp+895,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi__DOT____Vcellinp__second4__A) 
                                   << 4U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi__DOT____Vcellinp__second4__B) 
                                              << 3U) 
                                             | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi__DOT____Vcellinp__second4__C) 
                                                 << 2U) 
                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi__DOT____Vcellinp__second3__A) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi__DOT____Vcellinp__second3__B)))))),5);
        bufp->chgCData(oldp+896,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi__DOT____Vcellinp__third2__A) 
                                   << 3U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi__DOT____Vcellinp__third2__B) 
                                              << 2U) 
                                             | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi__DOT____Vcellinp__third2__C) 
                                                 << 1U) 
                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi__DOT____Vcellinp__third1__A))))),4);
        bufp->chgCData(oldp+897,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi__DOT____Vcellinp__fourth2__A) 
                                   << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi__DOT____Vcellinp__fourth2__B))),2);
        bufp->chgCData(oldp+898,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi__DOT____Vcellinp__fifth1__A) 
                                   << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi__DOT____Vcellinp__fifth1__B))),2);
        bufp->chgBit(oldp+899,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi__DOT__FifSig));
        bufp->chgBit(oldp+900,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi__DOT____Vcellinp__fifth1__A));
        bufp->chgBit(oldp+901,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi__DOT____Vcellinp__fifth1__B));
        bufp->chgBit(oldp+902,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi__DOT____Vcellinp__sixth1__B));
        bufp->chgBit(oldp+903,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                              [0xcU] 
                                              >> 0xfU)))));
        bufp->chgBit(oldp+904,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                              [0xdU] 
                                              >> 0xfU)))));
        bufp->chgBit(oldp+905,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                              [0xeU] 
                                              >> 0xfU)))));
        bufp->chgBit(oldp+906,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi__DOT____Vcellinp__second1__C));
        bufp->chgBit(oldp+907,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi__DOT____Vcellinp__second3__B));
        bufp->chgBit(oldp+908,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                              [9U] 
                                              >> 0xfU)))));
        bufp->chgBit(oldp+909,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                              [0xaU] 
                                              >> 0xfU)))));
        bufp->chgBit(oldp+910,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                              [0xbU] 
                                              >> 0xfU)))));
        bufp->chgBit(oldp+911,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi__DOT____Vcellinp__second1__B));
        bufp->chgBit(oldp+912,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi__DOT____Vcellinp__second3__A));
        bufp->chgBit(oldp+913,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                              [6U] 
                                              >> 0xfU)))));
        bufp->chgBit(oldp+914,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                              [7U] 
                                              >> 0xfU)))));
        bufp->chgBit(oldp+915,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                              [8U] 
                                              >> 0xfU)))));
        bufp->chgBit(oldp+916,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi__DOT____Vcellinp__second1__A));
        bufp->chgBit(oldp+917,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi__DOT____Vcellinp__second4__C));
        bufp->chgBit(oldp+918,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                              [3U] 
                                              >> 0xfU)))));
        bufp->chgBit(oldp+919,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                              [4U] 
                                              >> 0xfU)))));
        bufp->chgBit(oldp+920,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                              [5U] 
                                              >> 0xfU)))));
        bufp->chgBit(oldp+921,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi__DOT____Vcellinp__second2__C));
        bufp->chgBit(oldp+922,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi__DOT____Vcellinp__second4__B));
        bufp->chgBit(oldp+923,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                              [0U] 
                                              >> 0xfU)))));
        bufp->chgBit(oldp+924,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                              [1U] 
                                              >> 0xfU)))));
        bufp->chgBit(oldp+925,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                              [2U] 
                                              >> 0xfU)))));
        bufp->chgBit(oldp+926,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi__DOT____Vcellinp__second2__B));
        bufp->chgBit(oldp+927,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi__DOT____Vcellinp__second4__A));
        bufp->chgBit(oldp+928,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi__DOT____Vcellinp__fifth1__C));
        bufp->chgBit(oldp+929,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi__DOT____Vcellinp__fourth2__A));
        bufp->chgBit(oldp+930,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi__DOT____Vcellinp__fourth2__B));
        bufp->chgBit(oldp+931,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi__DOT____Vcellinp__sixth1__C));
        bufp->chgBit(oldp+932,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi__DOT____Vcellinp__third1__C));
        bufp->chgBit(oldp+933,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi__DOT____Vcellinp__third1__A));
        bufp->chgBit(oldp+934,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                              [0x10U] 
                                              >> 0xfU)))));
        bufp->chgBit(oldp+935,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi__DOT____Vcellinp__third1__B));
        bufp->chgBit(oldp+936,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi__DOT____Vcellinp__third2__C));
        bufp->chgBit(oldp+937,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                              [0xfU] 
                                              >> 0xfU)))));
        bufp->chgBit(oldp+938,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi__DOT____Vcellinp__fourth1__C));
        bufp->chgBit(oldp+939,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi__DOT____Vcellinp__third2__B));
        bufp->chgBit(oldp+940,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi__DOT____Vcellinp__fourth1__B));
        bufp->chgBit(oldp+941,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi__DOT____Vcellinp__third2__A));
        bufp->chgBit(oldp+942,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi__DOT____Vcellinp__fourth1__A));
        bufp->chgBit(oldp+943,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi__DOT____Vcellinp__fourth2__C));
        bufp->chgIData(oldp+944,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__16__KET____DOT__bi__InData),17);
        bufp->chgBit(oldp+945,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi__DOT__FifSig) 
                                 & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi__DOT____Vcellinp__sixth1__B) 
                                    | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0))));
        bufp->chgBit(oldp+946,((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi__DOT__FifSig)) 
                                 & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi__DOT__FifSig)) 
                                    & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi__DOT____Vcellinp__sixth1__C)) 
                                       & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi__DOT____Vcellinp__sixth1__B))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi__DOT__FifSig) 
                                      & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                          & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                         | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0)))))));
        bufp->chgCData(oldp+947,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi__DOT____Vcellinp__second4__A) 
                                   << 4U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi__DOT____Vcellinp__second4__B) 
                                              << 3U) 
                                             | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi__DOT____Vcellinp__second4__C) 
                                                 << 2U) 
                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi__DOT____Vcellinp__second3__A) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi__DOT____Vcellinp__second3__B)))))),5);
        bufp->chgCData(oldp+948,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi__DOT____Vcellinp__third2__A) 
                                   << 3U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi__DOT____Vcellinp__third2__B) 
                                              << 2U) 
                                             | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi__DOT____Vcellinp__third2__C) 
                                                 << 1U) 
                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi__DOT____Vcellinp__third1__A))))),4);
        bufp->chgCData(oldp+949,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi__DOT____Vcellinp__fourth2__A) 
                                   << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi__DOT____Vcellinp__fourth2__B))),2);
        bufp->chgCData(oldp+950,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi__DOT____Vcellinp__fifth1__A) 
                                   << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi__DOT____Vcellinp__fifth1__B))),2);
        bufp->chgBit(oldp+951,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi__DOT__FifSig));
        bufp->chgBit(oldp+952,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi__DOT____Vcellinp__fifth1__A));
        bufp->chgBit(oldp+953,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi__DOT____Vcellinp__fifth1__B));
        bufp->chgBit(oldp+954,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi__DOT____Vcellinp__sixth1__B));
        bufp->chgBit(oldp+955,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                              [0xcU] 
                                              >> 0x10U)))));
        bufp->chgBit(oldp+956,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                              [0xdU] 
                                              >> 0x10U)))));
        bufp->chgBit(oldp+957,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                              [0xeU] 
                                              >> 0x10U)))));
        bufp->chgBit(oldp+958,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi__DOT____Vcellinp__second1__C));
        bufp->chgBit(oldp+959,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi__DOT____Vcellinp__second3__B));
        bufp->chgBit(oldp+960,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                              [9U] 
                                              >> 0x10U)))));
        bufp->chgBit(oldp+961,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                              [0xaU] 
                                              >> 0x10U)))));
        bufp->chgBit(oldp+962,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                              [0xbU] 
                                              >> 0x10U)))));
        bufp->chgBit(oldp+963,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi__DOT____Vcellinp__second1__B));
        bufp->chgBit(oldp+964,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi__DOT____Vcellinp__second3__A));
        bufp->chgBit(oldp+965,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                              [6U] 
                                              >> 0x10U)))));
        bufp->chgBit(oldp+966,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                              [7U] 
                                              >> 0x10U)))));
        bufp->chgBit(oldp+967,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                              [8U] 
                                              >> 0x10U)))));
        bufp->chgBit(oldp+968,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi__DOT____Vcellinp__second1__A));
        bufp->chgBit(oldp+969,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi__DOT____Vcellinp__second4__C));
        bufp->chgBit(oldp+970,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                              [3U] 
                                              >> 0x10U)))));
        bufp->chgBit(oldp+971,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                              [4U] 
                                              >> 0x10U)))));
        bufp->chgBit(oldp+972,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                              [5U] 
                                              >> 0x10U)))));
        bufp->chgBit(oldp+973,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi__DOT____Vcellinp__second2__C));
        bufp->chgBit(oldp+974,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi__DOT____Vcellinp__second4__B));
        bufp->chgBit(oldp+975,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                              [0U] 
                                              >> 0x10U)))));
        bufp->chgBit(oldp+976,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                              [1U] 
                                              >> 0x10U)))));
        bufp->chgBit(oldp+977,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                              [2U] 
                                              >> 0x10U)))));
        bufp->chgBit(oldp+978,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi__DOT____Vcellinp__second2__B));
        bufp->chgBit(oldp+979,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi__DOT____Vcellinp__second4__A));
        bufp->chgBit(oldp+980,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi__DOT____Vcellinp__fifth1__C));
        bufp->chgBit(oldp+981,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi__DOT____Vcellinp__fourth2__A));
        bufp->chgBit(oldp+982,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi__DOT____Vcellinp__fourth2__B));
        bufp->chgBit(oldp+983,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi__DOT____Vcellinp__sixth1__C));
        bufp->chgBit(oldp+984,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi__DOT____Vcellinp__third1__C));
        bufp->chgBit(oldp+985,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi__DOT____Vcellinp__third1__A));
        bufp->chgBit(oldp+986,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                              [0x10U] 
                                              >> 0x10U)))));
        bufp->chgBit(oldp+987,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi__DOT____Vcellinp__third1__B));
        bufp->chgBit(oldp+988,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi__DOT____Vcellinp__third2__C));
        bufp->chgBit(oldp+989,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                              [0xfU] 
                                              >> 0x10U)))));
        bufp->chgBit(oldp+990,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi__DOT____Vcellinp__fourth1__C));
        bufp->chgBit(oldp+991,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi__DOT____Vcellinp__third2__B));
        bufp->chgBit(oldp+992,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi__DOT____Vcellinp__fourth1__B));
        bufp->chgBit(oldp+993,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi__DOT____Vcellinp__third2__A));
        bufp->chgBit(oldp+994,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi__DOT____Vcellinp__fourth1__A));
        bufp->chgBit(oldp+995,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi__DOT____Vcellinp__fourth2__C));
        bufp->chgIData(oldp+996,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__17__KET____DOT__bi__InData),17);
        bufp->chgBit(oldp+997,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi__DOT__FifSig) 
                                 & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi__DOT____Vcellinp__sixth1__B) 
                                    | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0))));
        bufp->chgBit(oldp+998,((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi__DOT__FifSig)) 
                                 & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi__DOT__FifSig)) 
                                    & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi__DOT____Vcellinp__sixth1__C)) 
                                       & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi__DOT____Vcellinp__sixth1__B))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi__DOT__FifSig) 
                                      & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                          & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                         | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0)))))));
        bufp->chgCData(oldp+999,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi__DOT____Vcellinp__second4__A) 
                                   << 4U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi__DOT____Vcellinp__second4__B) 
                                              << 3U) 
                                             | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi__DOT____Vcellinp__second4__C) 
                                                 << 2U) 
                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi__DOT____Vcellinp__second3__A) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi__DOT____Vcellinp__second3__B)))))),5);
        bufp->chgCData(oldp+1000,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi__DOT____Vcellinp__third2__A) 
                                    << 3U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi__DOT____Vcellinp__third2__B) 
                                               << 2U) 
                                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi__DOT____Vcellinp__third2__C) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi__DOT____Vcellinp__third1__A))))),4);
        bufp->chgCData(oldp+1001,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi__DOT____Vcellinp__fourth2__A) 
                                    << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi__DOT____Vcellinp__fourth2__B))),2);
        bufp->chgCData(oldp+1002,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi__DOT____Vcellinp__fifth1__A) 
                                    << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi__DOT____Vcellinp__fifth1__B))),2);
        bufp->chgBit(oldp+1003,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi__DOT__FifSig));
        bufp->chgBit(oldp+1004,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi__DOT____Vcellinp__fifth1__A));
        bufp->chgBit(oldp+1005,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi__DOT____Vcellinp__fifth1__B));
        bufp->chgBit(oldp+1006,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi__DOT____Vcellinp__sixth1__B));
        bufp->chgBit(oldp+1007,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xcU] 
                                               >> 0x11U)))));
        bufp->chgBit(oldp+1008,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xdU] 
                                               >> 0x11U)))));
        bufp->chgBit(oldp+1009,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xeU] 
                                               >> 0x11U)))));
        bufp->chgBit(oldp+1010,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi__DOT____Vcellinp__second1__C));
        bufp->chgBit(oldp+1011,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi__DOT____Vcellinp__second3__B));
        bufp->chgBit(oldp+1012,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [9U] 
                                               >> 0x11U)))));
        bufp->chgBit(oldp+1013,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xaU] 
                                               >> 0x11U)))));
        bufp->chgBit(oldp+1014,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xbU] 
                                               >> 0x11U)))));
        bufp->chgBit(oldp+1015,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi__DOT____Vcellinp__second1__B));
        bufp->chgBit(oldp+1016,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi__DOT____Vcellinp__second3__A));
        bufp->chgBit(oldp+1017,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [6U] 
                                               >> 0x11U)))));
        bufp->chgBit(oldp+1018,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [7U] 
                                               >> 0x11U)))));
        bufp->chgBit(oldp+1019,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [8U] 
                                               >> 0x11U)))));
        bufp->chgBit(oldp+1020,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi__DOT____Vcellinp__second1__A));
        bufp->chgBit(oldp+1021,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi__DOT____Vcellinp__second4__C));
        bufp->chgBit(oldp+1022,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [3U] 
                                               >> 0x11U)))));
        bufp->chgBit(oldp+1023,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [4U] 
                                               >> 0x11U)))));
        bufp->chgBit(oldp+1024,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [5U] 
                                               >> 0x11U)))));
        bufp->chgBit(oldp+1025,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi__DOT____Vcellinp__second2__C));
        bufp->chgBit(oldp+1026,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi__DOT____Vcellinp__second4__B));
        bufp->chgBit(oldp+1027,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0U] 
                                               >> 0x11U)))));
        bufp->chgBit(oldp+1028,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [1U] 
                                               >> 0x11U)))));
        bufp->chgBit(oldp+1029,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [2U] 
                                               >> 0x11U)))));
        bufp->chgBit(oldp+1030,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi__DOT____Vcellinp__second2__B));
        bufp->chgBit(oldp+1031,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi__DOT____Vcellinp__second4__A));
        bufp->chgBit(oldp+1032,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi__DOT____Vcellinp__fifth1__C));
        bufp->chgBit(oldp+1033,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi__DOT____Vcellinp__fourth2__A));
        bufp->chgBit(oldp+1034,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi__DOT____Vcellinp__fourth2__B));
        bufp->chgBit(oldp+1035,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi__DOT____Vcellinp__sixth1__C));
        bufp->chgBit(oldp+1036,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi__DOT____Vcellinp__third1__C));
        bufp->chgBit(oldp+1037,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi__DOT____Vcellinp__third1__A));
        bufp->chgBit(oldp+1038,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0x10U] 
                                               >> 0x11U)))));
        bufp->chgBit(oldp+1039,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi__DOT____Vcellinp__third1__B));
        bufp->chgBit(oldp+1040,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi__DOT____Vcellinp__third2__C));
        bufp->chgBit(oldp+1041,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xfU] 
                                               >> 0x11U)))));
        bufp->chgBit(oldp+1042,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi__DOT____Vcellinp__fourth1__C));
        bufp->chgBit(oldp+1043,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi__DOT____Vcellinp__third2__B));
        bufp->chgBit(oldp+1044,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi__DOT____Vcellinp__fourth1__B));
        bufp->chgBit(oldp+1045,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi__DOT____Vcellinp__third2__A));
        bufp->chgBit(oldp+1046,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi__DOT____Vcellinp__fourth1__A));
        bufp->chgBit(oldp+1047,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi__DOT____Vcellinp__fourth2__C));
        bufp->chgIData(oldp+1048,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__18__KET____DOT__bi__InData),17);
        bufp->chgBit(oldp+1049,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi__DOT__FifSig) 
                                  & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi__DOT____Vcellinp__sixth1__B) 
                                     | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0))));
        bufp->chgBit(oldp+1050,((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi__DOT__FifSig)) 
                                  & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                 | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi__DOT__FifSig)) 
                                     & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi__DOT____Vcellinp__sixth1__C)) 
                                        & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi__DOT____Vcellinp__sixth1__B))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi__DOT__FifSig) 
                                       & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                           & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                          | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0)))))));
        bufp->chgCData(oldp+1051,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi__DOT____Vcellinp__second4__A) 
                                    << 4U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi__DOT____Vcellinp__second4__B) 
                                               << 3U) 
                                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi__DOT____Vcellinp__second4__C) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi__DOT____Vcellinp__second3__A) 
                                                     << 1U) 
                                                    | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi__DOT____Vcellinp__second3__B)))))),5);
        bufp->chgCData(oldp+1052,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi__DOT____Vcellinp__third2__A) 
                                    << 3U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi__DOT____Vcellinp__third2__B) 
                                               << 2U) 
                                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi__DOT____Vcellinp__third2__C) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi__DOT____Vcellinp__third1__A))))),4);
        bufp->chgCData(oldp+1053,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi__DOT____Vcellinp__fourth2__A) 
                                    << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi__DOT____Vcellinp__fourth2__B))),2);
        bufp->chgCData(oldp+1054,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi__DOT____Vcellinp__fifth1__A) 
                                    << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi__DOT____Vcellinp__fifth1__B))),2);
        bufp->chgBit(oldp+1055,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi__DOT__FifSig));
        bufp->chgBit(oldp+1056,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi__DOT____Vcellinp__fifth1__A));
        bufp->chgBit(oldp+1057,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi__DOT____Vcellinp__fifth1__B));
        bufp->chgBit(oldp+1058,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi__DOT____Vcellinp__sixth1__B));
        bufp->chgBit(oldp+1059,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xcU] 
                                               >> 0x12U)))));
        bufp->chgBit(oldp+1060,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xdU] 
                                               >> 0x12U)))));
        bufp->chgBit(oldp+1061,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xeU] 
                                               >> 0x12U)))));
        bufp->chgBit(oldp+1062,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi__DOT____Vcellinp__second1__C));
        bufp->chgBit(oldp+1063,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi__DOT____Vcellinp__second3__B));
        bufp->chgBit(oldp+1064,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [9U] 
                                               >> 0x12U)))));
        bufp->chgBit(oldp+1065,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xaU] 
                                               >> 0x12U)))));
        bufp->chgBit(oldp+1066,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xbU] 
                                               >> 0x12U)))));
        bufp->chgBit(oldp+1067,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi__DOT____Vcellinp__second1__B));
        bufp->chgBit(oldp+1068,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi__DOT____Vcellinp__second3__A));
        bufp->chgBit(oldp+1069,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [6U] 
                                               >> 0x12U)))));
        bufp->chgBit(oldp+1070,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [7U] 
                                               >> 0x12U)))));
        bufp->chgBit(oldp+1071,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [8U] 
                                               >> 0x12U)))));
        bufp->chgBit(oldp+1072,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi__DOT____Vcellinp__second1__A));
        bufp->chgBit(oldp+1073,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi__DOT____Vcellinp__second4__C));
        bufp->chgBit(oldp+1074,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [3U] 
                                               >> 0x12U)))));
        bufp->chgBit(oldp+1075,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [4U] 
                                               >> 0x12U)))));
        bufp->chgBit(oldp+1076,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [5U] 
                                               >> 0x12U)))));
        bufp->chgBit(oldp+1077,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi__DOT____Vcellinp__second2__C));
        bufp->chgBit(oldp+1078,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi__DOT____Vcellinp__second4__B));
        bufp->chgBit(oldp+1079,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0U] 
                                               >> 0x12U)))));
        bufp->chgBit(oldp+1080,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [1U] 
                                               >> 0x12U)))));
        bufp->chgBit(oldp+1081,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [2U] 
                                               >> 0x12U)))));
        bufp->chgBit(oldp+1082,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi__DOT____Vcellinp__second2__B));
        bufp->chgBit(oldp+1083,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi__DOT____Vcellinp__second4__A));
        bufp->chgBit(oldp+1084,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi__DOT____Vcellinp__fifth1__C));
        bufp->chgBit(oldp+1085,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi__DOT____Vcellinp__fourth2__A));
        bufp->chgBit(oldp+1086,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi__DOT____Vcellinp__fourth2__B));
        bufp->chgBit(oldp+1087,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi__DOT____Vcellinp__sixth1__C));
        bufp->chgBit(oldp+1088,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi__DOT____Vcellinp__third1__C));
        bufp->chgBit(oldp+1089,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi__DOT____Vcellinp__third1__A));
        bufp->chgBit(oldp+1090,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0x10U] 
                                               >> 0x12U)))));
        bufp->chgBit(oldp+1091,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi__DOT____Vcellinp__third1__B));
        bufp->chgBit(oldp+1092,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi__DOT____Vcellinp__third2__C));
        bufp->chgBit(oldp+1093,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xfU] 
                                               >> 0x12U)))));
        bufp->chgBit(oldp+1094,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi__DOT____Vcellinp__fourth1__C));
        bufp->chgBit(oldp+1095,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi__DOT____Vcellinp__third2__B));
        bufp->chgBit(oldp+1096,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi__DOT____Vcellinp__fourth1__B));
        bufp->chgBit(oldp+1097,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi__DOT____Vcellinp__third2__A));
        bufp->chgBit(oldp+1098,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi__DOT____Vcellinp__fourth1__A));
        bufp->chgBit(oldp+1099,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi__DOT____Vcellinp__fourth2__C));
        bufp->chgIData(oldp+1100,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__19__KET____DOT__bi__InData),17);
        bufp->chgBit(oldp+1101,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi__DOT__FifSig) 
                                  & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi__DOT____Vcellinp__sixth1__B) 
                                     | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0))));
        bufp->chgBit(oldp+1102,((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi__DOT__FifSig)) 
                                  & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                 | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi__DOT__FifSig)) 
                                     & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi__DOT____Vcellinp__sixth1__C)) 
                                        & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi__DOT____Vcellinp__sixth1__B))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi__DOT__FifSig) 
                                       & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                           & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                          | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0)))))));
        bufp->chgCData(oldp+1103,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi__DOT____Vcellinp__second4__A) 
                                    << 4U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi__DOT____Vcellinp__second4__B) 
                                               << 3U) 
                                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi__DOT____Vcellinp__second4__C) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi__DOT____Vcellinp__second3__A) 
                                                     << 1U) 
                                                    | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi__DOT____Vcellinp__second3__B)))))),5);
        bufp->chgCData(oldp+1104,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi__DOT____Vcellinp__third2__A) 
                                    << 3U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi__DOT____Vcellinp__third2__B) 
                                               << 2U) 
                                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi__DOT____Vcellinp__third2__C) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi__DOT____Vcellinp__third1__A))))),4);
        bufp->chgCData(oldp+1105,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi__DOT____Vcellinp__fourth2__A) 
                                    << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi__DOT____Vcellinp__fourth2__B))),2);
        bufp->chgCData(oldp+1106,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi__DOT____Vcellinp__fifth1__A) 
                                    << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi__DOT____Vcellinp__fifth1__B))),2);
        bufp->chgBit(oldp+1107,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi__DOT__FifSig));
        bufp->chgBit(oldp+1108,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi__DOT____Vcellinp__fifth1__A));
        bufp->chgBit(oldp+1109,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi__DOT____Vcellinp__fifth1__B));
        bufp->chgBit(oldp+1110,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi__DOT____Vcellinp__sixth1__B));
        bufp->chgBit(oldp+1111,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xcU] 
                                               >> 0x13U)))));
        bufp->chgBit(oldp+1112,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xdU] 
                                               >> 0x13U)))));
        bufp->chgBit(oldp+1113,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xeU] 
                                               >> 0x13U)))));
        bufp->chgBit(oldp+1114,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi__DOT____Vcellinp__second1__C));
        bufp->chgBit(oldp+1115,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi__DOT____Vcellinp__second3__B));
        bufp->chgBit(oldp+1116,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [9U] 
                                               >> 0x13U)))));
        bufp->chgBit(oldp+1117,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xaU] 
                                               >> 0x13U)))));
        bufp->chgBit(oldp+1118,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xbU] 
                                               >> 0x13U)))));
        bufp->chgBit(oldp+1119,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi__DOT____Vcellinp__second1__B));
        bufp->chgBit(oldp+1120,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi__DOT____Vcellinp__second3__A));
        bufp->chgBit(oldp+1121,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [6U] 
                                               >> 0x13U)))));
        bufp->chgBit(oldp+1122,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [7U] 
                                               >> 0x13U)))));
        bufp->chgBit(oldp+1123,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [8U] 
                                               >> 0x13U)))));
        bufp->chgBit(oldp+1124,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi__DOT____Vcellinp__second1__A));
        bufp->chgBit(oldp+1125,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi__DOT____Vcellinp__second4__C));
        bufp->chgBit(oldp+1126,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [3U] 
                                               >> 0x13U)))));
        bufp->chgBit(oldp+1127,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [4U] 
                                               >> 0x13U)))));
        bufp->chgBit(oldp+1128,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [5U] 
                                               >> 0x13U)))));
        bufp->chgBit(oldp+1129,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi__DOT____Vcellinp__second2__C));
        bufp->chgBit(oldp+1130,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi__DOT____Vcellinp__second4__B));
        bufp->chgBit(oldp+1131,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0U] 
                                               >> 0x13U)))));
        bufp->chgBit(oldp+1132,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [1U] 
                                               >> 0x13U)))));
        bufp->chgBit(oldp+1133,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [2U] 
                                               >> 0x13U)))));
        bufp->chgBit(oldp+1134,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi__DOT____Vcellinp__second2__B));
        bufp->chgBit(oldp+1135,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi__DOT____Vcellinp__second4__A));
        bufp->chgBit(oldp+1136,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi__DOT____Vcellinp__fifth1__C));
        bufp->chgBit(oldp+1137,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi__DOT____Vcellinp__fourth2__A));
        bufp->chgBit(oldp+1138,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi__DOT____Vcellinp__fourth2__B));
        bufp->chgBit(oldp+1139,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi__DOT____Vcellinp__sixth1__C));
        bufp->chgBit(oldp+1140,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi__DOT____Vcellinp__third1__C));
        bufp->chgBit(oldp+1141,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi__DOT____Vcellinp__third1__A));
        bufp->chgBit(oldp+1142,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0x10U] 
                                               >> 0x13U)))));
        bufp->chgBit(oldp+1143,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi__DOT____Vcellinp__third1__B));
        bufp->chgBit(oldp+1144,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi__DOT____Vcellinp__third2__C));
        bufp->chgBit(oldp+1145,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xfU] 
                                               >> 0x13U)))));
        bufp->chgBit(oldp+1146,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi__DOT____Vcellinp__fourth1__C));
        bufp->chgBit(oldp+1147,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi__DOT____Vcellinp__third2__B));
        bufp->chgBit(oldp+1148,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi__DOT____Vcellinp__fourth1__B));
        bufp->chgBit(oldp+1149,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi__DOT____Vcellinp__third2__A));
        bufp->chgBit(oldp+1150,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi__DOT____Vcellinp__fourth1__A));
        bufp->chgBit(oldp+1151,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi__DOT____Vcellinp__fourth2__C));
        bufp->chgIData(oldp+1152,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData),17);
        bufp->chgBit(oldp+1153,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__FifSig) 
                                  & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT____Vcellinp__sixth1__B) 
                                     | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0))));
        bufp->chgBit(oldp+1154,((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__FifSig)) 
                                  & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                 | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__FifSig)) 
                                     & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT____Vcellinp__sixth1__C)) 
                                        & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT____Vcellinp__sixth1__B))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__FifSig) 
                                       & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                           & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                          | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0)))))));
        bufp->chgCData(oldp+1155,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT____Vcellinp__second4__A) 
                                    << 4U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT____Vcellinp__second4__B) 
                                               << 3U) 
                                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT____Vcellinp__second4__C) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT____Vcellinp__second3__A) 
                                                     << 1U) 
                                                    | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT____Vcellinp__second3__B)))))),5);
        bufp->chgCData(oldp+1156,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT____Vcellinp__third2__A) 
                                    << 3U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT____Vcellinp__third2__B) 
                                               << 2U) 
                                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT____Vcellinp__third2__C) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT____Vcellinp__third1__A))))),4);
        bufp->chgCData(oldp+1157,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT____Vcellinp__fourth2__A) 
                                    << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT____Vcellinp__fourth2__B))),2);
        bufp->chgCData(oldp+1158,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT____Vcellinp__fifth1__A) 
                                    << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT____Vcellinp__fifth1__B))),2);
        bufp->chgBit(oldp+1159,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__FifSig));
        bufp->chgBit(oldp+1160,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT____Vcellinp__fifth1__A));
        bufp->chgBit(oldp+1161,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT____Vcellinp__fifth1__B));
        bufp->chgBit(oldp+1162,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT____Vcellinp__sixth1__B));
        bufp->chgBit(oldp+1163,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xcU] 
                                               >> 1U)))));
        bufp->chgBit(oldp+1164,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xdU] 
                                               >> 1U)))));
        bufp->chgBit(oldp+1165,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xeU] 
                                               >> 1U)))));
        bufp->chgBit(oldp+1166,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT____Vcellinp__second1__C));
        bufp->chgBit(oldp+1167,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT____Vcellinp__second3__B));
        bufp->chgBit(oldp+1168,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [9U] 
                                               >> 1U)))));
        bufp->chgBit(oldp+1169,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xaU] 
                                               >> 1U)))));
        bufp->chgBit(oldp+1170,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xbU] 
                                               >> 1U)))));
        bufp->chgBit(oldp+1171,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT____Vcellinp__second1__B));
        bufp->chgBit(oldp+1172,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT____Vcellinp__second3__A));
        bufp->chgBit(oldp+1173,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [6U] 
                                               >> 1U)))));
        bufp->chgBit(oldp+1174,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [7U] 
                                               >> 1U)))));
        bufp->chgBit(oldp+1175,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [8U] 
                                               >> 1U)))));
        bufp->chgBit(oldp+1176,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT____Vcellinp__second1__A));
        bufp->chgBit(oldp+1177,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT____Vcellinp__second4__C));
        bufp->chgBit(oldp+1178,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [3U] 
                                               >> 1U)))));
        bufp->chgBit(oldp+1179,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [4U] 
                                               >> 1U)))));
        bufp->chgBit(oldp+1180,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [5U] 
                                               >> 1U)))));
        bufp->chgBit(oldp+1181,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT____Vcellinp__second2__C));
        bufp->chgBit(oldp+1182,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT____Vcellinp__second4__B));
        bufp->chgBit(oldp+1183,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0U] 
                                               >> 1U)))));
        bufp->chgBit(oldp+1184,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [1U] 
                                               >> 1U)))));
        bufp->chgBit(oldp+1185,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [2U] 
                                               >> 1U)))));
        bufp->chgBit(oldp+1186,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT____Vcellinp__second2__B));
        bufp->chgBit(oldp+1187,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT____Vcellinp__second4__A));
        bufp->chgBit(oldp+1188,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT____Vcellinp__fifth1__C));
        bufp->chgBit(oldp+1189,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT____Vcellinp__fourth2__A));
        bufp->chgBit(oldp+1190,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT____Vcellinp__fourth2__B));
        bufp->chgBit(oldp+1191,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT____Vcellinp__sixth1__C));
        bufp->chgBit(oldp+1192,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT____Vcellinp__third1__C));
        bufp->chgBit(oldp+1193,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT____Vcellinp__third1__A));
        bufp->chgBit(oldp+1194,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0x10U] 
                                               >> 1U)))));
        bufp->chgBit(oldp+1195,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT____Vcellinp__third1__B));
        bufp->chgBit(oldp+1196,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT____Vcellinp__third2__C));
        bufp->chgBit(oldp+1197,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xfU] 
                                               >> 1U)))));
        bufp->chgBit(oldp+1198,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT____Vcellinp__fourth1__C));
        bufp->chgBit(oldp+1199,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT____Vcellinp__third2__B));
        bufp->chgBit(oldp+1200,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT____Vcellinp__fourth1__B));
        bufp->chgBit(oldp+1201,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT____Vcellinp__third2__A));
        bufp->chgBit(oldp+1202,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT____Vcellinp__fourth1__A));
        bufp->chgBit(oldp+1203,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT____Vcellinp__fourth2__C));
        bufp->chgIData(oldp+1204,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__20__KET____DOT__bi__InData),17);
        bufp->chgBit(oldp+1205,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi__DOT__FifSig) 
                                  & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi__DOT____Vcellinp__sixth1__B) 
                                     | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0))));
        bufp->chgBit(oldp+1206,((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi__DOT__FifSig)) 
                                  & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                 | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi__DOT__FifSig)) 
                                     & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi__DOT____Vcellinp__sixth1__C)) 
                                        & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi__DOT____Vcellinp__sixth1__B))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi__DOT__FifSig) 
                                       & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                           & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                          | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0)))))));
        bufp->chgCData(oldp+1207,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi__DOT____Vcellinp__second4__A) 
                                    << 4U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi__DOT____Vcellinp__second4__B) 
                                               << 3U) 
                                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi__DOT____Vcellinp__second4__C) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi__DOT____Vcellinp__second3__A) 
                                                     << 1U) 
                                                    | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi__DOT____Vcellinp__second3__B)))))),5);
        bufp->chgCData(oldp+1208,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi__DOT____Vcellinp__third2__A) 
                                    << 3U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi__DOT____Vcellinp__third2__B) 
                                               << 2U) 
                                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi__DOT____Vcellinp__third2__C) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi__DOT____Vcellinp__third1__A))))),4);
        bufp->chgCData(oldp+1209,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi__DOT____Vcellinp__fourth2__A) 
                                    << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi__DOT____Vcellinp__fourth2__B))),2);
        bufp->chgCData(oldp+1210,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi__DOT____Vcellinp__fifth1__A) 
                                    << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi__DOT____Vcellinp__fifth1__B))),2);
        bufp->chgBit(oldp+1211,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi__DOT__FifSig));
        bufp->chgBit(oldp+1212,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi__DOT____Vcellinp__fifth1__A));
        bufp->chgBit(oldp+1213,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi__DOT____Vcellinp__fifth1__B));
        bufp->chgBit(oldp+1214,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__21__KET____DOT__bi__DOT____Vcellinp__sixth1__B));
        bufp->chgBit(oldp+1215,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xcU] 
                                               >> 0x14U)))));
        bufp->chgBit(oldp+1216,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xdU] 
                                               >> 0x14U)))));
        bufp->chgBit(oldp+1217,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xeU] 
                                               >> 0x14U)))));
        bufp->chgBit(oldp+1218,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__21__KET____DOT__bi__DOT____Vcellinp__second1__C));
        bufp->chgBit(oldp+1219,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi__DOT____Vcellinp__second3__B));
        bufp->chgBit(oldp+1220,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [9U] 
                                               >> 0x14U)))));
        bufp->chgBit(oldp+1221,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xaU] 
                                               >> 0x14U)))));
        bufp->chgBit(oldp+1222,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xbU] 
                                               >> 0x14U)))));
        bufp->chgBit(oldp+1223,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__21__KET____DOT__bi__DOT____Vcellinp__second1__B));
        bufp->chgBit(oldp+1224,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi__DOT____Vcellinp__second3__A));
        bufp->chgBit(oldp+1225,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [6U] 
                                               >> 0x14U)))));
        bufp->chgBit(oldp+1226,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [7U] 
                                               >> 0x14U)))));
        bufp->chgBit(oldp+1227,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [8U] 
                                               >> 0x14U)))));
        bufp->chgBit(oldp+1228,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__21__KET____DOT__bi__DOT____Vcellinp__second1__A));
        bufp->chgBit(oldp+1229,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi__DOT____Vcellinp__second4__C));
        bufp->chgBit(oldp+1230,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [3U] 
                                               >> 0x14U)))));
        bufp->chgBit(oldp+1231,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [4U] 
                                               >> 0x14U)))));
        bufp->chgBit(oldp+1232,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [5U] 
                                               >> 0x14U)))));
        bufp->chgBit(oldp+1233,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__21__KET____DOT__bi__DOT____Vcellinp__second2__C));
        bufp->chgBit(oldp+1234,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi__DOT____Vcellinp__second4__B));
        bufp->chgBit(oldp+1235,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0U] 
                                               >> 0x14U)))));
        bufp->chgBit(oldp+1236,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [1U] 
                                               >> 0x14U)))));
        bufp->chgBit(oldp+1237,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [2U] 
                                               >> 0x14U)))));
        bufp->chgBit(oldp+1238,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__21__KET____DOT__bi__DOT____Vcellinp__second2__B));
        bufp->chgBit(oldp+1239,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi__DOT____Vcellinp__second4__A));
        bufp->chgBit(oldp+1240,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__21__KET____DOT__bi__DOT____Vcellinp__fifth1__C));
        bufp->chgBit(oldp+1241,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi__DOT____Vcellinp__fourth2__A));
        bufp->chgBit(oldp+1242,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi__DOT____Vcellinp__fourth2__B));
        bufp->chgBit(oldp+1243,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__21__KET____DOT__bi__DOT____Vcellinp__sixth1__C));
        bufp->chgBit(oldp+1244,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__21__KET____DOT__bi__DOT____Vcellinp__third1__C));
        bufp->chgBit(oldp+1245,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi__DOT____Vcellinp__third1__A));
        bufp->chgBit(oldp+1246,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0x10U] 
                                               >> 0x14U)))));
        bufp->chgBit(oldp+1247,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__21__KET____DOT__bi__DOT____Vcellinp__third1__B));
        bufp->chgBit(oldp+1248,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi__DOT____Vcellinp__third2__C));
        bufp->chgBit(oldp+1249,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xfU] 
                                               >> 0x14U)))));
        bufp->chgBit(oldp+1250,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__21__KET____DOT__bi__DOT____Vcellinp__fourth1__C));
        bufp->chgBit(oldp+1251,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi__DOT____Vcellinp__third2__B));
        bufp->chgBit(oldp+1252,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__21__KET____DOT__bi__DOT____Vcellinp__fourth1__B));
        bufp->chgBit(oldp+1253,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi__DOT____Vcellinp__third2__A));
        bufp->chgBit(oldp+1254,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__21__KET____DOT__bi__DOT____Vcellinp__fourth1__A));
        bufp->chgBit(oldp+1255,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__21__KET____DOT__bi__DOT____Vcellinp__fourth2__C));
        bufp->chgIData(oldp+1256,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__21__KET____DOT__bi__InData),17);
        bufp->chgBit(oldp+1257,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__21__KET____DOT__bi__DOT__FifSig) 
                                  & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__21__KET____DOT__bi__DOT____Vcellinp__sixth1__B) 
                                     | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__21__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__21__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0))));
        bufp->chgBit(oldp+1258,((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__21__KET____DOT__bi__DOT__FifSig)) 
                                  & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__21__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__21__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                 | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__21__KET____DOT__bi__DOT__FifSig)) 
                                     & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__21__KET____DOT__bi__DOT____Vcellinp__sixth1__C)) 
                                        & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__21__KET____DOT__bi__DOT____Vcellinp__sixth1__B))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__21__KET____DOT__bi__DOT__FifSig) 
                                       & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__21__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                           & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__21__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                          | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__21__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0)))))));
        bufp->chgCData(oldp+1259,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__21__KET____DOT__bi__DOT____Vcellinp__second4__A) 
                                    << 4U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__21__KET____DOT__bi__DOT____Vcellinp__second4__B) 
                                               << 3U) 
                                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__21__KET____DOT__bi__DOT____Vcellinp__second4__C) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__21__KET____DOT__bi__DOT____Vcellinp__second3__A) 
                                                     << 1U) 
                                                    | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__21__KET____DOT__bi__DOT____Vcellinp__second3__B)))))),5);
        bufp->chgCData(oldp+1260,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__21__KET____DOT__bi__DOT____Vcellinp__third2__A) 
                                    << 3U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__21__KET____DOT__bi__DOT____Vcellinp__third2__B) 
                                               << 2U) 
                                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__21__KET____DOT__bi__DOT____Vcellinp__third2__C) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__21__KET____DOT__bi__DOT____Vcellinp__third1__A))))),4);
        bufp->chgCData(oldp+1261,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__21__KET____DOT__bi__DOT____Vcellinp__fourth2__A) 
                                    << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__21__KET____DOT__bi__DOT____Vcellinp__fourth2__B))),2);
        bufp->chgCData(oldp+1262,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__21__KET____DOT__bi__DOT____Vcellinp__fifth1__A) 
                                    << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__21__KET____DOT__bi__DOT____Vcellinp__fifth1__B))),2);
        bufp->chgBit(oldp+1263,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__21__KET____DOT__bi__DOT__FifSig));
        bufp->chgBit(oldp+1264,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__21__KET____DOT__bi__DOT____Vcellinp__fifth1__A));
        bufp->chgBit(oldp+1265,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__21__KET____DOT__bi__DOT____Vcellinp__fifth1__B));
        bufp->chgBit(oldp+1266,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__22__KET____DOT__bi__DOT____Vcellinp__sixth1__B));
        bufp->chgBit(oldp+1267,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xcU] 
                                               >> 0x15U)))));
        bufp->chgBit(oldp+1268,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xdU] 
                                               >> 0x15U)))));
        bufp->chgBit(oldp+1269,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xeU] 
                                               >> 0x15U)))));
        bufp->chgBit(oldp+1270,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__22__KET____DOT__bi__DOT____Vcellinp__second1__C));
        bufp->chgBit(oldp+1271,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__21__KET____DOT__bi__DOT____Vcellinp__second3__B));
        bufp->chgBit(oldp+1272,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [9U] 
                                               >> 0x15U)))));
        bufp->chgBit(oldp+1273,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xaU] 
                                               >> 0x15U)))));
        bufp->chgBit(oldp+1274,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xbU] 
                                               >> 0x15U)))));
        bufp->chgBit(oldp+1275,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__22__KET____DOT__bi__DOT____Vcellinp__second1__B));
        bufp->chgBit(oldp+1276,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__21__KET____DOT__bi__DOT____Vcellinp__second3__A));
        bufp->chgBit(oldp+1277,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [6U] 
                                               >> 0x15U)))));
        bufp->chgBit(oldp+1278,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [7U] 
                                               >> 0x15U)))));
        bufp->chgBit(oldp+1279,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [8U] 
                                               >> 0x15U)))));
        bufp->chgBit(oldp+1280,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__22__KET____DOT__bi__DOT____Vcellinp__second1__A));
        bufp->chgBit(oldp+1281,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__21__KET____DOT__bi__DOT____Vcellinp__second4__C));
        bufp->chgBit(oldp+1282,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [3U] 
                                               >> 0x15U)))));
        bufp->chgBit(oldp+1283,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [4U] 
                                               >> 0x15U)))));
        bufp->chgBit(oldp+1284,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [5U] 
                                               >> 0x15U)))));
        bufp->chgBit(oldp+1285,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__22__KET____DOT__bi__DOT____Vcellinp__second2__C));
        bufp->chgBit(oldp+1286,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__21__KET____DOT__bi__DOT____Vcellinp__second4__B));
        bufp->chgBit(oldp+1287,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0U] 
                                               >> 0x15U)))));
        bufp->chgBit(oldp+1288,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [1U] 
                                               >> 0x15U)))));
        bufp->chgBit(oldp+1289,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [2U] 
                                               >> 0x15U)))));
        bufp->chgBit(oldp+1290,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__22__KET____DOT__bi__DOT____Vcellinp__second2__B));
        bufp->chgBit(oldp+1291,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__21__KET____DOT__bi__DOT____Vcellinp__second4__A));
        bufp->chgBit(oldp+1292,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__22__KET____DOT__bi__DOT____Vcellinp__fifth1__C));
        bufp->chgBit(oldp+1293,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__21__KET____DOT__bi__DOT____Vcellinp__fourth2__A));
        bufp->chgBit(oldp+1294,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__21__KET____DOT__bi__DOT____Vcellinp__fourth2__B));
        bufp->chgBit(oldp+1295,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__22__KET____DOT__bi__DOT____Vcellinp__sixth1__C));
        bufp->chgBit(oldp+1296,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__22__KET____DOT__bi__DOT____Vcellinp__third1__C));
        bufp->chgBit(oldp+1297,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__21__KET____DOT__bi__DOT____Vcellinp__third1__A));
        bufp->chgBit(oldp+1298,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0x10U] 
                                               >> 0x15U)))));
        bufp->chgBit(oldp+1299,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__22__KET____DOT__bi__DOT____Vcellinp__third1__B));
        bufp->chgBit(oldp+1300,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__21__KET____DOT__bi__DOT____Vcellinp__third2__C));
        bufp->chgBit(oldp+1301,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xfU] 
                                               >> 0x15U)))));
        bufp->chgBit(oldp+1302,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__22__KET____DOT__bi__DOT____Vcellinp__fourth1__C));
        bufp->chgBit(oldp+1303,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__21__KET____DOT__bi__DOT____Vcellinp__third2__B));
        bufp->chgBit(oldp+1304,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__22__KET____DOT__bi__DOT____Vcellinp__fourth1__B));
        bufp->chgBit(oldp+1305,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__21__KET____DOT__bi__DOT____Vcellinp__third2__A));
        bufp->chgBit(oldp+1306,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__22__KET____DOT__bi__DOT____Vcellinp__fourth1__A));
        bufp->chgBit(oldp+1307,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__22__KET____DOT__bi__DOT____Vcellinp__fourth2__C));
        bufp->chgIData(oldp+1308,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__22__KET____DOT__bi__InData),17);
        bufp->chgBit(oldp+1309,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__22__KET____DOT__bi__DOT__FifSig) 
                                  & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__22__KET____DOT__bi__DOT____Vcellinp__sixth1__B) 
                                     | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__22__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__22__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0))));
        bufp->chgBit(oldp+1310,((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__22__KET____DOT__bi__DOT__FifSig)) 
                                  & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__22__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__22__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                 | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__22__KET____DOT__bi__DOT__FifSig)) 
                                     & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__22__KET____DOT__bi__DOT____Vcellinp__sixth1__C)) 
                                        & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__22__KET____DOT__bi__DOT____Vcellinp__sixth1__B))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__22__KET____DOT__bi__DOT__FifSig) 
                                       & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__22__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                           & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__22__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                          | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__22__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0)))))));
        bufp->chgCData(oldp+1311,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__22__KET____DOT__bi__DOT____Vcellinp__second4__A) 
                                    << 4U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__22__KET____DOT__bi__DOT____Vcellinp__second4__B) 
                                               << 3U) 
                                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__22__KET____DOT__bi__DOT____Vcellinp__second4__C) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__22__KET____DOT__bi__DOT____Vcellinp__second3__A) 
                                                     << 1U) 
                                                    | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__22__KET____DOT__bi__DOT____Vcellinp__second3__B)))))),5);
        bufp->chgCData(oldp+1312,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__22__KET____DOT__bi__DOT____Vcellinp__third2__A) 
                                    << 3U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__22__KET____DOT__bi__DOT____Vcellinp__third2__B) 
                                               << 2U) 
                                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__22__KET____DOT__bi__DOT____Vcellinp__third2__C) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__22__KET____DOT__bi__DOT____Vcellinp__third1__A))))),4);
        bufp->chgCData(oldp+1313,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__22__KET____DOT__bi__DOT____Vcellinp__fourth2__A) 
                                    << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__22__KET____DOT__bi__DOT____Vcellinp__fourth2__B))),2);
        bufp->chgCData(oldp+1314,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__22__KET____DOT__bi__DOT____Vcellinp__fifth1__A) 
                                    << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__22__KET____DOT__bi__DOT____Vcellinp__fifth1__B))),2);
        bufp->chgBit(oldp+1315,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__22__KET____DOT__bi__DOT__FifSig));
        bufp->chgBit(oldp+1316,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__22__KET____DOT__bi__DOT____Vcellinp__fifth1__A));
        bufp->chgBit(oldp+1317,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__22__KET____DOT__bi__DOT____Vcellinp__fifth1__B));
        bufp->chgBit(oldp+1318,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__23__KET____DOT__bi__DOT____Vcellinp__sixth1__B));
        bufp->chgBit(oldp+1319,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xcU] 
                                               >> 0x16U)))));
        bufp->chgBit(oldp+1320,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xdU] 
                                               >> 0x16U)))));
        bufp->chgBit(oldp+1321,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xeU] 
                                               >> 0x16U)))));
        bufp->chgBit(oldp+1322,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__23__KET____DOT__bi__DOT____Vcellinp__second1__C));
        bufp->chgBit(oldp+1323,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__22__KET____DOT__bi__DOT____Vcellinp__second3__B));
        bufp->chgBit(oldp+1324,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [9U] 
                                               >> 0x16U)))));
        bufp->chgBit(oldp+1325,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xaU] 
                                               >> 0x16U)))));
        bufp->chgBit(oldp+1326,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xbU] 
                                               >> 0x16U)))));
        bufp->chgBit(oldp+1327,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__23__KET____DOT__bi__DOT____Vcellinp__second1__B));
        bufp->chgBit(oldp+1328,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__22__KET____DOT__bi__DOT____Vcellinp__second3__A));
        bufp->chgBit(oldp+1329,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [6U] 
                                               >> 0x16U)))));
        bufp->chgBit(oldp+1330,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [7U] 
                                               >> 0x16U)))));
        bufp->chgBit(oldp+1331,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [8U] 
                                               >> 0x16U)))));
        bufp->chgBit(oldp+1332,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__23__KET____DOT__bi__DOT____Vcellinp__second1__A));
        bufp->chgBit(oldp+1333,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__22__KET____DOT__bi__DOT____Vcellinp__second4__C));
        bufp->chgBit(oldp+1334,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [3U] 
                                               >> 0x16U)))));
        bufp->chgBit(oldp+1335,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [4U] 
                                               >> 0x16U)))));
        bufp->chgBit(oldp+1336,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [5U] 
                                               >> 0x16U)))));
        bufp->chgBit(oldp+1337,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__23__KET____DOT__bi__DOT____Vcellinp__second2__C));
        bufp->chgBit(oldp+1338,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__22__KET____DOT__bi__DOT____Vcellinp__second4__B));
        bufp->chgBit(oldp+1339,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0U] 
                                               >> 0x16U)))));
        bufp->chgBit(oldp+1340,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [1U] 
                                               >> 0x16U)))));
        bufp->chgBit(oldp+1341,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [2U] 
                                               >> 0x16U)))));
        bufp->chgBit(oldp+1342,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__23__KET____DOT__bi__DOT____Vcellinp__second2__B));
        bufp->chgBit(oldp+1343,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__22__KET____DOT__bi__DOT____Vcellinp__second4__A));
        bufp->chgBit(oldp+1344,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__23__KET____DOT__bi__DOT____Vcellinp__fifth1__C));
        bufp->chgBit(oldp+1345,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__22__KET____DOT__bi__DOT____Vcellinp__fourth2__A));
        bufp->chgBit(oldp+1346,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__22__KET____DOT__bi__DOT____Vcellinp__fourth2__B));
        bufp->chgBit(oldp+1347,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__23__KET____DOT__bi__DOT____Vcellinp__sixth1__C));
        bufp->chgBit(oldp+1348,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__23__KET____DOT__bi__DOT____Vcellinp__third1__C));
        bufp->chgBit(oldp+1349,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__22__KET____DOT__bi__DOT____Vcellinp__third1__A));
        bufp->chgBit(oldp+1350,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0x10U] 
                                               >> 0x16U)))));
        bufp->chgBit(oldp+1351,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__23__KET____DOT__bi__DOT____Vcellinp__third1__B));
        bufp->chgBit(oldp+1352,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__22__KET____DOT__bi__DOT____Vcellinp__third2__C));
        bufp->chgBit(oldp+1353,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xfU] 
                                               >> 0x16U)))));
        bufp->chgBit(oldp+1354,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__23__KET____DOT__bi__DOT____Vcellinp__fourth1__C));
        bufp->chgBit(oldp+1355,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__22__KET____DOT__bi__DOT____Vcellinp__third2__B));
        bufp->chgBit(oldp+1356,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__23__KET____DOT__bi__DOT____Vcellinp__fourth1__B));
        bufp->chgBit(oldp+1357,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__22__KET____DOT__bi__DOT____Vcellinp__third2__A));
        bufp->chgBit(oldp+1358,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__23__KET____DOT__bi__DOT____Vcellinp__fourth1__A));
        bufp->chgBit(oldp+1359,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__23__KET____DOT__bi__DOT____Vcellinp__fourth2__C));
        bufp->chgIData(oldp+1360,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__23__KET____DOT__bi__InData),17);
        bufp->chgBit(oldp+1361,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__23__KET____DOT__bi__DOT__FifSig) 
                                  & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__23__KET____DOT__bi__DOT____Vcellinp__sixth1__B) 
                                     | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__23__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__23__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0))));
        bufp->chgBit(oldp+1362,((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__23__KET____DOT__bi__DOT__FifSig)) 
                                  & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__23__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__23__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                 | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__23__KET____DOT__bi__DOT__FifSig)) 
                                     & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__23__KET____DOT__bi__DOT____Vcellinp__sixth1__C)) 
                                        & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__23__KET____DOT__bi__DOT____Vcellinp__sixth1__B))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__23__KET____DOT__bi__DOT__FifSig) 
                                       & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__23__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                           & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__23__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                          | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__23__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0)))))));
        bufp->chgCData(oldp+1363,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__23__KET____DOT__bi__DOT____Vcellinp__second4__A) 
                                    << 4U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__23__KET____DOT__bi__DOT____Vcellinp__second4__B) 
                                               << 3U) 
                                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__23__KET____DOT__bi__DOT____Vcellinp__second4__C) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__23__KET____DOT__bi__DOT____Vcellinp__second3__A) 
                                                     << 1U) 
                                                    | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__23__KET____DOT__bi__DOT____Vcellinp__second3__B)))))),5);
        bufp->chgCData(oldp+1364,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__23__KET____DOT__bi__DOT____Vcellinp__third2__A) 
                                    << 3U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__23__KET____DOT__bi__DOT____Vcellinp__third2__B) 
                                               << 2U) 
                                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__23__KET____DOT__bi__DOT____Vcellinp__third2__C) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__23__KET____DOT__bi__DOT____Vcellinp__third1__A))))),4);
        bufp->chgCData(oldp+1365,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__23__KET____DOT__bi__DOT____Vcellinp__fourth2__A) 
                                    << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__23__KET____DOT__bi__DOT____Vcellinp__fourth2__B))),2);
        bufp->chgCData(oldp+1366,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__23__KET____DOT__bi__DOT____Vcellinp__fifth1__A) 
                                    << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__23__KET____DOT__bi__DOT____Vcellinp__fifth1__B))),2);
        bufp->chgBit(oldp+1367,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__23__KET____DOT__bi__DOT__FifSig));
        bufp->chgBit(oldp+1368,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__23__KET____DOT__bi__DOT____Vcellinp__fifth1__A));
        bufp->chgBit(oldp+1369,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__23__KET____DOT__bi__DOT____Vcellinp__fifth1__B));
        bufp->chgBit(oldp+1370,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__24__KET____DOT__bi__DOT____Vcellinp__sixth1__B));
        bufp->chgBit(oldp+1371,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xcU] 
                                               >> 0x17U)))));
        bufp->chgBit(oldp+1372,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xdU] 
                                               >> 0x17U)))));
        bufp->chgBit(oldp+1373,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xeU] 
                                               >> 0x17U)))));
        bufp->chgBit(oldp+1374,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__24__KET____DOT__bi__DOT____Vcellinp__second1__C));
        bufp->chgBit(oldp+1375,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__23__KET____DOT__bi__DOT____Vcellinp__second3__B));
        bufp->chgBit(oldp+1376,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [9U] 
                                               >> 0x17U)))));
        bufp->chgBit(oldp+1377,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xaU] 
                                               >> 0x17U)))));
        bufp->chgBit(oldp+1378,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xbU] 
                                               >> 0x17U)))));
        bufp->chgBit(oldp+1379,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__24__KET____DOT__bi__DOT____Vcellinp__second1__B));
        bufp->chgBit(oldp+1380,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__23__KET____DOT__bi__DOT____Vcellinp__second3__A));
        bufp->chgBit(oldp+1381,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [6U] 
                                               >> 0x17U)))));
        bufp->chgBit(oldp+1382,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [7U] 
                                               >> 0x17U)))));
        bufp->chgBit(oldp+1383,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [8U] 
                                               >> 0x17U)))));
        bufp->chgBit(oldp+1384,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__24__KET____DOT__bi__DOT____Vcellinp__second1__A));
        bufp->chgBit(oldp+1385,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__23__KET____DOT__bi__DOT____Vcellinp__second4__C));
        bufp->chgBit(oldp+1386,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [3U] 
                                               >> 0x17U)))));
        bufp->chgBit(oldp+1387,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [4U] 
                                               >> 0x17U)))));
        bufp->chgBit(oldp+1388,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [5U] 
                                               >> 0x17U)))));
        bufp->chgBit(oldp+1389,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__24__KET____DOT__bi__DOT____Vcellinp__second2__C));
        bufp->chgBit(oldp+1390,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__23__KET____DOT__bi__DOT____Vcellinp__second4__B));
        bufp->chgBit(oldp+1391,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0U] 
                                               >> 0x17U)))));
        bufp->chgBit(oldp+1392,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [1U] 
                                               >> 0x17U)))));
        bufp->chgBit(oldp+1393,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [2U] 
                                               >> 0x17U)))));
        bufp->chgBit(oldp+1394,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__24__KET____DOT__bi__DOT____Vcellinp__second2__B));
        bufp->chgBit(oldp+1395,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__23__KET____DOT__bi__DOT____Vcellinp__second4__A));
        bufp->chgBit(oldp+1396,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__24__KET____DOT__bi__DOT____Vcellinp__fifth1__C));
        bufp->chgBit(oldp+1397,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__23__KET____DOT__bi__DOT____Vcellinp__fourth2__A));
        bufp->chgBit(oldp+1398,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__23__KET____DOT__bi__DOT____Vcellinp__fourth2__B));
        bufp->chgBit(oldp+1399,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__24__KET____DOT__bi__DOT____Vcellinp__sixth1__C));
        bufp->chgBit(oldp+1400,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__24__KET____DOT__bi__DOT____Vcellinp__third1__C));
        bufp->chgBit(oldp+1401,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__23__KET____DOT__bi__DOT____Vcellinp__third1__A));
        bufp->chgBit(oldp+1402,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0x10U] 
                                               >> 0x17U)))));
        bufp->chgBit(oldp+1403,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__24__KET____DOT__bi__DOT____Vcellinp__third1__B));
        bufp->chgBit(oldp+1404,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__23__KET____DOT__bi__DOT____Vcellinp__third2__C));
        bufp->chgBit(oldp+1405,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xfU] 
                                               >> 0x17U)))));
        bufp->chgBit(oldp+1406,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__24__KET____DOT__bi__DOT____Vcellinp__fourth1__C));
        bufp->chgBit(oldp+1407,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__23__KET____DOT__bi__DOT____Vcellinp__third2__B));
        bufp->chgBit(oldp+1408,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__24__KET____DOT__bi__DOT____Vcellinp__fourth1__B));
        bufp->chgBit(oldp+1409,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__23__KET____DOT__bi__DOT____Vcellinp__third2__A));
        bufp->chgBit(oldp+1410,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__24__KET____DOT__bi__DOT____Vcellinp__fourth1__A));
        bufp->chgBit(oldp+1411,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__24__KET____DOT__bi__DOT____Vcellinp__fourth2__C));
        bufp->chgIData(oldp+1412,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__24__KET____DOT__bi__InData),17);
        bufp->chgBit(oldp+1413,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__24__KET____DOT__bi__DOT__FifSig) 
                                  & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__24__KET____DOT__bi__DOT____Vcellinp__sixth1__B) 
                                     | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__24__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__24__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0))));
        bufp->chgBit(oldp+1414,((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__24__KET____DOT__bi__DOT__FifSig)) 
                                  & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__24__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__24__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                 | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__24__KET____DOT__bi__DOT__FifSig)) 
                                     & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__24__KET____DOT__bi__DOT____Vcellinp__sixth1__C)) 
                                        & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__24__KET____DOT__bi__DOT____Vcellinp__sixth1__B))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__24__KET____DOT__bi__DOT__FifSig) 
                                       & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__24__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                           & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__24__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                          | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__24__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0)))))));
        bufp->chgCData(oldp+1415,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__24__KET____DOT__bi__DOT____Vcellinp__second4__A) 
                                    << 4U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__24__KET____DOT__bi__DOT____Vcellinp__second4__B) 
                                               << 3U) 
                                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__24__KET____DOT__bi__DOT____Vcellinp__second4__C) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__24__KET____DOT__bi__DOT____Vcellinp__second3__A) 
                                                     << 1U) 
                                                    | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__24__KET____DOT__bi__DOT____Vcellinp__second3__B)))))),5);
        bufp->chgCData(oldp+1416,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__24__KET____DOT__bi__DOT____Vcellinp__third2__A) 
                                    << 3U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__24__KET____DOT__bi__DOT____Vcellinp__third2__B) 
                                               << 2U) 
                                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__24__KET____DOT__bi__DOT____Vcellinp__third2__C) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__24__KET____DOT__bi__DOT____Vcellinp__third1__A))))),4);
        bufp->chgCData(oldp+1417,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__24__KET____DOT__bi__DOT____Vcellinp__fourth2__A) 
                                    << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__24__KET____DOT__bi__DOT____Vcellinp__fourth2__B))),2);
        bufp->chgCData(oldp+1418,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__24__KET____DOT__bi__DOT____Vcellinp__fifth1__A) 
                                    << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__24__KET____DOT__bi__DOT____Vcellinp__fifth1__B))),2);
        bufp->chgBit(oldp+1419,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__24__KET____DOT__bi__DOT__FifSig));
        bufp->chgBit(oldp+1420,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__24__KET____DOT__bi__DOT____Vcellinp__fifth1__A));
        bufp->chgBit(oldp+1421,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__24__KET____DOT__bi__DOT____Vcellinp__fifth1__B));
        bufp->chgBit(oldp+1422,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__25__KET____DOT__bi__DOT____Vcellinp__sixth1__B));
        bufp->chgBit(oldp+1423,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xcU] 
                                               >> 0x18U)))));
        bufp->chgBit(oldp+1424,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xdU] 
                                               >> 0x18U)))));
        bufp->chgBit(oldp+1425,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xeU] 
                                               >> 0x18U)))));
        bufp->chgBit(oldp+1426,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__25__KET____DOT__bi__DOT____Vcellinp__second1__C));
        bufp->chgBit(oldp+1427,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__24__KET____DOT__bi__DOT____Vcellinp__second3__B));
        bufp->chgBit(oldp+1428,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [9U] 
                                               >> 0x18U)))));
        bufp->chgBit(oldp+1429,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xaU] 
                                               >> 0x18U)))));
        bufp->chgBit(oldp+1430,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xbU] 
                                               >> 0x18U)))));
        bufp->chgBit(oldp+1431,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__25__KET____DOT__bi__DOT____Vcellinp__second1__B));
        bufp->chgBit(oldp+1432,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__24__KET____DOT__bi__DOT____Vcellinp__second3__A));
        bufp->chgBit(oldp+1433,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [6U] 
                                               >> 0x18U)))));
        bufp->chgBit(oldp+1434,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [7U] 
                                               >> 0x18U)))));
        bufp->chgBit(oldp+1435,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [8U] 
                                               >> 0x18U)))));
        bufp->chgBit(oldp+1436,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__25__KET____DOT__bi__DOT____Vcellinp__second1__A));
        bufp->chgBit(oldp+1437,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__24__KET____DOT__bi__DOT____Vcellinp__second4__C));
        bufp->chgBit(oldp+1438,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [3U] 
                                               >> 0x18U)))));
        bufp->chgBit(oldp+1439,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [4U] 
                                               >> 0x18U)))));
        bufp->chgBit(oldp+1440,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [5U] 
                                               >> 0x18U)))));
        bufp->chgBit(oldp+1441,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__25__KET____DOT__bi__DOT____Vcellinp__second2__C));
        bufp->chgBit(oldp+1442,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__24__KET____DOT__bi__DOT____Vcellinp__second4__B));
        bufp->chgBit(oldp+1443,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0U] 
                                               >> 0x18U)))));
        bufp->chgBit(oldp+1444,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [1U] 
                                               >> 0x18U)))));
        bufp->chgBit(oldp+1445,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [2U] 
                                               >> 0x18U)))));
        bufp->chgBit(oldp+1446,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__25__KET____DOT__bi__DOT____Vcellinp__second2__B));
        bufp->chgBit(oldp+1447,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__24__KET____DOT__bi__DOT____Vcellinp__second4__A));
        bufp->chgBit(oldp+1448,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__25__KET____DOT__bi__DOT____Vcellinp__fifth1__C));
        bufp->chgBit(oldp+1449,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__24__KET____DOT__bi__DOT____Vcellinp__fourth2__A));
        bufp->chgBit(oldp+1450,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__24__KET____DOT__bi__DOT____Vcellinp__fourth2__B));
        bufp->chgBit(oldp+1451,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__25__KET____DOT__bi__DOT____Vcellinp__sixth1__C));
        bufp->chgBit(oldp+1452,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__25__KET____DOT__bi__DOT____Vcellinp__third1__C));
        bufp->chgBit(oldp+1453,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__24__KET____DOT__bi__DOT____Vcellinp__third1__A));
        bufp->chgBit(oldp+1454,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0x10U] 
                                               >> 0x18U)))));
        bufp->chgBit(oldp+1455,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__25__KET____DOT__bi__DOT____Vcellinp__third1__B));
        bufp->chgBit(oldp+1456,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__24__KET____DOT__bi__DOT____Vcellinp__third2__C));
        bufp->chgBit(oldp+1457,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xfU] 
                                               >> 0x18U)))));
        bufp->chgBit(oldp+1458,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__25__KET____DOT__bi__DOT____Vcellinp__fourth1__C));
        bufp->chgBit(oldp+1459,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__24__KET____DOT__bi__DOT____Vcellinp__third2__B));
        bufp->chgBit(oldp+1460,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__25__KET____DOT__bi__DOT____Vcellinp__fourth1__B));
        bufp->chgBit(oldp+1461,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__24__KET____DOT__bi__DOT____Vcellinp__third2__A));
        bufp->chgBit(oldp+1462,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__25__KET____DOT__bi__DOT____Vcellinp__fourth1__A));
        bufp->chgBit(oldp+1463,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__25__KET____DOT__bi__DOT____Vcellinp__fourth2__C));
        bufp->chgIData(oldp+1464,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__25__KET____DOT__bi__InData),17);
        bufp->chgBit(oldp+1465,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__25__KET____DOT__bi__DOT__FifSig) 
                                  & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__25__KET____DOT__bi__DOT____Vcellinp__sixth1__B) 
                                     | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__25__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__25__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0))));
        bufp->chgBit(oldp+1466,((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__25__KET____DOT__bi__DOT__FifSig)) 
                                  & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__25__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__25__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                 | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__25__KET____DOT__bi__DOT__FifSig)) 
                                     & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__25__KET____DOT__bi__DOT____Vcellinp__sixth1__C)) 
                                        & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__25__KET____DOT__bi__DOT____Vcellinp__sixth1__B))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__25__KET____DOT__bi__DOT__FifSig) 
                                       & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__25__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                           & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__25__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                          | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__25__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0)))))));
        bufp->chgCData(oldp+1467,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__25__KET____DOT__bi__DOT____Vcellinp__second4__A) 
                                    << 4U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__25__KET____DOT__bi__DOT____Vcellinp__second4__B) 
                                               << 3U) 
                                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__25__KET____DOT__bi__DOT____Vcellinp__second4__C) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__25__KET____DOT__bi__DOT____Vcellinp__second3__A) 
                                                     << 1U) 
                                                    | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__25__KET____DOT__bi__DOT____Vcellinp__second3__B)))))),5);
        bufp->chgCData(oldp+1468,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__25__KET____DOT__bi__DOT____Vcellinp__third2__A) 
                                    << 3U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__25__KET____DOT__bi__DOT____Vcellinp__third2__B) 
                                               << 2U) 
                                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__25__KET____DOT__bi__DOT____Vcellinp__third2__C) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__25__KET____DOT__bi__DOT____Vcellinp__third1__A))))),4);
        bufp->chgCData(oldp+1469,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__25__KET____DOT__bi__DOT____Vcellinp__fourth2__A) 
                                    << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__25__KET____DOT__bi__DOT____Vcellinp__fourth2__B))),2);
        bufp->chgCData(oldp+1470,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__25__KET____DOT__bi__DOT____Vcellinp__fifth1__A) 
                                    << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__25__KET____DOT__bi__DOT____Vcellinp__fifth1__B))),2);
        bufp->chgBit(oldp+1471,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__25__KET____DOT__bi__DOT__FifSig));
        bufp->chgBit(oldp+1472,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__25__KET____DOT__bi__DOT____Vcellinp__fifth1__A));
        bufp->chgBit(oldp+1473,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__25__KET____DOT__bi__DOT____Vcellinp__fifth1__B));
        bufp->chgBit(oldp+1474,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__26__KET____DOT__bi__DOT____Vcellinp__sixth1__B));
        bufp->chgBit(oldp+1475,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xcU] 
                                               >> 0x19U)))));
        bufp->chgBit(oldp+1476,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xdU] 
                                               >> 0x19U)))));
        bufp->chgBit(oldp+1477,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xeU] 
                                               >> 0x19U)))));
        bufp->chgBit(oldp+1478,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__26__KET____DOT__bi__DOT____Vcellinp__second1__C));
        bufp->chgBit(oldp+1479,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__25__KET____DOT__bi__DOT____Vcellinp__second3__B));
        bufp->chgBit(oldp+1480,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [9U] 
                                               >> 0x19U)))));
        bufp->chgBit(oldp+1481,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xaU] 
                                               >> 0x19U)))));
        bufp->chgBit(oldp+1482,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xbU] 
                                               >> 0x19U)))));
        bufp->chgBit(oldp+1483,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__26__KET____DOT__bi__DOT____Vcellinp__second1__B));
        bufp->chgBit(oldp+1484,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__25__KET____DOT__bi__DOT____Vcellinp__second3__A));
        bufp->chgBit(oldp+1485,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [6U] 
                                               >> 0x19U)))));
        bufp->chgBit(oldp+1486,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [7U] 
                                               >> 0x19U)))));
        bufp->chgBit(oldp+1487,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [8U] 
                                               >> 0x19U)))));
        bufp->chgBit(oldp+1488,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__26__KET____DOT__bi__DOT____Vcellinp__second1__A));
        bufp->chgBit(oldp+1489,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__25__KET____DOT__bi__DOT____Vcellinp__second4__C));
        bufp->chgBit(oldp+1490,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [3U] 
                                               >> 0x19U)))));
        bufp->chgBit(oldp+1491,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [4U] 
                                               >> 0x19U)))));
        bufp->chgBit(oldp+1492,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [5U] 
                                               >> 0x19U)))));
        bufp->chgBit(oldp+1493,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__26__KET____DOT__bi__DOT____Vcellinp__second2__C));
        bufp->chgBit(oldp+1494,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__25__KET____DOT__bi__DOT____Vcellinp__second4__B));
        bufp->chgBit(oldp+1495,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0U] 
                                               >> 0x19U)))));
        bufp->chgBit(oldp+1496,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [1U] 
                                               >> 0x19U)))));
        bufp->chgBit(oldp+1497,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [2U] 
                                               >> 0x19U)))));
        bufp->chgBit(oldp+1498,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__26__KET____DOT__bi__DOT____Vcellinp__second2__B));
        bufp->chgBit(oldp+1499,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__25__KET____DOT__bi__DOT____Vcellinp__second4__A));
        bufp->chgBit(oldp+1500,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__26__KET____DOT__bi__DOT____Vcellinp__fifth1__C));
        bufp->chgBit(oldp+1501,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__25__KET____DOT__bi__DOT____Vcellinp__fourth2__A));
        bufp->chgBit(oldp+1502,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__25__KET____DOT__bi__DOT____Vcellinp__fourth2__B));
        bufp->chgBit(oldp+1503,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__26__KET____DOT__bi__DOT____Vcellinp__sixth1__C));
        bufp->chgBit(oldp+1504,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__26__KET____DOT__bi__DOT____Vcellinp__third1__C));
        bufp->chgBit(oldp+1505,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__25__KET____DOT__bi__DOT____Vcellinp__third1__A));
        bufp->chgBit(oldp+1506,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0x10U] 
                                               >> 0x19U)))));
        bufp->chgBit(oldp+1507,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__26__KET____DOT__bi__DOT____Vcellinp__third1__B));
        bufp->chgBit(oldp+1508,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__25__KET____DOT__bi__DOT____Vcellinp__third2__C));
        bufp->chgBit(oldp+1509,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xfU] 
                                               >> 0x19U)))));
        bufp->chgBit(oldp+1510,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__26__KET____DOT__bi__DOT____Vcellinp__fourth1__C));
        bufp->chgBit(oldp+1511,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__25__KET____DOT__bi__DOT____Vcellinp__third2__B));
        bufp->chgBit(oldp+1512,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__26__KET____DOT__bi__DOT____Vcellinp__fourth1__B));
        bufp->chgBit(oldp+1513,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__25__KET____DOT__bi__DOT____Vcellinp__third2__A));
        bufp->chgBit(oldp+1514,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__26__KET____DOT__bi__DOT____Vcellinp__fourth1__A));
        bufp->chgBit(oldp+1515,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__26__KET____DOT__bi__DOT____Vcellinp__fourth2__C));
        bufp->chgIData(oldp+1516,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__26__KET____DOT__bi__InData),17);
        bufp->chgBit(oldp+1517,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__26__KET____DOT__bi__DOT__FifSig) 
                                  & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__26__KET____DOT__bi__DOT____Vcellinp__sixth1__B) 
                                     | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__26__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__26__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0))));
        bufp->chgBit(oldp+1518,((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__26__KET____DOT__bi__DOT__FifSig)) 
                                  & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__26__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__26__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                 | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__26__KET____DOT__bi__DOT__FifSig)) 
                                     & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__26__KET____DOT__bi__DOT____Vcellinp__sixth1__C)) 
                                        & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__26__KET____DOT__bi__DOT____Vcellinp__sixth1__B))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__26__KET____DOT__bi__DOT__FifSig) 
                                       & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__26__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                           & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__26__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                          | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__26__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0)))))));
        bufp->chgCData(oldp+1519,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__26__KET____DOT__bi__DOT____Vcellinp__second4__A) 
                                    << 4U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__26__KET____DOT__bi__DOT____Vcellinp__second4__B) 
                                               << 3U) 
                                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__26__KET____DOT__bi__DOT____Vcellinp__second4__C) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__26__KET____DOT__bi__DOT____Vcellinp__second3__A) 
                                                     << 1U) 
                                                    | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__26__KET____DOT__bi__DOT____Vcellinp__second3__B)))))),5);
        bufp->chgCData(oldp+1520,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__26__KET____DOT__bi__DOT____Vcellinp__third2__A) 
                                    << 3U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__26__KET____DOT__bi__DOT____Vcellinp__third2__B) 
                                               << 2U) 
                                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__26__KET____DOT__bi__DOT____Vcellinp__third2__C) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__26__KET____DOT__bi__DOT____Vcellinp__third1__A))))),4);
        bufp->chgCData(oldp+1521,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__26__KET____DOT__bi__DOT____Vcellinp__fourth2__A) 
                                    << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__26__KET____DOT__bi__DOT____Vcellinp__fourth2__B))),2);
        bufp->chgCData(oldp+1522,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__26__KET____DOT__bi__DOT____Vcellinp__fifth1__A) 
                                    << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__26__KET____DOT__bi__DOT____Vcellinp__fifth1__B))),2);
        bufp->chgBit(oldp+1523,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__26__KET____DOT__bi__DOT__FifSig));
        bufp->chgBit(oldp+1524,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__26__KET____DOT__bi__DOT____Vcellinp__fifth1__A));
        bufp->chgBit(oldp+1525,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__26__KET____DOT__bi__DOT____Vcellinp__fifth1__B));
        bufp->chgBit(oldp+1526,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__27__KET____DOT__bi__DOT____Vcellinp__sixth1__B));
        bufp->chgBit(oldp+1527,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xcU] 
                                               >> 0x1aU)))));
        bufp->chgBit(oldp+1528,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xdU] 
                                               >> 0x1aU)))));
        bufp->chgBit(oldp+1529,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xeU] 
                                               >> 0x1aU)))));
        bufp->chgBit(oldp+1530,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__27__KET____DOT__bi__DOT____Vcellinp__second1__C));
        bufp->chgBit(oldp+1531,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__26__KET____DOT__bi__DOT____Vcellinp__second3__B));
        bufp->chgBit(oldp+1532,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [9U] 
                                               >> 0x1aU)))));
        bufp->chgBit(oldp+1533,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xaU] 
                                               >> 0x1aU)))));
        bufp->chgBit(oldp+1534,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xbU] 
                                               >> 0x1aU)))));
        bufp->chgBit(oldp+1535,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__27__KET____DOT__bi__DOT____Vcellinp__second1__B));
        bufp->chgBit(oldp+1536,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__26__KET____DOT__bi__DOT____Vcellinp__second3__A));
        bufp->chgBit(oldp+1537,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [6U] 
                                               >> 0x1aU)))));
        bufp->chgBit(oldp+1538,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [7U] 
                                               >> 0x1aU)))));
        bufp->chgBit(oldp+1539,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [8U] 
                                               >> 0x1aU)))));
        bufp->chgBit(oldp+1540,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__27__KET____DOT__bi__DOT____Vcellinp__second1__A));
        bufp->chgBit(oldp+1541,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__26__KET____DOT__bi__DOT____Vcellinp__second4__C));
        bufp->chgBit(oldp+1542,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [3U] 
                                               >> 0x1aU)))));
        bufp->chgBit(oldp+1543,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [4U] 
                                               >> 0x1aU)))));
        bufp->chgBit(oldp+1544,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [5U] 
                                               >> 0x1aU)))));
        bufp->chgBit(oldp+1545,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__27__KET____DOT__bi__DOT____Vcellinp__second2__C));
        bufp->chgBit(oldp+1546,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__26__KET____DOT__bi__DOT____Vcellinp__second4__B));
        bufp->chgBit(oldp+1547,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0U] 
                                               >> 0x1aU)))));
        bufp->chgBit(oldp+1548,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [1U] 
                                               >> 0x1aU)))));
        bufp->chgBit(oldp+1549,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [2U] 
                                               >> 0x1aU)))));
        bufp->chgBit(oldp+1550,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__27__KET____DOT__bi__DOT____Vcellinp__second2__B));
        bufp->chgBit(oldp+1551,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__26__KET____DOT__bi__DOT____Vcellinp__second4__A));
        bufp->chgBit(oldp+1552,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__27__KET____DOT__bi__DOT____Vcellinp__fifth1__C));
        bufp->chgBit(oldp+1553,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__26__KET____DOT__bi__DOT____Vcellinp__fourth2__A));
        bufp->chgBit(oldp+1554,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__26__KET____DOT__bi__DOT____Vcellinp__fourth2__B));
        bufp->chgBit(oldp+1555,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__27__KET____DOT__bi__DOT____Vcellinp__sixth1__C));
        bufp->chgBit(oldp+1556,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__27__KET____DOT__bi__DOT____Vcellinp__third1__C));
        bufp->chgBit(oldp+1557,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__26__KET____DOT__bi__DOT____Vcellinp__third1__A));
        bufp->chgBit(oldp+1558,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0x10U] 
                                               >> 0x1aU)))));
        bufp->chgBit(oldp+1559,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__27__KET____DOT__bi__DOT____Vcellinp__third1__B));
        bufp->chgBit(oldp+1560,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__26__KET____DOT__bi__DOT____Vcellinp__third2__C));
        bufp->chgBit(oldp+1561,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xfU] 
                                               >> 0x1aU)))));
        bufp->chgBit(oldp+1562,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__27__KET____DOT__bi__DOT____Vcellinp__fourth1__C));
        bufp->chgBit(oldp+1563,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__26__KET____DOT__bi__DOT____Vcellinp__third2__B));
        bufp->chgBit(oldp+1564,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__27__KET____DOT__bi__DOT____Vcellinp__fourth1__B));
        bufp->chgBit(oldp+1565,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__26__KET____DOT__bi__DOT____Vcellinp__third2__A));
        bufp->chgBit(oldp+1566,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__27__KET____DOT__bi__DOT____Vcellinp__fourth1__A));
        bufp->chgBit(oldp+1567,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__27__KET____DOT__bi__DOT____Vcellinp__fourth2__C));
        bufp->chgIData(oldp+1568,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__27__KET____DOT__bi__InData),17);
        bufp->chgBit(oldp+1569,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__27__KET____DOT__bi__DOT__FifSig) 
                                  & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__27__KET____DOT__bi__DOT____Vcellinp__sixth1__B) 
                                     | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__27__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__27__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0))));
        bufp->chgBit(oldp+1570,((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__27__KET____DOT__bi__DOT__FifSig)) 
                                  & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__27__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__27__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                 | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__27__KET____DOT__bi__DOT__FifSig)) 
                                     & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__27__KET____DOT__bi__DOT____Vcellinp__sixth1__C)) 
                                        & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__27__KET____DOT__bi__DOT____Vcellinp__sixth1__B))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__27__KET____DOT__bi__DOT__FifSig) 
                                       & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__27__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                           & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__27__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                          | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__27__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0)))))));
        bufp->chgCData(oldp+1571,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__27__KET____DOT__bi__DOT____Vcellinp__second4__A) 
                                    << 4U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__27__KET____DOT__bi__DOT____Vcellinp__second4__B) 
                                               << 3U) 
                                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__27__KET____DOT__bi__DOT____Vcellinp__second4__C) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__27__KET____DOT__bi__DOT____Vcellinp__second3__A) 
                                                     << 1U) 
                                                    | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__27__KET____DOT__bi__DOT____Vcellinp__second3__B)))))),5);
        bufp->chgCData(oldp+1572,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__27__KET____DOT__bi__DOT____Vcellinp__third2__A) 
                                    << 3U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__27__KET____DOT__bi__DOT____Vcellinp__third2__B) 
                                               << 2U) 
                                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__27__KET____DOT__bi__DOT____Vcellinp__third2__C) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__27__KET____DOT__bi__DOT____Vcellinp__third1__A))))),4);
        bufp->chgCData(oldp+1573,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__27__KET____DOT__bi__DOT____Vcellinp__fourth2__A) 
                                    << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__27__KET____DOT__bi__DOT____Vcellinp__fourth2__B))),2);
        bufp->chgCData(oldp+1574,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__27__KET____DOT__bi__DOT____Vcellinp__fifth1__A) 
                                    << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__27__KET____DOT__bi__DOT____Vcellinp__fifth1__B))),2);
        bufp->chgBit(oldp+1575,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__27__KET____DOT__bi__DOT__FifSig));
        bufp->chgBit(oldp+1576,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__27__KET____DOT__bi__DOT____Vcellinp__fifth1__A));
        bufp->chgBit(oldp+1577,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__27__KET____DOT__bi__DOT____Vcellinp__fifth1__B));
        bufp->chgBit(oldp+1578,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__28__KET____DOT__bi__DOT____Vcellinp__sixth1__B));
        bufp->chgBit(oldp+1579,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xcU] 
                                               >> 0x1bU)))));
        bufp->chgBit(oldp+1580,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xdU] 
                                               >> 0x1bU)))));
        bufp->chgBit(oldp+1581,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xeU] 
                                               >> 0x1bU)))));
        bufp->chgBit(oldp+1582,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__28__KET____DOT__bi__DOT____Vcellinp__second1__C));
        bufp->chgBit(oldp+1583,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__27__KET____DOT__bi__DOT____Vcellinp__second3__B));
        bufp->chgBit(oldp+1584,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [9U] 
                                               >> 0x1bU)))));
        bufp->chgBit(oldp+1585,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xaU] 
                                               >> 0x1bU)))));
        bufp->chgBit(oldp+1586,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xbU] 
                                               >> 0x1bU)))));
        bufp->chgBit(oldp+1587,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__28__KET____DOT__bi__DOT____Vcellinp__second1__B));
        bufp->chgBit(oldp+1588,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__27__KET____DOT__bi__DOT____Vcellinp__second3__A));
        bufp->chgBit(oldp+1589,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [6U] 
                                               >> 0x1bU)))));
        bufp->chgBit(oldp+1590,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [7U] 
                                               >> 0x1bU)))));
        bufp->chgBit(oldp+1591,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [8U] 
                                               >> 0x1bU)))));
        bufp->chgBit(oldp+1592,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__28__KET____DOT__bi__DOT____Vcellinp__second1__A));
        bufp->chgBit(oldp+1593,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__27__KET____DOT__bi__DOT____Vcellinp__second4__C));
        bufp->chgBit(oldp+1594,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [3U] 
                                               >> 0x1bU)))));
        bufp->chgBit(oldp+1595,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [4U] 
                                               >> 0x1bU)))));
        bufp->chgBit(oldp+1596,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [5U] 
                                               >> 0x1bU)))));
        bufp->chgBit(oldp+1597,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__28__KET____DOT__bi__DOT____Vcellinp__second2__C));
        bufp->chgBit(oldp+1598,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__27__KET____DOT__bi__DOT____Vcellinp__second4__B));
        bufp->chgBit(oldp+1599,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0U] 
                                               >> 0x1bU)))));
        bufp->chgBit(oldp+1600,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [1U] 
                                               >> 0x1bU)))));
        bufp->chgBit(oldp+1601,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [2U] 
                                               >> 0x1bU)))));
        bufp->chgBit(oldp+1602,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__28__KET____DOT__bi__DOT____Vcellinp__second2__B));
        bufp->chgBit(oldp+1603,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__27__KET____DOT__bi__DOT____Vcellinp__second4__A));
        bufp->chgBit(oldp+1604,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__28__KET____DOT__bi__DOT____Vcellinp__fifth1__C));
        bufp->chgBit(oldp+1605,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__27__KET____DOT__bi__DOT____Vcellinp__fourth2__A));
        bufp->chgBit(oldp+1606,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__27__KET____DOT__bi__DOT____Vcellinp__fourth2__B));
        bufp->chgBit(oldp+1607,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__28__KET____DOT__bi__DOT____Vcellinp__sixth1__C));
        bufp->chgBit(oldp+1608,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__28__KET____DOT__bi__DOT____Vcellinp__third1__C));
        bufp->chgBit(oldp+1609,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__27__KET____DOT__bi__DOT____Vcellinp__third1__A));
        bufp->chgBit(oldp+1610,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0x10U] 
                                               >> 0x1bU)))));
        bufp->chgBit(oldp+1611,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__28__KET____DOT__bi__DOT____Vcellinp__third1__B));
        bufp->chgBit(oldp+1612,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__27__KET____DOT__bi__DOT____Vcellinp__third2__C));
        bufp->chgBit(oldp+1613,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xfU] 
                                               >> 0x1bU)))));
        bufp->chgBit(oldp+1614,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__28__KET____DOT__bi__DOT____Vcellinp__fourth1__C));
        bufp->chgBit(oldp+1615,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__27__KET____DOT__bi__DOT____Vcellinp__third2__B));
        bufp->chgBit(oldp+1616,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__28__KET____DOT__bi__DOT____Vcellinp__fourth1__B));
        bufp->chgBit(oldp+1617,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__27__KET____DOT__bi__DOT____Vcellinp__third2__A));
        bufp->chgBit(oldp+1618,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__28__KET____DOT__bi__DOT____Vcellinp__fourth1__A));
        bufp->chgBit(oldp+1619,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__28__KET____DOT__bi__DOT____Vcellinp__fourth2__C));
        bufp->chgIData(oldp+1620,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__28__KET____DOT__bi__InData),17);
        bufp->chgBit(oldp+1621,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__28__KET____DOT__bi__DOT__FifSig) 
                                  & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__28__KET____DOT__bi__DOT____Vcellinp__sixth1__B) 
                                     | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__28__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__28__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0))));
        bufp->chgBit(oldp+1622,((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__28__KET____DOT__bi__DOT__FifSig)) 
                                  & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__28__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__28__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                 | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__28__KET____DOT__bi__DOT__FifSig)) 
                                     & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__28__KET____DOT__bi__DOT____Vcellinp__sixth1__C)) 
                                        & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__28__KET____DOT__bi__DOT____Vcellinp__sixth1__B))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__28__KET____DOT__bi__DOT__FifSig) 
                                       & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__28__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                           & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__28__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                          | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__28__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0)))))));
        bufp->chgCData(oldp+1623,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__28__KET____DOT__bi__DOT____Vcellinp__second4__A) 
                                    << 4U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__28__KET____DOT__bi__DOT____Vcellinp__second4__B) 
                                               << 3U) 
                                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__28__KET____DOT__bi__DOT____Vcellinp__second4__C) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__28__KET____DOT__bi__DOT____Vcellinp__second3__A) 
                                                     << 1U) 
                                                    | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__28__KET____DOT__bi__DOT____Vcellinp__second3__B)))))),5);
        bufp->chgCData(oldp+1624,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__28__KET____DOT__bi__DOT____Vcellinp__third2__A) 
                                    << 3U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__28__KET____DOT__bi__DOT____Vcellinp__third2__B) 
                                               << 2U) 
                                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__28__KET____DOT__bi__DOT____Vcellinp__third2__C) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__28__KET____DOT__bi__DOT____Vcellinp__third1__A))))),4);
        bufp->chgCData(oldp+1625,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__28__KET____DOT__bi__DOT____Vcellinp__fourth2__A) 
                                    << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__28__KET____DOT__bi__DOT____Vcellinp__fourth2__B))),2);
        bufp->chgCData(oldp+1626,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__28__KET____DOT__bi__DOT____Vcellinp__fifth1__A) 
                                    << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__28__KET____DOT__bi__DOT____Vcellinp__fifth1__B))),2);
        bufp->chgBit(oldp+1627,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__28__KET____DOT__bi__DOT__FifSig));
        bufp->chgBit(oldp+1628,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__28__KET____DOT__bi__DOT____Vcellinp__fifth1__A));
        bufp->chgBit(oldp+1629,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__28__KET____DOT__bi__DOT____Vcellinp__fifth1__B));
        bufp->chgBit(oldp+1630,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__29__KET____DOT__bi__DOT____Vcellinp__sixth1__B));
        bufp->chgBit(oldp+1631,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xcU] 
                                               >> 0x1cU)))));
        bufp->chgBit(oldp+1632,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xdU] 
                                               >> 0x1cU)))));
        bufp->chgBit(oldp+1633,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xeU] 
                                               >> 0x1cU)))));
        bufp->chgBit(oldp+1634,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__29__KET____DOT__bi__DOT____Vcellinp__second1__C));
        bufp->chgBit(oldp+1635,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__28__KET____DOT__bi__DOT____Vcellinp__second3__B));
        bufp->chgBit(oldp+1636,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [9U] 
                                               >> 0x1cU)))));
        bufp->chgBit(oldp+1637,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xaU] 
                                               >> 0x1cU)))));
        bufp->chgBit(oldp+1638,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xbU] 
                                               >> 0x1cU)))));
        bufp->chgBit(oldp+1639,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__29__KET____DOT__bi__DOT____Vcellinp__second1__B));
        bufp->chgBit(oldp+1640,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__28__KET____DOT__bi__DOT____Vcellinp__second3__A));
        bufp->chgBit(oldp+1641,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [6U] 
                                               >> 0x1cU)))));
        bufp->chgBit(oldp+1642,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [7U] 
                                               >> 0x1cU)))));
        bufp->chgBit(oldp+1643,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [8U] 
                                               >> 0x1cU)))));
        bufp->chgBit(oldp+1644,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__29__KET____DOT__bi__DOT____Vcellinp__second1__A));
        bufp->chgBit(oldp+1645,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__28__KET____DOT__bi__DOT____Vcellinp__second4__C));
        bufp->chgBit(oldp+1646,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [3U] 
                                               >> 0x1cU)))));
        bufp->chgBit(oldp+1647,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [4U] 
                                               >> 0x1cU)))));
        bufp->chgBit(oldp+1648,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [5U] 
                                               >> 0x1cU)))));
        bufp->chgBit(oldp+1649,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__29__KET____DOT__bi__DOT____Vcellinp__second2__C));
        bufp->chgBit(oldp+1650,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__28__KET____DOT__bi__DOT____Vcellinp__second4__B));
        bufp->chgBit(oldp+1651,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0U] 
                                               >> 0x1cU)))));
        bufp->chgBit(oldp+1652,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [1U] 
                                               >> 0x1cU)))));
        bufp->chgBit(oldp+1653,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [2U] 
                                               >> 0x1cU)))));
        bufp->chgBit(oldp+1654,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__29__KET____DOT__bi__DOT____Vcellinp__second2__B));
        bufp->chgBit(oldp+1655,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__28__KET____DOT__bi__DOT____Vcellinp__second4__A));
        bufp->chgBit(oldp+1656,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__29__KET____DOT__bi__DOT____Vcellinp__fifth1__C));
        bufp->chgBit(oldp+1657,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__28__KET____DOT__bi__DOT____Vcellinp__fourth2__A));
        bufp->chgBit(oldp+1658,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__28__KET____DOT__bi__DOT____Vcellinp__fourth2__B));
        bufp->chgBit(oldp+1659,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__29__KET____DOT__bi__DOT____Vcellinp__sixth1__C));
        bufp->chgBit(oldp+1660,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__29__KET____DOT__bi__DOT____Vcellinp__third1__C));
        bufp->chgBit(oldp+1661,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__28__KET____DOT__bi__DOT____Vcellinp__third1__A));
        bufp->chgBit(oldp+1662,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0x10U] 
                                               >> 0x1cU)))));
        bufp->chgBit(oldp+1663,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__29__KET____DOT__bi__DOT____Vcellinp__third1__B));
        bufp->chgBit(oldp+1664,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__28__KET____DOT__bi__DOT____Vcellinp__third2__C));
        bufp->chgBit(oldp+1665,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xfU] 
                                               >> 0x1cU)))));
        bufp->chgBit(oldp+1666,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__29__KET____DOT__bi__DOT____Vcellinp__fourth1__C));
        bufp->chgBit(oldp+1667,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__28__KET____DOT__bi__DOT____Vcellinp__third2__B));
        bufp->chgBit(oldp+1668,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__29__KET____DOT__bi__DOT____Vcellinp__fourth1__B));
        bufp->chgBit(oldp+1669,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__28__KET____DOT__bi__DOT____Vcellinp__third2__A));
        bufp->chgBit(oldp+1670,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__29__KET____DOT__bi__DOT____Vcellinp__fourth1__A));
        bufp->chgBit(oldp+1671,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__29__KET____DOT__bi__DOT____Vcellinp__fourth2__C));
        bufp->chgIData(oldp+1672,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__29__KET____DOT__bi__InData),17);
        bufp->chgBit(oldp+1673,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__29__KET____DOT__bi__DOT__FifSig) 
                                  & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__29__KET____DOT__bi__DOT____Vcellinp__sixth1__B) 
                                     | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__29__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__29__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0))));
        bufp->chgBit(oldp+1674,((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__29__KET____DOT__bi__DOT__FifSig)) 
                                  & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__29__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__29__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                 | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__29__KET____DOT__bi__DOT__FifSig)) 
                                     & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__29__KET____DOT__bi__DOT____Vcellinp__sixth1__C)) 
                                        & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__29__KET____DOT__bi__DOT____Vcellinp__sixth1__B))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__29__KET____DOT__bi__DOT__FifSig) 
                                       & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__29__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                           & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__29__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                          | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__29__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0)))))));
        bufp->chgCData(oldp+1675,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__29__KET____DOT__bi__DOT____Vcellinp__second4__A) 
                                    << 4U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__29__KET____DOT__bi__DOT____Vcellinp__second4__B) 
                                               << 3U) 
                                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__29__KET____DOT__bi__DOT____Vcellinp__second4__C) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__29__KET____DOT__bi__DOT____Vcellinp__second3__A) 
                                                     << 1U) 
                                                    | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__29__KET____DOT__bi__DOT____Vcellinp__second3__B)))))),5);
        bufp->chgCData(oldp+1676,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__29__KET____DOT__bi__DOT____Vcellinp__third2__A) 
                                    << 3U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__29__KET____DOT__bi__DOT____Vcellinp__third2__B) 
                                               << 2U) 
                                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__29__KET____DOT__bi__DOT____Vcellinp__third2__C) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__29__KET____DOT__bi__DOT____Vcellinp__third1__A))))),4);
        bufp->chgCData(oldp+1677,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__29__KET____DOT__bi__DOT____Vcellinp__fourth2__A) 
                                    << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__29__KET____DOT__bi__DOT____Vcellinp__fourth2__B))),2);
        bufp->chgCData(oldp+1678,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__29__KET____DOT__bi__DOT____Vcellinp__fifth1__A) 
                                    << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__29__KET____DOT__bi__DOT____Vcellinp__fifth1__B))),2);
        bufp->chgBit(oldp+1679,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__29__KET____DOT__bi__DOT__FifSig));
        bufp->chgBit(oldp+1680,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__29__KET____DOT__bi__DOT____Vcellinp__fifth1__A));
        bufp->chgBit(oldp+1681,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__29__KET____DOT__bi__DOT____Vcellinp__fifth1__B));
        bufp->chgBit(oldp+1682,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__30__KET____DOT__bi__DOT____Vcellinp__sixth1__B));
        bufp->chgBit(oldp+1683,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xcU] 
                                               >> 0x1dU)))));
        bufp->chgBit(oldp+1684,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xdU] 
                                               >> 0x1dU)))));
        bufp->chgBit(oldp+1685,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xeU] 
                                               >> 0x1dU)))));
        bufp->chgBit(oldp+1686,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__30__KET____DOT__bi__DOT____Vcellinp__second1__C));
        bufp->chgBit(oldp+1687,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__29__KET____DOT__bi__DOT____Vcellinp__second3__B));
        bufp->chgBit(oldp+1688,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [9U] 
                                               >> 0x1dU)))));
        bufp->chgBit(oldp+1689,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xaU] 
                                               >> 0x1dU)))));
        bufp->chgBit(oldp+1690,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xbU] 
                                               >> 0x1dU)))));
        bufp->chgBit(oldp+1691,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__30__KET____DOT__bi__DOT____Vcellinp__second1__B));
        bufp->chgBit(oldp+1692,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__29__KET____DOT__bi__DOT____Vcellinp__second3__A));
        bufp->chgBit(oldp+1693,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [6U] 
                                               >> 0x1dU)))));
        bufp->chgBit(oldp+1694,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [7U] 
                                               >> 0x1dU)))));
        bufp->chgBit(oldp+1695,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [8U] 
                                               >> 0x1dU)))));
        bufp->chgBit(oldp+1696,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__30__KET____DOT__bi__DOT____Vcellinp__second1__A));
        bufp->chgBit(oldp+1697,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__29__KET____DOT__bi__DOT____Vcellinp__second4__C));
        bufp->chgBit(oldp+1698,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [3U] 
                                               >> 0x1dU)))));
        bufp->chgBit(oldp+1699,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [4U] 
                                               >> 0x1dU)))));
        bufp->chgBit(oldp+1700,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [5U] 
                                               >> 0x1dU)))));
        bufp->chgBit(oldp+1701,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__30__KET____DOT__bi__DOT____Vcellinp__second2__C));
        bufp->chgBit(oldp+1702,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__29__KET____DOT__bi__DOT____Vcellinp__second4__B));
        bufp->chgBit(oldp+1703,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0U] 
                                               >> 0x1dU)))));
        bufp->chgBit(oldp+1704,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [1U] 
                                               >> 0x1dU)))));
        bufp->chgBit(oldp+1705,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [2U] 
                                               >> 0x1dU)))));
        bufp->chgBit(oldp+1706,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__30__KET____DOT__bi__DOT____Vcellinp__second2__B));
        bufp->chgBit(oldp+1707,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__29__KET____DOT__bi__DOT____Vcellinp__second4__A));
        bufp->chgBit(oldp+1708,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__30__KET____DOT__bi__DOT____Vcellinp__fifth1__C));
        bufp->chgBit(oldp+1709,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__29__KET____DOT__bi__DOT____Vcellinp__fourth2__A));
        bufp->chgBit(oldp+1710,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__29__KET____DOT__bi__DOT____Vcellinp__fourth2__B));
        bufp->chgBit(oldp+1711,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__30__KET____DOT__bi__DOT____Vcellinp__sixth1__C));
        bufp->chgBit(oldp+1712,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__30__KET____DOT__bi__DOT____Vcellinp__third1__C));
        bufp->chgBit(oldp+1713,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__29__KET____DOT__bi__DOT____Vcellinp__third1__A));
        bufp->chgBit(oldp+1714,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0x10U] 
                                               >> 0x1dU)))));
        bufp->chgBit(oldp+1715,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__30__KET____DOT__bi__DOT____Vcellinp__third1__B));
        bufp->chgBit(oldp+1716,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__29__KET____DOT__bi__DOT____Vcellinp__third2__C));
        bufp->chgBit(oldp+1717,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xfU] 
                                               >> 0x1dU)))));
        bufp->chgBit(oldp+1718,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__30__KET____DOT__bi__DOT____Vcellinp__fourth1__C));
        bufp->chgBit(oldp+1719,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__29__KET____DOT__bi__DOT____Vcellinp__third2__B));
        bufp->chgBit(oldp+1720,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__30__KET____DOT__bi__DOT____Vcellinp__fourth1__B));
        bufp->chgBit(oldp+1721,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__29__KET____DOT__bi__DOT____Vcellinp__third2__A));
        bufp->chgBit(oldp+1722,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__30__KET____DOT__bi__DOT____Vcellinp__fourth1__A));
        bufp->chgBit(oldp+1723,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__30__KET____DOT__bi__DOT____Vcellinp__fourth2__C));
        bufp->chgIData(oldp+1724,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData),17);
        bufp->chgBit(oldp+1725,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__FifSig) 
                                  & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT____Vcellinp__sixth1__B) 
                                     | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0))));
        bufp->chgBit(oldp+1726,((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__FifSig)) 
                                  & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                 | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__FifSig)) 
                                     & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT____Vcellinp__sixth1__C)) 
                                        & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT____Vcellinp__sixth1__B))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__FifSig) 
                                       & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                           & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                          | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0)))))));
        bufp->chgCData(oldp+1727,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT____Vcellinp__second4__A) 
                                    << 4U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT____Vcellinp__second4__B) 
                                               << 3U) 
                                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT____Vcellinp__second4__C) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT____Vcellinp__second3__A) 
                                                     << 1U) 
                                                    | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT____Vcellinp__second3__B)))))),5);
        bufp->chgCData(oldp+1728,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT____Vcellinp__third2__A) 
                                    << 3U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT____Vcellinp__third2__B) 
                                               << 2U) 
                                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT____Vcellinp__third2__C) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT____Vcellinp__third1__A))))),4);
        bufp->chgCData(oldp+1729,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT____Vcellinp__fourth2__A) 
                                    << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT____Vcellinp__fourth2__B))),2);
        bufp->chgCData(oldp+1730,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT____Vcellinp__fifth1__A) 
                                    << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT____Vcellinp__fifth1__B))),2);
        bufp->chgBit(oldp+1731,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__FifSig));
        bufp->chgBit(oldp+1732,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT____Vcellinp__fifth1__A));
        bufp->chgBit(oldp+1733,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT____Vcellinp__fifth1__B));
        bufp->chgBit(oldp+1734,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT____Vcellinp__sixth1__B));
        bufp->chgBit(oldp+1735,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xcU] 
                                               >> 2U)))));
        bufp->chgBit(oldp+1736,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xdU] 
                                               >> 2U)))));
        bufp->chgBit(oldp+1737,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xeU] 
                                               >> 2U)))));
        bufp->chgBit(oldp+1738,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT____Vcellinp__second1__C));
        bufp->chgBit(oldp+1739,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT____Vcellinp__second3__B));
        bufp->chgBit(oldp+1740,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [9U] 
                                               >> 2U)))));
        bufp->chgBit(oldp+1741,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xaU] 
                                               >> 2U)))));
        bufp->chgBit(oldp+1742,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xbU] 
                                               >> 2U)))));
        bufp->chgBit(oldp+1743,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT____Vcellinp__second1__B));
        bufp->chgBit(oldp+1744,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT____Vcellinp__second3__A));
        bufp->chgBit(oldp+1745,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [6U] 
                                               >> 2U)))));
        bufp->chgBit(oldp+1746,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [7U] 
                                               >> 2U)))));
        bufp->chgBit(oldp+1747,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [8U] 
                                               >> 2U)))));
        bufp->chgBit(oldp+1748,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT____Vcellinp__second1__A));
        bufp->chgBit(oldp+1749,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT____Vcellinp__second4__C));
        bufp->chgBit(oldp+1750,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [3U] 
                                               >> 2U)))));
        bufp->chgBit(oldp+1751,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [4U] 
                                               >> 2U)))));
        bufp->chgBit(oldp+1752,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [5U] 
                                               >> 2U)))));
        bufp->chgBit(oldp+1753,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT____Vcellinp__second2__C));
        bufp->chgBit(oldp+1754,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT____Vcellinp__second4__B));
        bufp->chgBit(oldp+1755,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0U] 
                                               >> 2U)))));
        bufp->chgBit(oldp+1756,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [1U] 
                                               >> 2U)))));
        bufp->chgBit(oldp+1757,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [2U] 
                                               >> 2U)))));
        bufp->chgBit(oldp+1758,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT____Vcellinp__second2__B));
        bufp->chgBit(oldp+1759,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT____Vcellinp__second4__A));
        bufp->chgBit(oldp+1760,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT____Vcellinp__fifth1__C));
        bufp->chgBit(oldp+1761,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT____Vcellinp__fourth2__A));
        bufp->chgBit(oldp+1762,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT____Vcellinp__fourth2__B));
        bufp->chgBit(oldp+1763,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT____Vcellinp__sixth1__C));
        bufp->chgBit(oldp+1764,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT____Vcellinp__third1__C));
        bufp->chgBit(oldp+1765,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT____Vcellinp__third1__A));
        bufp->chgBit(oldp+1766,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0x10U] 
                                               >> 2U)))));
        bufp->chgBit(oldp+1767,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT____Vcellinp__third1__B));
        bufp->chgBit(oldp+1768,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT____Vcellinp__third2__C));
        bufp->chgBit(oldp+1769,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xfU] 
                                               >> 2U)))));
        bufp->chgBit(oldp+1770,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT____Vcellinp__fourth1__C));
        bufp->chgBit(oldp+1771,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT____Vcellinp__third2__B));
        bufp->chgBit(oldp+1772,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT____Vcellinp__fourth1__B));
        bufp->chgBit(oldp+1773,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT____Vcellinp__third2__A));
        bufp->chgBit(oldp+1774,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT____Vcellinp__fourth1__A));
        bufp->chgBit(oldp+1775,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT____Vcellinp__fourth2__C));
        bufp->chgIData(oldp+1776,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__30__KET____DOT__bi__InData),17);
        bufp->chgBit(oldp+1777,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__30__KET____DOT__bi__DOT__FifSig) 
                                  & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__30__KET____DOT__bi__DOT____Vcellinp__sixth1__B) 
                                     | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__30__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__30__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0))));
        bufp->chgBit(oldp+1778,((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__30__KET____DOT__bi__DOT__FifSig)) 
                                  & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__30__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__30__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                 | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__30__KET____DOT__bi__DOT__FifSig)) 
                                     & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__30__KET____DOT__bi__DOT____Vcellinp__sixth1__C)) 
                                        & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__30__KET____DOT__bi__DOT____Vcellinp__sixth1__B))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__30__KET____DOT__bi__DOT__FifSig) 
                                       & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__30__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                           & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__30__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                          | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__30__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0)))))));
        bufp->chgCData(oldp+1779,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__30__KET____DOT__bi__DOT____Vcellinp__second4__A) 
                                    << 4U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__30__KET____DOT__bi__DOT____Vcellinp__second4__B) 
                                               << 3U) 
                                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__30__KET____DOT__bi__DOT____Vcellinp__second4__C) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__30__KET____DOT__bi__DOT____Vcellinp__second3__A) 
                                                     << 1U) 
                                                    | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__30__KET____DOT__bi__DOT____Vcellinp__second3__B)))))),5);
        bufp->chgCData(oldp+1780,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__30__KET____DOT__bi__DOT____Vcellinp__third2__A) 
                                    << 3U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__30__KET____DOT__bi__DOT____Vcellinp__third2__B) 
                                               << 2U) 
                                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__30__KET____DOT__bi__DOT____Vcellinp__third2__C) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__30__KET____DOT__bi__DOT____Vcellinp__third1__A))))),4);
        bufp->chgCData(oldp+1781,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__30__KET____DOT__bi__DOT____Vcellinp__fourth2__A) 
                                    << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__30__KET____DOT__bi__DOT____Vcellinp__fourth2__B))),2);
        bufp->chgCData(oldp+1782,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__30__KET____DOT__bi__DOT____Vcellinp__fifth1__A) 
                                    << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__30__KET____DOT__bi__DOT____Vcellinp__fifth1__B))),2);
        bufp->chgBit(oldp+1783,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__30__KET____DOT__bi__DOT__FifSig));
        bufp->chgBit(oldp+1784,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__30__KET____DOT__bi__DOT____Vcellinp__fifth1__A));
        bufp->chgBit(oldp+1785,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__30__KET____DOT__bi__DOT____Vcellinp__fifth1__B));
        bufp->chgBit(oldp+1786,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__31__KET____DOT__bi__DOT____Vcellinp__sixth1__B));
        bufp->chgBit(oldp+1787,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xcU] 
                                               >> 0x1eU)))));
        bufp->chgBit(oldp+1788,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xdU] 
                                               >> 0x1eU)))));
        bufp->chgBit(oldp+1789,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xeU] 
                                               >> 0x1eU)))));
        bufp->chgBit(oldp+1790,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__31__KET____DOT__bi__DOT____Vcellinp__second1__C));
        bufp->chgBit(oldp+1791,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__30__KET____DOT__bi__DOT____Vcellinp__second3__B));
        bufp->chgBit(oldp+1792,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [9U] 
                                               >> 0x1eU)))));
        bufp->chgBit(oldp+1793,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xaU] 
                                               >> 0x1eU)))));
        bufp->chgBit(oldp+1794,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xbU] 
                                               >> 0x1eU)))));
        bufp->chgBit(oldp+1795,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__31__KET____DOT__bi__DOT____Vcellinp__second1__B));
        bufp->chgBit(oldp+1796,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__30__KET____DOT__bi__DOT____Vcellinp__second3__A));
        bufp->chgBit(oldp+1797,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [6U] 
                                               >> 0x1eU)))));
        bufp->chgBit(oldp+1798,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [7U] 
                                               >> 0x1eU)))));
        bufp->chgBit(oldp+1799,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [8U] 
                                               >> 0x1eU)))));
        bufp->chgBit(oldp+1800,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__31__KET____DOT__bi__DOT____Vcellinp__second1__A));
        bufp->chgBit(oldp+1801,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__30__KET____DOT__bi__DOT____Vcellinp__second4__C));
        bufp->chgBit(oldp+1802,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [3U] 
                                               >> 0x1eU)))));
        bufp->chgBit(oldp+1803,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [4U] 
                                               >> 0x1eU)))));
        bufp->chgBit(oldp+1804,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [5U] 
                                               >> 0x1eU)))));
        bufp->chgBit(oldp+1805,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__31__KET____DOT__bi__DOT____Vcellinp__second2__C));
        bufp->chgBit(oldp+1806,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__30__KET____DOT__bi__DOT____Vcellinp__second4__B));
        bufp->chgBit(oldp+1807,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0U] 
                                               >> 0x1eU)))));
        bufp->chgBit(oldp+1808,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [1U] 
                                               >> 0x1eU)))));
        bufp->chgBit(oldp+1809,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [2U] 
                                               >> 0x1eU)))));
        bufp->chgBit(oldp+1810,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__31__KET____DOT__bi__DOT____Vcellinp__second2__B));
        bufp->chgBit(oldp+1811,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__30__KET____DOT__bi__DOT____Vcellinp__second4__A));
        bufp->chgBit(oldp+1812,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__31__KET____DOT__bi__DOT____Vcellinp__fifth1__C));
        bufp->chgBit(oldp+1813,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__30__KET____DOT__bi__DOT____Vcellinp__fourth2__A));
        bufp->chgBit(oldp+1814,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__30__KET____DOT__bi__DOT____Vcellinp__fourth2__B));
        bufp->chgBit(oldp+1815,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__31__KET____DOT__bi__DOT____Vcellinp__sixth1__C));
        bufp->chgBit(oldp+1816,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__31__KET____DOT__bi__DOT____Vcellinp__third1__C));
        bufp->chgBit(oldp+1817,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__30__KET____DOT__bi__DOT____Vcellinp__third1__A));
        bufp->chgBit(oldp+1818,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0x10U] 
                                               >> 0x1eU)))));
        bufp->chgBit(oldp+1819,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__31__KET____DOT__bi__DOT____Vcellinp__third1__B));
        bufp->chgBit(oldp+1820,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__30__KET____DOT__bi__DOT____Vcellinp__third2__C));
        bufp->chgBit(oldp+1821,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xfU] 
                                               >> 0x1eU)))));
        bufp->chgBit(oldp+1822,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__31__KET____DOT__bi__DOT____Vcellinp__fourth1__C));
        bufp->chgBit(oldp+1823,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__30__KET____DOT__bi__DOT____Vcellinp__third2__B));
        bufp->chgBit(oldp+1824,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__31__KET____DOT__bi__DOT____Vcellinp__fourth1__B));
        bufp->chgBit(oldp+1825,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__30__KET____DOT__bi__DOT____Vcellinp__third2__A));
        bufp->chgBit(oldp+1826,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__31__KET____DOT__bi__DOT____Vcellinp__fourth1__A));
        bufp->chgBit(oldp+1827,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__31__KET____DOT__bi__DOT____Vcellinp__fourth2__C));
        bufp->chgIData(oldp+1828,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__31__KET____DOT__bi__InData),17);
        bufp->chgBit(oldp+1829,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__31__KET____DOT__bi__DOT__FifSig) 
                                  & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__31__KET____DOT__bi__DOT____Vcellinp__sixth1__B) 
                                     | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__31__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__31__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0))));
        bufp->chgBit(oldp+1830,((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__31__KET____DOT__bi__DOT__FifSig)) 
                                  & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__31__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__31__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                 | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__31__KET____DOT__bi__DOT__FifSig)) 
                                     & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__31__KET____DOT__bi__DOT____Vcellinp__sixth1__C)) 
                                        & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__31__KET____DOT__bi__DOT____Vcellinp__sixth1__B))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__31__KET____DOT__bi__DOT__FifSig) 
                                       & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__31__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                           & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__31__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                          | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__31__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0)))))));
        bufp->chgCData(oldp+1831,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__31__KET____DOT__bi__DOT____Vcellinp__second4__A) 
                                    << 4U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__31__KET____DOT__bi__DOT____Vcellinp__second4__B) 
                                               << 3U) 
                                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__31__KET____DOT__bi__DOT____Vcellinp__second4__C) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__31__KET____DOT__bi__DOT____Vcellinp__second3__A) 
                                                     << 1U) 
                                                    | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__31__KET____DOT__bi__DOT____Vcellinp__second3__B)))))),5);
        bufp->chgCData(oldp+1832,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__31__KET____DOT__bi__DOT____Vcellinp__third2__A) 
                                    << 3U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__31__KET____DOT__bi__DOT____Vcellinp__third2__B) 
                                               << 2U) 
                                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__31__KET____DOT__bi__DOT____Vcellinp__third2__C) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__31__KET____DOT__bi__DOT____Vcellinp__third1__A))))),4);
        bufp->chgCData(oldp+1833,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__31__KET____DOT__bi__DOT____Vcellinp__fourth2__A) 
                                    << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__31__KET____DOT__bi__DOT____Vcellinp__fourth2__B))),2);
        bufp->chgCData(oldp+1834,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__31__KET____DOT__bi__DOT____Vcellinp__fifth1__A) 
                                    << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__31__KET____DOT__bi__DOT____Vcellinp__fifth1__B))),2);
        bufp->chgBit(oldp+1835,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__31__KET____DOT__bi__DOT__FifSig));
        bufp->chgBit(oldp+1836,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__31__KET____DOT__bi__DOT____Vcellinp__fifth1__A));
        bufp->chgBit(oldp+1837,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__31__KET____DOT__bi__DOT____Vcellinp__fifth1__B));
        bufp->chgBit(oldp+1838,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__32__KET____DOT__bi__DOT____Vcellinp__sixth1__B));
        bufp->chgBit(oldp+1839,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xcU] 
                                               >> 0x1fU)))));
        bufp->chgBit(oldp+1840,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xdU] 
                                               >> 0x1fU)))));
        bufp->chgBit(oldp+1841,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xeU] 
                                               >> 0x1fU)))));
        bufp->chgBit(oldp+1842,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__32__KET____DOT__bi__DOT____Vcellinp__second1__C));
        bufp->chgBit(oldp+1843,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__31__KET____DOT__bi__DOT____Vcellinp__second3__B));
        bufp->chgBit(oldp+1844,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [9U] 
                                               >> 0x1fU)))));
        bufp->chgBit(oldp+1845,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xaU] 
                                               >> 0x1fU)))));
        bufp->chgBit(oldp+1846,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xbU] 
                                               >> 0x1fU)))));
        bufp->chgBit(oldp+1847,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__32__KET____DOT__bi__DOT____Vcellinp__second1__B));
        bufp->chgBit(oldp+1848,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__31__KET____DOT__bi__DOT____Vcellinp__second3__A));
        bufp->chgBit(oldp+1849,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [6U] 
                                               >> 0x1fU)))));
        bufp->chgBit(oldp+1850,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [7U] 
                                               >> 0x1fU)))));
        bufp->chgBit(oldp+1851,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [8U] 
                                               >> 0x1fU)))));
        bufp->chgBit(oldp+1852,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__32__KET____DOT__bi__DOT____Vcellinp__second1__A));
        bufp->chgBit(oldp+1853,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__31__KET____DOT__bi__DOT____Vcellinp__second4__C));
        bufp->chgBit(oldp+1854,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [3U] 
                                               >> 0x1fU)))));
        bufp->chgBit(oldp+1855,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [4U] 
                                               >> 0x1fU)))));
        bufp->chgBit(oldp+1856,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [5U] 
                                               >> 0x1fU)))));
        bufp->chgBit(oldp+1857,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__32__KET____DOT__bi__DOT____Vcellinp__second2__C));
        bufp->chgBit(oldp+1858,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__31__KET____DOT__bi__DOT____Vcellinp__second4__B));
        bufp->chgBit(oldp+1859,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0U] 
                                               >> 0x1fU)))));
        bufp->chgBit(oldp+1860,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [1U] 
                                               >> 0x1fU)))));
        bufp->chgBit(oldp+1861,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [2U] 
                                               >> 0x1fU)))));
        bufp->chgBit(oldp+1862,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__32__KET____DOT__bi__DOT____Vcellinp__second2__B));
        bufp->chgBit(oldp+1863,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__31__KET____DOT__bi__DOT____Vcellinp__second4__A));
        bufp->chgBit(oldp+1864,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__32__KET____DOT__bi__DOT____Vcellinp__fifth1__C));
        bufp->chgBit(oldp+1865,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__31__KET____DOT__bi__DOT____Vcellinp__fourth2__A));
        bufp->chgBit(oldp+1866,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__31__KET____DOT__bi__DOT____Vcellinp__fourth2__B));
        bufp->chgBit(oldp+1867,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__32__KET____DOT__bi__DOT____Vcellinp__sixth1__C));
        bufp->chgBit(oldp+1868,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__32__KET____DOT__bi__DOT____Vcellinp__third1__C));
        bufp->chgBit(oldp+1869,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__31__KET____DOT__bi__DOT____Vcellinp__third1__A));
        bufp->chgBit(oldp+1870,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0x10U] 
                                               >> 0x1fU)))));
        bufp->chgBit(oldp+1871,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__32__KET____DOT__bi__DOT____Vcellinp__third1__B));
        bufp->chgBit(oldp+1872,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__31__KET____DOT__bi__DOT____Vcellinp__third2__C));
        bufp->chgBit(oldp+1873,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xfU] 
                                               >> 0x1fU)))));
        bufp->chgBit(oldp+1874,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__32__KET____DOT__bi__DOT____Vcellinp__fourth1__C));
        bufp->chgBit(oldp+1875,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__31__KET____DOT__bi__DOT____Vcellinp__third2__B));
        bufp->chgBit(oldp+1876,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__32__KET____DOT__bi__DOT____Vcellinp__fourth1__B));
        bufp->chgBit(oldp+1877,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__31__KET____DOT__bi__DOT____Vcellinp__third2__A));
        bufp->chgBit(oldp+1878,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__32__KET____DOT__bi__DOT____Vcellinp__fourth1__A));
        bufp->chgBit(oldp+1879,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__32__KET____DOT__bi__DOT____Vcellinp__fourth2__C));
        bufp->chgIData(oldp+1880,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__32__KET____DOT__bi__InData),17);
        bufp->chgBit(oldp+1881,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__32__KET____DOT__bi__DOT__FifSig) 
                                  & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__32__KET____DOT__bi__DOT____Vcellinp__sixth1__B) 
                                     | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__32__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__32__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0))));
        bufp->chgBit(oldp+1882,((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__32__KET____DOT__bi__DOT__FifSig)) 
                                  & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__32__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__32__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                 | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__32__KET____DOT__bi__DOT__FifSig)) 
                                     & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__32__KET____DOT__bi__DOT____Vcellinp__sixth1__C)) 
                                        & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__32__KET____DOT__bi__DOT____Vcellinp__sixth1__B))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__32__KET____DOT__bi__DOT__FifSig) 
                                       & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__32__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                           & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__32__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                          | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__32__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0)))))));
        bufp->chgCData(oldp+1883,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__32__KET____DOT__bi__DOT____Vcellinp__second4__A) 
                                    << 4U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__32__KET____DOT__bi__DOT____Vcellinp__second4__B) 
                                               << 3U) 
                                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__32__KET____DOT__bi__DOT____Vcellinp__second4__C) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__32__KET____DOT__bi__DOT____Vcellinp__second3__A) 
                                                     << 1U) 
                                                    | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__32__KET____DOT__bi__DOT____Vcellinp__second3__B)))))),5);
        bufp->chgCData(oldp+1884,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__32__KET____DOT__bi__DOT____Vcellinp__third2__A) 
                                    << 3U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__32__KET____DOT__bi__DOT____Vcellinp__third2__B) 
                                               << 2U) 
                                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__32__KET____DOT__bi__DOT____Vcellinp__third2__C) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__32__KET____DOT__bi__DOT____Vcellinp__third1__A))))),4);
        bufp->chgCData(oldp+1885,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__32__KET____DOT__bi__DOT____Vcellinp__fourth2__A) 
                                    << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__32__KET____DOT__bi__DOT____Vcellinp__fourth2__B))),2);
        bufp->chgCData(oldp+1886,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__32__KET____DOT__bi__DOT____Vcellinp__fifth1__A) 
                                    << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__32__KET____DOT__bi__DOT____Vcellinp__fifth1__B))),2);
        bufp->chgBit(oldp+1887,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__32__KET____DOT__bi__DOT__FifSig));
        bufp->chgBit(oldp+1888,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__32__KET____DOT__bi__DOT____Vcellinp__fifth1__A));
        bufp->chgBit(oldp+1889,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__32__KET____DOT__bi__DOT____Vcellinp__fifth1__B));
        bufp->chgBit(oldp+1890,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__33__KET____DOT__bi__DOT____Vcellinp__sixth1__B));
        bufp->chgBit(oldp+1891,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xcU] 
                                               >> 0x20U)))));
        bufp->chgBit(oldp+1892,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xdU] 
                                               >> 0x20U)))));
        bufp->chgBit(oldp+1893,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xeU] 
                                               >> 0x20U)))));
        bufp->chgBit(oldp+1894,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__33__KET____DOT__bi__DOT____Vcellinp__second1__C));
        bufp->chgBit(oldp+1895,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__32__KET____DOT__bi__DOT____Vcellinp__second3__B));
        bufp->chgBit(oldp+1896,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [9U] 
                                               >> 0x20U)))));
        bufp->chgBit(oldp+1897,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xaU] 
                                               >> 0x20U)))));
        bufp->chgBit(oldp+1898,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xbU] 
                                               >> 0x20U)))));
        bufp->chgBit(oldp+1899,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__33__KET____DOT__bi__DOT____Vcellinp__second1__B));
        bufp->chgBit(oldp+1900,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__32__KET____DOT__bi__DOT____Vcellinp__second3__A));
        bufp->chgBit(oldp+1901,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [6U] 
                                               >> 0x20U)))));
        bufp->chgBit(oldp+1902,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [7U] 
                                               >> 0x20U)))));
        bufp->chgBit(oldp+1903,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [8U] 
                                               >> 0x20U)))));
        bufp->chgBit(oldp+1904,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__33__KET____DOT__bi__DOT____Vcellinp__second1__A));
        bufp->chgBit(oldp+1905,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__32__KET____DOT__bi__DOT____Vcellinp__second4__C));
        bufp->chgBit(oldp+1906,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [3U] 
                                               >> 0x20U)))));
        bufp->chgBit(oldp+1907,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [4U] 
                                               >> 0x20U)))));
        bufp->chgBit(oldp+1908,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [5U] 
                                               >> 0x20U)))));
        bufp->chgBit(oldp+1909,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__33__KET____DOT__bi__DOT____Vcellinp__second2__C));
        bufp->chgBit(oldp+1910,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__32__KET____DOT__bi__DOT____Vcellinp__second4__B));
        bufp->chgBit(oldp+1911,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0U] 
                                               >> 0x20U)))));
        bufp->chgBit(oldp+1912,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [1U] 
                                               >> 0x20U)))));
        bufp->chgBit(oldp+1913,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [2U] 
                                               >> 0x20U)))));
        bufp->chgBit(oldp+1914,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__33__KET____DOT__bi__DOT____Vcellinp__second2__B));
        bufp->chgBit(oldp+1915,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__32__KET____DOT__bi__DOT____Vcellinp__second4__A));
        bufp->chgBit(oldp+1916,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__33__KET____DOT__bi__DOT____Vcellinp__fifth1__C));
        bufp->chgBit(oldp+1917,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__32__KET____DOT__bi__DOT____Vcellinp__fourth2__A));
        bufp->chgBit(oldp+1918,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__32__KET____DOT__bi__DOT____Vcellinp__fourth2__B));
        bufp->chgBit(oldp+1919,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__33__KET____DOT__bi__DOT____Vcellinp__sixth1__C));
        bufp->chgBit(oldp+1920,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__33__KET____DOT__bi__DOT____Vcellinp__third1__C));
        bufp->chgBit(oldp+1921,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__32__KET____DOT__bi__DOT____Vcellinp__third1__A));
        bufp->chgBit(oldp+1922,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0x10U] 
                                               >> 0x20U)))));
        bufp->chgBit(oldp+1923,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__33__KET____DOT__bi__DOT____Vcellinp__third1__B));
        bufp->chgBit(oldp+1924,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__32__KET____DOT__bi__DOT____Vcellinp__third2__C));
        bufp->chgBit(oldp+1925,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xfU] 
                                               >> 0x20U)))));
        bufp->chgBit(oldp+1926,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__33__KET____DOT__bi__DOT____Vcellinp__fourth1__C));
        bufp->chgBit(oldp+1927,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__32__KET____DOT__bi__DOT____Vcellinp__third2__B));
        bufp->chgBit(oldp+1928,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__33__KET____DOT__bi__DOT____Vcellinp__fourth1__B));
        bufp->chgBit(oldp+1929,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__32__KET____DOT__bi__DOT____Vcellinp__third2__A));
        bufp->chgBit(oldp+1930,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__33__KET____DOT__bi__DOT____Vcellinp__fourth1__A));
        bufp->chgBit(oldp+1931,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__33__KET____DOT__bi__DOT____Vcellinp__fourth2__C));
        bufp->chgIData(oldp+1932,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__33__KET____DOT__bi__InData),17);
        bufp->chgBit(oldp+1933,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__33__KET____DOT__bi__DOT__FifSig) 
                                  & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__33__KET____DOT__bi__DOT____Vcellinp__sixth1__B) 
                                     | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__33__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__33__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0))));
        bufp->chgBit(oldp+1934,((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__33__KET____DOT__bi__DOT__FifSig)) 
                                  & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__33__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__33__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                 | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__33__KET____DOT__bi__DOT__FifSig)) 
                                     & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__33__KET____DOT__bi__DOT____Vcellinp__sixth1__C)) 
                                        & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__33__KET____DOT__bi__DOT____Vcellinp__sixth1__B))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__33__KET____DOT__bi__DOT__FifSig) 
                                       & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__33__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                           & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__33__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                          | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__33__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0)))))));
        bufp->chgCData(oldp+1935,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__33__KET____DOT__bi__DOT____Vcellinp__second4__A) 
                                    << 4U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__33__KET____DOT__bi__DOT____Vcellinp__second4__B) 
                                               << 3U) 
                                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__33__KET____DOT__bi__DOT____Vcellinp__second4__C) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__33__KET____DOT__bi__DOT____Vcellinp__second3__A) 
                                                     << 1U) 
                                                    | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__33__KET____DOT__bi__DOT____Vcellinp__second3__B)))))),5);
        bufp->chgCData(oldp+1936,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__33__KET____DOT__bi__DOT____Vcellinp__third2__A) 
                                    << 3U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__33__KET____DOT__bi__DOT____Vcellinp__third2__B) 
                                               << 2U) 
                                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__33__KET____DOT__bi__DOT____Vcellinp__third2__C) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__33__KET____DOT__bi__DOT____Vcellinp__third1__A))))),4);
        bufp->chgCData(oldp+1937,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__33__KET____DOT__bi__DOT____Vcellinp__fourth2__A) 
                                    << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__33__KET____DOT__bi__DOT____Vcellinp__fourth2__B))),2);
        bufp->chgCData(oldp+1938,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__33__KET____DOT__bi__DOT____Vcellinp__fifth1__A) 
                                    << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__33__KET____DOT__bi__DOT____Vcellinp__fifth1__B))),2);
        bufp->chgBit(oldp+1939,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__33__KET____DOT__bi__DOT__FifSig));
        bufp->chgBit(oldp+1940,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__33__KET____DOT__bi__DOT____Vcellinp__fifth1__A));
        bufp->chgBit(oldp+1941,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__33__KET____DOT__bi__DOT____Vcellinp__fifth1__B));
        bufp->chgBit(oldp+1942,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__34__KET____DOT__bi__DOT____Vcellinp__sixth1__B));
        bufp->chgBit(oldp+1943,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xcU] 
                                               >> 0x21U)))));
        bufp->chgBit(oldp+1944,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xdU] 
                                               >> 0x21U)))));
        bufp->chgBit(oldp+1945,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xeU] 
                                               >> 0x21U)))));
        bufp->chgBit(oldp+1946,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__34__KET____DOT__bi__DOT____Vcellinp__second1__C));
        bufp->chgBit(oldp+1947,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__33__KET____DOT__bi__DOT____Vcellinp__second3__B));
        bufp->chgBit(oldp+1948,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [9U] 
                                               >> 0x21U)))));
        bufp->chgBit(oldp+1949,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xaU] 
                                               >> 0x21U)))));
        bufp->chgBit(oldp+1950,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xbU] 
                                               >> 0x21U)))));
        bufp->chgBit(oldp+1951,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__34__KET____DOT__bi__DOT____Vcellinp__second1__B));
        bufp->chgBit(oldp+1952,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__33__KET____DOT__bi__DOT____Vcellinp__second3__A));
        bufp->chgBit(oldp+1953,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [6U] 
                                               >> 0x21U)))));
        bufp->chgBit(oldp+1954,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [7U] 
                                               >> 0x21U)))));
        bufp->chgBit(oldp+1955,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [8U] 
                                               >> 0x21U)))));
        bufp->chgBit(oldp+1956,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__34__KET____DOT__bi__DOT____Vcellinp__second1__A));
        bufp->chgBit(oldp+1957,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__33__KET____DOT__bi__DOT____Vcellinp__second4__C));
        bufp->chgBit(oldp+1958,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [3U] 
                                               >> 0x21U)))));
        bufp->chgBit(oldp+1959,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [4U] 
                                               >> 0x21U)))));
        bufp->chgBit(oldp+1960,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [5U] 
                                               >> 0x21U)))));
        bufp->chgBit(oldp+1961,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__34__KET____DOT__bi__DOT____Vcellinp__second2__C));
        bufp->chgBit(oldp+1962,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__33__KET____DOT__bi__DOT____Vcellinp__second4__B));
        bufp->chgBit(oldp+1963,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0U] 
                                               >> 0x21U)))));
        bufp->chgBit(oldp+1964,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [1U] 
                                               >> 0x21U)))));
        bufp->chgBit(oldp+1965,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [2U] 
                                               >> 0x21U)))));
        bufp->chgBit(oldp+1966,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__34__KET____DOT__bi__DOT____Vcellinp__second2__B));
        bufp->chgBit(oldp+1967,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__33__KET____DOT__bi__DOT____Vcellinp__second4__A));
        bufp->chgBit(oldp+1968,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__34__KET____DOT__bi__DOT____Vcellinp__fifth1__C));
        bufp->chgBit(oldp+1969,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__33__KET____DOT__bi__DOT____Vcellinp__fourth2__A));
        bufp->chgBit(oldp+1970,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__33__KET____DOT__bi__DOT____Vcellinp__fourth2__B));
        bufp->chgBit(oldp+1971,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__34__KET____DOT__bi__DOT____Vcellinp__sixth1__C));
        bufp->chgBit(oldp+1972,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__34__KET____DOT__bi__DOT____Vcellinp__third1__C));
        bufp->chgBit(oldp+1973,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__33__KET____DOT__bi__DOT____Vcellinp__third1__A));
        bufp->chgBit(oldp+1974,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0x10U] 
                                               >> 0x21U)))));
        bufp->chgBit(oldp+1975,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__34__KET____DOT__bi__DOT____Vcellinp__third1__B));
        bufp->chgBit(oldp+1976,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__33__KET____DOT__bi__DOT____Vcellinp__third2__C));
        bufp->chgBit(oldp+1977,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xfU] 
                                               >> 0x21U)))));
        bufp->chgBit(oldp+1978,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__34__KET____DOT__bi__DOT____Vcellinp__fourth1__C));
        bufp->chgBit(oldp+1979,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__33__KET____DOT__bi__DOT____Vcellinp__third2__B));
        bufp->chgBit(oldp+1980,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__34__KET____DOT__bi__DOT____Vcellinp__fourth1__B));
        bufp->chgBit(oldp+1981,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__33__KET____DOT__bi__DOT____Vcellinp__third2__A));
        bufp->chgBit(oldp+1982,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__34__KET____DOT__bi__DOT____Vcellinp__fourth1__A));
        bufp->chgBit(oldp+1983,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__34__KET____DOT__bi__DOT____Vcellinp__fourth2__C));
        bufp->chgIData(oldp+1984,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__34__KET____DOT__bi__InData),17);
        bufp->chgBit(oldp+1985,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__34__KET____DOT__bi__DOT__FifSig) 
                                  & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__34__KET____DOT__bi__DOT____Vcellinp__sixth1__B) 
                                     | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__34__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__34__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0))));
        bufp->chgBit(oldp+1986,((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__34__KET____DOT__bi__DOT__FifSig)) 
                                  & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__34__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__34__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                 | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__34__KET____DOT__bi__DOT__FifSig)) 
                                     & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__34__KET____DOT__bi__DOT____Vcellinp__sixth1__C)) 
                                        & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__34__KET____DOT__bi__DOT____Vcellinp__sixth1__B))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__34__KET____DOT__bi__DOT__FifSig) 
                                       & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__34__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                           & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__34__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                          | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__34__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0)))))));
        bufp->chgCData(oldp+1987,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__34__KET____DOT__bi__DOT____Vcellinp__second4__A) 
                                    << 4U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__34__KET____DOT__bi__DOT____Vcellinp__second4__B) 
                                               << 3U) 
                                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__34__KET____DOT__bi__DOT____Vcellinp__second4__C) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__34__KET____DOT__bi__DOT____Vcellinp__second3__A) 
                                                     << 1U) 
                                                    | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__34__KET____DOT__bi__DOT____Vcellinp__second3__B)))))),5);
        bufp->chgCData(oldp+1988,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__34__KET____DOT__bi__DOT____Vcellinp__third2__A) 
                                    << 3U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__34__KET____DOT__bi__DOT____Vcellinp__third2__B) 
                                               << 2U) 
                                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__34__KET____DOT__bi__DOT____Vcellinp__third2__C) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__34__KET____DOT__bi__DOT____Vcellinp__third1__A))))),4);
        bufp->chgCData(oldp+1989,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__34__KET____DOT__bi__DOT____Vcellinp__fourth2__A) 
                                    << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__34__KET____DOT__bi__DOT____Vcellinp__fourth2__B))),2);
        bufp->chgCData(oldp+1990,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__34__KET____DOT__bi__DOT____Vcellinp__fifth1__A) 
                                    << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__34__KET____DOT__bi__DOT____Vcellinp__fifth1__B))),2);
        bufp->chgBit(oldp+1991,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__34__KET____DOT__bi__DOT__FifSig));
        bufp->chgBit(oldp+1992,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__34__KET____DOT__bi__DOT____Vcellinp__fifth1__A));
        bufp->chgBit(oldp+1993,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__34__KET____DOT__bi__DOT____Vcellinp__fifth1__B));
        bufp->chgBit(oldp+1994,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__35__KET____DOT__bi__DOT____Vcellinp__sixth1__B));
        bufp->chgBit(oldp+1995,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xcU] 
                                               >> 0x22U)))));
        bufp->chgBit(oldp+1996,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xdU] 
                                               >> 0x22U)))));
        bufp->chgBit(oldp+1997,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xeU] 
                                               >> 0x22U)))));
        bufp->chgBit(oldp+1998,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__35__KET____DOT__bi__DOT____Vcellinp__second1__C));
        bufp->chgBit(oldp+1999,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__34__KET____DOT__bi__DOT____Vcellinp__second3__B));
        bufp->chgBit(oldp+2000,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [9U] 
                                               >> 0x22U)))));
        bufp->chgBit(oldp+2001,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xaU] 
                                               >> 0x22U)))));
        bufp->chgBit(oldp+2002,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xbU] 
                                               >> 0x22U)))));
        bufp->chgBit(oldp+2003,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__35__KET____DOT__bi__DOT____Vcellinp__second1__B));
        bufp->chgBit(oldp+2004,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__34__KET____DOT__bi__DOT____Vcellinp__second3__A));
        bufp->chgBit(oldp+2005,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [6U] 
                                               >> 0x22U)))));
        bufp->chgBit(oldp+2006,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [7U] 
                                               >> 0x22U)))));
        bufp->chgBit(oldp+2007,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [8U] 
                                               >> 0x22U)))));
        bufp->chgBit(oldp+2008,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__35__KET____DOT__bi__DOT____Vcellinp__second1__A));
        bufp->chgBit(oldp+2009,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__34__KET____DOT__bi__DOT____Vcellinp__second4__C));
        bufp->chgBit(oldp+2010,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [3U] 
                                               >> 0x22U)))));
        bufp->chgBit(oldp+2011,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [4U] 
                                               >> 0x22U)))));
        bufp->chgBit(oldp+2012,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [5U] 
                                               >> 0x22U)))));
        bufp->chgBit(oldp+2013,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__35__KET____DOT__bi__DOT____Vcellinp__second2__C));
        bufp->chgBit(oldp+2014,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__34__KET____DOT__bi__DOT____Vcellinp__second4__B));
        bufp->chgBit(oldp+2015,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0U] 
                                               >> 0x22U)))));
        bufp->chgBit(oldp+2016,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [1U] 
                                               >> 0x22U)))));
        bufp->chgBit(oldp+2017,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [2U] 
                                               >> 0x22U)))));
        bufp->chgBit(oldp+2018,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__35__KET____DOT__bi__DOT____Vcellinp__second2__B));
        bufp->chgBit(oldp+2019,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__34__KET____DOT__bi__DOT____Vcellinp__second4__A));
        bufp->chgBit(oldp+2020,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__35__KET____DOT__bi__DOT____Vcellinp__fifth1__C));
        bufp->chgBit(oldp+2021,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__34__KET____DOT__bi__DOT____Vcellinp__fourth2__A));
        bufp->chgBit(oldp+2022,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__34__KET____DOT__bi__DOT____Vcellinp__fourth2__B));
        bufp->chgBit(oldp+2023,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__35__KET____DOT__bi__DOT____Vcellinp__sixth1__C));
        bufp->chgBit(oldp+2024,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__35__KET____DOT__bi__DOT____Vcellinp__third1__C));
        bufp->chgBit(oldp+2025,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__34__KET____DOT__bi__DOT____Vcellinp__third1__A));
        bufp->chgBit(oldp+2026,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0x10U] 
                                               >> 0x22U)))));
        bufp->chgBit(oldp+2027,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__35__KET____DOT__bi__DOT____Vcellinp__third1__B));
        bufp->chgBit(oldp+2028,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__34__KET____DOT__bi__DOT____Vcellinp__third2__C));
        bufp->chgBit(oldp+2029,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xfU] 
                                               >> 0x22U)))));
        bufp->chgBit(oldp+2030,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__35__KET____DOT__bi__DOT____Vcellinp__fourth1__C));
        bufp->chgBit(oldp+2031,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__34__KET____DOT__bi__DOT____Vcellinp__third2__B));
        bufp->chgBit(oldp+2032,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__35__KET____DOT__bi__DOT____Vcellinp__fourth1__B));
        bufp->chgBit(oldp+2033,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__34__KET____DOT__bi__DOT____Vcellinp__third2__A));
        bufp->chgBit(oldp+2034,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__35__KET____DOT__bi__DOT____Vcellinp__fourth1__A));
        bufp->chgBit(oldp+2035,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__35__KET____DOT__bi__DOT____Vcellinp__fourth2__C));
        bufp->chgIData(oldp+2036,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__35__KET____DOT__bi__InData),17);
        bufp->chgBit(oldp+2037,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__35__KET____DOT__bi__DOT__FifSig) 
                                  & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__35__KET____DOT__bi__DOT____Vcellinp__sixth1__B) 
                                     | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__35__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__35__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0))));
        bufp->chgBit(oldp+2038,((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__35__KET____DOT__bi__DOT__FifSig)) 
                                  & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__35__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__35__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                 | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__35__KET____DOT__bi__DOT__FifSig)) 
                                     & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__35__KET____DOT__bi__DOT____Vcellinp__sixth1__C)) 
                                        & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__35__KET____DOT__bi__DOT____Vcellinp__sixth1__B))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__35__KET____DOT__bi__DOT__FifSig) 
                                       & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__35__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                           & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__35__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                          | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__35__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0)))))));
        bufp->chgCData(oldp+2039,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__35__KET____DOT__bi__DOT____Vcellinp__second4__A) 
                                    << 4U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__35__KET____DOT__bi__DOT____Vcellinp__second4__B) 
                                               << 3U) 
                                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__35__KET____DOT__bi__DOT____Vcellinp__second4__C) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__35__KET____DOT__bi__DOT____Vcellinp__second3__A) 
                                                     << 1U) 
                                                    | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__35__KET____DOT__bi__DOT____Vcellinp__second3__B)))))),5);
        bufp->chgCData(oldp+2040,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__35__KET____DOT__bi__DOT____Vcellinp__third2__A) 
                                    << 3U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__35__KET____DOT__bi__DOT____Vcellinp__third2__B) 
                                               << 2U) 
                                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__35__KET____DOT__bi__DOT____Vcellinp__third2__C) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__35__KET____DOT__bi__DOT____Vcellinp__third1__A))))),4);
        bufp->chgCData(oldp+2041,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__35__KET____DOT__bi__DOT____Vcellinp__fourth2__A) 
                                    << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__35__KET____DOT__bi__DOT____Vcellinp__fourth2__B))),2);
        bufp->chgCData(oldp+2042,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__35__KET____DOT__bi__DOT____Vcellinp__fifth1__A) 
                                    << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__35__KET____DOT__bi__DOT____Vcellinp__fifth1__B))),2);
        bufp->chgBit(oldp+2043,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__35__KET____DOT__bi__DOT__FifSig));
        bufp->chgBit(oldp+2044,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__35__KET____DOT__bi__DOT____Vcellinp__fifth1__A));
        bufp->chgBit(oldp+2045,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__35__KET____DOT__bi__DOT____Vcellinp__fifth1__B));
        bufp->chgBit(oldp+2046,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__36__KET____DOT__bi__DOT____Vcellinp__sixth1__B));
        bufp->chgBit(oldp+2047,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xcU] 
                                               >> 0x23U)))));
        bufp->chgBit(oldp+2048,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xdU] 
                                               >> 0x23U)))));
        bufp->chgBit(oldp+2049,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xeU] 
                                               >> 0x23U)))));
        bufp->chgBit(oldp+2050,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__36__KET____DOT__bi__DOT____Vcellinp__second1__C));
        bufp->chgBit(oldp+2051,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__35__KET____DOT__bi__DOT____Vcellinp__second3__B));
        bufp->chgBit(oldp+2052,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [9U] 
                                               >> 0x23U)))));
        bufp->chgBit(oldp+2053,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xaU] 
                                               >> 0x23U)))));
        bufp->chgBit(oldp+2054,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xbU] 
                                               >> 0x23U)))));
        bufp->chgBit(oldp+2055,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__36__KET____DOT__bi__DOT____Vcellinp__second1__B));
        bufp->chgBit(oldp+2056,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__35__KET____DOT__bi__DOT____Vcellinp__second3__A));
        bufp->chgBit(oldp+2057,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [6U] 
                                               >> 0x23U)))));
        bufp->chgBit(oldp+2058,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [7U] 
                                               >> 0x23U)))));
        bufp->chgBit(oldp+2059,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [8U] 
                                               >> 0x23U)))));
        bufp->chgBit(oldp+2060,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__36__KET____DOT__bi__DOT____Vcellinp__second1__A));
        bufp->chgBit(oldp+2061,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__35__KET____DOT__bi__DOT____Vcellinp__second4__C));
        bufp->chgBit(oldp+2062,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [3U] 
                                               >> 0x23U)))));
        bufp->chgBit(oldp+2063,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [4U] 
                                               >> 0x23U)))));
        bufp->chgBit(oldp+2064,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [5U] 
                                               >> 0x23U)))));
        bufp->chgBit(oldp+2065,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__36__KET____DOT__bi__DOT____Vcellinp__second2__C));
        bufp->chgBit(oldp+2066,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__35__KET____DOT__bi__DOT____Vcellinp__second4__B));
        bufp->chgBit(oldp+2067,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0U] 
                                               >> 0x23U)))));
        bufp->chgBit(oldp+2068,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [1U] 
                                               >> 0x23U)))));
        bufp->chgBit(oldp+2069,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [2U] 
                                               >> 0x23U)))));
        bufp->chgBit(oldp+2070,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__36__KET____DOT__bi__DOT____Vcellinp__second2__B));
        bufp->chgBit(oldp+2071,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__35__KET____DOT__bi__DOT____Vcellinp__second4__A));
        bufp->chgBit(oldp+2072,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__36__KET____DOT__bi__DOT____Vcellinp__fifth1__C));
        bufp->chgBit(oldp+2073,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__35__KET____DOT__bi__DOT____Vcellinp__fourth2__A));
        bufp->chgBit(oldp+2074,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__35__KET____DOT__bi__DOT____Vcellinp__fourth2__B));
        bufp->chgBit(oldp+2075,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__36__KET____DOT__bi__DOT____Vcellinp__sixth1__C));
        bufp->chgBit(oldp+2076,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__36__KET____DOT__bi__DOT____Vcellinp__third1__C));
        bufp->chgBit(oldp+2077,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__35__KET____DOT__bi__DOT____Vcellinp__third1__A));
        bufp->chgBit(oldp+2078,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0x10U] 
                                               >> 0x23U)))));
        bufp->chgBit(oldp+2079,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__36__KET____DOT__bi__DOT____Vcellinp__third1__B));
        bufp->chgBit(oldp+2080,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__35__KET____DOT__bi__DOT____Vcellinp__third2__C));
        bufp->chgBit(oldp+2081,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xfU] 
                                               >> 0x23U)))));
        bufp->chgBit(oldp+2082,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__36__KET____DOT__bi__DOT____Vcellinp__fourth1__C));
        bufp->chgBit(oldp+2083,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__35__KET____DOT__bi__DOT____Vcellinp__third2__B));
        bufp->chgBit(oldp+2084,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__36__KET____DOT__bi__DOT____Vcellinp__fourth1__B));
        bufp->chgBit(oldp+2085,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__35__KET____DOT__bi__DOT____Vcellinp__third2__A));
        bufp->chgBit(oldp+2086,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__36__KET____DOT__bi__DOT____Vcellinp__fourth1__A));
        bufp->chgBit(oldp+2087,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__36__KET____DOT__bi__DOT____Vcellinp__fourth2__C));
        bufp->chgIData(oldp+2088,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__36__KET____DOT__bi__InData),17);
        bufp->chgBit(oldp+2089,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__36__KET____DOT__bi__DOT__FifSig) 
                                  & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__36__KET____DOT__bi__DOT____Vcellinp__sixth1__B) 
                                     | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__36__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__36__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0))));
        bufp->chgBit(oldp+2090,((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__36__KET____DOT__bi__DOT__FifSig)) 
                                  & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__36__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__36__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                 | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__36__KET____DOT__bi__DOT__FifSig)) 
                                     & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__36__KET____DOT__bi__DOT____Vcellinp__sixth1__C)) 
                                        & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__36__KET____DOT__bi__DOT____Vcellinp__sixth1__B))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__36__KET____DOT__bi__DOT__FifSig) 
                                       & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__36__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                           & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__36__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                          | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__36__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0)))))));
        bufp->chgCData(oldp+2091,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__36__KET____DOT__bi__DOT____Vcellinp__second4__A) 
                                    << 4U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__36__KET____DOT__bi__DOT____Vcellinp__second4__B) 
                                               << 3U) 
                                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__36__KET____DOT__bi__DOT____Vcellinp__second4__C) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__36__KET____DOT__bi__DOT____Vcellinp__second3__A) 
                                                     << 1U) 
                                                    | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__36__KET____DOT__bi__DOT____Vcellinp__second3__B)))))),5);
        bufp->chgCData(oldp+2092,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__36__KET____DOT__bi__DOT____Vcellinp__third2__A) 
                                    << 3U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__36__KET____DOT__bi__DOT____Vcellinp__third2__B) 
                                               << 2U) 
                                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__36__KET____DOT__bi__DOT____Vcellinp__third2__C) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__36__KET____DOT__bi__DOT____Vcellinp__third1__A))))),4);
        bufp->chgCData(oldp+2093,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__36__KET____DOT__bi__DOT____Vcellinp__fourth2__A) 
                                    << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__36__KET____DOT__bi__DOT____Vcellinp__fourth2__B))),2);
        bufp->chgCData(oldp+2094,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__36__KET____DOT__bi__DOT____Vcellinp__fifth1__A) 
                                    << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__36__KET____DOT__bi__DOT____Vcellinp__fifth1__B))),2);
        bufp->chgBit(oldp+2095,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__36__KET____DOT__bi__DOT__FifSig));
        bufp->chgBit(oldp+2096,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__36__KET____DOT__bi__DOT____Vcellinp__fifth1__A));
        bufp->chgBit(oldp+2097,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__36__KET____DOT__bi__DOT____Vcellinp__fifth1__B));
        bufp->chgBit(oldp+2098,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__37__KET____DOT__bi__DOT____Vcellinp__sixth1__B));
        bufp->chgBit(oldp+2099,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xcU] 
                                               >> 0x24U)))));
        bufp->chgBit(oldp+2100,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xdU] 
                                               >> 0x24U)))));
        bufp->chgBit(oldp+2101,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xeU] 
                                               >> 0x24U)))));
        bufp->chgBit(oldp+2102,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__37__KET____DOT__bi__DOT____Vcellinp__second1__C));
        bufp->chgBit(oldp+2103,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__36__KET____DOT__bi__DOT____Vcellinp__second3__B));
        bufp->chgBit(oldp+2104,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [9U] 
                                               >> 0x24U)))));
        bufp->chgBit(oldp+2105,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xaU] 
                                               >> 0x24U)))));
        bufp->chgBit(oldp+2106,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xbU] 
                                               >> 0x24U)))));
        bufp->chgBit(oldp+2107,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__37__KET____DOT__bi__DOT____Vcellinp__second1__B));
        bufp->chgBit(oldp+2108,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__36__KET____DOT__bi__DOT____Vcellinp__second3__A));
        bufp->chgBit(oldp+2109,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [6U] 
                                               >> 0x24U)))));
        bufp->chgBit(oldp+2110,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [7U] 
                                               >> 0x24U)))));
        bufp->chgBit(oldp+2111,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [8U] 
                                               >> 0x24U)))));
        bufp->chgBit(oldp+2112,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__37__KET____DOT__bi__DOT____Vcellinp__second1__A));
        bufp->chgBit(oldp+2113,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__36__KET____DOT__bi__DOT____Vcellinp__second4__C));
        bufp->chgBit(oldp+2114,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [3U] 
                                               >> 0x24U)))));
        bufp->chgBit(oldp+2115,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [4U] 
                                               >> 0x24U)))));
        bufp->chgBit(oldp+2116,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [5U] 
                                               >> 0x24U)))));
        bufp->chgBit(oldp+2117,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__37__KET____DOT__bi__DOT____Vcellinp__second2__C));
        bufp->chgBit(oldp+2118,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__36__KET____DOT__bi__DOT____Vcellinp__second4__B));
        bufp->chgBit(oldp+2119,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0U] 
                                               >> 0x24U)))));
        bufp->chgBit(oldp+2120,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [1U] 
                                               >> 0x24U)))));
        bufp->chgBit(oldp+2121,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [2U] 
                                               >> 0x24U)))));
        bufp->chgBit(oldp+2122,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__37__KET____DOT__bi__DOT____Vcellinp__second2__B));
        bufp->chgBit(oldp+2123,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__36__KET____DOT__bi__DOT____Vcellinp__second4__A));
        bufp->chgBit(oldp+2124,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__37__KET____DOT__bi__DOT____Vcellinp__fifth1__C));
        bufp->chgBit(oldp+2125,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__36__KET____DOT__bi__DOT____Vcellinp__fourth2__A));
        bufp->chgBit(oldp+2126,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__36__KET____DOT__bi__DOT____Vcellinp__fourth2__B));
        bufp->chgBit(oldp+2127,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__37__KET____DOT__bi__DOT____Vcellinp__sixth1__C));
        bufp->chgBit(oldp+2128,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__37__KET____DOT__bi__DOT____Vcellinp__third1__C));
        bufp->chgBit(oldp+2129,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__36__KET____DOT__bi__DOT____Vcellinp__third1__A));
        bufp->chgBit(oldp+2130,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0x10U] 
                                               >> 0x24U)))));
        bufp->chgBit(oldp+2131,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__37__KET____DOT__bi__DOT____Vcellinp__third1__B));
        bufp->chgBit(oldp+2132,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__36__KET____DOT__bi__DOT____Vcellinp__third2__C));
        bufp->chgBit(oldp+2133,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xfU] 
                                               >> 0x24U)))));
        bufp->chgBit(oldp+2134,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__37__KET____DOT__bi__DOT____Vcellinp__fourth1__C));
        bufp->chgBit(oldp+2135,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__36__KET____DOT__bi__DOT____Vcellinp__third2__B));
        bufp->chgBit(oldp+2136,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__37__KET____DOT__bi__DOT____Vcellinp__fourth1__B));
        bufp->chgBit(oldp+2137,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__36__KET____DOT__bi__DOT____Vcellinp__third2__A));
        bufp->chgBit(oldp+2138,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__37__KET____DOT__bi__DOT____Vcellinp__fourth1__A));
        bufp->chgBit(oldp+2139,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__37__KET____DOT__bi__DOT____Vcellinp__fourth2__C));
        bufp->chgIData(oldp+2140,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__37__KET____DOT__bi__InData),17);
        bufp->chgBit(oldp+2141,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__37__KET____DOT__bi__DOT__FifSig) 
                                  & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__37__KET____DOT__bi__DOT____Vcellinp__sixth1__B) 
                                     | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__37__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__37__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0))));
        bufp->chgBit(oldp+2142,((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__37__KET____DOT__bi__DOT__FifSig)) 
                                  & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__37__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__37__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                 | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__37__KET____DOT__bi__DOT__FifSig)) 
                                     & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__37__KET____DOT__bi__DOT____Vcellinp__sixth1__C)) 
                                        & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__37__KET____DOT__bi__DOT____Vcellinp__sixth1__B))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__37__KET____DOT__bi__DOT__FifSig) 
                                       & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__37__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                           & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__37__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                          | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__37__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0)))))));
        bufp->chgCData(oldp+2143,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__37__KET____DOT__bi__DOT____Vcellinp__second4__A) 
                                    << 4U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__37__KET____DOT__bi__DOT____Vcellinp__second4__B) 
                                               << 3U) 
                                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__37__KET____DOT__bi__DOT____Vcellinp__second4__C) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__37__KET____DOT__bi__DOT____Vcellinp__second3__A) 
                                                     << 1U) 
                                                    | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__37__KET____DOT__bi__DOT____Vcellinp__second3__B)))))),5);
        bufp->chgCData(oldp+2144,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__37__KET____DOT__bi__DOT____Vcellinp__third2__A) 
                                    << 3U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__37__KET____DOT__bi__DOT____Vcellinp__third2__B) 
                                               << 2U) 
                                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__37__KET____DOT__bi__DOT____Vcellinp__third2__C) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__37__KET____DOT__bi__DOT____Vcellinp__third1__A))))),4);
        bufp->chgCData(oldp+2145,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__37__KET____DOT__bi__DOT____Vcellinp__fourth2__A) 
                                    << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__37__KET____DOT__bi__DOT____Vcellinp__fourth2__B))),2);
        bufp->chgCData(oldp+2146,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__37__KET____DOT__bi__DOT____Vcellinp__fifth1__A) 
                                    << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__37__KET____DOT__bi__DOT____Vcellinp__fifth1__B))),2);
        bufp->chgBit(oldp+2147,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__37__KET____DOT__bi__DOT__FifSig));
        bufp->chgBit(oldp+2148,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__37__KET____DOT__bi__DOT____Vcellinp__fifth1__A));
        bufp->chgBit(oldp+2149,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__37__KET____DOT__bi__DOT____Vcellinp__fifth1__B));
        bufp->chgBit(oldp+2150,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__38__KET____DOT__bi__DOT____Vcellinp__sixth1__B));
        bufp->chgBit(oldp+2151,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xcU] 
                                               >> 0x25U)))));
        bufp->chgBit(oldp+2152,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xdU] 
                                               >> 0x25U)))));
        bufp->chgBit(oldp+2153,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xeU] 
                                               >> 0x25U)))));
        bufp->chgBit(oldp+2154,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__38__KET____DOT__bi__DOT____Vcellinp__second1__C));
        bufp->chgBit(oldp+2155,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__37__KET____DOT__bi__DOT____Vcellinp__second3__B));
        bufp->chgBit(oldp+2156,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [9U] 
                                               >> 0x25U)))));
        bufp->chgBit(oldp+2157,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xaU] 
                                               >> 0x25U)))));
        bufp->chgBit(oldp+2158,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xbU] 
                                               >> 0x25U)))));
        bufp->chgBit(oldp+2159,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__38__KET____DOT__bi__DOT____Vcellinp__second1__B));
        bufp->chgBit(oldp+2160,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__37__KET____DOT__bi__DOT____Vcellinp__second3__A));
        bufp->chgBit(oldp+2161,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [6U] 
                                               >> 0x25U)))));
        bufp->chgBit(oldp+2162,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [7U] 
                                               >> 0x25U)))));
        bufp->chgBit(oldp+2163,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [8U] 
                                               >> 0x25U)))));
        bufp->chgBit(oldp+2164,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__38__KET____DOT__bi__DOT____Vcellinp__second1__A));
        bufp->chgBit(oldp+2165,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__37__KET____DOT__bi__DOT____Vcellinp__second4__C));
        bufp->chgBit(oldp+2166,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [3U] 
                                               >> 0x25U)))));
        bufp->chgBit(oldp+2167,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [4U] 
                                               >> 0x25U)))));
        bufp->chgBit(oldp+2168,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [5U] 
                                               >> 0x25U)))));
        bufp->chgBit(oldp+2169,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__38__KET____DOT__bi__DOT____Vcellinp__second2__C));
        bufp->chgBit(oldp+2170,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__37__KET____DOT__bi__DOT____Vcellinp__second4__B));
        bufp->chgBit(oldp+2171,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0U] 
                                               >> 0x25U)))));
        bufp->chgBit(oldp+2172,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [1U] 
                                               >> 0x25U)))));
        bufp->chgBit(oldp+2173,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [2U] 
                                               >> 0x25U)))));
        bufp->chgBit(oldp+2174,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__38__KET____DOT__bi__DOT____Vcellinp__second2__B));
        bufp->chgBit(oldp+2175,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__37__KET____DOT__bi__DOT____Vcellinp__second4__A));
        bufp->chgBit(oldp+2176,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__38__KET____DOT__bi__DOT____Vcellinp__fifth1__C));
        bufp->chgBit(oldp+2177,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__37__KET____DOT__bi__DOT____Vcellinp__fourth2__A));
        bufp->chgBit(oldp+2178,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__37__KET____DOT__bi__DOT____Vcellinp__fourth2__B));
        bufp->chgBit(oldp+2179,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__38__KET____DOT__bi__DOT____Vcellinp__sixth1__C));
        bufp->chgBit(oldp+2180,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__38__KET____DOT__bi__DOT____Vcellinp__third1__C));
        bufp->chgBit(oldp+2181,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__37__KET____DOT__bi__DOT____Vcellinp__third1__A));
        bufp->chgBit(oldp+2182,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0x10U] 
                                               >> 0x25U)))));
        bufp->chgBit(oldp+2183,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__38__KET____DOT__bi__DOT____Vcellinp__third1__B));
        bufp->chgBit(oldp+2184,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__37__KET____DOT__bi__DOT____Vcellinp__third2__C));
        bufp->chgBit(oldp+2185,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xfU] 
                                               >> 0x25U)))));
        bufp->chgBit(oldp+2186,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__38__KET____DOT__bi__DOT____Vcellinp__fourth1__C));
        bufp->chgBit(oldp+2187,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__37__KET____DOT__bi__DOT____Vcellinp__third2__B));
        bufp->chgBit(oldp+2188,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__38__KET____DOT__bi__DOT____Vcellinp__fourth1__B));
        bufp->chgBit(oldp+2189,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__37__KET____DOT__bi__DOT____Vcellinp__third2__A));
        bufp->chgBit(oldp+2190,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__38__KET____DOT__bi__DOT____Vcellinp__fourth1__A));
        bufp->chgBit(oldp+2191,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__38__KET____DOT__bi__DOT____Vcellinp__fourth2__C));
        bufp->chgIData(oldp+2192,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__38__KET____DOT__bi__InData),17);
        bufp->chgBit(oldp+2193,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__38__KET____DOT__bi__DOT__FifSig) 
                                  & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__38__KET____DOT__bi__DOT____Vcellinp__sixth1__B) 
                                     | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__38__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__38__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0))));
        bufp->chgBit(oldp+2194,((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__38__KET____DOT__bi__DOT__FifSig)) 
                                  & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__38__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__38__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                 | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__38__KET____DOT__bi__DOT__FifSig)) 
                                     & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__38__KET____DOT__bi__DOT____Vcellinp__sixth1__C)) 
                                        & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__38__KET____DOT__bi__DOT____Vcellinp__sixth1__B))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__38__KET____DOT__bi__DOT__FifSig) 
                                       & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__38__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                           & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__38__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                          | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__38__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0)))))));
        bufp->chgCData(oldp+2195,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__38__KET____DOT__bi__DOT____Vcellinp__second4__A) 
                                    << 4U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__38__KET____DOT__bi__DOT____Vcellinp__second4__B) 
                                               << 3U) 
                                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__38__KET____DOT__bi__DOT____Vcellinp__second4__C) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__38__KET____DOT__bi__DOT____Vcellinp__second3__A) 
                                                     << 1U) 
                                                    | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__38__KET____DOT__bi__DOT____Vcellinp__second3__B)))))),5);
        bufp->chgCData(oldp+2196,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__38__KET____DOT__bi__DOT____Vcellinp__third2__A) 
                                    << 3U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__38__KET____DOT__bi__DOT____Vcellinp__third2__B) 
                                               << 2U) 
                                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__38__KET____DOT__bi__DOT____Vcellinp__third2__C) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__38__KET____DOT__bi__DOT____Vcellinp__third1__A))))),4);
        bufp->chgCData(oldp+2197,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__38__KET____DOT__bi__DOT____Vcellinp__fourth2__A) 
                                    << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__38__KET____DOT__bi__DOT____Vcellinp__fourth2__B))),2);
        bufp->chgCData(oldp+2198,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__38__KET____DOT__bi__DOT____Vcellinp__fifth1__A) 
                                    << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__38__KET____DOT__bi__DOT____Vcellinp__fifth1__B))),2);
        bufp->chgBit(oldp+2199,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__38__KET____DOT__bi__DOT__FifSig));
        bufp->chgBit(oldp+2200,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__38__KET____DOT__bi__DOT____Vcellinp__fifth1__A));
        bufp->chgBit(oldp+2201,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__38__KET____DOT__bi__DOT____Vcellinp__fifth1__B));
        bufp->chgBit(oldp+2202,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__39__KET____DOT__bi__DOT____Vcellinp__sixth1__B));
        bufp->chgBit(oldp+2203,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xcU] 
                                               >> 0x26U)))));
        bufp->chgBit(oldp+2204,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xdU] 
                                               >> 0x26U)))));
        bufp->chgBit(oldp+2205,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xeU] 
                                               >> 0x26U)))));
        bufp->chgBit(oldp+2206,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__39__KET____DOT__bi__DOT____Vcellinp__second1__C));
        bufp->chgBit(oldp+2207,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__38__KET____DOT__bi__DOT____Vcellinp__second3__B));
        bufp->chgBit(oldp+2208,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [9U] 
                                               >> 0x26U)))));
        bufp->chgBit(oldp+2209,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xaU] 
                                               >> 0x26U)))));
        bufp->chgBit(oldp+2210,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xbU] 
                                               >> 0x26U)))));
        bufp->chgBit(oldp+2211,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__39__KET____DOT__bi__DOT____Vcellinp__second1__B));
        bufp->chgBit(oldp+2212,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__38__KET____DOT__bi__DOT____Vcellinp__second3__A));
        bufp->chgBit(oldp+2213,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [6U] 
                                               >> 0x26U)))));
        bufp->chgBit(oldp+2214,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [7U] 
                                               >> 0x26U)))));
        bufp->chgBit(oldp+2215,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [8U] 
                                               >> 0x26U)))));
        bufp->chgBit(oldp+2216,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__39__KET____DOT__bi__DOT____Vcellinp__second1__A));
        bufp->chgBit(oldp+2217,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__38__KET____DOT__bi__DOT____Vcellinp__second4__C));
        bufp->chgBit(oldp+2218,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [3U] 
                                               >> 0x26U)))));
        bufp->chgBit(oldp+2219,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [4U] 
                                               >> 0x26U)))));
        bufp->chgBit(oldp+2220,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [5U] 
                                               >> 0x26U)))));
        bufp->chgBit(oldp+2221,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__39__KET____DOT__bi__DOT____Vcellinp__second2__C));
        bufp->chgBit(oldp+2222,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__38__KET____DOT__bi__DOT____Vcellinp__second4__B));
        bufp->chgBit(oldp+2223,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0U] 
                                               >> 0x26U)))));
        bufp->chgBit(oldp+2224,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [1U] 
                                               >> 0x26U)))));
        bufp->chgBit(oldp+2225,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [2U] 
                                               >> 0x26U)))));
        bufp->chgBit(oldp+2226,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__39__KET____DOT__bi__DOT____Vcellinp__second2__B));
        bufp->chgBit(oldp+2227,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__38__KET____DOT__bi__DOT____Vcellinp__second4__A));
        bufp->chgBit(oldp+2228,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__39__KET____DOT__bi__DOT____Vcellinp__fifth1__C));
        bufp->chgBit(oldp+2229,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__38__KET____DOT__bi__DOT____Vcellinp__fourth2__A));
        bufp->chgBit(oldp+2230,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__38__KET____DOT__bi__DOT____Vcellinp__fourth2__B));
        bufp->chgBit(oldp+2231,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__39__KET____DOT__bi__DOT____Vcellinp__sixth1__C));
        bufp->chgBit(oldp+2232,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__39__KET____DOT__bi__DOT____Vcellinp__third1__C));
        bufp->chgBit(oldp+2233,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__38__KET____DOT__bi__DOT____Vcellinp__third1__A));
        bufp->chgBit(oldp+2234,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0x10U] 
                                               >> 0x26U)))));
        bufp->chgBit(oldp+2235,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__39__KET____DOT__bi__DOT____Vcellinp__third1__B));
        bufp->chgBit(oldp+2236,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__38__KET____DOT__bi__DOT____Vcellinp__third2__C));
        bufp->chgBit(oldp+2237,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xfU] 
                                               >> 0x26U)))));
        bufp->chgBit(oldp+2238,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__39__KET____DOT__bi__DOT____Vcellinp__fourth1__C));
        bufp->chgBit(oldp+2239,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__38__KET____DOT__bi__DOT____Vcellinp__third2__B));
        bufp->chgBit(oldp+2240,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__39__KET____DOT__bi__DOT____Vcellinp__fourth1__B));
        bufp->chgBit(oldp+2241,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__38__KET____DOT__bi__DOT____Vcellinp__third2__A));
        bufp->chgBit(oldp+2242,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__39__KET____DOT__bi__DOT____Vcellinp__fourth1__A));
        bufp->chgBit(oldp+2243,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__39__KET____DOT__bi__DOT____Vcellinp__fourth2__C));
        bufp->chgIData(oldp+2244,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__39__KET____DOT__bi__InData),17);
        bufp->chgBit(oldp+2245,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__39__KET____DOT__bi__DOT__FifSig) 
                                  & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__39__KET____DOT__bi__DOT____Vcellinp__sixth1__B) 
                                     | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__39__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__39__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0))));
        bufp->chgBit(oldp+2246,((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__39__KET____DOT__bi__DOT__FifSig)) 
                                  & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__39__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__39__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                 | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__39__KET____DOT__bi__DOT__FifSig)) 
                                     & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__39__KET____DOT__bi__DOT____Vcellinp__sixth1__C)) 
                                        & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__39__KET____DOT__bi__DOT____Vcellinp__sixth1__B))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__39__KET____DOT__bi__DOT__FifSig) 
                                       & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__39__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                           & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__39__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                          | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__39__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0)))))));
        bufp->chgCData(oldp+2247,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__39__KET____DOT__bi__DOT____Vcellinp__second4__A) 
                                    << 4U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__39__KET____DOT__bi__DOT____Vcellinp__second4__B) 
                                               << 3U) 
                                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__39__KET____DOT__bi__DOT____Vcellinp__second4__C) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__39__KET____DOT__bi__DOT____Vcellinp__second3__A) 
                                                     << 1U) 
                                                    | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__39__KET____DOT__bi__DOT____Vcellinp__second3__B)))))),5);
        bufp->chgCData(oldp+2248,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__39__KET____DOT__bi__DOT____Vcellinp__third2__A) 
                                    << 3U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__39__KET____DOT__bi__DOT____Vcellinp__third2__B) 
                                               << 2U) 
                                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__39__KET____DOT__bi__DOT____Vcellinp__third2__C) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__39__KET____DOT__bi__DOT____Vcellinp__third1__A))))),4);
        bufp->chgCData(oldp+2249,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__39__KET____DOT__bi__DOT____Vcellinp__fourth2__A) 
                                    << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__39__KET____DOT__bi__DOT____Vcellinp__fourth2__B))),2);
        bufp->chgCData(oldp+2250,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__39__KET____DOT__bi__DOT____Vcellinp__fifth1__A) 
                                    << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__39__KET____DOT__bi__DOT____Vcellinp__fifth1__B))),2);
        bufp->chgBit(oldp+2251,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__39__KET____DOT__bi__DOT__FifSig));
        bufp->chgBit(oldp+2252,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__39__KET____DOT__bi__DOT____Vcellinp__fifth1__A));
        bufp->chgBit(oldp+2253,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__39__KET____DOT__bi__DOT____Vcellinp__fifth1__B));
        bufp->chgBit(oldp+2254,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__40__KET____DOT__bi__DOT____Vcellinp__sixth1__B));
        bufp->chgBit(oldp+2255,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xcU] 
                                               >> 0x27U)))));
        bufp->chgBit(oldp+2256,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xdU] 
                                               >> 0x27U)))));
        bufp->chgBit(oldp+2257,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xeU] 
                                               >> 0x27U)))));
        bufp->chgBit(oldp+2258,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__40__KET____DOT__bi__DOT____Vcellinp__second1__C));
        bufp->chgBit(oldp+2259,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__39__KET____DOT__bi__DOT____Vcellinp__second3__B));
        bufp->chgBit(oldp+2260,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [9U] 
                                               >> 0x27U)))));
        bufp->chgBit(oldp+2261,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xaU] 
                                               >> 0x27U)))));
        bufp->chgBit(oldp+2262,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xbU] 
                                               >> 0x27U)))));
        bufp->chgBit(oldp+2263,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__40__KET____DOT__bi__DOT____Vcellinp__second1__B));
        bufp->chgBit(oldp+2264,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__39__KET____DOT__bi__DOT____Vcellinp__second3__A));
        bufp->chgBit(oldp+2265,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [6U] 
                                               >> 0x27U)))));
        bufp->chgBit(oldp+2266,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [7U] 
                                               >> 0x27U)))));
        bufp->chgBit(oldp+2267,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [8U] 
                                               >> 0x27U)))));
        bufp->chgBit(oldp+2268,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__40__KET____DOT__bi__DOT____Vcellinp__second1__A));
        bufp->chgBit(oldp+2269,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__39__KET____DOT__bi__DOT____Vcellinp__second4__C));
        bufp->chgBit(oldp+2270,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [3U] 
                                               >> 0x27U)))));
        bufp->chgBit(oldp+2271,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [4U] 
                                               >> 0x27U)))));
        bufp->chgBit(oldp+2272,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [5U] 
                                               >> 0x27U)))));
        bufp->chgBit(oldp+2273,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__40__KET____DOT__bi__DOT____Vcellinp__second2__C));
        bufp->chgBit(oldp+2274,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__39__KET____DOT__bi__DOT____Vcellinp__second4__B));
        bufp->chgBit(oldp+2275,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0U] 
                                               >> 0x27U)))));
        bufp->chgBit(oldp+2276,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [1U] 
                                               >> 0x27U)))));
        bufp->chgBit(oldp+2277,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [2U] 
                                               >> 0x27U)))));
        bufp->chgBit(oldp+2278,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__40__KET____DOT__bi__DOT____Vcellinp__second2__B));
        bufp->chgBit(oldp+2279,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__39__KET____DOT__bi__DOT____Vcellinp__second4__A));
        bufp->chgBit(oldp+2280,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__40__KET____DOT__bi__DOT____Vcellinp__fifth1__C));
        bufp->chgBit(oldp+2281,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__39__KET____DOT__bi__DOT____Vcellinp__fourth2__A));
        bufp->chgBit(oldp+2282,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__39__KET____DOT__bi__DOT____Vcellinp__fourth2__B));
        bufp->chgBit(oldp+2283,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__40__KET____DOT__bi__DOT____Vcellinp__sixth1__C));
        bufp->chgBit(oldp+2284,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__40__KET____DOT__bi__DOT____Vcellinp__third1__C));
        bufp->chgBit(oldp+2285,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__39__KET____DOT__bi__DOT____Vcellinp__third1__A));
        bufp->chgBit(oldp+2286,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0x10U] 
                                               >> 0x27U)))));
        bufp->chgBit(oldp+2287,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__40__KET____DOT__bi__DOT____Vcellinp__third1__B));
        bufp->chgBit(oldp+2288,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__39__KET____DOT__bi__DOT____Vcellinp__third2__C));
        bufp->chgBit(oldp+2289,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xfU] 
                                               >> 0x27U)))));
        bufp->chgBit(oldp+2290,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__40__KET____DOT__bi__DOT____Vcellinp__fourth1__C));
        bufp->chgBit(oldp+2291,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__39__KET____DOT__bi__DOT____Vcellinp__third2__B));
        bufp->chgBit(oldp+2292,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__40__KET____DOT__bi__DOT____Vcellinp__fourth1__B));
        bufp->chgBit(oldp+2293,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__39__KET____DOT__bi__DOT____Vcellinp__third2__A));
        bufp->chgBit(oldp+2294,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__40__KET____DOT__bi__DOT____Vcellinp__fourth1__A));
        bufp->chgBit(oldp+2295,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__40__KET____DOT__bi__DOT____Vcellinp__fourth2__C));
        bufp->chgIData(oldp+2296,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData),17);
        bufp->chgBit(oldp+2297,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT__FifSig) 
                                  & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT____Vcellinp__sixth1__B) 
                                     | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0))));
        bufp->chgBit(oldp+2298,((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT__FifSig)) 
                                  & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                 | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT__FifSig)) 
                                     & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT____Vcellinp__sixth1__C)) 
                                        & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT____Vcellinp__sixth1__B))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT__FifSig) 
                                       & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                           & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                          | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0)))))));
        bufp->chgCData(oldp+2299,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT____Vcellinp__second4__A) 
                                    << 4U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT____Vcellinp__second4__B) 
                                               << 3U) 
                                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT____Vcellinp__second4__C) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT____Vcellinp__second3__A) 
                                                     << 1U) 
                                                    | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT____Vcellinp__second3__B)))))),5);
        bufp->chgCData(oldp+2300,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT____Vcellinp__third2__A) 
                                    << 3U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT____Vcellinp__third2__B) 
                                               << 2U) 
                                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT____Vcellinp__third2__C) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT____Vcellinp__third1__A))))),4);
        bufp->chgCData(oldp+2301,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT____Vcellinp__fourth2__A) 
                                    << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT____Vcellinp__fourth2__B))),2);
        bufp->chgCData(oldp+2302,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT____Vcellinp__fifth1__A) 
                                    << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT____Vcellinp__fifth1__B))),2);
        bufp->chgBit(oldp+2303,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT__FifSig));
        bufp->chgBit(oldp+2304,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT____Vcellinp__fifth1__A));
        bufp->chgBit(oldp+2305,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT____Vcellinp__fifth1__B));
        bufp->chgBit(oldp+2306,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi__DOT____Vcellinp__sixth1__B));
        bufp->chgBit(oldp+2307,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xcU] 
                                               >> 3U)))));
        bufp->chgBit(oldp+2308,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xdU] 
                                               >> 3U)))));
        bufp->chgBit(oldp+2309,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xeU] 
                                               >> 3U)))));
        bufp->chgBit(oldp+2310,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi__DOT____Vcellinp__second1__C));
        bufp->chgBit(oldp+2311,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT____Vcellinp__second3__B));
        bufp->chgBit(oldp+2312,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [9U] 
                                               >> 3U)))));
        bufp->chgBit(oldp+2313,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xaU] 
                                               >> 3U)))));
        bufp->chgBit(oldp+2314,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xbU] 
                                               >> 3U)))));
        bufp->chgBit(oldp+2315,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi__DOT____Vcellinp__second1__B));
        bufp->chgBit(oldp+2316,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT____Vcellinp__second3__A));
        bufp->chgBit(oldp+2317,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [6U] 
                                               >> 3U)))));
        bufp->chgBit(oldp+2318,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [7U] 
                                               >> 3U)))));
        bufp->chgBit(oldp+2319,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [8U] 
                                               >> 3U)))));
        bufp->chgBit(oldp+2320,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi__DOT____Vcellinp__second1__A));
        bufp->chgBit(oldp+2321,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT____Vcellinp__second4__C));
        bufp->chgBit(oldp+2322,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [3U] 
                                               >> 3U)))));
        bufp->chgBit(oldp+2323,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [4U] 
                                               >> 3U)))));
        bufp->chgBit(oldp+2324,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [5U] 
                                               >> 3U)))));
        bufp->chgBit(oldp+2325,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi__DOT____Vcellinp__second2__C));
        bufp->chgBit(oldp+2326,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT____Vcellinp__second4__B));
        bufp->chgBit(oldp+2327,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0U] 
                                               >> 3U)))));
        bufp->chgBit(oldp+2328,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [1U] 
                                               >> 3U)))));
        bufp->chgBit(oldp+2329,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [2U] 
                                               >> 3U)))));
        bufp->chgBit(oldp+2330,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi__DOT____Vcellinp__second2__B));
        bufp->chgBit(oldp+2331,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT____Vcellinp__second4__A));
        bufp->chgBit(oldp+2332,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi__DOT____Vcellinp__fifth1__C));
        bufp->chgBit(oldp+2333,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT____Vcellinp__fourth2__A));
        bufp->chgBit(oldp+2334,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT____Vcellinp__fourth2__B));
        bufp->chgBit(oldp+2335,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi__DOT____Vcellinp__sixth1__C));
        bufp->chgBit(oldp+2336,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi__DOT____Vcellinp__third1__C));
        bufp->chgBit(oldp+2337,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT____Vcellinp__third1__A));
        bufp->chgBit(oldp+2338,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0x10U] 
                                               >> 3U)))));
        bufp->chgBit(oldp+2339,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi__DOT____Vcellinp__third1__B));
        bufp->chgBit(oldp+2340,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT____Vcellinp__third2__C));
        bufp->chgBit(oldp+2341,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xfU] 
                                               >> 3U)))));
        bufp->chgBit(oldp+2342,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi__DOT____Vcellinp__fourth1__C));
        bufp->chgBit(oldp+2343,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT____Vcellinp__third2__B));
        bufp->chgBit(oldp+2344,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi__DOT____Vcellinp__fourth1__B));
        bufp->chgBit(oldp+2345,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT____Vcellinp__third2__A));
        bufp->chgBit(oldp+2346,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi__DOT____Vcellinp__fourth1__A));
        bufp->chgBit(oldp+2347,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi__DOT____Vcellinp__fourth2__C));
        bufp->chgIData(oldp+2348,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__40__KET____DOT__bi__InData),17);
        bufp->chgBit(oldp+2349,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__40__KET____DOT__bi__DOT__FifSig) 
                                  & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__40__KET____DOT__bi__DOT____Vcellinp__sixth1__B) 
                                     | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__40__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__40__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0))));
        bufp->chgBit(oldp+2350,((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__40__KET____DOT__bi__DOT__FifSig)) 
                                  & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__40__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__40__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                 | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__40__KET____DOT__bi__DOT__FifSig)) 
                                     & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__40__KET____DOT__bi__DOT____Vcellinp__sixth1__C)) 
                                        & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__40__KET____DOT__bi__DOT____Vcellinp__sixth1__B))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__40__KET____DOT__bi__DOT__FifSig) 
                                       & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__40__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                           & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__40__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                          | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__40__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0)))))));
        bufp->chgCData(oldp+2351,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__40__KET____DOT__bi__DOT____Vcellinp__second4__A) 
                                    << 4U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__40__KET____DOT__bi__DOT____Vcellinp__second4__B) 
                                               << 3U) 
                                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__40__KET____DOT__bi__DOT____Vcellinp__second4__C) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__40__KET____DOT__bi__DOT____Vcellinp__second3__A) 
                                                     << 1U) 
                                                    | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__40__KET____DOT__bi__DOT____Vcellinp__second3__B)))))),5);
        bufp->chgCData(oldp+2352,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__40__KET____DOT__bi__DOT____Vcellinp__third2__A) 
                                    << 3U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__40__KET____DOT__bi__DOT____Vcellinp__third2__B) 
                                               << 2U) 
                                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__40__KET____DOT__bi__DOT____Vcellinp__third2__C) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__40__KET____DOT__bi__DOT____Vcellinp__third1__A))))),4);
        bufp->chgCData(oldp+2353,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__40__KET____DOT__bi__DOT____Vcellinp__fourth2__A) 
                                    << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__40__KET____DOT__bi__DOT____Vcellinp__fourth2__B))),2);
        bufp->chgCData(oldp+2354,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__40__KET____DOT__bi__DOT____Vcellinp__fifth1__A) 
                                    << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__40__KET____DOT__bi__DOT____Vcellinp__fifth1__B))),2);
        bufp->chgBit(oldp+2355,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__40__KET____DOT__bi__DOT__FifSig));
        bufp->chgBit(oldp+2356,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__40__KET____DOT__bi__DOT____Vcellinp__fifth1__A));
        bufp->chgBit(oldp+2357,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__40__KET____DOT__bi__DOT____Vcellinp__fifth1__B));
        bufp->chgBit(oldp+2358,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__41__KET____DOT__bi__DOT____Vcellinp__sixth1__B));
        bufp->chgBit(oldp+2359,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xcU] 
                                               >> 0x28U)))));
        bufp->chgBit(oldp+2360,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xdU] 
                                               >> 0x28U)))));
        bufp->chgBit(oldp+2361,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xeU] 
                                               >> 0x28U)))));
        bufp->chgBit(oldp+2362,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__41__KET____DOT__bi__DOT____Vcellinp__second1__C));
        bufp->chgBit(oldp+2363,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__40__KET____DOT__bi__DOT____Vcellinp__second3__B));
        bufp->chgBit(oldp+2364,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [9U] 
                                               >> 0x28U)))));
        bufp->chgBit(oldp+2365,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xaU] 
                                               >> 0x28U)))));
        bufp->chgBit(oldp+2366,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xbU] 
                                               >> 0x28U)))));
        bufp->chgBit(oldp+2367,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__41__KET____DOT__bi__DOT____Vcellinp__second1__B));
        bufp->chgBit(oldp+2368,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__40__KET____DOT__bi__DOT____Vcellinp__second3__A));
        bufp->chgBit(oldp+2369,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [6U] 
                                               >> 0x28U)))));
        bufp->chgBit(oldp+2370,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [7U] 
                                               >> 0x28U)))));
        bufp->chgBit(oldp+2371,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [8U] 
                                               >> 0x28U)))));
        bufp->chgBit(oldp+2372,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__41__KET____DOT__bi__DOT____Vcellinp__second1__A));
        bufp->chgBit(oldp+2373,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__40__KET____DOT__bi__DOT____Vcellinp__second4__C));
        bufp->chgBit(oldp+2374,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [3U] 
                                               >> 0x28U)))));
        bufp->chgBit(oldp+2375,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [4U] 
                                               >> 0x28U)))));
        bufp->chgBit(oldp+2376,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [5U] 
                                               >> 0x28U)))));
        bufp->chgBit(oldp+2377,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__41__KET____DOT__bi__DOT____Vcellinp__second2__C));
        bufp->chgBit(oldp+2378,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__40__KET____DOT__bi__DOT____Vcellinp__second4__B));
        bufp->chgBit(oldp+2379,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0U] 
                                               >> 0x28U)))));
        bufp->chgBit(oldp+2380,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [1U] 
                                               >> 0x28U)))));
        bufp->chgBit(oldp+2381,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [2U] 
                                               >> 0x28U)))));
        bufp->chgBit(oldp+2382,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__41__KET____DOT__bi__DOT____Vcellinp__second2__B));
        bufp->chgBit(oldp+2383,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__40__KET____DOT__bi__DOT____Vcellinp__second4__A));
        bufp->chgBit(oldp+2384,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__41__KET____DOT__bi__DOT____Vcellinp__fifth1__C));
        bufp->chgBit(oldp+2385,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__40__KET____DOT__bi__DOT____Vcellinp__fourth2__A));
        bufp->chgBit(oldp+2386,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__40__KET____DOT__bi__DOT____Vcellinp__fourth2__B));
        bufp->chgBit(oldp+2387,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__41__KET____DOT__bi__DOT____Vcellinp__sixth1__C));
        bufp->chgBit(oldp+2388,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__41__KET____DOT__bi__DOT____Vcellinp__third1__C));
        bufp->chgBit(oldp+2389,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__40__KET____DOT__bi__DOT____Vcellinp__third1__A));
        bufp->chgBit(oldp+2390,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0x10U] 
                                               >> 0x28U)))));
        bufp->chgBit(oldp+2391,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__41__KET____DOT__bi__DOT____Vcellinp__third1__B));
        bufp->chgBit(oldp+2392,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__40__KET____DOT__bi__DOT____Vcellinp__third2__C));
        bufp->chgBit(oldp+2393,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xfU] 
                                               >> 0x28U)))));
        bufp->chgBit(oldp+2394,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__41__KET____DOT__bi__DOT____Vcellinp__fourth1__C));
        bufp->chgBit(oldp+2395,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__40__KET____DOT__bi__DOT____Vcellinp__third2__B));
        bufp->chgBit(oldp+2396,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__41__KET____DOT__bi__DOT____Vcellinp__fourth1__B));
        bufp->chgBit(oldp+2397,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__40__KET____DOT__bi__DOT____Vcellinp__third2__A));
        bufp->chgBit(oldp+2398,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__41__KET____DOT__bi__DOT____Vcellinp__fourth1__A));
        bufp->chgBit(oldp+2399,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__41__KET____DOT__bi__DOT____Vcellinp__fourth2__C));
        bufp->chgIData(oldp+2400,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__41__KET____DOT__bi__InData),17);
        bufp->chgBit(oldp+2401,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__41__KET____DOT__bi__DOT__FifSig) 
                                  & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__41__KET____DOT__bi__DOT____Vcellinp__sixth1__B) 
                                     | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__41__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__41__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0))));
        bufp->chgBit(oldp+2402,((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__41__KET____DOT__bi__DOT__FifSig)) 
                                  & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__41__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__41__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                 | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__41__KET____DOT__bi__DOT__FifSig)) 
                                     & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__41__KET____DOT__bi__DOT____Vcellinp__sixth1__C)) 
                                        & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__41__KET____DOT__bi__DOT____Vcellinp__sixth1__B))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__41__KET____DOT__bi__DOT__FifSig) 
                                       & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__41__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                           & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__41__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                          | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__41__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0)))))));
        bufp->chgCData(oldp+2403,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__41__KET____DOT__bi__DOT____Vcellinp__second4__A) 
                                    << 4U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__41__KET____DOT__bi__DOT____Vcellinp__second4__B) 
                                               << 3U) 
                                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__41__KET____DOT__bi__DOT____Vcellinp__second4__C) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__41__KET____DOT__bi__DOT____Vcellinp__second3__A) 
                                                     << 1U) 
                                                    | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__41__KET____DOT__bi__DOT____Vcellinp__second3__B)))))),5);
        bufp->chgCData(oldp+2404,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__41__KET____DOT__bi__DOT____Vcellinp__third2__A) 
                                    << 3U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__41__KET____DOT__bi__DOT____Vcellinp__third2__B) 
                                               << 2U) 
                                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__41__KET____DOT__bi__DOT____Vcellinp__third2__C) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__41__KET____DOT__bi__DOT____Vcellinp__third1__A))))),4);
        bufp->chgCData(oldp+2405,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__41__KET____DOT__bi__DOT____Vcellinp__fourth2__A) 
                                    << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__41__KET____DOT__bi__DOT____Vcellinp__fourth2__B))),2);
        bufp->chgCData(oldp+2406,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__41__KET____DOT__bi__DOT____Vcellinp__fifth1__A) 
                                    << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__41__KET____DOT__bi__DOT____Vcellinp__fifth1__B))),2);
        bufp->chgBit(oldp+2407,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__41__KET____DOT__bi__DOT__FifSig));
        bufp->chgBit(oldp+2408,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__41__KET____DOT__bi__DOT____Vcellinp__fifth1__A));
        bufp->chgBit(oldp+2409,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__41__KET____DOT__bi__DOT____Vcellinp__fifth1__B));
        bufp->chgBit(oldp+2410,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__42__KET____DOT__bi__DOT____Vcellinp__sixth1__B));
        bufp->chgBit(oldp+2411,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xcU] 
                                               >> 0x29U)))));
        bufp->chgBit(oldp+2412,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xdU] 
                                               >> 0x29U)))));
        bufp->chgBit(oldp+2413,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xeU] 
                                               >> 0x29U)))));
        bufp->chgBit(oldp+2414,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__42__KET____DOT__bi__DOT____Vcellinp__second1__C));
        bufp->chgBit(oldp+2415,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__41__KET____DOT__bi__DOT____Vcellinp__second3__B));
        bufp->chgBit(oldp+2416,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [9U] 
                                               >> 0x29U)))));
        bufp->chgBit(oldp+2417,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xaU] 
                                               >> 0x29U)))));
        bufp->chgBit(oldp+2418,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xbU] 
                                               >> 0x29U)))));
        bufp->chgBit(oldp+2419,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__42__KET____DOT__bi__DOT____Vcellinp__second1__B));
        bufp->chgBit(oldp+2420,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__41__KET____DOT__bi__DOT____Vcellinp__second3__A));
        bufp->chgBit(oldp+2421,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [6U] 
                                               >> 0x29U)))));
        bufp->chgBit(oldp+2422,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [7U] 
                                               >> 0x29U)))));
        bufp->chgBit(oldp+2423,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [8U] 
                                               >> 0x29U)))));
        bufp->chgBit(oldp+2424,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__42__KET____DOT__bi__DOT____Vcellinp__second1__A));
        bufp->chgBit(oldp+2425,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__41__KET____DOT__bi__DOT____Vcellinp__second4__C));
        bufp->chgBit(oldp+2426,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [3U] 
                                               >> 0x29U)))));
        bufp->chgBit(oldp+2427,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [4U] 
                                               >> 0x29U)))));
        bufp->chgBit(oldp+2428,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [5U] 
                                               >> 0x29U)))));
        bufp->chgBit(oldp+2429,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__42__KET____DOT__bi__DOT____Vcellinp__second2__C));
        bufp->chgBit(oldp+2430,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__41__KET____DOT__bi__DOT____Vcellinp__second4__B));
        bufp->chgBit(oldp+2431,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0U] 
                                               >> 0x29U)))));
        bufp->chgBit(oldp+2432,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [1U] 
                                               >> 0x29U)))));
        bufp->chgBit(oldp+2433,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [2U] 
                                               >> 0x29U)))));
        bufp->chgBit(oldp+2434,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__42__KET____DOT__bi__DOT____Vcellinp__second2__B));
        bufp->chgBit(oldp+2435,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__41__KET____DOT__bi__DOT____Vcellinp__second4__A));
        bufp->chgBit(oldp+2436,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__42__KET____DOT__bi__DOT____Vcellinp__fifth1__C));
        bufp->chgBit(oldp+2437,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__41__KET____DOT__bi__DOT____Vcellinp__fourth2__A));
        bufp->chgBit(oldp+2438,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__41__KET____DOT__bi__DOT____Vcellinp__fourth2__B));
        bufp->chgBit(oldp+2439,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__42__KET____DOT__bi__DOT____Vcellinp__sixth1__C));
        bufp->chgBit(oldp+2440,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__42__KET____DOT__bi__DOT____Vcellinp__third1__C));
        bufp->chgBit(oldp+2441,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__41__KET____DOT__bi__DOT____Vcellinp__third1__A));
        bufp->chgBit(oldp+2442,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0x10U] 
                                               >> 0x29U)))));
        bufp->chgBit(oldp+2443,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__42__KET____DOT__bi__DOT____Vcellinp__third1__B));
        bufp->chgBit(oldp+2444,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__41__KET____DOT__bi__DOT____Vcellinp__third2__C));
        bufp->chgBit(oldp+2445,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xfU] 
                                               >> 0x29U)))));
        bufp->chgBit(oldp+2446,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__42__KET____DOT__bi__DOT____Vcellinp__fourth1__C));
        bufp->chgBit(oldp+2447,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__41__KET____DOT__bi__DOT____Vcellinp__third2__B));
        bufp->chgBit(oldp+2448,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__42__KET____DOT__bi__DOT____Vcellinp__fourth1__B));
        bufp->chgBit(oldp+2449,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__41__KET____DOT__bi__DOT____Vcellinp__third2__A));
        bufp->chgBit(oldp+2450,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__42__KET____DOT__bi__DOT____Vcellinp__fourth1__A));
        bufp->chgBit(oldp+2451,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__42__KET____DOT__bi__DOT____Vcellinp__fourth2__C));
        bufp->chgIData(oldp+2452,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__42__KET____DOT__bi__InData),17);
        bufp->chgBit(oldp+2453,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__42__KET____DOT__bi__DOT__FifSig) 
                                  & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__42__KET____DOT__bi__DOT____Vcellinp__sixth1__B) 
                                     | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__42__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__42__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0))));
        bufp->chgBit(oldp+2454,((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__42__KET____DOT__bi__DOT__FifSig)) 
                                  & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__42__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__42__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                 | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__42__KET____DOT__bi__DOT__FifSig)) 
                                     & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__42__KET____DOT__bi__DOT____Vcellinp__sixth1__C)) 
                                        & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__42__KET____DOT__bi__DOT____Vcellinp__sixth1__B))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__42__KET____DOT__bi__DOT__FifSig) 
                                       & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__42__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                           & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__42__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                          | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__42__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0)))))));
        bufp->chgCData(oldp+2455,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__42__KET____DOT__bi__DOT____Vcellinp__second4__A) 
                                    << 4U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__42__KET____DOT__bi__DOT____Vcellinp__second4__B) 
                                               << 3U) 
                                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__42__KET____DOT__bi__DOT____Vcellinp__second4__C) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__42__KET____DOT__bi__DOT____Vcellinp__second3__A) 
                                                     << 1U) 
                                                    | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__42__KET____DOT__bi__DOT____Vcellinp__second3__B)))))),5);
        bufp->chgCData(oldp+2456,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__42__KET____DOT__bi__DOT____Vcellinp__third2__A) 
                                    << 3U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__42__KET____DOT__bi__DOT____Vcellinp__third2__B) 
                                               << 2U) 
                                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__42__KET____DOT__bi__DOT____Vcellinp__third2__C) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__42__KET____DOT__bi__DOT____Vcellinp__third1__A))))),4);
        bufp->chgCData(oldp+2457,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__42__KET____DOT__bi__DOT____Vcellinp__fourth2__A) 
                                    << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__42__KET____DOT__bi__DOT____Vcellinp__fourth2__B))),2);
        bufp->chgCData(oldp+2458,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__42__KET____DOT__bi__DOT____Vcellinp__fifth1__A) 
                                    << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__42__KET____DOT__bi__DOT____Vcellinp__fifth1__B))),2);
        bufp->chgBit(oldp+2459,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__42__KET____DOT__bi__DOT__FifSig));
        bufp->chgBit(oldp+2460,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__42__KET____DOT__bi__DOT____Vcellinp__fifth1__A));
        bufp->chgBit(oldp+2461,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__42__KET____DOT__bi__DOT____Vcellinp__fifth1__B));
        bufp->chgBit(oldp+2462,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__43__KET____DOT__bi__DOT____Vcellinp__sixth1__B));
        bufp->chgBit(oldp+2463,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xcU] 
                                               >> 0x2aU)))));
        bufp->chgBit(oldp+2464,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xdU] 
                                               >> 0x2aU)))));
        bufp->chgBit(oldp+2465,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xeU] 
                                               >> 0x2aU)))));
        bufp->chgBit(oldp+2466,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__43__KET____DOT__bi__DOT____Vcellinp__second1__C));
        bufp->chgBit(oldp+2467,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__42__KET____DOT__bi__DOT____Vcellinp__second3__B));
        bufp->chgBit(oldp+2468,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [9U] 
                                               >> 0x2aU)))));
        bufp->chgBit(oldp+2469,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xaU] 
                                               >> 0x2aU)))));
        bufp->chgBit(oldp+2470,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xbU] 
                                               >> 0x2aU)))));
        bufp->chgBit(oldp+2471,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__43__KET____DOT__bi__DOT____Vcellinp__second1__B));
        bufp->chgBit(oldp+2472,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__42__KET____DOT__bi__DOT____Vcellinp__second3__A));
        bufp->chgBit(oldp+2473,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [6U] 
                                               >> 0x2aU)))));
        bufp->chgBit(oldp+2474,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [7U] 
                                               >> 0x2aU)))));
        bufp->chgBit(oldp+2475,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [8U] 
                                               >> 0x2aU)))));
        bufp->chgBit(oldp+2476,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__43__KET____DOT__bi__DOT____Vcellinp__second1__A));
        bufp->chgBit(oldp+2477,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__42__KET____DOT__bi__DOT____Vcellinp__second4__C));
        bufp->chgBit(oldp+2478,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [3U] 
                                               >> 0x2aU)))));
        bufp->chgBit(oldp+2479,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [4U] 
                                               >> 0x2aU)))));
        bufp->chgBit(oldp+2480,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [5U] 
                                               >> 0x2aU)))));
        bufp->chgBit(oldp+2481,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__43__KET____DOT__bi__DOT____Vcellinp__second2__C));
        bufp->chgBit(oldp+2482,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__42__KET____DOT__bi__DOT____Vcellinp__second4__B));
        bufp->chgBit(oldp+2483,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0U] 
                                               >> 0x2aU)))));
        bufp->chgBit(oldp+2484,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [1U] 
                                               >> 0x2aU)))));
        bufp->chgBit(oldp+2485,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [2U] 
                                               >> 0x2aU)))));
        bufp->chgBit(oldp+2486,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__43__KET____DOT__bi__DOT____Vcellinp__second2__B));
        bufp->chgBit(oldp+2487,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__42__KET____DOT__bi__DOT____Vcellinp__second4__A));
        bufp->chgBit(oldp+2488,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__43__KET____DOT__bi__DOT____Vcellinp__fifth1__C));
        bufp->chgBit(oldp+2489,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__42__KET____DOT__bi__DOT____Vcellinp__fourth2__A));
        bufp->chgBit(oldp+2490,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__42__KET____DOT__bi__DOT____Vcellinp__fourth2__B));
        bufp->chgBit(oldp+2491,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__43__KET____DOT__bi__DOT____Vcellinp__sixth1__C));
        bufp->chgBit(oldp+2492,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__43__KET____DOT__bi__DOT____Vcellinp__third1__C));
        bufp->chgBit(oldp+2493,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__42__KET____DOT__bi__DOT____Vcellinp__third1__A));
        bufp->chgBit(oldp+2494,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0x10U] 
                                               >> 0x2aU)))));
        bufp->chgBit(oldp+2495,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__43__KET____DOT__bi__DOT____Vcellinp__third1__B));
        bufp->chgBit(oldp+2496,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__42__KET____DOT__bi__DOT____Vcellinp__third2__C));
        bufp->chgBit(oldp+2497,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xfU] 
                                               >> 0x2aU)))));
        bufp->chgBit(oldp+2498,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__43__KET____DOT__bi__DOT____Vcellinp__fourth1__C));
        bufp->chgBit(oldp+2499,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__42__KET____DOT__bi__DOT____Vcellinp__third2__B));
        bufp->chgBit(oldp+2500,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__43__KET____DOT__bi__DOT____Vcellinp__fourth1__B));
        bufp->chgBit(oldp+2501,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__42__KET____DOT__bi__DOT____Vcellinp__third2__A));
        bufp->chgBit(oldp+2502,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__43__KET____DOT__bi__DOT____Vcellinp__fourth1__A));
        bufp->chgBit(oldp+2503,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__43__KET____DOT__bi__DOT____Vcellinp__fourth2__C));
        bufp->chgIData(oldp+2504,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__43__KET____DOT__bi__InData),17);
        bufp->chgBit(oldp+2505,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__43__KET____DOT__bi__DOT__FifSig) 
                                  & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__43__KET____DOT__bi__DOT____Vcellinp__sixth1__B) 
                                     | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__43__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__43__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0))));
        bufp->chgBit(oldp+2506,((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__43__KET____DOT__bi__DOT__FifSig)) 
                                  & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__43__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__43__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                 | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__43__KET____DOT__bi__DOT__FifSig)) 
                                     & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__43__KET____DOT__bi__DOT____Vcellinp__sixth1__C)) 
                                        & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__43__KET____DOT__bi__DOT____Vcellinp__sixth1__B))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__43__KET____DOT__bi__DOT__FifSig) 
                                       & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__43__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                           & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__43__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                          | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__43__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0)))))));
        bufp->chgCData(oldp+2507,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__43__KET____DOT__bi__DOT____Vcellinp__second4__A) 
                                    << 4U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__43__KET____DOT__bi__DOT____Vcellinp__second4__B) 
                                               << 3U) 
                                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__43__KET____DOT__bi__DOT____Vcellinp__second4__C) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__43__KET____DOT__bi__DOT____Vcellinp__second3__A) 
                                                     << 1U) 
                                                    | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__43__KET____DOT__bi__DOT____Vcellinp__second3__B)))))),5);
        bufp->chgCData(oldp+2508,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__43__KET____DOT__bi__DOT____Vcellinp__third2__A) 
                                    << 3U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__43__KET____DOT__bi__DOT____Vcellinp__third2__B) 
                                               << 2U) 
                                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__43__KET____DOT__bi__DOT____Vcellinp__third2__C) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__43__KET____DOT__bi__DOT____Vcellinp__third1__A))))),4);
        bufp->chgCData(oldp+2509,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__43__KET____DOT__bi__DOT____Vcellinp__fourth2__A) 
                                    << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__43__KET____DOT__bi__DOT____Vcellinp__fourth2__B))),2);
        bufp->chgCData(oldp+2510,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__43__KET____DOT__bi__DOT____Vcellinp__fifth1__A) 
                                    << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__43__KET____DOT__bi__DOT____Vcellinp__fifth1__B))),2);
        bufp->chgBit(oldp+2511,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__43__KET____DOT__bi__DOT__FifSig));
        bufp->chgBit(oldp+2512,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__43__KET____DOT__bi__DOT____Vcellinp__fifth1__A));
        bufp->chgBit(oldp+2513,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__43__KET____DOT__bi__DOT____Vcellinp__fifth1__B));
        bufp->chgBit(oldp+2514,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__44__KET____DOT__bi__DOT____Vcellinp__sixth1__B));
        bufp->chgBit(oldp+2515,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xcU] 
                                               >> 0x2bU)))));
        bufp->chgBit(oldp+2516,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xdU] 
                                               >> 0x2bU)))));
        bufp->chgBit(oldp+2517,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xeU] 
                                               >> 0x2bU)))));
        bufp->chgBit(oldp+2518,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__44__KET____DOT__bi__DOT____Vcellinp__second1__C));
        bufp->chgBit(oldp+2519,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__43__KET____DOT__bi__DOT____Vcellinp__second3__B));
        bufp->chgBit(oldp+2520,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [9U] 
                                               >> 0x2bU)))));
        bufp->chgBit(oldp+2521,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xaU] 
                                               >> 0x2bU)))));
        bufp->chgBit(oldp+2522,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xbU] 
                                               >> 0x2bU)))));
        bufp->chgBit(oldp+2523,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__44__KET____DOT__bi__DOT____Vcellinp__second1__B));
        bufp->chgBit(oldp+2524,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__43__KET____DOT__bi__DOT____Vcellinp__second3__A));
        bufp->chgBit(oldp+2525,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [6U] 
                                               >> 0x2bU)))));
        bufp->chgBit(oldp+2526,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [7U] 
                                               >> 0x2bU)))));
        bufp->chgBit(oldp+2527,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [8U] 
                                               >> 0x2bU)))));
        bufp->chgBit(oldp+2528,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__44__KET____DOT__bi__DOT____Vcellinp__second1__A));
        bufp->chgBit(oldp+2529,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__43__KET____DOT__bi__DOT____Vcellinp__second4__C));
        bufp->chgBit(oldp+2530,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [3U] 
                                               >> 0x2bU)))));
        bufp->chgBit(oldp+2531,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [4U] 
                                               >> 0x2bU)))));
        bufp->chgBit(oldp+2532,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [5U] 
                                               >> 0x2bU)))));
        bufp->chgBit(oldp+2533,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__44__KET____DOT__bi__DOT____Vcellinp__second2__C));
        bufp->chgBit(oldp+2534,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__43__KET____DOT__bi__DOT____Vcellinp__second4__B));
        bufp->chgBit(oldp+2535,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0U] 
                                               >> 0x2bU)))));
        bufp->chgBit(oldp+2536,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [1U] 
                                               >> 0x2bU)))));
        bufp->chgBit(oldp+2537,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [2U] 
                                               >> 0x2bU)))));
        bufp->chgBit(oldp+2538,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__44__KET____DOT__bi__DOT____Vcellinp__second2__B));
        bufp->chgBit(oldp+2539,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__43__KET____DOT__bi__DOT____Vcellinp__second4__A));
        bufp->chgBit(oldp+2540,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__44__KET____DOT__bi__DOT____Vcellinp__fifth1__C));
        bufp->chgBit(oldp+2541,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__43__KET____DOT__bi__DOT____Vcellinp__fourth2__A));
        bufp->chgBit(oldp+2542,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__43__KET____DOT__bi__DOT____Vcellinp__fourth2__B));
        bufp->chgBit(oldp+2543,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__44__KET____DOT__bi__DOT____Vcellinp__sixth1__C));
        bufp->chgBit(oldp+2544,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__44__KET____DOT__bi__DOT____Vcellinp__third1__C));
        bufp->chgBit(oldp+2545,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__43__KET____DOT__bi__DOT____Vcellinp__third1__A));
        bufp->chgBit(oldp+2546,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0x10U] 
                                               >> 0x2bU)))));
        bufp->chgBit(oldp+2547,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__44__KET____DOT__bi__DOT____Vcellinp__third1__B));
        bufp->chgBit(oldp+2548,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__43__KET____DOT__bi__DOT____Vcellinp__third2__C));
        bufp->chgBit(oldp+2549,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xfU] 
                                               >> 0x2bU)))));
        bufp->chgBit(oldp+2550,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__44__KET____DOT__bi__DOT____Vcellinp__fourth1__C));
        bufp->chgBit(oldp+2551,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__43__KET____DOT__bi__DOT____Vcellinp__third2__B));
        bufp->chgBit(oldp+2552,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__44__KET____DOT__bi__DOT____Vcellinp__fourth1__B));
        bufp->chgBit(oldp+2553,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__43__KET____DOT__bi__DOT____Vcellinp__third2__A));
        bufp->chgBit(oldp+2554,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__44__KET____DOT__bi__DOT____Vcellinp__fourth1__A));
        bufp->chgBit(oldp+2555,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__44__KET____DOT__bi__DOT____Vcellinp__fourth2__C));
        bufp->chgIData(oldp+2556,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__44__KET____DOT__bi__InData),17);
        bufp->chgBit(oldp+2557,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__44__KET____DOT__bi__DOT__FifSig) 
                                  & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__44__KET____DOT__bi__DOT____Vcellinp__sixth1__B) 
                                     | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__44__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__44__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0))));
        bufp->chgBit(oldp+2558,((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__44__KET____DOT__bi__DOT__FifSig)) 
                                  & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__44__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__44__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                 | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__44__KET____DOT__bi__DOT__FifSig)) 
                                     & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__44__KET____DOT__bi__DOT____Vcellinp__sixth1__C)) 
                                        & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__44__KET____DOT__bi__DOT____Vcellinp__sixth1__B))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__44__KET____DOT__bi__DOT__FifSig) 
                                       & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__44__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                           & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__44__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                          | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__44__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0)))))));
        bufp->chgCData(oldp+2559,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__44__KET____DOT__bi__DOT____Vcellinp__second4__A) 
                                    << 4U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__44__KET____DOT__bi__DOT____Vcellinp__second4__B) 
                                               << 3U) 
                                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__44__KET____DOT__bi__DOT____Vcellinp__second4__C) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__44__KET____DOT__bi__DOT____Vcellinp__second3__A) 
                                                     << 1U) 
                                                    | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__44__KET____DOT__bi__DOT____Vcellinp__second3__B)))))),5);
        bufp->chgCData(oldp+2560,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__44__KET____DOT__bi__DOT____Vcellinp__third2__A) 
                                    << 3U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__44__KET____DOT__bi__DOT____Vcellinp__third2__B) 
                                               << 2U) 
                                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__44__KET____DOT__bi__DOT____Vcellinp__third2__C) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__44__KET____DOT__bi__DOT____Vcellinp__third1__A))))),4);
        bufp->chgCData(oldp+2561,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__44__KET____DOT__bi__DOT____Vcellinp__fourth2__A) 
                                    << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__44__KET____DOT__bi__DOT____Vcellinp__fourth2__B))),2);
        bufp->chgCData(oldp+2562,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__44__KET____DOT__bi__DOT____Vcellinp__fifth1__A) 
                                    << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__44__KET____DOT__bi__DOT____Vcellinp__fifth1__B))),2);
        bufp->chgBit(oldp+2563,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__44__KET____DOT__bi__DOT__FifSig));
        bufp->chgBit(oldp+2564,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__44__KET____DOT__bi__DOT____Vcellinp__fifth1__A));
        bufp->chgBit(oldp+2565,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__44__KET____DOT__bi__DOT____Vcellinp__fifth1__B));
        bufp->chgBit(oldp+2566,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT____Vcellinp__sixth1__B));
        bufp->chgBit(oldp+2567,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xcU] 
                                               >> 0x2cU)))));
        bufp->chgBit(oldp+2568,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xdU] 
                                               >> 0x2cU)))));
        bufp->chgBit(oldp+2569,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xeU] 
                                               >> 0x2cU)))));
        bufp->chgBit(oldp+2570,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT____Vcellinp__second1__C));
        bufp->chgBit(oldp+2571,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__44__KET____DOT__bi__DOT____Vcellinp__second3__B));
        bufp->chgBit(oldp+2572,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [9U] 
                                               >> 0x2cU)))));
        bufp->chgBit(oldp+2573,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xaU] 
                                               >> 0x2cU)))));
        bufp->chgBit(oldp+2574,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xbU] 
                                               >> 0x2cU)))));
        bufp->chgBit(oldp+2575,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT____Vcellinp__second1__B));
        bufp->chgBit(oldp+2576,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__44__KET____DOT__bi__DOT____Vcellinp__second3__A));
        bufp->chgBit(oldp+2577,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [6U] 
                                               >> 0x2cU)))));
        bufp->chgBit(oldp+2578,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [7U] 
                                               >> 0x2cU)))));
        bufp->chgBit(oldp+2579,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [8U] 
                                               >> 0x2cU)))));
        bufp->chgBit(oldp+2580,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT____Vcellinp__second1__A));
        bufp->chgBit(oldp+2581,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__44__KET____DOT__bi__DOT____Vcellinp__second4__C));
        bufp->chgBit(oldp+2582,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [3U] 
                                               >> 0x2cU)))));
        bufp->chgBit(oldp+2583,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [4U] 
                                               >> 0x2cU)))));
        bufp->chgBit(oldp+2584,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [5U] 
                                               >> 0x2cU)))));
        bufp->chgBit(oldp+2585,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT____Vcellinp__second2__C));
        bufp->chgBit(oldp+2586,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__44__KET____DOT__bi__DOT____Vcellinp__second4__B));
        bufp->chgBit(oldp+2587,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0U] 
                                               >> 0x2cU)))));
        bufp->chgBit(oldp+2588,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [1U] 
                                               >> 0x2cU)))));
        bufp->chgBit(oldp+2589,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [2U] 
                                               >> 0x2cU)))));
        bufp->chgBit(oldp+2590,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT____Vcellinp__second2__B));
        bufp->chgBit(oldp+2591,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__44__KET____DOT__bi__DOT____Vcellinp__second4__A));
        bufp->chgBit(oldp+2592,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT____Vcellinp__fifth1__C));
        bufp->chgBit(oldp+2593,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__44__KET____DOT__bi__DOT____Vcellinp__fourth2__A));
        bufp->chgBit(oldp+2594,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__44__KET____DOT__bi__DOT____Vcellinp__fourth2__B));
        bufp->chgBit(oldp+2595,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT____Vcellinp__sixth1__C));
        bufp->chgBit(oldp+2596,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT____Vcellinp__third1__C));
        bufp->chgBit(oldp+2597,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__44__KET____DOT__bi__DOT____Vcellinp__third1__A));
        bufp->chgBit(oldp+2598,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0x10U] 
                                               >> 0x2cU)))));
        bufp->chgBit(oldp+2599,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT____Vcellinp__third1__B));
        bufp->chgBit(oldp+2600,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__44__KET____DOT__bi__DOT____Vcellinp__third2__C));
        bufp->chgBit(oldp+2601,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xfU] 
                                               >> 0x2cU)))));
        bufp->chgBit(oldp+2602,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT____Vcellinp__fourth1__C));
        bufp->chgBit(oldp+2603,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__44__KET____DOT__bi__DOT____Vcellinp__third2__B));
        bufp->chgBit(oldp+2604,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT____Vcellinp__fourth1__B));
        bufp->chgBit(oldp+2605,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__44__KET____DOT__bi__DOT____Vcellinp__third2__A));
        bufp->chgBit(oldp+2606,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT____Vcellinp__fourth1__A));
        bufp->chgBit(oldp+2607,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT____Vcellinp__fourth2__C));
        bufp->chgIData(oldp+2608,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__45__KET____DOT__bi__InData),17);
        bufp->chgBit(oldp+2609,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT__FifSig) 
                                  & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT____Vcellinp__sixth1__B) 
                                     | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0))));
        bufp->chgBit(oldp+2610,((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT__FifSig)) 
                                  & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                 | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT__FifSig)) 
                                     & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT____Vcellinp__sixth1__C)) 
                                        & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT____Vcellinp__sixth1__B))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT__FifSig) 
                                       & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                           & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                          | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0)))))));
        bufp->chgCData(oldp+2611,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT____Vcellinp__second4__A) 
                                    << 4U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT____Vcellinp__second4__B) 
                                               << 3U) 
                                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT____Vcellinp__second4__C) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT____Vcellinp__second3__A) 
                                                     << 1U) 
                                                    | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT____Vcellinp__second3__B)))))),5);
        bufp->chgCData(oldp+2612,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT____Vcellinp__third2__A) 
                                    << 3U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT____Vcellinp__third2__B) 
                                               << 2U) 
                                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT____Vcellinp__third2__C) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT____Vcellinp__third1__A))))),4);
        bufp->chgCData(oldp+2613,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT____Vcellinp__fourth2__A) 
                                    << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT____Vcellinp__fourth2__B))),2);
        bufp->chgCData(oldp+2614,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT____Vcellinp__fifth1__A) 
                                    << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT____Vcellinp__fifth1__B))),2);
        bufp->chgBit(oldp+2615,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT__FifSig));
        bufp->chgBit(oldp+2616,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT____Vcellinp__fifth1__A));
        bufp->chgBit(oldp+2617,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT____Vcellinp__fifth1__B));
        bufp->chgBit(oldp+2618,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT____Vcellinp__sixth1__B));
        bufp->chgBit(oldp+2619,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xcU] 
                                               >> 0x2dU)))));
        bufp->chgBit(oldp+2620,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xdU] 
                                               >> 0x2dU)))));
        bufp->chgBit(oldp+2621,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xeU] 
                                               >> 0x2dU)))));
        bufp->chgBit(oldp+2622,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT____Vcellinp__second1__C));
        bufp->chgBit(oldp+2623,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT____Vcellinp__second3__B));
        bufp->chgBit(oldp+2624,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [9U] 
                                               >> 0x2dU)))));
        bufp->chgBit(oldp+2625,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xaU] 
                                               >> 0x2dU)))));
        bufp->chgBit(oldp+2626,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xbU] 
                                               >> 0x2dU)))));
        bufp->chgBit(oldp+2627,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT____Vcellinp__second1__B));
        bufp->chgBit(oldp+2628,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT____Vcellinp__second3__A));
        bufp->chgBit(oldp+2629,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [6U] 
                                               >> 0x2dU)))));
        bufp->chgBit(oldp+2630,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [7U] 
                                               >> 0x2dU)))));
        bufp->chgBit(oldp+2631,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [8U] 
                                               >> 0x2dU)))));
        bufp->chgBit(oldp+2632,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT____Vcellinp__second1__A));
        bufp->chgBit(oldp+2633,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT____Vcellinp__second4__C));
        bufp->chgBit(oldp+2634,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [3U] 
                                               >> 0x2dU)))));
        bufp->chgBit(oldp+2635,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [4U] 
                                               >> 0x2dU)))));
        bufp->chgBit(oldp+2636,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [5U] 
                                               >> 0x2dU)))));
        bufp->chgBit(oldp+2637,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT____Vcellinp__second2__C));
        bufp->chgBit(oldp+2638,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT____Vcellinp__second4__B));
        bufp->chgBit(oldp+2639,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0U] 
                                               >> 0x2dU)))));
        bufp->chgBit(oldp+2640,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [1U] 
                                               >> 0x2dU)))));
        bufp->chgBit(oldp+2641,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [2U] 
                                               >> 0x2dU)))));
        bufp->chgBit(oldp+2642,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT____Vcellinp__second2__B));
        bufp->chgBit(oldp+2643,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT____Vcellinp__second4__A));
        bufp->chgBit(oldp+2644,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT____Vcellinp__fifth1__C));
        bufp->chgBit(oldp+2645,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT____Vcellinp__fourth2__A));
        bufp->chgBit(oldp+2646,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT____Vcellinp__fourth2__B));
        bufp->chgBit(oldp+2647,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT____Vcellinp__sixth1__C));
        bufp->chgBit(oldp+2648,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT____Vcellinp__third1__C));
        bufp->chgBit(oldp+2649,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT____Vcellinp__third1__A));
        bufp->chgBit(oldp+2650,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0x10U] 
                                               >> 0x2dU)))));
        bufp->chgBit(oldp+2651,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT____Vcellinp__third1__B));
        bufp->chgBit(oldp+2652,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT____Vcellinp__third2__C));
        bufp->chgBit(oldp+2653,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xfU] 
                                               >> 0x2dU)))));
        bufp->chgBit(oldp+2654,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT____Vcellinp__fourth1__C));
        bufp->chgBit(oldp+2655,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT____Vcellinp__third2__B));
        bufp->chgBit(oldp+2656,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT____Vcellinp__fourth1__B));
        bufp->chgBit(oldp+2657,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT____Vcellinp__third2__A));
        bufp->chgBit(oldp+2658,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT____Vcellinp__fourth1__A));
        bufp->chgBit(oldp+2659,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT____Vcellinp__fourth2__C));
        bufp->chgIData(oldp+2660,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__46__KET____DOT__bi__InData),17);
        bufp->chgBit(oldp+2661,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT__FifSig) 
                                  & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT____Vcellinp__sixth1__B) 
                                     | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0))));
        bufp->chgBit(oldp+2662,((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT__FifSig)) 
                                  & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                 | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT__FifSig)) 
                                     & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT____Vcellinp__sixth1__C)) 
                                        & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT____Vcellinp__sixth1__B))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT__FifSig) 
                                       & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                           & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                          | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0)))))));
        bufp->chgCData(oldp+2663,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT____Vcellinp__second4__A) 
                                    << 4U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT____Vcellinp__second4__B) 
                                               << 3U) 
                                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT____Vcellinp__second4__C) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT____Vcellinp__second3__A) 
                                                     << 1U) 
                                                    | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT____Vcellinp__second3__B)))))),5);
        bufp->chgCData(oldp+2664,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT____Vcellinp__third2__A) 
                                    << 3U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT____Vcellinp__third2__B) 
                                               << 2U) 
                                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT____Vcellinp__third2__C) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT____Vcellinp__third1__A))))),4);
        bufp->chgCData(oldp+2665,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT____Vcellinp__fourth2__A) 
                                    << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT____Vcellinp__fourth2__B))),2);
        bufp->chgCData(oldp+2666,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT____Vcellinp__fifth1__A) 
                                    << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT____Vcellinp__fifth1__B))),2);
        bufp->chgBit(oldp+2667,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT__FifSig));
        bufp->chgBit(oldp+2668,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT____Vcellinp__fifth1__A));
        bufp->chgBit(oldp+2669,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT____Vcellinp__fifth1__B));
        bufp->chgBit(oldp+2670,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT____Vcellinp__sixth1__B));
        bufp->chgBit(oldp+2671,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xcU] 
                                               >> 0x2eU)))));
        bufp->chgBit(oldp+2672,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xdU] 
                                               >> 0x2eU)))));
        bufp->chgBit(oldp+2673,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xeU] 
                                               >> 0x2eU)))));
        bufp->chgBit(oldp+2674,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT____Vcellinp__second1__C));
        bufp->chgBit(oldp+2675,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT____Vcellinp__second3__B));
        bufp->chgBit(oldp+2676,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [9U] 
                                               >> 0x2eU)))));
        bufp->chgBit(oldp+2677,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xaU] 
                                               >> 0x2eU)))));
        bufp->chgBit(oldp+2678,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xbU] 
                                               >> 0x2eU)))));
        bufp->chgBit(oldp+2679,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT____Vcellinp__second1__B));
        bufp->chgBit(oldp+2680,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT____Vcellinp__second3__A));
        bufp->chgBit(oldp+2681,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [6U] 
                                               >> 0x2eU)))));
        bufp->chgBit(oldp+2682,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [7U] 
                                               >> 0x2eU)))));
        bufp->chgBit(oldp+2683,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [8U] 
                                               >> 0x2eU)))));
        bufp->chgBit(oldp+2684,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT____Vcellinp__second1__A));
        bufp->chgBit(oldp+2685,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT____Vcellinp__second4__C));
        bufp->chgBit(oldp+2686,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [3U] 
                                               >> 0x2eU)))));
        bufp->chgBit(oldp+2687,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [4U] 
                                               >> 0x2eU)))));
        bufp->chgBit(oldp+2688,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [5U] 
                                               >> 0x2eU)))));
        bufp->chgBit(oldp+2689,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT____Vcellinp__second2__C));
        bufp->chgBit(oldp+2690,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT____Vcellinp__second4__B));
        bufp->chgBit(oldp+2691,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0U] 
                                               >> 0x2eU)))));
        bufp->chgBit(oldp+2692,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [1U] 
                                               >> 0x2eU)))));
        bufp->chgBit(oldp+2693,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [2U] 
                                               >> 0x2eU)))));
        bufp->chgBit(oldp+2694,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT____Vcellinp__second2__B));
        bufp->chgBit(oldp+2695,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT____Vcellinp__second4__A));
        bufp->chgBit(oldp+2696,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT____Vcellinp__fifth1__C));
        bufp->chgBit(oldp+2697,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT____Vcellinp__fourth2__A));
        bufp->chgBit(oldp+2698,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT____Vcellinp__fourth2__B));
        bufp->chgBit(oldp+2699,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT____Vcellinp__sixth1__C));
        bufp->chgBit(oldp+2700,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT____Vcellinp__third1__C));
        bufp->chgBit(oldp+2701,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT____Vcellinp__third1__A));
        bufp->chgBit(oldp+2702,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0x10U] 
                                               >> 0x2eU)))));
        bufp->chgBit(oldp+2703,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT____Vcellinp__third1__B));
        bufp->chgBit(oldp+2704,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT____Vcellinp__third2__C));
        bufp->chgBit(oldp+2705,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xfU] 
                                               >> 0x2eU)))));
        bufp->chgBit(oldp+2706,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT____Vcellinp__fourth1__C));
        bufp->chgBit(oldp+2707,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT____Vcellinp__third2__B));
        bufp->chgBit(oldp+2708,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT____Vcellinp__fourth1__B));
        bufp->chgBit(oldp+2709,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT____Vcellinp__third2__A));
        bufp->chgBit(oldp+2710,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT____Vcellinp__fourth1__A));
        bufp->chgBit(oldp+2711,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT____Vcellinp__fourth2__C));
        bufp->chgIData(oldp+2712,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__47__KET____DOT__bi__InData),17);
        bufp->chgBit(oldp+2713,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT__FifSig) 
                                  & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT____Vcellinp__sixth1__B) 
                                     | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0))));
        bufp->chgBit(oldp+2714,((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT__FifSig)) 
                                  & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                 | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT__FifSig)) 
                                     & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT____Vcellinp__sixth1__C)) 
                                        & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT____Vcellinp__sixth1__B))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT__FifSig) 
                                       & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                           & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                          | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0)))))));
        bufp->chgCData(oldp+2715,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT____Vcellinp__second4__A) 
                                    << 4U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT____Vcellinp__second4__B) 
                                               << 3U) 
                                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT____Vcellinp__second4__C) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT____Vcellinp__second3__A) 
                                                     << 1U) 
                                                    | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT____Vcellinp__second3__B)))))),5);
        bufp->chgCData(oldp+2716,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT____Vcellinp__third2__A) 
                                    << 3U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT____Vcellinp__third2__B) 
                                               << 2U) 
                                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT____Vcellinp__third2__C) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT____Vcellinp__third1__A))))),4);
        bufp->chgCData(oldp+2717,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT____Vcellinp__fourth2__A) 
                                    << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT____Vcellinp__fourth2__B))),2);
        bufp->chgCData(oldp+2718,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT____Vcellinp__fifth1__A) 
                                    << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT____Vcellinp__fifth1__B))),2);
        bufp->chgBit(oldp+2719,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT__FifSig));
        bufp->chgBit(oldp+2720,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT____Vcellinp__fifth1__A));
        bufp->chgBit(oldp+2721,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT____Vcellinp__fifth1__B));
        bufp->chgBit(oldp+2722,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT____Vcellinp__sixth1__B));
        bufp->chgBit(oldp+2723,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xcU] 
                                               >> 0x2fU)))));
        bufp->chgBit(oldp+2724,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xdU] 
                                               >> 0x2fU)))));
        bufp->chgBit(oldp+2725,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xeU] 
                                               >> 0x2fU)))));
        bufp->chgBit(oldp+2726,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT____Vcellinp__second1__C));
        bufp->chgBit(oldp+2727,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT____Vcellinp__second3__B));
        bufp->chgBit(oldp+2728,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [9U] 
                                               >> 0x2fU)))));
        bufp->chgBit(oldp+2729,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xaU] 
                                               >> 0x2fU)))));
        bufp->chgBit(oldp+2730,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xbU] 
                                               >> 0x2fU)))));
        bufp->chgBit(oldp+2731,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT____Vcellinp__second1__B));
        bufp->chgBit(oldp+2732,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT____Vcellinp__second3__A));
        bufp->chgBit(oldp+2733,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [6U] 
                                               >> 0x2fU)))));
        bufp->chgBit(oldp+2734,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [7U] 
                                               >> 0x2fU)))));
        bufp->chgBit(oldp+2735,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [8U] 
                                               >> 0x2fU)))));
        bufp->chgBit(oldp+2736,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT____Vcellinp__second1__A));
        bufp->chgBit(oldp+2737,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT____Vcellinp__second4__C));
        bufp->chgBit(oldp+2738,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [3U] 
                                               >> 0x2fU)))));
        bufp->chgBit(oldp+2739,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [4U] 
                                               >> 0x2fU)))));
        bufp->chgBit(oldp+2740,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [5U] 
                                               >> 0x2fU)))));
        bufp->chgBit(oldp+2741,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT____Vcellinp__second2__C));
        bufp->chgBit(oldp+2742,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT____Vcellinp__second4__B));
        bufp->chgBit(oldp+2743,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0U] 
                                               >> 0x2fU)))));
        bufp->chgBit(oldp+2744,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [1U] 
                                               >> 0x2fU)))));
        bufp->chgBit(oldp+2745,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [2U] 
                                               >> 0x2fU)))));
        bufp->chgBit(oldp+2746,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT____Vcellinp__second2__B));
        bufp->chgBit(oldp+2747,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT____Vcellinp__second4__A));
        bufp->chgBit(oldp+2748,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT____Vcellinp__fifth1__C));
        bufp->chgBit(oldp+2749,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT____Vcellinp__fourth2__A));
        bufp->chgBit(oldp+2750,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT____Vcellinp__fourth2__B));
        bufp->chgBit(oldp+2751,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT____Vcellinp__sixth1__C));
        bufp->chgBit(oldp+2752,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT____Vcellinp__third1__C));
        bufp->chgBit(oldp+2753,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT____Vcellinp__third1__A));
        bufp->chgBit(oldp+2754,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0x10U] 
                                               >> 0x2fU)))));
        bufp->chgBit(oldp+2755,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT____Vcellinp__third1__B));
        bufp->chgBit(oldp+2756,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT____Vcellinp__third2__C));
        bufp->chgBit(oldp+2757,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xfU] 
                                               >> 0x2fU)))));
        bufp->chgBit(oldp+2758,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT____Vcellinp__fourth1__C));
        bufp->chgBit(oldp+2759,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT____Vcellinp__third2__B));
        bufp->chgBit(oldp+2760,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT____Vcellinp__fourth1__B));
        bufp->chgBit(oldp+2761,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT____Vcellinp__third2__A));
        bufp->chgBit(oldp+2762,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT____Vcellinp__fourth1__A));
        bufp->chgBit(oldp+2763,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT____Vcellinp__fourth2__C));
        bufp->chgIData(oldp+2764,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__48__KET____DOT__bi__InData),17);
        bufp->chgBit(oldp+2765,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT__FifSig) 
                                  & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT____Vcellinp__sixth1__B) 
                                     | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0))));
        bufp->chgBit(oldp+2766,((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT__FifSig)) 
                                  & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                 | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT__FifSig)) 
                                     & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT____Vcellinp__sixth1__C)) 
                                        & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT____Vcellinp__sixth1__B))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT__FifSig) 
                                       & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                           & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                          | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0)))))));
        bufp->chgCData(oldp+2767,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT____Vcellinp__second4__A) 
                                    << 4U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT____Vcellinp__second4__B) 
                                               << 3U) 
                                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT____Vcellinp__second4__C) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT____Vcellinp__second3__A) 
                                                     << 1U) 
                                                    | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT____Vcellinp__second3__B)))))),5);
        bufp->chgCData(oldp+2768,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT____Vcellinp__third2__A) 
                                    << 3U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT____Vcellinp__third2__B) 
                                               << 2U) 
                                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT____Vcellinp__third2__C) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT____Vcellinp__third1__A))))),4);
        bufp->chgCData(oldp+2769,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT____Vcellinp__fourth2__A) 
                                    << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT____Vcellinp__fourth2__B))),2);
        bufp->chgCData(oldp+2770,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT____Vcellinp__fifth1__A) 
                                    << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT____Vcellinp__fifth1__B))),2);
        bufp->chgBit(oldp+2771,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT__FifSig));
        bufp->chgBit(oldp+2772,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT____Vcellinp__fifth1__A));
        bufp->chgBit(oldp+2773,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT____Vcellinp__fifth1__B));
        bufp->chgBit(oldp+2774,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT____Vcellinp__sixth1__B));
        bufp->chgBit(oldp+2775,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xcU] 
                                               >> 0x30U)))));
        bufp->chgBit(oldp+2776,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xdU] 
                                               >> 0x30U)))));
        bufp->chgBit(oldp+2777,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xeU] 
                                               >> 0x30U)))));
        bufp->chgBit(oldp+2778,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT____Vcellinp__second1__C));
        bufp->chgBit(oldp+2779,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT____Vcellinp__second3__B));
        bufp->chgBit(oldp+2780,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [9U] 
                                               >> 0x30U)))));
        bufp->chgBit(oldp+2781,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xaU] 
                                               >> 0x30U)))));
        bufp->chgBit(oldp+2782,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xbU] 
                                               >> 0x30U)))));
        bufp->chgBit(oldp+2783,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT____Vcellinp__second1__B));
        bufp->chgBit(oldp+2784,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT____Vcellinp__second3__A));
        bufp->chgBit(oldp+2785,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [6U] 
                                               >> 0x30U)))));
        bufp->chgBit(oldp+2786,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [7U] 
                                               >> 0x30U)))));
        bufp->chgBit(oldp+2787,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [8U] 
                                               >> 0x30U)))));
        bufp->chgBit(oldp+2788,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT____Vcellinp__second1__A));
        bufp->chgBit(oldp+2789,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT____Vcellinp__second4__C));
        bufp->chgBit(oldp+2790,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [3U] 
                                               >> 0x30U)))));
        bufp->chgBit(oldp+2791,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [4U] 
                                               >> 0x30U)))));
        bufp->chgBit(oldp+2792,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [5U] 
                                               >> 0x30U)))));
        bufp->chgBit(oldp+2793,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT____Vcellinp__second2__C));
        bufp->chgBit(oldp+2794,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT____Vcellinp__second4__B));
        bufp->chgBit(oldp+2795,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0U] 
                                               >> 0x30U)))));
        bufp->chgBit(oldp+2796,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [1U] 
                                               >> 0x30U)))));
        bufp->chgBit(oldp+2797,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [2U] 
                                               >> 0x30U)))));
        bufp->chgBit(oldp+2798,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT____Vcellinp__second2__B));
        bufp->chgBit(oldp+2799,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT____Vcellinp__second4__A));
        bufp->chgBit(oldp+2800,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT____Vcellinp__fifth1__C));
        bufp->chgBit(oldp+2801,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT____Vcellinp__fourth2__A));
        bufp->chgBit(oldp+2802,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT____Vcellinp__fourth2__B));
        bufp->chgBit(oldp+2803,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT____Vcellinp__sixth1__C));
        bufp->chgBit(oldp+2804,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT____Vcellinp__third1__C));
        bufp->chgBit(oldp+2805,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT____Vcellinp__third1__A));
        bufp->chgBit(oldp+2806,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0x10U] 
                                               >> 0x30U)))));
        bufp->chgBit(oldp+2807,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT____Vcellinp__third1__B));
        bufp->chgBit(oldp+2808,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT____Vcellinp__third2__C));
        bufp->chgBit(oldp+2809,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xfU] 
                                               >> 0x30U)))));
        bufp->chgBit(oldp+2810,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT____Vcellinp__fourth1__C));
        bufp->chgBit(oldp+2811,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT____Vcellinp__third2__B));
        bufp->chgBit(oldp+2812,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT____Vcellinp__fourth1__B));
        bufp->chgBit(oldp+2813,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT____Vcellinp__third2__A));
        bufp->chgBit(oldp+2814,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT____Vcellinp__fourth1__A));
        bufp->chgBit(oldp+2815,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT____Vcellinp__fourth2__C));
        bufp->chgIData(oldp+2816,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__49__KET____DOT__bi__InData),17);
        bufp->chgBit(oldp+2817,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT__FifSig) 
                                  & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT____Vcellinp__sixth1__B) 
                                     | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0))));
        bufp->chgBit(oldp+2818,((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT__FifSig)) 
                                  & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                 | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT__FifSig)) 
                                     & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT____Vcellinp__sixth1__C)) 
                                        & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT____Vcellinp__sixth1__B))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT__FifSig) 
                                       & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                           & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                          | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0)))))));
        bufp->chgCData(oldp+2819,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT____Vcellinp__second4__A) 
                                    << 4U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT____Vcellinp__second4__B) 
                                               << 3U) 
                                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT____Vcellinp__second4__C) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT____Vcellinp__second3__A) 
                                                     << 1U) 
                                                    | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT____Vcellinp__second3__B)))))),5);
        bufp->chgCData(oldp+2820,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT____Vcellinp__third2__A) 
                                    << 3U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT____Vcellinp__third2__B) 
                                               << 2U) 
                                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT____Vcellinp__third2__C) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT____Vcellinp__third1__A))))),4);
        bufp->chgCData(oldp+2821,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT____Vcellinp__fourth2__A) 
                                    << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT____Vcellinp__fourth2__B))),2);
        bufp->chgCData(oldp+2822,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT____Vcellinp__fifth1__A) 
                                    << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT____Vcellinp__fifth1__B))),2);
        bufp->chgBit(oldp+2823,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT__FifSig));
        bufp->chgBit(oldp+2824,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT____Vcellinp__fifth1__A));
        bufp->chgBit(oldp+2825,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT____Vcellinp__fifth1__B));
        bufp->chgBit(oldp+2826,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT____Vcellinp__sixth1__B));
        bufp->chgBit(oldp+2827,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xcU] 
                                               >> 0x31U)))));
        bufp->chgBit(oldp+2828,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xdU] 
                                               >> 0x31U)))));
        bufp->chgBit(oldp+2829,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xeU] 
                                               >> 0x31U)))));
        bufp->chgBit(oldp+2830,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT____Vcellinp__second1__C));
        bufp->chgBit(oldp+2831,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT____Vcellinp__second3__B));
        bufp->chgBit(oldp+2832,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [9U] 
                                               >> 0x31U)))));
        bufp->chgBit(oldp+2833,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xaU] 
                                               >> 0x31U)))));
        bufp->chgBit(oldp+2834,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xbU] 
                                               >> 0x31U)))));
        bufp->chgBit(oldp+2835,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT____Vcellinp__second1__B));
        bufp->chgBit(oldp+2836,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT____Vcellinp__second3__A));
        bufp->chgBit(oldp+2837,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [6U] 
                                               >> 0x31U)))));
        bufp->chgBit(oldp+2838,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [7U] 
                                               >> 0x31U)))));
        bufp->chgBit(oldp+2839,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [8U] 
                                               >> 0x31U)))));
        bufp->chgBit(oldp+2840,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT____Vcellinp__second1__A));
        bufp->chgBit(oldp+2841,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT____Vcellinp__second4__C));
        bufp->chgBit(oldp+2842,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [3U] 
                                               >> 0x31U)))));
        bufp->chgBit(oldp+2843,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [4U] 
                                               >> 0x31U)))));
        bufp->chgBit(oldp+2844,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [5U] 
                                               >> 0x31U)))));
        bufp->chgBit(oldp+2845,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT____Vcellinp__second2__C));
        bufp->chgBit(oldp+2846,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT____Vcellinp__second4__B));
        bufp->chgBit(oldp+2847,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0U] 
                                               >> 0x31U)))));
        bufp->chgBit(oldp+2848,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [1U] 
                                               >> 0x31U)))));
        bufp->chgBit(oldp+2849,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [2U] 
                                               >> 0x31U)))));
        bufp->chgBit(oldp+2850,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT____Vcellinp__second2__B));
        bufp->chgBit(oldp+2851,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT____Vcellinp__second4__A));
        bufp->chgBit(oldp+2852,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT____Vcellinp__fifth1__C));
        bufp->chgBit(oldp+2853,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT____Vcellinp__fourth2__A));
        bufp->chgBit(oldp+2854,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT____Vcellinp__fourth2__B));
        bufp->chgBit(oldp+2855,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT____Vcellinp__sixth1__C));
        bufp->chgBit(oldp+2856,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT____Vcellinp__third1__C));
        bufp->chgBit(oldp+2857,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT____Vcellinp__third1__A));
        bufp->chgBit(oldp+2858,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0x10U] 
                                               >> 0x31U)))));
        bufp->chgBit(oldp+2859,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT____Vcellinp__third1__B));
        bufp->chgBit(oldp+2860,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT____Vcellinp__third2__C));
        bufp->chgBit(oldp+2861,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xfU] 
                                               >> 0x31U)))));
        bufp->chgBit(oldp+2862,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT____Vcellinp__fourth1__C));
        bufp->chgBit(oldp+2863,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT____Vcellinp__third2__B));
        bufp->chgBit(oldp+2864,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT____Vcellinp__fourth1__B));
        bufp->chgBit(oldp+2865,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT____Vcellinp__third2__A));
        bufp->chgBit(oldp+2866,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT____Vcellinp__fourth1__A));
        bufp->chgBit(oldp+2867,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT____Vcellinp__fourth2__C));
        bufp->chgIData(oldp+2868,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData),17);
        bufp->chgBit(oldp+2869,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi__DOT__FifSig) 
                                  & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi__DOT____Vcellinp__sixth1__B) 
                                     | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0))));
        bufp->chgBit(oldp+2870,((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi__DOT__FifSig)) 
                                  & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                 | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi__DOT__FifSig)) 
                                     & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi__DOT____Vcellinp__sixth1__C)) 
                                        & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi__DOT____Vcellinp__sixth1__B))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi__DOT__FifSig) 
                                       & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                           & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                          | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0)))))));
        bufp->chgCData(oldp+2871,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi__DOT____Vcellinp__second4__A) 
                                    << 4U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi__DOT____Vcellinp__second4__B) 
                                               << 3U) 
                                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi__DOT____Vcellinp__second4__C) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi__DOT____Vcellinp__second3__A) 
                                                     << 1U) 
                                                    | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi__DOT____Vcellinp__second3__B)))))),5);
        bufp->chgCData(oldp+2872,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi__DOT____Vcellinp__third2__A) 
                                    << 3U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi__DOT____Vcellinp__third2__B) 
                                               << 2U) 
                                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi__DOT____Vcellinp__third2__C) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi__DOT____Vcellinp__third1__A))))),4);
        bufp->chgCData(oldp+2873,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi__DOT____Vcellinp__fourth2__A) 
                                    << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi__DOT____Vcellinp__fourth2__B))),2);
        bufp->chgCData(oldp+2874,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi__DOT____Vcellinp__fifth1__A) 
                                    << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi__DOT____Vcellinp__fifth1__B))),2);
        bufp->chgBit(oldp+2875,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi__DOT__FifSig));
        bufp->chgBit(oldp+2876,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi__DOT____Vcellinp__fifth1__A));
        bufp->chgBit(oldp+2877,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi__DOT____Vcellinp__fifth1__B));
        bufp->chgBit(oldp+2878,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT____Vcellinp__sixth1__B));
        bufp->chgBit(oldp+2879,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xcU] 
                                               >> 4U)))));
        bufp->chgBit(oldp+2880,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xdU] 
                                               >> 4U)))));
        bufp->chgBit(oldp+2881,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xeU] 
                                               >> 4U)))));
        bufp->chgBit(oldp+2882,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT____Vcellinp__second1__C));
        bufp->chgBit(oldp+2883,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi__DOT____Vcellinp__second3__B));
        bufp->chgBit(oldp+2884,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [9U] 
                                               >> 4U)))));
        bufp->chgBit(oldp+2885,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xaU] 
                                               >> 4U)))));
        bufp->chgBit(oldp+2886,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xbU] 
                                               >> 4U)))));
        bufp->chgBit(oldp+2887,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT____Vcellinp__second1__B));
        bufp->chgBit(oldp+2888,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi__DOT____Vcellinp__second3__A));
        bufp->chgBit(oldp+2889,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [6U] 
                                               >> 4U)))));
        bufp->chgBit(oldp+2890,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [7U] 
                                               >> 4U)))));
        bufp->chgBit(oldp+2891,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [8U] 
                                               >> 4U)))));
        bufp->chgBit(oldp+2892,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT____Vcellinp__second1__A));
        bufp->chgBit(oldp+2893,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi__DOT____Vcellinp__second4__C));
        bufp->chgBit(oldp+2894,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [3U] 
                                               >> 4U)))));
        bufp->chgBit(oldp+2895,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [4U] 
                                               >> 4U)))));
        bufp->chgBit(oldp+2896,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [5U] 
                                               >> 4U)))));
        bufp->chgBit(oldp+2897,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT____Vcellinp__second2__C));
        bufp->chgBit(oldp+2898,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi__DOT____Vcellinp__second4__B));
        bufp->chgBit(oldp+2899,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0U] 
                                               >> 4U)))));
        bufp->chgBit(oldp+2900,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [1U] 
                                               >> 4U)))));
        bufp->chgBit(oldp+2901,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [2U] 
                                               >> 4U)))));
        bufp->chgBit(oldp+2902,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT____Vcellinp__second2__B));
        bufp->chgBit(oldp+2903,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi__DOT____Vcellinp__second4__A));
        bufp->chgBit(oldp+2904,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT____Vcellinp__fifth1__C));
        bufp->chgBit(oldp+2905,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi__DOT____Vcellinp__fourth2__A));
        bufp->chgBit(oldp+2906,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi__DOT____Vcellinp__fourth2__B));
        bufp->chgBit(oldp+2907,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT____Vcellinp__sixth1__C));
        bufp->chgBit(oldp+2908,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT____Vcellinp__third1__C));
        bufp->chgBit(oldp+2909,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi__DOT____Vcellinp__third1__A));
        bufp->chgBit(oldp+2910,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0x10U] 
                                               >> 4U)))));
        bufp->chgBit(oldp+2911,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT____Vcellinp__third1__B));
        bufp->chgBit(oldp+2912,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi__DOT____Vcellinp__third2__C));
        bufp->chgBit(oldp+2913,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xfU] 
                                               >> 4U)))));
        bufp->chgBit(oldp+2914,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT____Vcellinp__fourth1__C));
        bufp->chgBit(oldp+2915,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi__DOT____Vcellinp__third2__B));
        bufp->chgBit(oldp+2916,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT____Vcellinp__fourth1__B));
        bufp->chgBit(oldp+2917,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi__DOT____Vcellinp__third2__A));
        bufp->chgBit(oldp+2918,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT____Vcellinp__fourth1__A));
        bufp->chgBit(oldp+2919,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT____Vcellinp__fourth2__C));
        bufp->chgIData(oldp+2920,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__50__KET____DOT__bi__InData),17);
        bufp->chgBit(oldp+2921,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT__FifSig) 
                                  & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT____Vcellinp__sixth1__B) 
                                     | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0))));
        bufp->chgBit(oldp+2922,((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT__FifSig)) 
                                  & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                 | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT__FifSig)) 
                                     & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT____Vcellinp__sixth1__C)) 
                                        & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT____Vcellinp__sixth1__B))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT__FifSig) 
                                       & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                           & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                          | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0)))))));
        bufp->chgCData(oldp+2923,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT____Vcellinp__second4__A) 
                                    << 4U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT____Vcellinp__second4__B) 
                                               << 3U) 
                                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT____Vcellinp__second4__C) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT____Vcellinp__second3__A) 
                                                     << 1U) 
                                                    | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT____Vcellinp__second3__B)))))),5);
        bufp->chgCData(oldp+2924,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT____Vcellinp__third2__A) 
                                    << 3U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT____Vcellinp__third2__B) 
                                               << 2U) 
                                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT____Vcellinp__third2__C) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT____Vcellinp__third1__A))))),4);
        bufp->chgCData(oldp+2925,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT____Vcellinp__fourth2__A) 
                                    << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT____Vcellinp__fourth2__B))),2);
        bufp->chgCData(oldp+2926,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT____Vcellinp__fifth1__A) 
                                    << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT____Vcellinp__fifth1__B))),2);
        bufp->chgBit(oldp+2927,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT__FifSig));
        bufp->chgBit(oldp+2928,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT____Vcellinp__fifth1__A));
        bufp->chgBit(oldp+2929,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT____Vcellinp__fifth1__B));
        bufp->chgBit(oldp+2930,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT____Vcellinp__sixth1__B));
        bufp->chgBit(oldp+2931,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xcU] 
                                               >> 0x32U)))));
        bufp->chgBit(oldp+2932,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xdU] 
                                               >> 0x32U)))));
        bufp->chgBit(oldp+2933,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xeU] 
                                               >> 0x32U)))));
        bufp->chgBit(oldp+2934,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT____Vcellinp__second1__C));
        bufp->chgBit(oldp+2935,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT____Vcellinp__second3__B));
        bufp->chgBit(oldp+2936,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [9U] 
                                               >> 0x32U)))));
        bufp->chgBit(oldp+2937,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xaU] 
                                               >> 0x32U)))));
        bufp->chgBit(oldp+2938,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xbU] 
                                               >> 0x32U)))));
        bufp->chgBit(oldp+2939,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT____Vcellinp__second1__B));
        bufp->chgBit(oldp+2940,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT____Vcellinp__second3__A));
        bufp->chgBit(oldp+2941,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [6U] 
                                               >> 0x32U)))));
        bufp->chgBit(oldp+2942,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [7U] 
                                               >> 0x32U)))));
        bufp->chgBit(oldp+2943,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [8U] 
                                               >> 0x32U)))));
        bufp->chgBit(oldp+2944,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT____Vcellinp__second1__A));
        bufp->chgBit(oldp+2945,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT____Vcellinp__second4__C));
        bufp->chgBit(oldp+2946,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [3U] 
                                               >> 0x32U)))));
        bufp->chgBit(oldp+2947,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [4U] 
                                               >> 0x32U)))));
        bufp->chgBit(oldp+2948,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [5U] 
                                               >> 0x32U)))));
        bufp->chgBit(oldp+2949,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT____Vcellinp__second2__C));
        bufp->chgBit(oldp+2950,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT____Vcellinp__second4__B));
        bufp->chgBit(oldp+2951,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0U] 
                                               >> 0x32U)))));
        bufp->chgBit(oldp+2952,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [1U] 
                                               >> 0x32U)))));
        bufp->chgBit(oldp+2953,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [2U] 
                                               >> 0x32U)))));
        bufp->chgBit(oldp+2954,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT____Vcellinp__second2__B));
        bufp->chgBit(oldp+2955,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT____Vcellinp__second4__A));
        bufp->chgBit(oldp+2956,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT____Vcellinp__fifth1__C));
        bufp->chgBit(oldp+2957,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT____Vcellinp__fourth2__A));
        bufp->chgBit(oldp+2958,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT____Vcellinp__fourth2__B));
        bufp->chgBit(oldp+2959,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT____Vcellinp__sixth1__C));
        bufp->chgBit(oldp+2960,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT____Vcellinp__third1__C));
        bufp->chgBit(oldp+2961,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT____Vcellinp__third1__A));
        bufp->chgBit(oldp+2962,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0x10U] 
                                               >> 0x32U)))));
        bufp->chgBit(oldp+2963,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT____Vcellinp__third1__B));
        bufp->chgBit(oldp+2964,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT____Vcellinp__third2__C));
        bufp->chgBit(oldp+2965,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xfU] 
                                               >> 0x32U)))));
        bufp->chgBit(oldp+2966,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT____Vcellinp__fourth1__C));
        bufp->chgBit(oldp+2967,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT____Vcellinp__third2__B));
        bufp->chgBit(oldp+2968,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT____Vcellinp__fourth1__B));
        bufp->chgBit(oldp+2969,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT____Vcellinp__third2__A));
        bufp->chgBit(oldp+2970,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT____Vcellinp__fourth1__A));
        bufp->chgBit(oldp+2971,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT____Vcellinp__fourth2__C));
        bufp->chgIData(oldp+2972,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__51__KET____DOT__bi__InData),17);
        bufp->chgBit(oldp+2973,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT__FifSig) 
                                  & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT____Vcellinp__sixth1__B) 
                                     | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0))));
        bufp->chgBit(oldp+2974,((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT__FifSig)) 
                                  & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                 | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT__FifSig)) 
                                     & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT____Vcellinp__sixth1__C)) 
                                        & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT____Vcellinp__sixth1__B))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT__FifSig) 
                                       & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                           & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                          | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0)))))));
        bufp->chgCData(oldp+2975,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT____Vcellinp__second4__A) 
                                    << 4U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT____Vcellinp__second4__B) 
                                               << 3U) 
                                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT____Vcellinp__second4__C) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT____Vcellinp__second3__A) 
                                                     << 1U) 
                                                    | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT____Vcellinp__second3__B)))))),5);
        bufp->chgCData(oldp+2976,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT____Vcellinp__third2__A) 
                                    << 3U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT____Vcellinp__third2__B) 
                                               << 2U) 
                                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT____Vcellinp__third2__C) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT____Vcellinp__third1__A))))),4);
        bufp->chgCData(oldp+2977,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT____Vcellinp__fourth2__A) 
                                    << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT____Vcellinp__fourth2__B))),2);
        bufp->chgCData(oldp+2978,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT____Vcellinp__fifth1__A) 
                                    << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT____Vcellinp__fifth1__B))),2);
        bufp->chgBit(oldp+2979,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT__FifSig));
        bufp->chgBit(oldp+2980,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT____Vcellinp__fifth1__A));
        bufp->chgBit(oldp+2981,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT____Vcellinp__fifth1__B));
        bufp->chgBit(oldp+2982,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT____Vcellinp__sixth1__B));
        bufp->chgBit(oldp+2983,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xcU] 
                                               >> 0x33U)))));
        bufp->chgBit(oldp+2984,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xdU] 
                                               >> 0x33U)))));
        bufp->chgBit(oldp+2985,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xeU] 
                                               >> 0x33U)))));
        bufp->chgBit(oldp+2986,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT____Vcellinp__second1__C));
        bufp->chgBit(oldp+2987,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT____Vcellinp__second3__B));
        bufp->chgBit(oldp+2988,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [9U] 
                                               >> 0x33U)))));
        bufp->chgBit(oldp+2989,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xaU] 
                                               >> 0x33U)))));
        bufp->chgBit(oldp+2990,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xbU] 
                                               >> 0x33U)))));
        bufp->chgBit(oldp+2991,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT____Vcellinp__second1__B));
        bufp->chgBit(oldp+2992,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT____Vcellinp__second3__A));
        bufp->chgBit(oldp+2993,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [6U] 
                                               >> 0x33U)))));
        bufp->chgBit(oldp+2994,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [7U] 
                                               >> 0x33U)))));
        bufp->chgBit(oldp+2995,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [8U] 
                                               >> 0x33U)))));
        bufp->chgBit(oldp+2996,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT____Vcellinp__second1__A));
        bufp->chgBit(oldp+2997,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT____Vcellinp__second4__C));
        bufp->chgBit(oldp+2998,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [3U] 
                                               >> 0x33U)))));
        bufp->chgBit(oldp+2999,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [4U] 
                                               >> 0x33U)))));
        bufp->chgBit(oldp+3000,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [5U] 
                                               >> 0x33U)))));
        bufp->chgBit(oldp+3001,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT____Vcellinp__second2__C));
        bufp->chgBit(oldp+3002,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT____Vcellinp__second4__B));
        bufp->chgBit(oldp+3003,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0U] 
                                               >> 0x33U)))));
        bufp->chgBit(oldp+3004,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [1U] 
                                               >> 0x33U)))));
        bufp->chgBit(oldp+3005,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [2U] 
                                               >> 0x33U)))));
        bufp->chgBit(oldp+3006,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT____Vcellinp__second2__B));
        bufp->chgBit(oldp+3007,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT____Vcellinp__second4__A));
        bufp->chgBit(oldp+3008,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT____Vcellinp__fifth1__C));
        bufp->chgBit(oldp+3009,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT____Vcellinp__fourth2__A));
        bufp->chgBit(oldp+3010,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT____Vcellinp__fourth2__B));
        bufp->chgBit(oldp+3011,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT____Vcellinp__sixth1__C));
        bufp->chgBit(oldp+3012,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT____Vcellinp__third1__C));
        bufp->chgBit(oldp+3013,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT____Vcellinp__third1__A));
        bufp->chgBit(oldp+3014,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0x10U] 
                                               >> 0x33U)))));
        bufp->chgBit(oldp+3015,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT____Vcellinp__third1__B));
        bufp->chgBit(oldp+3016,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT____Vcellinp__third2__C));
        bufp->chgBit(oldp+3017,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xfU] 
                                               >> 0x33U)))));
        bufp->chgBit(oldp+3018,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT____Vcellinp__fourth1__C));
        bufp->chgBit(oldp+3019,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT____Vcellinp__third2__B));
        bufp->chgBit(oldp+3020,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT____Vcellinp__fourth1__B));
        bufp->chgBit(oldp+3021,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT____Vcellinp__third2__A));
        bufp->chgBit(oldp+3022,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT____Vcellinp__fourth1__A));
        bufp->chgBit(oldp+3023,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT____Vcellinp__fourth2__C));
        bufp->chgIData(oldp+3024,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__52__KET____DOT__bi__InData),17);
        bufp->chgBit(oldp+3025,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT__FifSig) 
                                  & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT____Vcellinp__sixth1__B) 
                                     | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0))));
        bufp->chgBit(oldp+3026,((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT__FifSig)) 
                                  & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                 | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT__FifSig)) 
                                     & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT____Vcellinp__sixth1__C)) 
                                        & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT____Vcellinp__sixth1__B))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT__FifSig) 
                                       & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                           & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                          | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0)))))));
        bufp->chgCData(oldp+3027,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT____Vcellinp__second4__A) 
                                    << 4U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT____Vcellinp__second4__B) 
                                               << 3U) 
                                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT____Vcellinp__second4__C) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT____Vcellinp__second3__A) 
                                                     << 1U) 
                                                    | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT____Vcellinp__second3__B)))))),5);
        bufp->chgCData(oldp+3028,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT____Vcellinp__third2__A) 
                                    << 3U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT____Vcellinp__third2__B) 
                                               << 2U) 
                                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT____Vcellinp__third2__C) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT____Vcellinp__third1__A))))),4);
        bufp->chgCData(oldp+3029,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT____Vcellinp__fourth2__A) 
                                    << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT____Vcellinp__fourth2__B))),2);
        bufp->chgCData(oldp+3030,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT____Vcellinp__fifth1__A) 
                                    << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT____Vcellinp__fifth1__B))),2);
        bufp->chgBit(oldp+3031,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT__FifSig));
        bufp->chgBit(oldp+3032,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT____Vcellinp__fifth1__A));
        bufp->chgBit(oldp+3033,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT____Vcellinp__fifth1__B));
        bufp->chgBit(oldp+3034,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT____Vcellinp__sixth1__B));
        bufp->chgBit(oldp+3035,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xcU] 
                                               >> 0x34U)))));
        bufp->chgBit(oldp+3036,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xdU] 
                                               >> 0x34U)))));
        bufp->chgBit(oldp+3037,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xeU] 
                                               >> 0x34U)))));
        bufp->chgBit(oldp+3038,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT____Vcellinp__second1__C));
        bufp->chgBit(oldp+3039,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT____Vcellinp__second3__B));
        bufp->chgBit(oldp+3040,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [9U] 
                                               >> 0x34U)))));
        bufp->chgBit(oldp+3041,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xaU] 
                                               >> 0x34U)))));
        bufp->chgBit(oldp+3042,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xbU] 
                                               >> 0x34U)))));
        bufp->chgBit(oldp+3043,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT____Vcellinp__second1__B));
        bufp->chgBit(oldp+3044,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT____Vcellinp__second3__A));
        bufp->chgBit(oldp+3045,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [6U] 
                                               >> 0x34U)))));
        bufp->chgBit(oldp+3046,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [7U] 
                                               >> 0x34U)))));
        bufp->chgBit(oldp+3047,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [8U] 
                                               >> 0x34U)))));
        bufp->chgBit(oldp+3048,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT____Vcellinp__second1__A));
        bufp->chgBit(oldp+3049,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT____Vcellinp__second4__C));
        bufp->chgBit(oldp+3050,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [3U] 
                                               >> 0x34U)))));
        bufp->chgBit(oldp+3051,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [4U] 
                                               >> 0x34U)))));
        bufp->chgBit(oldp+3052,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [5U] 
                                               >> 0x34U)))));
        bufp->chgBit(oldp+3053,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT____Vcellinp__second2__C));
        bufp->chgBit(oldp+3054,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT____Vcellinp__second4__B));
        bufp->chgBit(oldp+3055,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0U] 
                                               >> 0x34U)))));
        bufp->chgBit(oldp+3056,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [1U] 
                                               >> 0x34U)))));
        bufp->chgBit(oldp+3057,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [2U] 
                                               >> 0x34U)))));
        bufp->chgBit(oldp+3058,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT____Vcellinp__second2__B));
        bufp->chgBit(oldp+3059,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT____Vcellinp__second4__A));
        bufp->chgBit(oldp+3060,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT____Vcellinp__fifth1__C));
        bufp->chgBit(oldp+3061,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT____Vcellinp__fourth2__A));
        bufp->chgBit(oldp+3062,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT____Vcellinp__fourth2__B));
        bufp->chgBit(oldp+3063,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT____Vcellinp__sixth1__C));
        bufp->chgBit(oldp+3064,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT____Vcellinp__third1__C));
        bufp->chgBit(oldp+3065,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT____Vcellinp__third1__A));
        bufp->chgBit(oldp+3066,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0x10U] 
                                               >> 0x34U)))));
        bufp->chgBit(oldp+3067,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT____Vcellinp__third1__B));
        bufp->chgBit(oldp+3068,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT____Vcellinp__third2__C));
        bufp->chgBit(oldp+3069,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xfU] 
                                               >> 0x34U)))));
        bufp->chgBit(oldp+3070,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT____Vcellinp__fourth1__C));
        bufp->chgBit(oldp+3071,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT____Vcellinp__third2__B));
        bufp->chgBit(oldp+3072,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT____Vcellinp__fourth1__B));
        bufp->chgBit(oldp+3073,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT____Vcellinp__third2__A));
        bufp->chgBit(oldp+3074,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT____Vcellinp__fourth1__A));
        bufp->chgBit(oldp+3075,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT____Vcellinp__fourth2__C));
        bufp->chgIData(oldp+3076,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__53__KET____DOT__bi__InData),17);
        bufp->chgBit(oldp+3077,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT__FifSig) 
                                  & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT____Vcellinp__sixth1__B) 
                                     | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0))));
        bufp->chgBit(oldp+3078,((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT__FifSig)) 
                                  & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                 | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT__FifSig)) 
                                     & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT____Vcellinp__sixth1__C)) 
                                        & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT____Vcellinp__sixth1__B))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT__FifSig) 
                                       & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                           & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                          | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0)))))));
        bufp->chgCData(oldp+3079,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT____Vcellinp__second4__A) 
                                    << 4U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT____Vcellinp__second4__B) 
                                               << 3U) 
                                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT____Vcellinp__second4__C) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT____Vcellinp__second3__A) 
                                                     << 1U) 
                                                    | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT____Vcellinp__second3__B)))))),5);
        bufp->chgCData(oldp+3080,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT____Vcellinp__third2__A) 
                                    << 3U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT____Vcellinp__third2__B) 
                                               << 2U) 
                                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT____Vcellinp__third2__C) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT____Vcellinp__third1__A))))),4);
        bufp->chgCData(oldp+3081,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT____Vcellinp__fourth2__A) 
                                    << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT____Vcellinp__fourth2__B))),2);
        bufp->chgCData(oldp+3082,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT____Vcellinp__fifth1__A) 
                                    << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT____Vcellinp__fifth1__B))),2);
        bufp->chgBit(oldp+3083,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT__FifSig));
        bufp->chgBit(oldp+3084,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT____Vcellinp__fifth1__A));
        bufp->chgBit(oldp+3085,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT____Vcellinp__fifth1__B));
        bufp->chgBit(oldp+3086,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT____Vcellinp__sixth1__B));
        bufp->chgBit(oldp+3087,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xcU] 
                                               >> 0x35U)))));
        bufp->chgBit(oldp+3088,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xdU] 
                                               >> 0x35U)))));
        bufp->chgBit(oldp+3089,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xeU] 
                                               >> 0x35U)))));
        bufp->chgBit(oldp+3090,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT____Vcellinp__second1__C));
        bufp->chgBit(oldp+3091,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT____Vcellinp__second3__B));
        bufp->chgBit(oldp+3092,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [9U] 
                                               >> 0x35U)))));
        bufp->chgBit(oldp+3093,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xaU] 
                                               >> 0x35U)))));
        bufp->chgBit(oldp+3094,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xbU] 
                                               >> 0x35U)))));
        bufp->chgBit(oldp+3095,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT____Vcellinp__second1__B));
        bufp->chgBit(oldp+3096,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT____Vcellinp__second3__A));
        bufp->chgBit(oldp+3097,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [6U] 
                                               >> 0x35U)))));
        bufp->chgBit(oldp+3098,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [7U] 
                                               >> 0x35U)))));
        bufp->chgBit(oldp+3099,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [8U] 
                                               >> 0x35U)))));
        bufp->chgBit(oldp+3100,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT____Vcellinp__second1__A));
        bufp->chgBit(oldp+3101,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT____Vcellinp__second4__C));
        bufp->chgBit(oldp+3102,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [3U] 
                                               >> 0x35U)))));
        bufp->chgBit(oldp+3103,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [4U] 
                                               >> 0x35U)))));
        bufp->chgBit(oldp+3104,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [5U] 
                                               >> 0x35U)))));
        bufp->chgBit(oldp+3105,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT____Vcellinp__second2__C));
        bufp->chgBit(oldp+3106,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT____Vcellinp__second4__B));
        bufp->chgBit(oldp+3107,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0U] 
                                               >> 0x35U)))));
        bufp->chgBit(oldp+3108,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [1U] 
                                               >> 0x35U)))));
        bufp->chgBit(oldp+3109,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [2U] 
                                               >> 0x35U)))));
        bufp->chgBit(oldp+3110,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT____Vcellinp__second2__B));
        bufp->chgBit(oldp+3111,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT____Vcellinp__second4__A));
        bufp->chgBit(oldp+3112,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT____Vcellinp__fifth1__C));
        bufp->chgBit(oldp+3113,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT____Vcellinp__fourth2__A));
        bufp->chgBit(oldp+3114,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT____Vcellinp__fourth2__B));
        bufp->chgBit(oldp+3115,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT____Vcellinp__sixth1__C));
        bufp->chgBit(oldp+3116,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT____Vcellinp__third1__C));
        bufp->chgBit(oldp+3117,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT____Vcellinp__third1__A));
        bufp->chgBit(oldp+3118,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0x10U] 
                                               >> 0x35U)))));
        bufp->chgBit(oldp+3119,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT____Vcellinp__third1__B));
        bufp->chgBit(oldp+3120,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT____Vcellinp__third2__C));
        bufp->chgBit(oldp+3121,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xfU] 
                                               >> 0x35U)))));
        bufp->chgBit(oldp+3122,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT____Vcellinp__fourth1__C));
        bufp->chgBit(oldp+3123,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT____Vcellinp__third2__B));
        bufp->chgBit(oldp+3124,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT____Vcellinp__fourth1__B));
        bufp->chgBit(oldp+3125,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT____Vcellinp__third2__A));
        bufp->chgBit(oldp+3126,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT____Vcellinp__fourth1__A));
        bufp->chgBit(oldp+3127,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT____Vcellinp__fourth2__C));
        bufp->chgIData(oldp+3128,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__54__KET____DOT__bi__InData),17);
        bufp->chgBit(oldp+3129,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT__FifSig) 
                                  & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT____Vcellinp__sixth1__B) 
                                     | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0))));
        bufp->chgBit(oldp+3130,((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT__FifSig)) 
                                  & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                 | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT__FifSig)) 
                                     & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT____Vcellinp__sixth1__C)) 
                                        & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT____Vcellinp__sixth1__B))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT__FifSig) 
                                       & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                           & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                          | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0)))))));
        bufp->chgCData(oldp+3131,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT____Vcellinp__second4__A) 
                                    << 4U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT____Vcellinp__second4__B) 
                                               << 3U) 
                                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT____Vcellinp__second4__C) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT____Vcellinp__second3__A) 
                                                     << 1U) 
                                                    | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT____Vcellinp__second3__B)))))),5);
        bufp->chgCData(oldp+3132,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT____Vcellinp__third2__A) 
                                    << 3U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT____Vcellinp__third2__B) 
                                               << 2U) 
                                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT____Vcellinp__third2__C) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT____Vcellinp__third1__A))))),4);
        bufp->chgCData(oldp+3133,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT____Vcellinp__fourth2__A) 
                                    << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT____Vcellinp__fourth2__B))),2);
        bufp->chgCData(oldp+3134,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT____Vcellinp__fifth1__A) 
                                    << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT____Vcellinp__fifth1__B))),2);
        bufp->chgBit(oldp+3135,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT__FifSig));
        bufp->chgBit(oldp+3136,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT____Vcellinp__fifth1__A));
        bufp->chgBit(oldp+3137,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT____Vcellinp__fifth1__B));
        bufp->chgBit(oldp+3138,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT____Vcellinp__sixth1__B));
        bufp->chgBit(oldp+3139,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xcU] 
                                               >> 0x36U)))));
        bufp->chgBit(oldp+3140,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xdU] 
                                               >> 0x36U)))));
        bufp->chgBit(oldp+3141,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xeU] 
                                               >> 0x36U)))));
        bufp->chgBit(oldp+3142,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT____Vcellinp__second1__C));
        bufp->chgBit(oldp+3143,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT____Vcellinp__second3__B));
        bufp->chgBit(oldp+3144,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [9U] 
                                               >> 0x36U)))));
        bufp->chgBit(oldp+3145,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xaU] 
                                               >> 0x36U)))));
        bufp->chgBit(oldp+3146,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xbU] 
                                               >> 0x36U)))));
        bufp->chgBit(oldp+3147,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT____Vcellinp__second1__B));
        bufp->chgBit(oldp+3148,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT____Vcellinp__second3__A));
        bufp->chgBit(oldp+3149,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [6U] 
                                               >> 0x36U)))));
        bufp->chgBit(oldp+3150,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [7U] 
                                               >> 0x36U)))));
        bufp->chgBit(oldp+3151,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [8U] 
                                               >> 0x36U)))));
        bufp->chgBit(oldp+3152,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT____Vcellinp__second1__A));
        bufp->chgBit(oldp+3153,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT____Vcellinp__second4__C));
        bufp->chgBit(oldp+3154,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [3U] 
                                               >> 0x36U)))));
        bufp->chgBit(oldp+3155,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [4U] 
                                               >> 0x36U)))));
        bufp->chgBit(oldp+3156,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [5U] 
                                               >> 0x36U)))));
        bufp->chgBit(oldp+3157,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT____Vcellinp__second2__C));
        bufp->chgBit(oldp+3158,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT____Vcellinp__second4__B));
        bufp->chgBit(oldp+3159,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0U] 
                                               >> 0x36U)))));
        bufp->chgBit(oldp+3160,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [1U] 
                                               >> 0x36U)))));
        bufp->chgBit(oldp+3161,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [2U] 
                                               >> 0x36U)))));
        bufp->chgBit(oldp+3162,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT____Vcellinp__second2__B));
        bufp->chgBit(oldp+3163,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT____Vcellinp__second4__A));
        bufp->chgBit(oldp+3164,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT____Vcellinp__fifth1__C));
        bufp->chgBit(oldp+3165,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT____Vcellinp__fourth2__A));
        bufp->chgBit(oldp+3166,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT____Vcellinp__fourth2__B));
        bufp->chgBit(oldp+3167,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT____Vcellinp__sixth1__C));
        bufp->chgBit(oldp+3168,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT____Vcellinp__third1__C));
        bufp->chgBit(oldp+3169,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT____Vcellinp__third1__A));
        bufp->chgBit(oldp+3170,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0x10U] 
                                               >> 0x36U)))));
        bufp->chgBit(oldp+3171,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT____Vcellinp__third1__B));
        bufp->chgBit(oldp+3172,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT____Vcellinp__third2__C));
        bufp->chgBit(oldp+3173,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xfU] 
                                               >> 0x36U)))));
        bufp->chgBit(oldp+3174,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT____Vcellinp__fourth1__C));
        bufp->chgBit(oldp+3175,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT____Vcellinp__third2__B));
        bufp->chgBit(oldp+3176,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT____Vcellinp__fourth1__B));
        bufp->chgBit(oldp+3177,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT____Vcellinp__third2__A));
        bufp->chgBit(oldp+3178,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT____Vcellinp__fourth1__A));
        bufp->chgBit(oldp+3179,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT____Vcellinp__fourth2__C));
        bufp->chgIData(oldp+3180,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__55__KET____DOT__bi__InData),17);
        bufp->chgBit(oldp+3181,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT__FifSig) 
                                  & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT____Vcellinp__sixth1__B) 
                                     | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0))));
        bufp->chgBit(oldp+3182,((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT__FifSig)) 
                                  & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                 | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT__FifSig)) 
                                     & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT____Vcellinp__sixth1__C)) 
                                        & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT____Vcellinp__sixth1__B))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT__FifSig) 
                                       & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                           & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                          | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0)))))));
        bufp->chgCData(oldp+3183,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT____Vcellinp__second4__A) 
                                    << 4U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT____Vcellinp__second4__B) 
                                               << 3U) 
                                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT____Vcellinp__second4__C) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT____Vcellinp__second3__A) 
                                                     << 1U) 
                                                    | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT____Vcellinp__second3__B)))))),5);
        bufp->chgCData(oldp+3184,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT____Vcellinp__third2__A) 
                                    << 3U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT____Vcellinp__third2__B) 
                                               << 2U) 
                                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT____Vcellinp__third2__C) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT____Vcellinp__third1__A))))),4);
        bufp->chgCData(oldp+3185,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT____Vcellinp__fourth2__A) 
                                    << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT____Vcellinp__fourth2__B))),2);
        bufp->chgCData(oldp+3186,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT____Vcellinp__fifth1__A) 
                                    << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT____Vcellinp__fifth1__B))),2);
        bufp->chgBit(oldp+3187,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT__FifSig));
        bufp->chgBit(oldp+3188,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT____Vcellinp__fifth1__A));
        bufp->chgBit(oldp+3189,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT____Vcellinp__fifth1__B));
        bufp->chgBit(oldp+3190,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT____Vcellinp__sixth1__B));
        bufp->chgBit(oldp+3191,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xcU] 
                                               >> 0x37U)))));
        bufp->chgBit(oldp+3192,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xdU] 
                                               >> 0x37U)))));
        bufp->chgBit(oldp+3193,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xeU] 
                                               >> 0x37U)))));
        bufp->chgBit(oldp+3194,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT____Vcellinp__second1__C));
        bufp->chgBit(oldp+3195,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT____Vcellinp__second3__B));
        bufp->chgBit(oldp+3196,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [9U] 
                                               >> 0x37U)))));
        bufp->chgBit(oldp+3197,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xaU] 
                                               >> 0x37U)))));
        bufp->chgBit(oldp+3198,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xbU] 
                                               >> 0x37U)))));
        bufp->chgBit(oldp+3199,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT____Vcellinp__second1__B));
        bufp->chgBit(oldp+3200,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT____Vcellinp__second3__A));
        bufp->chgBit(oldp+3201,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [6U] 
                                               >> 0x37U)))));
        bufp->chgBit(oldp+3202,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [7U] 
                                               >> 0x37U)))));
        bufp->chgBit(oldp+3203,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [8U] 
                                               >> 0x37U)))));
        bufp->chgBit(oldp+3204,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT____Vcellinp__second1__A));
        bufp->chgBit(oldp+3205,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT____Vcellinp__second4__C));
        bufp->chgBit(oldp+3206,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [3U] 
                                               >> 0x37U)))));
        bufp->chgBit(oldp+3207,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [4U] 
                                               >> 0x37U)))));
        bufp->chgBit(oldp+3208,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [5U] 
                                               >> 0x37U)))));
        bufp->chgBit(oldp+3209,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT____Vcellinp__second2__C));
        bufp->chgBit(oldp+3210,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT____Vcellinp__second4__B));
        bufp->chgBit(oldp+3211,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0U] 
                                               >> 0x37U)))));
        bufp->chgBit(oldp+3212,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [1U] 
                                               >> 0x37U)))));
        bufp->chgBit(oldp+3213,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [2U] 
                                               >> 0x37U)))));
        bufp->chgBit(oldp+3214,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT____Vcellinp__second2__B));
        bufp->chgBit(oldp+3215,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT____Vcellinp__second4__A));
        bufp->chgBit(oldp+3216,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT____Vcellinp__fifth1__C));
        bufp->chgBit(oldp+3217,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT____Vcellinp__fourth2__A));
        bufp->chgBit(oldp+3218,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT____Vcellinp__fourth2__B));
        bufp->chgBit(oldp+3219,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT____Vcellinp__sixth1__C));
        bufp->chgBit(oldp+3220,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT____Vcellinp__third1__C));
        bufp->chgBit(oldp+3221,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT____Vcellinp__third1__A));
        bufp->chgBit(oldp+3222,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0x10U] 
                                               >> 0x37U)))));
        bufp->chgBit(oldp+3223,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT____Vcellinp__third1__B));
        bufp->chgBit(oldp+3224,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT____Vcellinp__third2__C));
        bufp->chgBit(oldp+3225,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xfU] 
                                               >> 0x37U)))));
        bufp->chgBit(oldp+3226,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT____Vcellinp__fourth1__C));
        bufp->chgBit(oldp+3227,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT____Vcellinp__third2__B));
        bufp->chgBit(oldp+3228,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT____Vcellinp__fourth1__B));
        bufp->chgBit(oldp+3229,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT____Vcellinp__third2__A));
        bufp->chgBit(oldp+3230,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT____Vcellinp__fourth1__A));
        bufp->chgBit(oldp+3231,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT____Vcellinp__fourth2__C));
        bufp->chgIData(oldp+3232,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__56__KET____DOT__bi__InData),17);
        bufp->chgBit(oldp+3233,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT__FifSig) 
                                  & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT____Vcellinp__sixth1__B) 
                                     | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0))));
        bufp->chgBit(oldp+3234,((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT__FifSig)) 
                                  & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                 | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT__FifSig)) 
                                     & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT____Vcellinp__sixth1__C)) 
                                        & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT____Vcellinp__sixth1__B))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT__FifSig) 
                                       & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                           & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                          | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0)))))));
        bufp->chgCData(oldp+3235,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT____Vcellinp__second4__A) 
                                    << 4U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT____Vcellinp__second4__B) 
                                               << 3U) 
                                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT____Vcellinp__second4__C) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT____Vcellinp__second3__A) 
                                                     << 1U) 
                                                    | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT____Vcellinp__second3__B)))))),5);
        bufp->chgCData(oldp+3236,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT____Vcellinp__third2__A) 
                                    << 3U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT____Vcellinp__third2__B) 
                                               << 2U) 
                                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT____Vcellinp__third2__C) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT____Vcellinp__third1__A))))),4);
        bufp->chgCData(oldp+3237,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT____Vcellinp__fourth2__A) 
                                    << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT____Vcellinp__fourth2__B))),2);
        bufp->chgCData(oldp+3238,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT____Vcellinp__fifth1__A) 
                                    << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT____Vcellinp__fifth1__B))),2);
        bufp->chgBit(oldp+3239,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT__FifSig));
        bufp->chgBit(oldp+3240,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT____Vcellinp__fifth1__A));
        bufp->chgBit(oldp+3241,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT____Vcellinp__fifth1__B));
        bufp->chgBit(oldp+3242,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT____Vcellinp__sixth1__B));
        bufp->chgBit(oldp+3243,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xcU] 
                                               >> 0x38U)))));
        bufp->chgBit(oldp+3244,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xdU] 
                                               >> 0x38U)))));
        bufp->chgBit(oldp+3245,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xeU] 
                                               >> 0x38U)))));
        bufp->chgBit(oldp+3246,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT____Vcellinp__second1__C));
        bufp->chgBit(oldp+3247,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT____Vcellinp__second3__B));
        bufp->chgBit(oldp+3248,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [9U] 
                                               >> 0x38U)))));
        bufp->chgBit(oldp+3249,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xaU] 
                                               >> 0x38U)))));
        bufp->chgBit(oldp+3250,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xbU] 
                                               >> 0x38U)))));
        bufp->chgBit(oldp+3251,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT____Vcellinp__second1__B));
        bufp->chgBit(oldp+3252,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT____Vcellinp__second3__A));
        bufp->chgBit(oldp+3253,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [6U] 
                                               >> 0x38U)))));
        bufp->chgBit(oldp+3254,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [7U] 
                                               >> 0x38U)))));
        bufp->chgBit(oldp+3255,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [8U] 
                                               >> 0x38U)))));
        bufp->chgBit(oldp+3256,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT____Vcellinp__second1__A));
        bufp->chgBit(oldp+3257,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT____Vcellinp__second4__C));
        bufp->chgBit(oldp+3258,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [3U] 
                                               >> 0x38U)))));
        bufp->chgBit(oldp+3259,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [4U] 
                                               >> 0x38U)))));
        bufp->chgBit(oldp+3260,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [5U] 
                                               >> 0x38U)))));
        bufp->chgBit(oldp+3261,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT____Vcellinp__second2__C));
        bufp->chgBit(oldp+3262,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT____Vcellinp__second4__B));
        bufp->chgBit(oldp+3263,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0U] 
                                               >> 0x38U)))));
        bufp->chgBit(oldp+3264,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [1U] 
                                               >> 0x38U)))));
        bufp->chgBit(oldp+3265,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [2U] 
                                               >> 0x38U)))));
        bufp->chgBit(oldp+3266,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT____Vcellinp__second2__B));
        bufp->chgBit(oldp+3267,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT____Vcellinp__second4__A));
        bufp->chgBit(oldp+3268,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT____Vcellinp__fifth1__C));
        bufp->chgBit(oldp+3269,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT____Vcellinp__fourth2__A));
        bufp->chgBit(oldp+3270,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT____Vcellinp__fourth2__B));
        bufp->chgBit(oldp+3271,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT____Vcellinp__sixth1__C));
        bufp->chgBit(oldp+3272,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT____Vcellinp__third1__C));
        bufp->chgBit(oldp+3273,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT____Vcellinp__third1__A));
        bufp->chgBit(oldp+3274,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0x10U] 
                                               >> 0x38U)))));
        bufp->chgBit(oldp+3275,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT____Vcellinp__third1__B));
        bufp->chgBit(oldp+3276,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT____Vcellinp__third2__C));
        bufp->chgBit(oldp+3277,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xfU] 
                                               >> 0x38U)))));
        bufp->chgBit(oldp+3278,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT____Vcellinp__fourth1__C));
        bufp->chgBit(oldp+3279,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT____Vcellinp__third2__B));
        bufp->chgBit(oldp+3280,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT____Vcellinp__fourth1__B));
        bufp->chgBit(oldp+3281,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT____Vcellinp__third2__A));
        bufp->chgBit(oldp+3282,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT____Vcellinp__fourth1__A));
        bufp->chgBit(oldp+3283,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT____Vcellinp__fourth2__C));
        bufp->chgIData(oldp+3284,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__57__KET____DOT__bi__InData),17);
        bufp->chgBit(oldp+3285,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT__FifSig) 
                                  & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT____Vcellinp__sixth1__B) 
                                     | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0))));
        bufp->chgBit(oldp+3286,((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT__FifSig)) 
                                  & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                 | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT__FifSig)) 
                                     & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT____Vcellinp__sixth1__C)) 
                                        & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT____Vcellinp__sixth1__B))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT__FifSig) 
                                       & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                           & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                          | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0)))))));
        bufp->chgCData(oldp+3287,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT____Vcellinp__second4__A) 
                                    << 4U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT____Vcellinp__second4__B) 
                                               << 3U) 
                                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT____Vcellinp__second4__C) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT____Vcellinp__second3__A) 
                                                     << 1U) 
                                                    | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT____Vcellinp__second3__B)))))),5);
        bufp->chgCData(oldp+3288,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT____Vcellinp__third2__A) 
                                    << 3U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT____Vcellinp__third2__B) 
                                               << 2U) 
                                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT____Vcellinp__third2__C) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT____Vcellinp__third1__A))))),4);
        bufp->chgCData(oldp+3289,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT____Vcellinp__fourth2__A) 
                                    << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT____Vcellinp__fourth2__B))),2);
        bufp->chgCData(oldp+3290,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT____Vcellinp__fifth1__A) 
                                    << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT____Vcellinp__fifth1__B))),2);
        bufp->chgBit(oldp+3291,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT__FifSig));
        bufp->chgBit(oldp+3292,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT____Vcellinp__fifth1__A));
        bufp->chgBit(oldp+3293,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT____Vcellinp__fifth1__B));
        bufp->chgBit(oldp+3294,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT____Vcellinp__sixth1__B));
        bufp->chgBit(oldp+3295,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xcU] 
                                               >> 0x39U)))));
        bufp->chgBit(oldp+3296,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xdU] 
                                               >> 0x39U)))));
        bufp->chgBit(oldp+3297,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xeU] 
                                               >> 0x39U)))));
        bufp->chgBit(oldp+3298,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT____Vcellinp__second1__C));
        bufp->chgBit(oldp+3299,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT____Vcellinp__second3__B));
        bufp->chgBit(oldp+3300,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [9U] 
                                               >> 0x39U)))));
        bufp->chgBit(oldp+3301,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xaU] 
                                               >> 0x39U)))));
        bufp->chgBit(oldp+3302,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xbU] 
                                               >> 0x39U)))));
        bufp->chgBit(oldp+3303,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT____Vcellinp__second1__B));
        bufp->chgBit(oldp+3304,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT____Vcellinp__second3__A));
        bufp->chgBit(oldp+3305,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [6U] 
                                               >> 0x39U)))));
        bufp->chgBit(oldp+3306,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [7U] 
                                               >> 0x39U)))));
        bufp->chgBit(oldp+3307,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [8U] 
                                               >> 0x39U)))));
        bufp->chgBit(oldp+3308,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT____Vcellinp__second1__A));
        bufp->chgBit(oldp+3309,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT____Vcellinp__second4__C));
        bufp->chgBit(oldp+3310,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [3U] 
                                               >> 0x39U)))));
        bufp->chgBit(oldp+3311,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [4U] 
                                               >> 0x39U)))));
        bufp->chgBit(oldp+3312,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [5U] 
                                               >> 0x39U)))));
        bufp->chgBit(oldp+3313,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT____Vcellinp__second2__C));
        bufp->chgBit(oldp+3314,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT____Vcellinp__second4__B));
        bufp->chgBit(oldp+3315,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0U] 
                                               >> 0x39U)))));
        bufp->chgBit(oldp+3316,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [1U] 
                                               >> 0x39U)))));
        bufp->chgBit(oldp+3317,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [2U] 
                                               >> 0x39U)))));
        bufp->chgBit(oldp+3318,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT____Vcellinp__second2__B));
        bufp->chgBit(oldp+3319,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT____Vcellinp__second4__A));
        bufp->chgBit(oldp+3320,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT____Vcellinp__fifth1__C));
        bufp->chgBit(oldp+3321,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT____Vcellinp__fourth2__A));
        bufp->chgBit(oldp+3322,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT____Vcellinp__fourth2__B));
        bufp->chgBit(oldp+3323,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT____Vcellinp__sixth1__C));
        bufp->chgBit(oldp+3324,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT____Vcellinp__third1__C));
        bufp->chgBit(oldp+3325,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT____Vcellinp__third1__A));
        bufp->chgBit(oldp+3326,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0x10U] 
                                               >> 0x39U)))));
        bufp->chgBit(oldp+3327,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT____Vcellinp__third1__B));
        bufp->chgBit(oldp+3328,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT____Vcellinp__third2__C));
        bufp->chgBit(oldp+3329,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xfU] 
                                               >> 0x39U)))));
        bufp->chgBit(oldp+3330,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT____Vcellinp__fourth1__C));
        bufp->chgBit(oldp+3331,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT____Vcellinp__third2__B));
        bufp->chgBit(oldp+3332,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT____Vcellinp__fourth1__B));
        bufp->chgBit(oldp+3333,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT____Vcellinp__third2__A));
        bufp->chgBit(oldp+3334,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT____Vcellinp__fourth1__A));
        bufp->chgBit(oldp+3335,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT____Vcellinp__fourth2__C));
        bufp->chgIData(oldp+3336,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__58__KET____DOT__bi__InData),17);
        bufp->chgBit(oldp+3337,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT__FifSig) 
                                  & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT____Vcellinp__sixth1__B) 
                                     | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0))));
        bufp->chgBit(oldp+3338,((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT__FifSig)) 
                                  & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                 | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT__FifSig)) 
                                     & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT____Vcellinp__sixth1__C)) 
                                        & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT____Vcellinp__sixth1__B))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT__FifSig) 
                                       & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                           & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                          | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0)))))));
        bufp->chgCData(oldp+3339,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT____Vcellinp__second4__A) 
                                    << 4U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT____Vcellinp__second4__B) 
                                               << 3U) 
                                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT____Vcellinp__second4__C) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT____Vcellinp__second3__A) 
                                                     << 1U) 
                                                    | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT____Vcellinp__second3__B)))))),5);
        bufp->chgCData(oldp+3340,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT____Vcellinp__third2__A) 
                                    << 3U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT____Vcellinp__third2__B) 
                                               << 2U) 
                                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT____Vcellinp__third2__C) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT____Vcellinp__third1__A))))),4);
        bufp->chgCData(oldp+3341,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT____Vcellinp__fourth2__A) 
                                    << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT____Vcellinp__fourth2__B))),2);
        bufp->chgCData(oldp+3342,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT____Vcellinp__fifth1__A) 
                                    << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT____Vcellinp__fifth1__B))),2);
        bufp->chgBit(oldp+3343,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT__FifSig));
        bufp->chgBit(oldp+3344,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT____Vcellinp__fifth1__A));
        bufp->chgBit(oldp+3345,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT____Vcellinp__fifth1__B));
        bufp->chgBit(oldp+3346,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT____Vcellinp__sixth1__B));
        bufp->chgBit(oldp+3347,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xcU] 
                                               >> 0x3aU)))));
        bufp->chgBit(oldp+3348,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xdU] 
                                               >> 0x3aU)))));
        bufp->chgBit(oldp+3349,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xeU] 
                                               >> 0x3aU)))));
        bufp->chgBit(oldp+3350,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT____Vcellinp__second1__C));
        bufp->chgBit(oldp+3351,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT____Vcellinp__second3__B));
        bufp->chgBit(oldp+3352,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [9U] 
                                               >> 0x3aU)))));
        bufp->chgBit(oldp+3353,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xaU] 
                                               >> 0x3aU)))));
        bufp->chgBit(oldp+3354,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xbU] 
                                               >> 0x3aU)))));
        bufp->chgBit(oldp+3355,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT____Vcellinp__second1__B));
        bufp->chgBit(oldp+3356,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT____Vcellinp__second3__A));
        bufp->chgBit(oldp+3357,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [6U] 
                                               >> 0x3aU)))));
        bufp->chgBit(oldp+3358,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [7U] 
                                               >> 0x3aU)))));
        bufp->chgBit(oldp+3359,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [8U] 
                                               >> 0x3aU)))));
        bufp->chgBit(oldp+3360,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT____Vcellinp__second1__A));
        bufp->chgBit(oldp+3361,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT____Vcellinp__second4__C));
        bufp->chgBit(oldp+3362,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [3U] 
                                               >> 0x3aU)))));
        bufp->chgBit(oldp+3363,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [4U] 
                                               >> 0x3aU)))));
        bufp->chgBit(oldp+3364,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [5U] 
                                               >> 0x3aU)))));
        bufp->chgBit(oldp+3365,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT____Vcellinp__second2__C));
        bufp->chgBit(oldp+3366,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT____Vcellinp__second4__B));
        bufp->chgBit(oldp+3367,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0U] 
                                               >> 0x3aU)))));
        bufp->chgBit(oldp+3368,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [1U] 
                                               >> 0x3aU)))));
        bufp->chgBit(oldp+3369,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [2U] 
                                               >> 0x3aU)))));
        bufp->chgBit(oldp+3370,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT____Vcellinp__second2__B));
        bufp->chgBit(oldp+3371,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT____Vcellinp__second4__A));
        bufp->chgBit(oldp+3372,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT____Vcellinp__fifth1__C));
        bufp->chgBit(oldp+3373,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT____Vcellinp__fourth2__A));
        bufp->chgBit(oldp+3374,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT____Vcellinp__fourth2__B));
        bufp->chgBit(oldp+3375,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT____Vcellinp__sixth1__C));
        bufp->chgBit(oldp+3376,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT____Vcellinp__third1__C));
        bufp->chgBit(oldp+3377,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT____Vcellinp__third1__A));
        bufp->chgBit(oldp+3378,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0x10U] 
                                               >> 0x3aU)))));
        bufp->chgBit(oldp+3379,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT____Vcellinp__third1__B));
        bufp->chgBit(oldp+3380,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT____Vcellinp__third2__C));
        bufp->chgBit(oldp+3381,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xfU] 
                                               >> 0x3aU)))));
        bufp->chgBit(oldp+3382,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT____Vcellinp__fourth1__C));
        bufp->chgBit(oldp+3383,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT____Vcellinp__third2__B));
        bufp->chgBit(oldp+3384,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT____Vcellinp__fourth1__B));
        bufp->chgBit(oldp+3385,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT____Vcellinp__third2__A));
        bufp->chgBit(oldp+3386,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT____Vcellinp__fourth1__A));
        bufp->chgBit(oldp+3387,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT____Vcellinp__fourth2__C));
        bufp->chgIData(oldp+3388,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__59__KET____DOT__bi__InData),17);
        bufp->chgBit(oldp+3389,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__FifSig) 
                                  & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT____Vcellinp__sixth1__B) 
                                     | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0))));
        bufp->chgBit(oldp+3390,((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__FifSig)) 
                                  & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                 | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__FifSig)) 
                                     & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT____Vcellinp__sixth1__C)) 
                                        & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT____Vcellinp__sixth1__B))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__FifSig) 
                                       & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                           & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                          | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0)))))));
        bufp->chgCData(oldp+3391,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT____Vcellinp__second4__A) 
                                    << 4U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT____Vcellinp__second4__B) 
                                               << 3U) 
                                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT____Vcellinp__second4__C) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT____Vcellinp__second3__A) 
                                                     << 1U) 
                                                    | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT____Vcellinp__second3__B)))))),5);
        bufp->chgCData(oldp+3392,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT____Vcellinp__third2__A) 
                                    << 3U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT____Vcellinp__third2__B) 
                                               << 2U) 
                                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT____Vcellinp__third2__C) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT____Vcellinp__third1__A))))),4);
        bufp->chgCData(oldp+3393,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT____Vcellinp__fourth2__A) 
                                    << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT____Vcellinp__fourth2__B))),2);
        bufp->chgCData(oldp+3394,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT____Vcellinp__fifth1__A) 
                                    << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT____Vcellinp__fifth1__B))),2);
        bufp->chgBit(oldp+3395,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__FifSig));
        bufp->chgBit(oldp+3396,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT____Vcellinp__fifth1__A));
        bufp->chgBit(oldp+3397,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT____Vcellinp__fifth1__B));
        bufp->chgBit(oldp+3398,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT____Vcellinp__sixth1__B));
        bufp->chgBit(oldp+3399,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xcU] 
                                               >> 0x3bU)))));
        bufp->chgBit(oldp+3400,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xdU] 
                                               >> 0x3bU)))));
        bufp->chgBit(oldp+3401,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xeU] 
                                               >> 0x3bU)))));
        bufp->chgBit(oldp+3402,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT____Vcellinp__second1__C));
        bufp->chgBit(oldp+3403,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT____Vcellinp__second3__B));
        bufp->chgBit(oldp+3404,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [9U] 
                                               >> 0x3bU)))));
        bufp->chgBit(oldp+3405,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xaU] 
                                               >> 0x3bU)))));
        bufp->chgBit(oldp+3406,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xbU] 
                                               >> 0x3bU)))));
        bufp->chgBit(oldp+3407,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT____Vcellinp__second1__B));
        bufp->chgBit(oldp+3408,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT____Vcellinp__second3__A));
        bufp->chgBit(oldp+3409,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [6U] 
                                               >> 0x3bU)))));
        bufp->chgBit(oldp+3410,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [7U] 
                                               >> 0x3bU)))));
        bufp->chgBit(oldp+3411,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [8U] 
                                               >> 0x3bU)))));
        bufp->chgBit(oldp+3412,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT____Vcellinp__second1__A));
        bufp->chgBit(oldp+3413,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT____Vcellinp__second4__C));
        bufp->chgBit(oldp+3414,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [3U] 
                                               >> 0x3bU)))));
        bufp->chgBit(oldp+3415,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [4U] 
                                               >> 0x3bU)))));
        bufp->chgBit(oldp+3416,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [5U] 
                                               >> 0x3bU)))));
        bufp->chgBit(oldp+3417,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT____Vcellinp__second2__C));
        bufp->chgBit(oldp+3418,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT____Vcellinp__second4__B));
        bufp->chgBit(oldp+3419,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0U] 
                                               >> 0x3bU)))));
        bufp->chgBit(oldp+3420,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [1U] 
                                               >> 0x3bU)))));
        bufp->chgBit(oldp+3421,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [2U] 
                                               >> 0x3bU)))));
        bufp->chgBit(oldp+3422,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT____Vcellinp__second2__B));
        bufp->chgBit(oldp+3423,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT____Vcellinp__second4__A));
        bufp->chgBit(oldp+3424,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT____Vcellinp__fifth1__C));
        bufp->chgBit(oldp+3425,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT____Vcellinp__fourth2__A));
        bufp->chgBit(oldp+3426,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT____Vcellinp__fourth2__B));
        bufp->chgBit(oldp+3427,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT____Vcellinp__sixth1__C));
        bufp->chgBit(oldp+3428,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT____Vcellinp__third1__C));
        bufp->chgBit(oldp+3429,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT____Vcellinp__third1__A));
        bufp->chgBit(oldp+3430,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0x10U] 
                                               >> 0x3bU)))));
        bufp->chgBit(oldp+3431,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT____Vcellinp__third1__B));
        bufp->chgBit(oldp+3432,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT____Vcellinp__third2__C));
        bufp->chgBit(oldp+3433,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xfU] 
                                               >> 0x3bU)))));
        bufp->chgBit(oldp+3434,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT____Vcellinp__fourth1__C));
        bufp->chgBit(oldp+3435,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT____Vcellinp__third2__B));
        bufp->chgBit(oldp+3436,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT____Vcellinp__fourth1__B));
        bufp->chgBit(oldp+3437,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT____Vcellinp__third2__A));
        bufp->chgBit(oldp+3438,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT____Vcellinp__fourth1__A));
        bufp->chgBit(oldp+3439,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT____Vcellinp__fourth2__C));
        bufp->chgIData(oldp+3440,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData),17);
        bufp->chgBit(oldp+3441,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT__FifSig) 
                                  & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT____Vcellinp__sixth1__B) 
                                     | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0))));
        bufp->chgBit(oldp+3442,((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT__FifSig)) 
                                  & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                 | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT__FifSig)) 
                                     & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT____Vcellinp__sixth1__C)) 
                                        & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT____Vcellinp__sixth1__B))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT__FifSig) 
                                       & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                           & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                          | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0)))))));
        bufp->chgCData(oldp+3443,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT____Vcellinp__second4__A) 
                                    << 4U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT____Vcellinp__second4__B) 
                                               << 3U) 
                                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT____Vcellinp__second4__C) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT____Vcellinp__second3__A) 
                                                     << 1U) 
                                                    | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT____Vcellinp__second3__B)))))),5);
        bufp->chgCData(oldp+3444,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT____Vcellinp__third2__A) 
                                    << 3U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT____Vcellinp__third2__B) 
                                               << 2U) 
                                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT____Vcellinp__third2__C) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT____Vcellinp__third1__A))))),4);
        bufp->chgCData(oldp+3445,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT____Vcellinp__fourth2__A) 
                                    << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT____Vcellinp__fourth2__B))),2);
        bufp->chgCData(oldp+3446,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT____Vcellinp__fifth1__A) 
                                    << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT____Vcellinp__fifth1__B))),2);
        bufp->chgBit(oldp+3447,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT__FifSig));
        bufp->chgBit(oldp+3448,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT____Vcellinp__fifth1__A));
        bufp->chgBit(oldp+3449,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT____Vcellinp__fifth1__B));
        bufp->chgBit(oldp+3450,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT____Vcellinp__sixth1__B));
        bufp->chgBit(oldp+3451,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xcU] 
                                               >> 5U)))));
        bufp->chgBit(oldp+3452,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xdU] 
                                               >> 5U)))));
        bufp->chgBit(oldp+3453,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xeU] 
                                               >> 5U)))));
        bufp->chgBit(oldp+3454,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT____Vcellinp__second1__C));
        bufp->chgBit(oldp+3455,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT____Vcellinp__second3__B));
        bufp->chgBit(oldp+3456,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [9U] 
                                               >> 5U)))));
        bufp->chgBit(oldp+3457,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xaU] 
                                               >> 5U)))));
        bufp->chgBit(oldp+3458,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xbU] 
                                               >> 5U)))));
        bufp->chgBit(oldp+3459,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT____Vcellinp__second1__B));
        bufp->chgBit(oldp+3460,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT____Vcellinp__second3__A));
        bufp->chgBit(oldp+3461,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [6U] 
                                               >> 5U)))));
        bufp->chgBit(oldp+3462,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [7U] 
                                               >> 5U)))));
        bufp->chgBit(oldp+3463,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [8U] 
                                               >> 5U)))));
        bufp->chgBit(oldp+3464,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT____Vcellinp__second1__A));
        bufp->chgBit(oldp+3465,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT____Vcellinp__second4__C));
        bufp->chgBit(oldp+3466,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [3U] 
                                               >> 5U)))));
        bufp->chgBit(oldp+3467,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [4U] 
                                               >> 5U)))));
        bufp->chgBit(oldp+3468,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [5U] 
                                               >> 5U)))));
        bufp->chgBit(oldp+3469,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT____Vcellinp__second2__C));
        bufp->chgBit(oldp+3470,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT____Vcellinp__second4__B));
        bufp->chgBit(oldp+3471,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0U] 
                                               >> 5U)))));
        bufp->chgBit(oldp+3472,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [1U] 
                                               >> 5U)))));
        bufp->chgBit(oldp+3473,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [2U] 
                                               >> 5U)))));
        bufp->chgBit(oldp+3474,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT____Vcellinp__second2__B));
        bufp->chgBit(oldp+3475,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT____Vcellinp__second4__A));
        bufp->chgBit(oldp+3476,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT____Vcellinp__fifth1__C));
        bufp->chgBit(oldp+3477,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT____Vcellinp__fourth2__A));
        bufp->chgBit(oldp+3478,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT____Vcellinp__fourth2__B));
        bufp->chgBit(oldp+3479,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT____Vcellinp__sixth1__C));
        bufp->chgBit(oldp+3480,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT____Vcellinp__third1__C));
        bufp->chgBit(oldp+3481,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT____Vcellinp__third1__A));
        bufp->chgBit(oldp+3482,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0x10U] 
                                               >> 5U)))));
        bufp->chgBit(oldp+3483,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT____Vcellinp__third1__B));
        bufp->chgBit(oldp+3484,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT____Vcellinp__third2__C));
        bufp->chgBit(oldp+3485,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xfU] 
                                               >> 5U)))));
        bufp->chgBit(oldp+3486,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT____Vcellinp__fourth1__C));
        bufp->chgBit(oldp+3487,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT____Vcellinp__third2__B));
        bufp->chgBit(oldp+3488,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT____Vcellinp__fourth1__B));
        bufp->chgBit(oldp+3489,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT____Vcellinp__third2__A));
        bufp->chgBit(oldp+3490,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT____Vcellinp__fourth1__A));
        bufp->chgBit(oldp+3491,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT____Vcellinp__fourth2__C));
        bufp->chgIData(oldp+3492,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData),17);
        bufp->chgBit(oldp+3493,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__FifSig) 
                                  & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT____Vcellinp__sixth1__B) 
                                     | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0))));
        bufp->chgBit(oldp+3494,((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__FifSig)) 
                                  & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                 | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__FifSig)) 
                                     & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT____Vcellinp__sixth1__C)) 
                                        & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT____Vcellinp__sixth1__B))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__FifSig) 
                                       & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                           & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                          | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0)))))));
        bufp->chgCData(oldp+3495,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT____Vcellinp__second4__A) 
                                    << 4U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT____Vcellinp__second4__B) 
                                               << 3U) 
                                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT____Vcellinp__second4__C) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT____Vcellinp__second3__A) 
                                                     << 1U) 
                                                    | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT____Vcellinp__second3__B)))))),5);
        bufp->chgCData(oldp+3496,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT____Vcellinp__third2__A) 
                                    << 3U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT____Vcellinp__third2__B) 
                                               << 2U) 
                                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT____Vcellinp__third2__C) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT____Vcellinp__third1__A))))),4);
        bufp->chgCData(oldp+3497,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT____Vcellinp__fourth2__A) 
                                    << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT____Vcellinp__fourth2__B))),2);
        bufp->chgCData(oldp+3498,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT____Vcellinp__fifth1__A) 
                                    << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT____Vcellinp__fifth1__B))),2);
        bufp->chgBit(oldp+3499,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__FifSig));
        bufp->chgBit(oldp+3500,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT____Vcellinp__fifth1__A));
        bufp->chgBit(oldp+3501,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT____Vcellinp__fifth1__B));
        bufp->chgBit(oldp+3502,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT____Vcellinp__sixth1__B));
        bufp->chgBit(oldp+3503,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xcU] 
                                               >> 0x3cU)))));
        bufp->chgBit(oldp+3504,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xdU] 
                                               >> 0x3cU)))));
        bufp->chgBit(oldp+3505,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xeU] 
                                               >> 0x3cU)))));
        bufp->chgBit(oldp+3506,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT____Vcellinp__second1__C));
        bufp->chgBit(oldp+3507,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT____Vcellinp__second3__B));
        bufp->chgBit(oldp+3508,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [9U] 
                                               >> 0x3cU)))));
        bufp->chgBit(oldp+3509,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xaU] 
                                               >> 0x3cU)))));
        bufp->chgBit(oldp+3510,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xbU] 
                                               >> 0x3cU)))));
        bufp->chgBit(oldp+3511,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT____Vcellinp__second1__B));
        bufp->chgBit(oldp+3512,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT____Vcellinp__second3__A));
        bufp->chgBit(oldp+3513,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [6U] 
                                               >> 0x3cU)))));
        bufp->chgBit(oldp+3514,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [7U] 
                                               >> 0x3cU)))));
        bufp->chgBit(oldp+3515,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [8U] 
                                               >> 0x3cU)))));
        bufp->chgBit(oldp+3516,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT____Vcellinp__second1__A));
        bufp->chgBit(oldp+3517,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT____Vcellinp__second4__C));
        bufp->chgBit(oldp+3518,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [3U] 
                                               >> 0x3cU)))));
        bufp->chgBit(oldp+3519,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [4U] 
                                               >> 0x3cU)))));
        bufp->chgBit(oldp+3520,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [5U] 
                                               >> 0x3cU)))));
        bufp->chgBit(oldp+3521,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT____Vcellinp__second2__C));
        bufp->chgBit(oldp+3522,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT____Vcellinp__second4__B));
        bufp->chgBit(oldp+3523,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0U] 
                                               >> 0x3cU)))));
        bufp->chgBit(oldp+3524,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [1U] 
                                               >> 0x3cU)))));
        bufp->chgBit(oldp+3525,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [2U] 
                                               >> 0x3cU)))));
        bufp->chgBit(oldp+3526,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT____Vcellinp__second2__B));
        bufp->chgBit(oldp+3527,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT____Vcellinp__second4__A));
        bufp->chgBit(oldp+3528,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT____Vcellinp__fifth1__C));
        bufp->chgBit(oldp+3529,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT____Vcellinp__fourth2__A));
        bufp->chgBit(oldp+3530,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT____Vcellinp__fourth2__B));
        bufp->chgBit(oldp+3531,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT____Vcellinp__sixth1__C));
        bufp->chgBit(oldp+3532,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT____Vcellinp__third1__C));
        bufp->chgBit(oldp+3533,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT____Vcellinp__third1__A));
        bufp->chgBit(oldp+3534,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0x10U] 
                                               >> 0x3cU)))));
        bufp->chgBit(oldp+3535,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT____Vcellinp__third1__B));
        bufp->chgBit(oldp+3536,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT____Vcellinp__third2__C));
        bufp->chgBit(oldp+3537,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xfU] 
                                               >> 0x3cU)))));
        bufp->chgBit(oldp+3538,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT____Vcellinp__fourth1__C));
        bufp->chgBit(oldp+3539,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT____Vcellinp__third2__B));
        bufp->chgBit(oldp+3540,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT____Vcellinp__fourth1__B));
        bufp->chgBit(oldp+3541,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT____Vcellinp__third2__A));
        bufp->chgBit(oldp+3542,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT____Vcellinp__fourth1__A));
        bufp->chgBit(oldp+3543,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT____Vcellinp__fourth2__C));
        bufp->chgIData(oldp+3544,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData),17);
        bufp->chgBit(oldp+3545,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__FifSig) 
                                  & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT____Vcellinp__sixth1__B) 
                                     | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0))));
        bufp->chgBit(oldp+3546,((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__FifSig)) 
                                  & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                 | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__FifSig)) 
                                     & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT____Vcellinp__sixth1__C)) 
                                        & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT____Vcellinp__sixth1__B))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__FifSig) 
                                       & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                           & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                          | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0)))))));
        bufp->chgCData(oldp+3547,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT____Vcellinp__second4__A) 
                                    << 4U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT____Vcellinp__second4__B) 
                                               << 3U) 
                                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT____Vcellinp__second4__C) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT____Vcellinp__second3__A) 
                                                     << 1U) 
                                                    | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT____Vcellinp__second3__B)))))),5);
        bufp->chgCData(oldp+3548,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT____Vcellinp__third2__A) 
                                    << 3U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT____Vcellinp__third2__B) 
                                               << 2U) 
                                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT____Vcellinp__third2__C) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT____Vcellinp__third1__A))))),4);
        bufp->chgCData(oldp+3549,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT____Vcellinp__fourth2__A) 
                                    << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT____Vcellinp__fourth2__B))),2);
        bufp->chgCData(oldp+3550,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT____Vcellinp__fifth1__A) 
                                    << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT____Vcellinp__fifth1__B))),2);
        bufp->chgBit(oldp+3551,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__FifSig));
        bufp->chgBit(oldp+3552,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT____Vcellinp__fifth1__A));
        bufp->chgBit(oldp+3553,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT____Vcellinp__fifth1__B));
        bufp->chgBit(oldp+3554,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT____Vcellinp__sixth1__B));
        bufp->chgBit(oldp+3555,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xcU] 
                                               >> 0x3dU)))));
        bufp->chgBit(oldp+3556,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xdU] 
                                               >> 0x3dU)))));
        bufp->chgBit(oldp+3557,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xeU] 
                                               >> 0x3dU)))));
        bufp->chgBit(oldp+3558,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT____Vcellinp__second1__C));
        bufp->chgBit(oldp+3559,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT____Vcellinp__second3__B));
        bufp->chgBit(oldp+3560,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [9U] 
                                               >> 0x3dU)))));
        bufp->chgBit(oldp+3561,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xaU] 
                                               >> 0x3dU)))));
        bufp->chgBit(oldp+3562,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xbU] 
                                               >> 0x3dU)))));
        bufp->chgBit(oldp+3563,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT____Vcellinp__second1__B));
        bufp->chgBit(oldp+3564,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT____Vcellinp__second3__A));
        bufp->chgBit(oldp+3565,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [6U] 
                                               >> 0x3dU)))));
        bufp->chgBit(oldp+3566,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [7U] 
                                               >> 0x3dU)))));
        bufp->chgBit(oldp+3567,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [8U] 
                                               >> 0x3dU)))));
        bufp->chgBit(oldp+3568,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT____Vcellinp__second1__A));
        bufp->chgBit(oldp+3569,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT____Vcellinp__second4__C));
        bufp->chgBit(oldp+3570,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [3U] 
                                               >> 0x3dU)))));
        bufp->chgBit(oldp+3571,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [4U] 
                                               >> 0x3dU)))));
        bufp->chgBit(oldp+3572,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [5U] 
                                               >> 0x3dU)))));
        bufp->chgBit(oldp+3573,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT____Vcellinp__second2__C));
        bufp->chgBit(oldp+3574,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT____Vcellinp__second4__B));
        bufp->chgBit(oldp+3575,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0U] 
                                               >> 0x3dU)))));
        bufp->chgBit(oldp+3576,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [1U] 
                                               >> 0x3dU)))));
        bufp->chgBit(oldp+3577,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [2U] 
                                               >> 0x3dU)))));
        bufp->chgBit(oldp+3578,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT____Vcellinp__second2__B));
        bufp->chgBit(oldp+3579,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT____Vcellinp__second4__A));
        bufp->chgBit(oldp+3580,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT____Vcellinp__fifth1__C));
        bufp->chgBit(oldp+3581,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT____Vcellinp__fourth2__A));
        bufp->chgBit(oldp+3582,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT____Vcellinp__fourth2__B));
        bufp->chgBit(oldp+3583,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT____Vcellinp__sixth1__C));
        bufp->chgBit(oldp+3584,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT____Vcellinp__third1__C));
        bufp->chgBit(oldp+3585,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT____Vcellinp__third1__A));
        bufp->chgBit(oldp+3586,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0x10U] 
                                               >> 0x3dU)))));
        bufp->chgBit(oldp+3587,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT____Vcellinp__third1__B));
        bufp->chgBit(oldp+3588,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT____Vcellinp__third2__C));
        bufp->chgBit(oldp+3589,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xfU] 
                                               >> 0x3dU)))));
        bufp->chgBit(oldp+3590,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT____Vcellinp__fourth1__C));
        bufp->chgBit(oldp+3591,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT____Vcellinp__third2__B));
        bufp->chgBit(oldp+3592,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT____Vcellinp__fourth1__B));
        bufp->chgBit(oldp+3593,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT____Vcellinp__third2__A));
        bufp->chgBit(oldp+3594,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT____Vcellinp__fourth1__A));
        bufp->chgBit(oldp+3595,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT____Vcellinp__fourth2__C));
        bufp->chgIData(oldp+3596,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData),17);
        bufp->chgBit(oldp+3597,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__FifSig) 
                                  & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT____Vcellinp__sixth1__B) 
                                     | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0))));
        bufp->chgBit(oldp+3598,((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__FifSig)) 
                                  & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                 | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__FifSig)) 
                                     & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT____Vcellinp__sixth1__C)) 
                                        & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT____Vcellinp__sixth1__B))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__FifSig) 
                                       & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                           & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                          | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0)))))));
        bufp->chgCData(oldp+3599,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT____Vcellinp__second4__A) 
                                    << 4U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT____Vcellinp__second4__B) 
                                               << 3U) 
                                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT____Vcellinp__second4__C) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT____Vcellinp__second3__A) 
                                                     << 1U) 
                                                    | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT____Vcellinp__second3__B)))))),5);
        bufp->chgCData(oldp+3600,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT____Vcellinp__third2__A) 
                                    << 3U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT____Vcellinp__third2__B) 
                                               << 2U) 
                                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT____Vcellinp__third2__C) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT____Vcellinp__third1__A))))),4);
        bufp->chgCData(oldp+3601,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT____Vcellinp__fourth2__A) 
                                    << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT____Vcellinp__fourth2__B))),2);
        bufp->chgCData(oldp+3602,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT____Vcellinp__fifth1__A) 
                                    << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT____Vcellinp__fifth1__B))),2);
        bufp->chgBit(oldp+3603,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__FifSig));
        bufp->chgBit(oldp+3604,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT____Vcellinp__fifth1__A));
        bufp->chgBit(oldp+3605,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT____Vcellinp__fifth1__B));
        bufp->chgBit(oldp+3606,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT____Vcellinp__sixth1__B));
        bufp->chgBit(oldp+3607,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xcU] 
                                               >> 0x3eU)))));
        bufp->chgBit(oldp+3608,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xdU] 
                                               >> 0x3eU)))));
        bufp->chgBit(oldp+3609,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xeU] 
                                               >> 0x3eU)))));
        bufp->chgBit(oldp+3610,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT____Vcellinp__second1__C));
        bufp->chgBit(oldp+3611,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT____Vcellinp__second3__B));
        bufp->chgBit(oldp+3612,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [9U] 
                                               >> 0x3eU)))));
        bufp->chgBit(oldp+3613,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xaU] 
                                               >> 0x3eU)))));
        bufp->chgBit(oldp+3614,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xbU] 
                                               >> 0x3eU)))));
        bufp->chgBit(oldp+3615,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT____Vcellinp__second1__B));
        bufp->chgBit(oldp+3616,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT____Vcellinp__second3__A));
        bufp->chgBit(oldp+3617,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [6U] 
                                               >> 0x3eU)))));
        bufp->chgBit(oldp+3618,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [7U] 
                                               >> 0x3eU)))));
        bufp->chgBit(oldp+3619,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [8U] 
                                               >> 0x3eU)))));
        bufp->chgBit(oldp+3620,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT____Vcellinp__second1__A));
        bufp->chgBit(oldp+3621,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT____Vcellinp__second4__C));
        bufp->chgBit(oldp+3622,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [3U] 
                                               >> 0x3eU)))));
        bufp->chgBit(oldp+3623,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [4U] 
                                               >> 0x3eU)))));
        bufp->chgBit(oldp+3624,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [5U] 
                                               >> 0x3eU)))));
        bufp->chgBit(oldp+3625,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT____Vcellinp__second2__C));
        bufp->chgBit(oldp+3626,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT____Vcellinp__second4__B));
        bufp->chgBit(oldp+3627,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0U] 
                                               >> 0x3eU)))));
        bufp->chgBit(oldp+3628,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [1U] 
                                               >> 0x3eU)))));
        bufp->chgBit(oldp+3629,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [2U] 
                                               >> 0x3eU)))));
        bufp->chgBit(oldp+3630,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT____Vcellinp__second2__B));
        bufp->chgBit(oldp+3631,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT____Vcellinp__second4__A));
        bufp->chgBit(oldp+3632,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT____Vcellinp__fifth1__C));
        bufp->chgBit(oldp+3633,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT____Vcellinp__fourth2__A));
        bufp->chgBit(oldp+3634,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT____Vcellinp__fourth2__B));
        bufp->chgBit(oldp+3635,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT____Vcellinp__sixth1__C));
        bufp->chgBit(oldp+3636,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT____Vcellinp__third1__C));
        bufp->chgBit(oldp+3637,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT____Vcellinp__third1__A));
        bufp->chgBit(oldp+3638,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0x10U] 
                                               >> 0x3eU)))));
        bufp->chgBit(oldp+3639,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT____Vcellinp__third1__B));
        bufp->chgBit(oldp+3640,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT____Vcellinp__third2__C));
        bufp->chgBit(oldp+3641,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xfU] 
                                               >> 0x3eU)))));
        bufp->chgBit(oldp+3642,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT____Vcellinp__fourth1__C));
        bufp->chgBit(oldp+3643,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT____Vcellinp__third2__B));
        bufp->chgBit(oldp+3644,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT____Vcellinp__fourth1__B));
        bufp->chgBit(oldp+3645,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT____Vcellinp__third2__A));
        bufp->chgBit(oldp+3646,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT____Vcellinp__fourth1__A));
        bufp->chgBit(oldp+3647,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT____Vcellinp__fourth2__C));
        bufp->chgIData(oldp+3648,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData),17);
        bufp->chgBit(oldp+3649,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__FifSig) 
                                  & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT____Vcellinp__sixth1__B) 
                                     | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0))));
        bufp->chgBit(oldp+3650,((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__FifSig)) 
                                  & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                 | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__FifSig)) 
                                     & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT____Vcellinp__sixth1__C)) 
                                        & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT____Vcellinp__sixth1__B))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__FifSig) 
                                       & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                           & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                          | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0)))))));
        bufp->chgCData(oldp+3651,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT____Vcellinp__second4__A) 
                                    << 4U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT____Vcellinp__second4__B) 
                                               << 3U) 
                                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT____Vcellinp__second4__C) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT____Vcellinp__second3__A) 
                                                     << 1U) 
                                                    | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT____Vcellinp__second3__B)))))),5);
        bufp->chgCData(oldp+3652,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT____Vcellinp__third2__A) 
                                    << 3U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT____Vcellinp__third2__B) 
                                               << 2U) 
                                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT____Vcellinp__third2__C) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT____Vcellinp__third1__A))))),4);
        bufp->chgCData(oldp+3653,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT____Vcellinp__fourth2__A) 
                                    << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT____Vcellinp__fourth2__B))),2);
        bufp->chgCData(oldp+3654,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT____Vcellinp__fifth1__A) 
                                    << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT____Vcellinp__fifth1__B))),2);
        bufp->chgBit(oldp+3655,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__FifSig));
        bufp->chgBit(oldp+3656,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT____Vcellinp__fifth1__A));
        bufp->chgBit(oldp+3657,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT____Vcellinp__fifth1__B));
        bufp->chgBit(oldp+3658,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT____Vcellinp__fifth1__A) 
                                  & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT____Vcellinp__fifth1__B) 
                                     | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT____Vcellinp__fifth1__C))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT____Vcellinp__fifth1__B) 
                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT____Vcellinp__fifth1__C)))));
        bufp->chgBit(oldp+3659,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xcU] 
                                               >> 0x3fU)))));
        bufp->chgBit(oldp+3660,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xdU] 
                                               >> 0x3fU)))));
        bufp->chgBit(oldp+3661,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xeU] 
                                               >> 0x3fU)))));
        bufp->chgBit(oldp+3662,((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                 [0xcU] 
                                                 >> 0x3fU)) 
                                        & ((IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                    [0xdU] 
                                                    >> 0x3fU)) 
                                           | (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                      [0xeU] 
                                                      >> 0x3fU)))) 
                                       | ((IData)((
                                                   vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                   [0xdU] 
                                                   >> 0x3fU)) 
                                          & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                     [0xeU] 
                                                     >> 0x3fU)))))));
        bufp->chgBit(oldp+3663,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT____Vcellinp__second3__B));
        bufp->chgBit(oldp+3664,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [9U] 
                                               >> 0x3fU)))));
        bufp->chgBit(oldp+3665,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xaU] 
                                               >> 0x3fU)))));
        bufp->chgBit(oldp+3666,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xbU] 
                                               >> 0x3fU)))));
        bufp->chgBit(oldp+3667,((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                 [9U] 
                                                 >> 0x3fU)) 
                                        & ((IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                    [0xaU] 
                                                    >> 0x3fU)) 
                                           | (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                      [0xbU] 
                                                      >> 0x3fU)))) 
                                       | ((IData)((
                                                   vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                   [0xaU] 
                                                   >> 0x3fU)) 
                                          & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                     [0xbU] 
                                                     >> 0x3fU)))))));
        bufp->chgBit(oldp+3668,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT____Vcellinp__second3__A));
        bufp->chgBit(oldp+3669,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [6U] 
                                               >> 0x3fU)))));
        bufp->chgBit(oldp+3670,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [7U] 
                                               >> 0x3fU)))));
        bufp->chgBit(oldp+3671,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [8U] 
                                               >> 0x3fU)))));
        bufp->chgBit(oldp+3672,((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                 [6U] 
                                                 >> 0x3fU)) 
                                        & ((IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                    [7U] 
                                                    >> 0x3fU)) 
                                           | (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                      [8U] 
                                                      >> 0x3fU)))) 
                                       | ((IData)((
                                                   vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                   [7U] 
                                                   >> 0x3fU)) 
                                          & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                     [8U] 
                                                     >> 0x3fU)))))));
        bufp->chgBit(oldp+3673,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT____Vcellinp__second4__C));
        bufp->chgBit(oldp+3674,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [3U] 
                                               >> 0x3fU)))));
        bufp->chgBit(oldp+3675,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [4U] 
                                               >> 0x3fU)))));
        bufp->chgBit(oldp+3676,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [5U] 
                                               >> 0x3fU)))));
        bufp->chgBit(oldp+3677,((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                 [3U] 
                                                 >> 0x3fU)) 
                                        & ((IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                    [4U] 
                                                    >> 0x3fU)) 
                                           | (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                      [5U] 
                                                      >> 0x3fU)))) 
                                       | ((IData)((
                                                   vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                   [4U] 
                                                   >> 0x3fU)) 
                                          & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                     [5U] 
                                                     >> 0x3fU)))))));
        bufp->chgBit(oldp+3678,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT____Vcellinp__second4__B));
        bufp->chgBit(oldp+3679,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0U] 
                                               >> 0x3fU)))));
        bufp->chgBit(oldp+3680,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [1U] 
                                               >> 0x3fU)))));
        bufp->chgBit(oldp+3681,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [2U] 
                                               >> 0x3fU)))));
        bufp->chgBit(oldp+3682,((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                 [0U] 
                                                 >> 0x3fU)) 
                                        & ((IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                    [1U] 
                                                    >> 0x3fU)) 
                                           | (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                      [2U] 
                                                      >> 0x3fU)))) 
                                       | ((IData)((
                                                   vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                   [1U] 
                                                   >> 0x3fU)) 
                                          & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                     [2U] 
                                                     >> 0x3fU)))))));
        bufp->chgBit(oldp+3683,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT____Vcellinp__second4__A));
        bufp->chgBit(oldp+3684,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT____Vcellinp__fourth1__A) 
                                  & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT____Vcellinp__fourth1__B) 
                                     | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT____Vcellinp__fourth1__C))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT____Vcellinp__fourth1__B) 
                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT____Vcellinp__fourth1__C)))));
        bufp->chgBit(oldp+3685,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT____Vcellinp__fourth2__A));
        bufp->chgBit(oldp+3686,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT____Vcellinp__fourth2__B));
        bufp->chgBit(oldp+3687,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT____Vcellinp__fourth2__A) 
                                  & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT____Vcellinp__fourth2__B) 
                                     | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT____Vcellinp__fourth2__C))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT____Vcellinp__fourth2__B) 
                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT____Vcellinp__fourth2__C)))));
        bufp->chgBit(oldp+3688,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT____Vcellinp__second1__A) 
                                  & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT____Vcellinp__second1__B) 
                                     | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT____Vcellinp__second1__C))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT____Vcellinp__second1__B) 
                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT____Vcellinp__second1__C)))));
        bufp->chgBit(oldp+3689,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT____Vcellinp__third1__A));
        bufp->chgBit(oldp+3690,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0x10U] 
                                               >> 0x3fU)))));
        bufp->chgBit(oldp+3691,((((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                           [0x10U] 
                                           >> 0x3fU)) 
                                  & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT____Vcellinp__second2__B) 
                                     | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT____Vcellinp__second2__C))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT____Vcellinp__second2__B) 
                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT____Vcellinp__second2__C)))));
        bufp->chgBit(oldp+3692,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT____Vcellinp__third2__C));
        bufp->chgBit(oldp+3693,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xfU] 
                                               >> 0x3fU)))));
        bufp->chgBit(oldp+3694,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT____Vcellinp__second3__A) 
                                  & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT____Vcellinp__second3__B) 
                                     | (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                [0xfU] 
                                                >> 0x3fU)))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT____Vcellinp__second3__B) 
                                    & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xfU] 
                                               >> 0x3fU))))));
        bufp->chgBit(oldp+3695,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT____Vcellinp__third2__B));
        bufp->chgBit(oldp+3696,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT____Vcellinp__second4__A) 
                                  & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT____Vcellinp__second4__B) 
                                     | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT____Vcellinp__second4__C))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT____Vcellinp__second4__B) 
                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT____Vcellinp__second4__C)))));
        bufp->chgBit(oldp+3697,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT____Vcellinp__third2__A));
        bufp->chgBit(oldp+3698,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT____Vcellinp__third1__A) 
                                  & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT____Vcellinp__third1__B) 
                                     | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT____Vcellinp__third1__C))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT____Vcellinp__third1__B) 
                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT____Vcellinp__third1__C)))));
        bufp->chgBit(oldp+3699,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT____Vcellinp__third2__A) 
                                  & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT____Vcellinp__third2__B) 
                                     | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT____Vcellinp__third2__C))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT____Vcellinp__third2__B) 
                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT____Vcellinp__third2__C)))));
        bufp->chgIData(oldp+3700,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData),17);
        bufp->chgBit(oldp+3701,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT__FifSig) 
                                  & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT____Vcellinp__sixth1__B) 
                                     | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0))));
        bufp->chgBit(oldp+3702,((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT__FifSig)) 
                                  & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                 | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT__FifSig)) 
                                     & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT____Vcellinp__sixth1__C)) 
                                        & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT____Vcellinp__sixth1__B))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT__FifSig) 
                                       & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                           & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                          | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0)))))));
        bufp->chgCData(oldp+3703,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT____Vcellinp__second4__A) 
                                    << 4U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT____Vcellinp__second4__B) 
                                               << 3U) 
                                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT____Vcellinp__second4__C) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT____Vcellinp__second3__A) 
                                                     << 1U) 
                                                    | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT____Vcellinp__second3__B)))))),5);
        bufp->chgCData(oldp+3704,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT____Vcellinp__third2__A) 
                                    << 3U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT____Vcellinp__third2__B) 
                                               << 2U) 
                                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT____Vcellinp__third2__C) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT____Vcellinp__third1__A))))),4);
        bufp->chgCData(oldp+3705,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT____Vcellinp__fourth2__A) 
                                    << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT____Vcellinp__fourth2__B))),2);
        bufp->chgCData(oldp+3706,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT____Vcellinp__fifth1__A) 
                                    << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT____Vcellinp__fifth1__B))),2);
        bufp->chgBit(oldp+3707,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT__FifSig));
        bufp->chgBit(oldp+3708,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT____Vcellinp__fifth1__A));
        bufp->chgBit(oldp+3709,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT____Vcellinp__fifth1__B));
        bufp->chgBit(oldp+3710,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT____Vcellinp__sixth1__B));
        bufp->chgBit(oldp+3711,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xcU] 
                                               >> 6U)))));
        bufp->chgBit(oldp+3712,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xdU] 
                                               >> 6U)))));
        bufp->chgBit(oldp+3713,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xeU] 
                                               >> 6U)))));
        bufp->chgBit(oldp+3714,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT____Vcellinp__second1__C));
        bufp->chgBit(oldp+3715,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT____Vcellinp__second3__B));
        bufp->chgBit(oldp+3716,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [9U] 
                                               >> 6U)))));
        bufp->chgBit(oldp+3717,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xaU] 
                                               >> 6U)))));
        bufp->chgBit(oldp+3718,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xbU] 
                                               >> 6U)))));
        bufp->chgBit(oldp+3719,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT____Vcellinp__second1__B));
        bufp->chgBit(oldp+3720,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT____Vcellinp__second3__A));
        bufp->chgBit(oldp+3721,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [6U] 
                                               >> 6U)))));
        bufp->chgBit(oldp+3722,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [7U] 
                                               >> 6U)))));
        bufp->chgBit(oldp+3723,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [8U] 
                                               >> 6U)))));
        bufp->chgBit(oldp+3724,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT____Vcellinp__second1__A));
        bufp->chgBit(oldp+3725,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT____Vcellinp__second4__C));
        bufp->chgBit(oldp+3726,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [3U] 
                                               >> 6U)))));
        bufp->chgBit(oldp+3727,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [4U] 
                                               >> 6U)))));
        bufp->chgBit(oldp+3728,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [5U] 
                                               >> 6U)))));
        bufp->chgBit(oldp+3729,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT____Vcellinp__second2__C));
        bufp->chgBit(oldp+3730,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT____Vcellinp__second4__B));
        bufp->chgBit(oldp+3731,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0U] 
                                               >> 6U)))));
        bufp->chgBit(oldp+3732,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [1U] 
                                               >> 6U)))));
        bufp->chgBit(oldp+3733,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [2U] 
                                               >> 6U)))));
        bufp->chgBit(oldp+3734,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT____Vcellinp__second2__B));
        bufp->chgBit(oldp+3735,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT____Vcellinp__second4__A));
        bufp->chgBit(oldp+3736,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT____Vcellinp__fifth1__C));
        bufp->chgBit(oldp+3737,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT____Vcellinp__fourth2__A));
        bufp->chgBit(oldp+3738,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT____Vcellinp__fourth2__B));
        bufp->chgBit(oldp+3739,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT____Vcellinp__sixth1__C));
        bufp->chgBit(oldp+3740,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT____Vcellinp__third1__C));
        bufp->chgBit(oldp+3741,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT____Vcellinp__third1__A));
        bufp->chgBit(oldp+3742,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0x10U] 
                                               >> 6U)))));
        bufp->chgBit(oldp+3743,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT____Vcellinp__third1__B));
        bufp->chgBit(oldp+3744,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT____Vcellinp__third2__C));
        bufp->chgBit(oldp+3745,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xfU] 
                                               >> 6U)))));
        bufp->chgBit(oldp+3746,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT____Vcellinp__fourth1__C));
        bufp->chgBit(oldp+3747,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT____Vcellinp__third2__B));
        bufp->chgBit(oldp+3748,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT____Vcellinp__fourth1__B));
        bufp->chgBit(oldp+3749,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT____Vcellinp__third2__A));
        bufp->chgBit(oldp+3750,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT____Vcellinp__fourth1__A));
        bufp->chgBit(oldp+3751,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT____Vcellinp__fourth2__C));
        bufp->chgIData(oldp+3752,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData),17);
        bufp->chgBit(oldp+3753,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT__FifSig) 
                                  & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT____Vcellinp__sixth1__B) 
                                     | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0))));
        bufp->chgBit(oldp+3754,((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT__FifSig)) 
                                  & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                 | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT__FifSig)) 
                                     & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT____Vcellinp__sixth1__C)) 
                                        & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT____Vcellinp__sixth1__B))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT__FifSig) 
                                       & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                           & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                          | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0)))))));
        bufp->chgCData(oldp+3755,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT____Vcellinp__second4__A) 
                                    << 4U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT____Vcellinp__second4__B) 
                                               << 3U) 
                                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT____Vcellinp__second4__C) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT____Vcellinp__second3__A) 
                                                     << 1U) 
                                                    | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT____Vcellinp__second3__B)))))),5);
        bufp->chgCData(oldp+3756,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT____Vcellinp__third2__A) 
                                    << 3U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT____Vcellinp__third2__B) 
                                               << 2U) 
                                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT____Vcellinp__third2__C) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT____Vcellinp__third1__A))))),4);
        bufp->chgCData(oldp+3757,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT____Vcellinp__fourth2__A) 
                                    << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT____Vcellinp__fourth2__B))),2);
        bufp->chgCData(oldp+3758,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT____Vcellinp__fifth1__A) 
                                    << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT____Vcellinp__fifth1__B))),2);
        bufp->chgBit(oldp+3759,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT__FifSig));
        bufp->chgBit(oldp+3760,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT____Vcellinp__fifth1__A));
        bufp->chgBit(oldp+3761,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT____Vcellinp__fifth1__B));
        bufp->chgBit(oldp+3762,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT____Vcellinp__sixth1__B));
        bufp->chgBit(oldp+3763,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xcU] 
                                               >> 7U)))));
        bufp->chgBit(oldp+3764,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xdU] 
                                               >> 7U)))));
        bufp->chgBit(oldp+3765,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xeU] 
                                               >> 7U)))));
        bufp->chgBit(oldp+3766,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT____Vcellinp__second1__C));
        bufp->chgBit(oldp+3767,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT____Vcellinp__second3__B));
        bufp->chgBit(oldp+3768,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [9U] 
                                               >> 7U)))));
        bufp->chgBit(oldp+3769,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xaU] 
                                               >> 7U)))));
        bufp->chgBit(oldp+3770,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xbU] 
                                               >> 7U)))));
        bufp->chgBit(oldp+3771,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT____Vcellinp__second1__B));
        bufp->chgBit(oldp+3772,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT____Vcellinp__second3__A));
        bufp->chgBit(oldp+3773,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [6U] 
                                               >> 7U)))));
        bufp->chgBit(oldp+3774,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [7U] 
                                               >> 7U)))));
        bufp->chgBit(oldp+3775,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [8U] 
                                               >> 7U)))));
        bufp->chgBit(oldp+3776,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT____Vcellinp__second1__A));
        bufp->chgBit(oldp+3777,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT____Vcellinp__second4__C));
        bufp->chgBit(oldp+3778,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [3U] 
                                               >> 7U)))));
        bufp->chgBit(oldp+3779,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [4U] 
                                               >> 7U)))));
        bufp->chgBit(oldp+3780,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [5U] 
                                               >> 7U)))));
        bufp->chgBit(oldp+3781,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT____Vcellinp__second2__C));
        bufp->chgBit(oldp+3782,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT____Vcellinp__second4__B));
        bufp->chgBit(oldp+3783,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0U] 
                                               >> 7U)))));
        bufp->chgBit(oldp+3784,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [1U] 
                                               >> 7U)))));
        bufp->chgBit(oldp+3785,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [2U] 
                                               >> 7U)))));
        bufp->chgBit(oldp+3786,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT____Vcellinp__second2__B));
        bufp->chgBit(oldp+3787,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT____Vcellinp__second4__A));
        bufp->chgBit(oldp+3788,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT____Vcellinp__fifth1__C));
        bufp->chgBit(oldp+3789,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT____Vcellinp__fourth2__A));
        bufp->chgBit(oldp+3790,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT____Vcellinp__fourth2__B));
        bufp->chgBit(oldp+3791,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT____Vcellinp__sixth1__C));
        bufp->chgBit(oldp+3792,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT____Vcellinp__third1__C));
        bufp->chgBit(oldp+3793,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT____Vcellinp__third1__A));
        bufp->chgBit(oldp+3794,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0x10U] 
                                               >> 7U)))));
        bufp->chgBit(oldp+3795,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT____Vcellinp__third1__B));
        bufp->chgBit(oldp+3796,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT____Vcellinp__third2__C));
        bufp->chgBit(oldp+3797,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xfU] 
                                               >> 7U)))));
        bufp->chgBit(oldp+3798,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT____Vcellinp__fourth1__C));
        bufp->chgBit(oldp+3799,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT____Vcellinp__third2__B));
        bufp->chgBit(oldp+3800,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT____Vcellinp__fourth1__B));
        bufp->chgBit(oldp+3801,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT____Vcellinp__third2__A));
        bufp->chgBit(oldp+3802,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT____Vcellinp__fourth1__A));
        bufp->chgBit(oldp+3803,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT____Vcellinp__fourth2__C));
        bufp->chgIData(oldp+3804,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData),17);
        bufp->chgBit(oldp+3805,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT__FifSig) 
                                  & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT____Vcellinp__sixth1__B) 
                                     | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0))));
        bufp->chgBit(oldp+3806,((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT__FifSig)) 
                                  & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                 | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT__FifSig)) 
                                     & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT____Vcellinp__sixth1__C)) 
                                        & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT____Vcellinp__sixth1__B))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT__FifSig) 
                                       & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                           & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                          | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0)))))));
        bufp->chgCData(oldp+3807,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT____Vcellinp__second4__A) 
                                    << 4U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT____Vcellinp__second4__B) 
                                               << 3U) 
                                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT____Vcellinp__second4__C) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT____Vcellinp__second3__A) 
                                                     << 1U) 
                                                    | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT____Vcellinp__second3__B)))))),5);
        bufp->chgCData(oldp+3808,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT____Vcellinp__third2__A) 
                                    << 3U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT____Vcellinp__third2__B) 
                                               << 2U) 
                                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT____Vcellinp__third2__C) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT____Vcellinp__third1__A))))),4);
        bufp->chgCData(oldp+3809,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT____Vcellinp__fourth2__A) 
                                    << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT____Vcellinp__fourth2__B))),2);
        bufp->chgCData(oldp+3810,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT____Vcellinp__fifth1__A) 
                                    << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT____Vcellinp__fifth1__B))),2);
        bufp->chgBit(oldp+3811,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT__FifSig));
        bufp->chgBit(oldp+3812,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT____Vcellinp__fifth1__A));
        bufp->chgBit(oldp+3813,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT____Vcellinp__fifth1__B));
        bufp->chgBit(oldp+3814,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT____Vcellinp__sixth1__B));
        bufp->chgBit(oldp+3815,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xcU] 
                                               >> 8U)))));
        bufp->chgBit(oldp+3816,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xdU] 
                                               >> 8U)))));
        bufp->chgBit(oldp+3817,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xeU] 
                                               >> 8U)))));
        bufp->chgBit(oldp+3818,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT____Vcellinp__second1__C));
        bufp->chgBit(oldp+3819,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT____Vcellinp__second3__B));
        bufp->chgBit(oldp+3820,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [9U] 
                                               >> 8U)))));
        bufp->chgBit(oldp+3821,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xaU] 
                                               >> 8U)))));
        bufp->chgBit(oldp+3822,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xbU] 
                                               >> 8U)))));
        bufp->chgBit(oldp+3823,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT____Vcellinp__second1__B));
        bufp->chgBit(oldp+3824,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT____Vcellinp__second3__A));
        bufp->chgBit(oldp+3825,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [6U] 
                                               >> 8U)))));
        bufp->chgBit(oldp+3826,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [7U] 
                                               >> 8U)))));
        bufp->chgBit(oldp+3827,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [8U] 
                                               >> 8U)))));
        bufp->chgBit(oldp+3828,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT____Vcellinp__second1__A));
        bufp->chgBit(oldp+3829,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT____Vcellinp__second4__C));
        bufp->chgBit(oldp+3830,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [3U] 
                                               >> 8U)))));
        bufp->chgBit(oldp+3831,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [4U] 
                                               >> 8U)))));
        bufp->chgBit(oldp+3832,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [5U] 
                                               >> 8U)))));
        bufp->chgBit(oldp+3833,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT____Vcellinp__second2__C));
        bufp->chgBit(oldp+3834,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT____Vcellinp__second4__B));
        bufp->chgBit(oldp+3835,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0U] 
                                               >> 8U)))));
        bufp->chgBit(oldp+3836,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [1U] 
                                               >> 8U)))));
        bufp->chgBit(oldp+3837,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [2U] 
                                               >> 8U)))));
        bufp->chgBit(oldp+3838,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT____Vcellinp__second2__B));
        bufp->chgBit(oldp+3839,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT____Vcellinp__second4__A));
        bufp->chgBit(oldp+3840,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT____Vcellinp__fifth1__C));
        bufp->chgBit(oldp+3841,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT____Vcellinp__fourth2__A));
        bufp->chgBit(oldp+3842,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT____Vcellinp__fourth2__B));
        bufp->chgBit(oldp+3843,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT____Vcellinp__sixth1__C));
        bufp->chgBit(oldp+3844,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT____Vcellinp__third1__C));
        bufp->chgBit(oldp+3845,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT____Vcellinp__third1__A));
        bufp->chgBit(oldp+3846,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0x10U] 
                                               >> 8U)))));
        bufp->chgBit(oldp+3847,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT____Vcellinp__third1__B));
        bufp->chgBit(oldp+3848,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT____Vcellinp__third2__C));
        bufp->chgBit(oldp+3849,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xfU] 
                                               >> 8U)))));
        bufp->chgBit(oldp+3850,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT____Vcellinp__fourth1__C));
        bufp->chgBit(oldp+3851,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT____Vcellinp__third2__B));
        bufp->chgBit(oldp+3852,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT____Vcellinp__fourth1__B));
        bufp->chgBit(oldp+3853,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT____Vcellinp__third2__A));
        bufp->chgBit(oldp+3854,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT____Vcellinp__fourth1__A));
        bufp->chgBit(oldp+3855,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT____Vcellinp__fourth2__C));
        bufp->chgIData(oldp+3856,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData),17);
        bufp->chgBit(oldp+3857,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT__FifSig) 
                                  & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT____Vcellinp__sixth1__B) 
                                     | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0))));
        bufp->chgBit(oldp+3858,((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT__FifSig)) 
                                  & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                 | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT__FifSig)) 
                                     & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT____Vcellinp__sixth1__C)) 
                                        & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT____Vcellinp__sixth1__B))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT__FifSig) 
                                       & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                           & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                          | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0)))))));
        bufp->chgCData(oldp+3859,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT____Vcellinp__second4__A) 
                                    << 4U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT____Vcellinp__second4__B) 
                                               << 3U) 
                                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT____Vcellinp__second4__C) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT____Vcellinp__second3__A) 
                                                     << 1U) 
                                                    | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT____Vcellinp__second3__B)))))),5);
        bufp->chgCData(oldp+3860,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT____Vcellinp__third2__A) 
                                    << 3U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT____Vcellinp__third2__B) 
                                               << 2U) 
                                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT____Vcellinp__third2__C) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT____Vcellinp__third1__A))))),4);
        bufp->chgCData(oldp+3861,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT____Vcellinp__fourth2__A) 
                                    << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT____Vcellinp__fourth2__B))),2);
        bufp->chgCData(oldp+3862,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT____Vcellinp__fifth1__A) 
                                    << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT____Vcellinp__fifth1__B))),2);
        bufp->chgBit(oldp+3863,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT__FifSig));
        bufp->chgBit(oldp+3864,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT____Vcellinp__fifth1__A));
        bufp->chgBit(oldp+3865,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT____Vcellinp__fifth1__B));
        bufp->chgBit(oldp+3866,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xcU] 
                                               >> 9U)))));
        bufp->chgBit(oldp+3867,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xdU] 
                                               >> 9U)))));
        bufp->chgBit(oldp+3868,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xeU] 
                                               >> 9U)))));
        bufp->chgBit(oldp+3869,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT____Vcellinp__second3__B));
        bufp->chgBit(oldp+3870,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [9U] 
                                               >> 9U)))));
        bufp->chgBit(oldp+3871,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xaU] 
                                               >> 9U)))));
        bufp->chgBit(oldp+3872,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xbU] 
                                               >> 9U)))));
        bufp->chgBit(oldp+3873,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT____Vcellinp__second3__A));
        bufp->chgBit(oldp+3874,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [6U] 
                                               >> 9U)))));
        bufp->chgBit(oldp+3875,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [7U] 
                                               >> 9U)))));
        bufp->chgBit(oldp+3876,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [8U] 
                                               >> 9U)))));
        bufp->chgBit(oldp+3877,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT____Vcellinp__second4__C));
        bufp->chgBit(oldp+3878,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [3U] 
                                               >> 9U)))));
        bufp->chgBit(oldp+3879,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [4U] 
                                               >> 9U)))));
        bufp->chgBit(oldp+3880,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [5U] 
                                               >> 9U)))));
        bufp->chgBit(oldp+3881,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT____Vcellinp__second4__B));
        bufp->chgBit(oldp+3882,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0U] 
                                               >> 9U)))));
        bufp->chgBit(oldp+3883,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [1U] 
                                               >> 9U)))));
        bufp->chgBit(oldp+3884,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [2U] 
                                               >> 9U)))));
        bufp->chgBit(oldp+3885,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT____Vcellinp__second4__A));
        bufp->chgBit(oldp+3886,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT____Vcellinp__fourth2__A));
        bufp->chgBit(oldp+3887,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT____Vcellinp__fourth2__B));
        bufp->chgBit(oldp+3888,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT____Vcellinp__third1__A));
        bufp->chgBit(oldp+3889,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0x10U] 
                                               >> 9U)))));
        bufp->chgBit(oldp+3890,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT____Vcellinp__third2__C));
        bufp->chgBit(oldp+3891,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xfU] 
                                               >> 9U)))));
        bufp->chgBit(oldp+3892,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT____Vcellinp__third2__B));
        bufp->chgBit(oldp+3893,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT____Vcellinp__third2__A));
        bufp->chgWData(oldp+3894,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r),218);
        bufp->chgBit(oldp+3901,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[2U] 
                                       >> 5U))));
        bufp->chgBit(oldp+3902,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[2U] 
                                       >> 6U))));
        bufp->chgSData(oldp+3903,((0xffffU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                               << 9U) 
                                              | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U] 
                                                 >> 0x17U)))),16);
        bufp->chgBit(oldp+3904,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[2U] 
                                       >> 7U))));
        bufp->chgBit(oldp+3905,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U] 
                                       >> 0x16U))));
        bufp->chgBit(oldp+3906,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                       >> 8U))));
        bufp->chgIData(oldp+3907,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                    << 0x17U) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                 >> 9U))),32);
        bufp->chgBit(oldp+3908,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                       >> 9U))));
        bufp->chgBit(oldp+3909,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                       >> 0x11U))));
        bufp->chgBit(oldp+3910,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                       >> 0x10U))));
        bufp->chgBit(oldp+3911,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                       >> 0x13U))));
        bufp->chgBit(oldp+3912,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                       >> 0x12U))));
        bufp->chgBit(oldp+3913,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                       >> 0x14U))));
        bufp->chgBit(oldp+3914,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                       >> 0x12U))));
        bufp->chgBit(oldp+3915,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                       >> 0x13U))));
        bufp->chgBit(oldp+3916,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                       >> 0x14U))));
        bufp->chgBit(oldp+3917,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                       >> 0x15U))));
        bufp->chgBit(oldp+3918,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                       >> 0x16U))));
        bufp->chgBit(oldp+3919,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                       >> 0x17U))));
        bufp->chgBit(oldp+3920,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                       >> 0x18U))));
        bufp->chgBit(oldp+3921,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                       >> 0x19U))));
        bufp->chgBit(oldp+3922,((1U & (vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_random 
                                       | (IData)(vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_ar_disable)))));
        bufp->chgBit(oldp+3923,(vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_ar_disable));
        bufp->chgBit(oldp+3924,((1U & vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_random)));
        bufp->chgBit(oldp+3925,((1U & ((vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_random 
                                        >> 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_aw_disable)))));
        bufp->chgBit(oldp+3926,(vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_aw_disable));
        bufp->chgBit(oldp+3927,((1U & (vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_random 
                                       >> 1U))));
        bufp->chgBit(oldp+3928,((1U & (vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_random 
                                       >> 2U))));
        bufp->chgBit(oldp+3929,(vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_no_delay));
        bufp->chgBit(oldp+3930,((1U & (vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_random 
                                       >> 3U))));
        bufp->chgIData(oldp+3931,(vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_random),23);
        bufp->chgIData(oldp+3932,(((0x7ffffeU & (vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_random 
                                                 << 1U)) 
                                   | (1U & VL_REDXOR_32(
                                                        (0x420000U 
                                                         & vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_random))))),23);
        bufp->chgBit(oldp+3933,(vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_short_delay));
        bufp->chgBit(oldp+3934,((1U & ((vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_random 
                                        >> 4U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_w_disable)))));
        bufp->chgBit(oldp+3935,(vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_w_disable));
        bufp->chgBit(oldp+3936,((1U & (vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_random 
                                       >> 4U))));
        bufp->chgQData(oldp+3937,((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arburst)) 
                                    << 0x2bU) | (((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arsize)) 
                                                  << 0x28U) 
                                                 | (((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arlen)) 
                                                     << 0x24U) 
                                                    | (((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr)) 
                                                        << 4U) 
                                                       | (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arid))))))),45);
        bufp->chgIData(oldp+3939,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr),32);
        bufp->chgIData(oldp+3940,(((((IData)(1U) + 
                                     (vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr 
                                      >> 2U)) << 2U) 
                                   | (3U & vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr))),32);
        bufp->chgIData(oldp+3941,((((- (IData)((0U 
                                                == (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arburst)))) 
                                    & vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr) 
                                   | (((- (IData)((1U 
                                                   == (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arburst)))) 
                                       & ((((IData)(1U) 
                                            + (vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr 
                                               >> 2U)) 
                                           << 2U) | 
                                          (3U & vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr))) 
                                      | ((- (IData)(
                                                    (2U 
                                                     == (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arburst)))) 
                                         & ((0xffffffc0U 
                                             & vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr) 
                                            | ((0x3cU 
                                                & ((0xfffffffcU 
                                                    & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arlen)) 
                                                        << 2U) 
                                                       & vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr)) 
                                                   | (((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arlen) 
                                                       & ((IData)(1U) 
                                                          + 
                                                          (vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr 
                                                           >> 2U))) 
                                                      << 2U))) 
                                               | (3U 
                                                  & vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr))))))),32);
        bufp->chgIData(oldp+3942,(((0xffffffc0U & vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr) 
                                   | ((0x3cU & ((0xfffffffcU 
                                                 & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arlen)) 
                                                     << 2U) 
                                                    & vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr)) 
                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arlen) 
                                                    & ((IData)(1U) 
                                                       + 
                                                       (vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr 
                                                        >> 2U))) 
                                                   << 2U))) 
                                      | (3U & vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr)))),32);
        bufp->chgCData(oldp+3943,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arburst),2);
        bufp->chgBit(oldp+3944,((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arburst))));
        bufp->chgBit(oldp+3945,((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arburst))));
        bufp->chgBit(oldp+3946,((2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arburst))));
        bufp->chgCData(oldp+3947,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arid),4);
        bufp->chgCData(oldp+3948,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arlen),4);
        bufp->chgBit(oldp+3949,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arlen_last));
        bufp->chgCData(oldp+3950,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arsize),3);
        bufp->chgBit(oldp+3951,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_valid));
        bufp->chgQData(oldp+3952,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_datas),45);
        bufp->chgIData(oldp+3954,((IData)((vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_datas 
                                           >> 0xdU))),32);
        bufp->chgCData(oldp+3955,((3U & (IData)((vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_datas 
                                                 >> 0xbU)))),2);
        bufp->chgCData(oldp+3956,((0xfU & (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_datas))),4);
        bufp->chgCData(oldp+3957,((0xfU & (IData)((vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_datas 
                                                   >> 4U)))),4);
        bufp->chgCData(oldp+3958,((7U & (IData)((vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_datas 
                                                 >> 8U)))),3);
        bufp->chgBit(oldp+3959,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_valid));
        bufp->chgCData(oldp+3960,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_rcur),4);
        bufp->chgQData(oldp+3961,((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr)) 
                                    << 0xdU) | (QData)((IData)(
                                                               (((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awburst) 
                                                                 << 0xbU) 
                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awsize) 
                                                                    << 8U) 
                                                                   | (((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awlen) 
                                                                       << 4U) 
                                                                      | (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awid)))))))),45);
        bufp->chgIData(oldp+3963,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr),32);
        bufp->chgIData(oldp+3964,(((((IData)(1U) + 
                                     (vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr 
                                      >> 2U)) << 2U) 
                                   | (3U & vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr))),32);
        bufp->chgIData(oldp+3965,((((- (IData)((0U 
                                                == (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awburst)))) 
                                    & vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr) 
                                   | (((- (IData)((1U 
                                                   == (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awburst)))) 
                                       & ((((IData)(1U) 
                                            + (vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr 
                                               >> 2U)) 
                                           << 2U) | 
                                          (3U & vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr))) 
                                      | ((- (IData)(
                                                    (2U 
                                                     == (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awburst)))) 
                                         & ((0xffffffc0U 
                                             & vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr) 
                                            | ((0x3cU 
                                                & ((0xfffffffcU 
                                                    & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awlen)) 
                                                        << 2U) 
                                                       & vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr)) 
                                                   | (((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awlen) 
                                                       & ((IData)(1U) 
                                                          + 
                                                          (vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr 
                                                           >> 2U))) 
                                                      << 2U))) 
                                               | (3U 
                                                  & vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr))))))),32);
        bufp->chgIData(oldp+3966,(((0xffffffc0U & vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr) 
                                   | ((0x3cU & ((0xfffffffcU 
                                                 & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awlen)) 
                                                     << 2U) 
                                                    & vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr)) 
                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awlen) 
                                                    & ((IData)(1U) 
                                                       + 
                                                       (vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr 
                                                        >> 2U))) 
                                                   << 2U))) 
                                      | (3U & vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr)))),32);
        bufp->chgCData(oldp+3967,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awburst),2);
        bufp->chgBit(oldp+3968,((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awburst))));
        bufp->chgBit(oldp+3969,((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awburst))));
        bufp->chgBit(oldp+3970,((2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awburst))));
        bufp->chgCData(oldp+3971,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awid),4);
        bufp->chgCData(oldp+3972,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awlen),4);
        bufp->chgCData(oldp+3973,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awsize),3);
        bufp->chgBit(oldp+3974,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_valid));
        bufp->chgQData(oldp+3975,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_datas),45);
        bufp->chgIData(oldp+3977,((IData)((vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_datas 
                                           >> 0xdU))),32);
        bufp->chgCData(oldp+3978,((3U & (IData)((vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_datas 
                                                 >> 0xbU)))),2);
        bufp->chgCData(oldp+3979,((0xfU & (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_datas))),4);
        bufp->chgCData(oldp+3980,((0xfU & (IData)((vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_datas 
                                                   >> 4U)))),4);
        bufp->chgCData(oldp+3981,((7U & (IData)((vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_datas 
                                                 >> 8U)))),3);
        bufp->chgBit(oldp+3982,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_valid));
        bufp->chgBit(oldp+3983,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_allow_out));
        bufp->chgBit(oldp+3984,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_queue_valid));
        bufp->chgCData(oldp+3985,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_queue_datas),4);
        bufp->chgBit(oldp+3986,((1U & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_queue_valid)))));
        bufp->chgCData(oldp+3987,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_wstrb),4);
        bufp->chgIData(oldp+3988,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_wdata),32);
        bufp->chgBit(oldp+3989,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_wlast));
        bufp->chgBit(oldp+3990,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_wvalid));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[7U])) {
        bufp->chgCData(oldp+3991,(vlSelf->simu_top__DOT__soc__DOT__m0_bid),4);
        bufp->chgCData(oldp+3992,(vlSelf->simu_top__DOT__soc__DOT__m0_bresp),2);
        bufp->chgCData(oldp+3993,(vlSelf->simu_top__DOT__soc__DOT__m0_rid),4);
        bufp->chgCData(oldp+3994,(vlSelf->simu_top__DOT__soc__DOT__m0_rresp),2);
        bufp->chgBit(oldp+3995,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_ret_last));
        bufp->chgBit(oldp+3996,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_ret_last));
    }
    bufp->chgBit(oldp+3997,(vlSelf->aclk));
    bufp->chgBit(oldp+3998,(vlSelf->aresetn));
    bufp->chgBit(oldp+3999,(vlSelf->enable_delay));
    bufp->chgIData(oldp+4000,(vlSelf->random_seed),23);
    bufp->chgBit(oldp+4001,(vlSelf->ram_ren));
    bufp->chgIData(oldp+4002,(vlSelf->ram_raddr),32);
    bufp->chgIData(oldp+4003,(vlSelf->ram_rdata),32);
    bufp->chgCData(oldp+4004,(vlSelf->ram_wen),4);
    bufp->chgIData(oldp+4005,(vlSelf->ram_waddr),32);
    bufp->chgIData(oldp+4006,(vlSelf->ram_wdata),32);
    bufp->chgIData(oldp+4007,(vlSelf->debug0_wb_pc),32);
    bufp->chgBit(oldp+4008,(vlSelf->debug0_wb_rf_wen));
    bufp->chgCData(oldp+4009,(vlSelf->debug0_wb_rf_wnum),5);
    bufp->chgIData(oldp+4010,(vlSelf->debug0_wb_rf_wdata),32);
    bufp->chgIData(oldp+4011,(vlSelf->num_data),32);
    bufp->chgBit(oldp+4012,(vlSelf->open_trace));
    bufp->chgBit(oldp+4013,(vlSelf->num_monitor));
    bufp->chgCData(oldp+4014,(vlSelf->confreg_uart_data),8);
    bufp->chgBit(oldp+4015,(vlSelf->write_uart_valid));
    bufp->chgWData(oldp+4016,(vlSelf->uart_ctr_bus),128);
    bufp->chgBit(oldp+4020,(vlSelf->uart_rx));
    bufp->chgBit(oldp+4021,(vlSelf->uart_tx));
    bufp->chgSData(oldp+4022,(vlSelf->led),16);
    bufp->chgCData(oldp+4023,(vlSelf->led_rg0),2);
    bufp->chgCData(oldp+4024,(vlSelf->led_rg1),2);
    bufp->chgCData(oldp+4025,(vlSelf->num_csn),8);
    bufp->chgCData(oldp+4026,(vlSelf->num_a_g),7);
    bufp->chgCData(oldp+4027,(vlSelf->btn_key_col),4);
    bufp->chgCData(oldp+4028,(vlSelf->btn_key_row),4);
    bufp->chgCData(oldp+4029,(vlSelf->btn_step),2);
    bufp->chgCData(oldp+4030,(vlSelf->__SYM__switch),8);
    bufp->chgBit(oldp+4031,(vlSelf->simu_top__DOT__soc__DOT__m0_awready));
    bufp->chgBit(oldp+4032,(vlSelf->simu_top__DOT__soc__DOT__m0_arready));
    bufp->chgBit(oldp+4033,((1U & (~ (IData)(vlSelf->aresetn)))));
    bufp->chgBit(oldp+4034,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_valid_cpu));
    bufp->chgCData(oldp+4035,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__csr_rw_sm_nxt),4);
    bufp->chgBit(oldp+4036,((1U & ((IData)(vlSelf->uart_rx__en0)
                                    ? ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__rx_en)) 
                                       | (IData)(vlSelf->uart_tx))
                                    : (IData)(vlSelf->uart_rx)))));
    bufp->chgCData(oldp+4037,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_hit),5);
    bufp->chgCData(oldp+4038,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_hit),5);
    bufp->chgCData(oldp+4039,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_dir),3);
    bufp->chgIData(oldp+4040,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__w_addr_dir_int),32);
    bufp->chgCData(oldp+4041,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_dir),3);
    bufp->chgIData(oldp+4042,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_dir_int),32);
    bufp->chgBit(oldp+4043,((1U & ((~ (IData)(vlSelf->aresetn)) 
                                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_pop)))));
    bufp->chgIData(oldp+4044,(vlSelf->__SYM__switch),32);
    bufp->chgIData(oldp+4045,(((0x8000U & ((IData)(vlSelf->__SYM__switch) 
                                           << 8U)) 
                               | ((0x2000U & ((IData)(vlSelf->__SYM__switch) 
                                              << 7U)) 
                                  | ((0x800U & ((IData)(vlSelf->__SYM__switch) 
                                                << 6U)) 
                                     | ((0x200U & ((IData)(vlSelf->__SYM__switch) 
                                                   << 5U)) 
                                        | ((0x80U & 
                                            ((IData)(vlSelf->__SYM__switch) 
                                             << 4U)) 
                                           | ((0x20U 
                                               & ((IData)(vlSelf->__SYM__switch) 
                                                  << 3U)) 
                                              | ((8U 
                                                  & ((IData)(vlSelf->__SYM__switch) 
                                                     << 2U)) 
                                                 | (2U 
                                                    & ((IData)(vlSelf->__SYM__switch) 
                                                       << 1U)))))))))),32);
    bufp->chgBit(oldp+4046,(((~ (IData)((0xfU == (IData)(vlSelf->btn_key_row)))) 
                             & (0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__state)))));
    bufp->chgBit(oldp+4047,(((7U == (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__state)) 
                             & (0xfU == (IData)(vlSelf->btn_key_row)))));
    bufp->chgBit(oldp+4048,(((~ (IData)(vlSelf->btn_step)) 
                             & (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__btn_step0_r))));
    bufp->chgBit(oldp+4049,((1U & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__btn_step0_r)) 
                                   & (IData)(vlSelf->btn_step)))));
    bufp->chgBit(oldp+4050,(((~ ((IData)(vlSelf->btn_step) 
                                 >> 1U)) & (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__btn_step1_r))));
    bufp->chgBit(oldp+4051,(((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__btn_step1_r)) 
                             & ((IData)(vlSelf->btn_step) 
                                >> 1U))));
    bufp->chgCData(oldp+4052,((0xfU & (- (IData)((IData)(vlSelf->debug0_wb_rf_wen))))),4);
    bufp->chgQData(oldp+4053,((((QData)((IData)(vlSelf->debug0_wb_rf_wen)) 
                                << 0x25U) | (0x1fffffffffULL 
                                             & (((QData)((IData)(
                                                                 vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[2U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[1U])))))),38);
    bufp->chgBit(oldp+4055,(((0x10U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__main_state)) 
                             & ((~ ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__request_buffer_icacop) 
                                    | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__request_buffer_uncache_en))) 
                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_ret_last)))));
    bufp->chgBit(oldp+4056,(((0x10U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_state)) 
                             & ((~ ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_uncache_en) 
                                    | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT____VdfgTmp_h63343402__0))) 
                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_ret_last)))));
    bufp->chgBit(oldp+4057,(((IData)(vlSelf->simu_top__DOT__soc__DOT__m0_arvalid) 
                             & (IData)(vlSelf->simu_top__DOT__soc__DOT__m0_arready))));
    bufp->chgBit(oldp+4058,(((IData)(vlSelf->simu_top__DOT__soc__DOT__m0_awvalid) 
                             & (IData)(vlSelf->simu_top__DOT__soc__DOT__m0_awready))));
    bufp->chgBit(oldp+4059,(((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arlen_last)) 
                             & (IData)(vlSelf->ram_ren))));
    bufp->chgBit(oldp+4060,((1U & ((~ (IData)(vlSelf->aresetn)) 
                                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_pop)))));
}
