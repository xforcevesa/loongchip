// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vsimu_top__Syms.h"


VL_ATTR_COLD void Vsimu_top___024root__trace_full_sub_2(Vsimu_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimu_top___024root__trace_full_sub_2\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+7398,((1U & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                               >> 0x1dU))))));
    bufp->fullBit(oldp+7399,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT____Vcellout__gfor__BRA__29__KET____DOT__ui__OutX));
    bufp->fullBit(oldp+7400,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                            >> 2U)))));
    bufp->fullBit(oldp+7401,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                              [2U])));
    bufp->fullBit(oldp+7402,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                    [2U] >> 1U))));
    bufp->fullBit(oldp+7403,((1U & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                               >> 2U))))));
    bufp->fullBit(oldp+7404,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT____Vcellout__gfor__BRA__2__KET____DOT__ui__OutX));
    bufp->fullBit(oldp+7405,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                            >> 0x1eU)))));
    bufp->fullBit(oldp+7406,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                              [0x1eU])));
    bufp->fullBit(oldp+7407,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                    [0x1eU] >> 1U))));
    bufp->fullBit(oldp+7408,((1U & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                               >> 0x1eU))))));
    bufp->fullBit(oldp+7409,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT____Vcellout__gfor__BRA__30__KET____DOT__ui__OutX));
    bufp->fullBit(oldp+7410,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                            >> 0x1fU)))));
    bufp->fullBit(oldp+7411,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                              [0x1fU])));
    bufp->fullBit(oldp+7412,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                    [0x1fU] >> 1U))));
    bufp->fullBit(oldp+7413,((1U & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                               >> 0x1fU))))));
    bufp->fullBit(oldp+7414,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT____Vcellout__gfor__BRA__31__KET____DOT__ui__OutX));
    bufp->fullBit(oldp+7415,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                            >> 0x20U)))));
    bufp->fullBit(oldp+7416,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                              [0x20U])));
    bufp->fullBit(oldp+7417,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                    [0x20U] >> 1U))));
    bufp->fullBit(oldp+7418,((1U & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                               >> 0x20U))))));
    bufp->fullBit(oldp+7419,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT____Vcellout__gfor__BRA__32__KET____DOT__ui__OutX));
    bufp->fullBit(oldp+7420,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                            >> 0x21U)))));
    bufp->fullBit(oldp+7421,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                              [0x21U])));
    bufp->fullBit(oldp+7422,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                    [0x21U] >> 1U))));
    bufp->fullBit(oldp+7423,((1U & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                               >> 0x21U))))));
    bufp->fullBit(oldp+7424,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT____Vcellout__gfor__BRA__33__KET____DOT__ui__OutX));
    bufp->fullBit(oldp+7425,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                            >> 0x22U)))));
    bufp->fullBit(oldp+7426,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                              [0x22U])));
    bufp->fullBit(oldp+7427,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                    [0x22U] >> 1U))));
    bufp->fullBit(oldp+7428,((1U & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                               >> 0x22U))))));
    bufp->fullBit(oldp+7429,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT____Vcellout__gfor__BRA__34__KET____DOT__ui__OutX));
    bufp->fullBit(oldp+7430,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                            >> 0x23U)))));
    bufp->fullBit(oldp+7431,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                              [0x23U])));
    bufp->fullBit(oldp+7432,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                    [0x23U] >> 1U))));
    bufp->fullBit(oldp+7433,((1U & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                               >> 0x23U))))));
    bufp->fullBit(oldp+7434,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT____Vcellout__gfor__BRA__35__KET____DOT__ui__OutX));
    bufp->fullBit(oldp+7435,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                            >> 0x24U)))));
    bufp->fullBit(oldp+7436,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                              [0x24U])));
    bufp->fullBit(oldp+7437,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                    [0x24U] >> 1U))));
    bufp->fullBit(oldp+7438,((1U & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                               >> 0x24U))))));
    bufp->fullBit(oldp+7439,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT____Vcellout__gfor__BRA__36__KET____DOT__ui__OutX));
    bufp->fullBit(oldp+7440,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                            >> 0x25U)))));
    bufp->fullBit(oldp+7441,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                              [0x25U])));
    bufp->fullBit(oldp+7442,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                    [0x25U] >> 1U))));
    bufp->fullBit(oldp+7443,((1U & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                               >> 0x25U))))));
    bufp->fullBit(oldp+7444,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT____Vcellout__gfor__BRA__37__KET____DOT__ui__OutX));
    bufp->fullBit(oldp+7445,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                            >> 0x26U)))));
    bufp->fullBit(oldp+7446,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                              [0x26U])));
    bufp->fullBit(oldp+7447,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                    [0x26U] >> 1U))));
    bufp->fullBit(oldp+7448,((1U & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                               >> 0x26U))))));
    bufp->fullBit(oldp+7449,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT____Vcellout__gfor__BRA__38__KET____DOT__ui__OutX));
    bufp->fullBit(oldp+7450,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                            >> 0x27U)))));
    bufp->fullBit(oldp+7451,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                              [0x27U])));
    bufp->fullBit(oldp+7452,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                    [0x27U] >> 1U))));
    bufp->fullBit(oldp+7453,((1U & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                               >> 0x27U))))));
    bufp->fullBit(oldp+7454,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT____Vcellout__gfor__BRA__39__KET____DOT__ui__OutX));
    bufp->fullBit(oldp+7455,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                            >> 3U)))));
    bufp->fullBit(oldp+7456,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                              [3U])));
    bufp->fullBit(oldp+7457,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                    [3U] >> 1U))));
    bufp->fullBit(oldp+7458,((1U & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                               >> 3U))))));
    bufp->fullBit(oldp+7459,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT____Vcellout__gfor__BRA__3__KET____DOT__ui__OutX));
    bufp->fullBit(oldp+7460,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                            >> 0x28U)))));
    bufp->fullBit(oldp+7461,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                              [0x28U])));
    bufp->fullBit(oldp+7462,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                    [0x28U] >> 1U))));
    bufp->fullBit(oldp+7463,((1U & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                               >> 0x28U))))));
    bufp->fullBit(oldp+7464,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT____Vcellout__gfor__BRA__40__KET____DOT__ui__OutX));
    bufp->fullBit(oldp+7465,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                            >> 0x29U)))));
    bufp->fullBit(oldp+7466,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                              [0x29U])));
    bufp->fullBit(oldp+7467,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                    [0x29U] >> 1U))));
    bufp->fullBit(oldp+7468,((1U & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                               >> 0x29U))))));
    bufp->fullBit(oldp+7469,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT____Vcellout__gfor__BRA__41__KET____DOT__ui__OutX));
    bufp->fullBit(oldp+7470,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                            >> 0x2aU)))));
    bufp->fullBit(oldp+7471,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                              [0x2aU])));
    bufp->fullBit(oldp+7472,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                    [0x2aU] >> 1U))));
    bufp->fullBit(oldp+7473,((1U & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                               >> 0x2aU))))));
    bufp->fullBit(oldp+7474,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT____Vcellout__gfor__BRA__42__KET____DOT__ui__OutX));
    bufp->fullBit(oldp+7475,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                            >> 0x2bU)))));
    bufp->fullBit(oldp+7476,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                              [0x2bU])));
    bufp->fullBit(oldp+7477,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                    [0x2bU] >> 1U))));
    bufp->fullBit(oldp+7478,((1U & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                               >> 0x2bU))))));
    bufp->fullBit(oldp+7479,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT____Vcellout__gfor__BRA__43__KET____DOT__ui__OutX));
    bufp->fullBit(oldp+7480,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                            >> 0x2cU)))));
    bufp->fullBit(oldp+7481,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                              [0x2cU])));
    bufp->fullBit(oldp+7482,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                    [0x2cU] >> 1U))));
    bufp->fullBit(oldp+7483,((1U & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                               >> 0x2cU))))));
    bufp->fullBit(oldp+7484,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT____Vcellout__gfor__BRA__44__KET____DOT__ui__OutX));
    bufp->fullBit(oldp+7485,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                            >> 0x2dU)))));
    bufp->fullBit(oldp+7486,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                              [0x2dU])));
    bufp->fullBit(oldp+7487,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                    [0x2dU] >> 1U))));
    bufp->fullBit(oldp+7488,((1U & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                               >> 0x2dU))))));
    bufp->fullBit(oldp+7489,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT____Vcellout__gfor__BRA__45__KET____DOT__ui__OutX));
    bufp->fullBit(oldp+7490,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                            >> 0x2eU)))));
    bufp->fullBit(oldp+7491,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                              [0x2eU])));
    bufp->fullBit(oldp+7492,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                    [0x2eU] >> 1U))));
    bufp->fullBit(oldp+7493,((1U & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                               >> 0x2eU))))));
    bufp->fullBit(oldp+7494,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT____Vcellout__gfor__BRA__46__KET____DOT__ui__OutX));
    bufp->fullBit(oldp+7495,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                            >> 0x2fU)))));
    bufp->fullBit(oldp+7496,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                              [0x2fU])));
    bufp->fullBit(oldp+7497,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                    [0x2fU] >> 1U))));
    bufp->fullBit(oldp+7498,((1U & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                               >> 0x2fU))))));
    bufp->fullBit(oldp+7499,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT____Vcellout__gfor__BRA__47__KET____DOT__ui__OutX));
    bufp->fullBit(oldp+7500,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                            >> 0x30U)))));
    bufp->fullBit(oldp+7501,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                              [0x30U])));
    bufp->fullBit(oldp+7502,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                    [0x30U] >> 1U))));
    bufp->fullBit(oldp+7503,((1U & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                               >> 0x30U))))));
    bufp->fullBit(oldp+7504,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT____Vcellout__gfor__BRA__48__KET____DOT__ui__OutX));
    bufp->fullBit(oldp+7505,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                            >> 0x31U)))));
    bufp->fullBit(oldp+7506,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                              [0x31U])));
    bufp->fullBit(oldp+7507,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                    [0x31U] >> 1U))));
    bufp->fullBit(oldp+7508,((1U & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                               >> 0x31U))))));
    bufp->fullBit(oldp+7509,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT____Vcellout__gfor__BRA__49__KET____DOT__ui__OutX));
    bufp->fullBit(oldp+7510,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                            >> 4U)))));
    bufp->fullBit(oldp+7511,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                              [4U])));
    bufp->fullBit(oldp+7512,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                    [4U] >> 1U))));
    bufp->fullBit(oldp+7513,((1U & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                               >> 4U))))));
    bufp->fullBit(oldp+7514,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT____Vcellout__gfor__BRA__4__KET____DOT__ui__OutX));
    bufp->fullBit(oldp+7515,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                            >> 0x32U)))));
    bufp->fullBit(oldp+7516,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                              [0x32U])));
    bufp->fullBit(oldp+7517,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                    [0x32U] >> 1U))));
    bufp->fullBit(oldp+7518,((1U & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                               >> 0x32U))))));
    bufp->fullBit(oldp+7519,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT____Vcellout__gfor__BRA__50__KET____DOT__ui__OutX));
    bufp->fullBit(oldp+7520,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                            >> 0x33U)))));
    bufp->fullBit(oldp+7521,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                              [0x33U])));
    bufp->fullBit(oldp+7522,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                    [0x33U] >> 1U))));
    bufp->fullBit(oldp+7523,((1U & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                               >> 0x33U))))));
    bufp->fullBit(oldp+7524,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT____Vcellout__gfor__BRA__51__KET____DOT__ui__OutX));
    bufp->fullBit(oldp+7525,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                            >> 0x34U)))));
    bufp->fullBit(oldp+7526,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                              [0x34U])));
    bufp->fullBit(oldp+7527,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                    [0x34U] >> 1U))));
    bufp->fullBit(oldp+7528,((1U & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                               >> 0x34U))))));
    bufp->fullBit(oldp+7529,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT____Vcellout__gfor__BRA__52__KET____DOT__ui__OutX));
    bufp->fullBit(oldp+7530,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                            >> 0x35U)))));
    bufp->fullBit(oldp+7531,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                              [0x35U])));
    bufp->fullBit(oldp+7532,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                    [0x35U] >> 1U))));
    bufp->fullBit(oldp+7533,((1U & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                               >> 0x35U))))));
    bufp->fullBit(oldp+7534,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT____Vcellout__gfor__BRA__53__KET____DOT__ui__OutX));
    bufp->fullBit(oldp+7535,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                            >> 0x36U)))));
    bufp->fullBit(oldp+7536,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                              [0x36U])));
    bufp->fullBit(oldp+7537,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                    [0x36U] >> 1U))));
    bufp->fullBit(oldp+7538,((1U & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                               >> 0x36U))))));
    bufp->fullBit(oldp+7539,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT____Vcellout__gfor__BRA__54__KET____DOT__ui__OutX));
    bufp->fullBit(oldp+7540,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                            >> 0x37U)))));
    bufp->fullBit(oldp+7541,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                              [0x37U])));
    bufp->fullBit(oldp+7542,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                    [0x37U] >> 1U))));
    bufp->fullBit(oldp+7543,((1U & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                               >> 0x37U))))));
    bufp->fullBit(oldp+7544,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT____Vcellout__gfor__BRA__55__KET____DOT__ui__OutX));
    bufp->fullBit(oldp+7545,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                            >> 0x38U)))));
    bufp->fullBit(oldp+7546,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                              [0x38U])));
    bufp->fullBit(oldp+7547,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                    [0x38U] >> 1U))));
    bufp->fullBit(oldp+7548,((1U & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                               >> 0x38U))))));
    bufp->fullBit(oldp+7549,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT____Vcellout__gfor__BRA__56__KET____DOT__ui__OutX));
    bufp->fullBit(oldp+7550,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                            >> 0x39U)))));
    bufp->fullBit(oldp+7551,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                              [0x39U])));
    bufp->fullBit(oldp+7552,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                    [0x39U] >> 1U))));
    bufp->fullBit(oldp+7553,((1U & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                               >> 0x39U))))));
    bufp->fullBit(oldp+7554,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT____Vcellout__gfor__BRA__57__KET____DOT__ui__OutX));
    bufp->fullBit(oldp+7555,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                            >> 0x3aU)))));
    bufp->fullBit(oldp+7556,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                              [0x3aU])));
    bufp->fullBit(oldp+7557,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                    [0x3aU] >> 1U))));
    bufp->fullBit(oldp+7558,((1U & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                               >> 0x3aU))))));
    bufp->fullBit(oldp+7559,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT____Vcellout__gfor__BRA__58__KET____DOT__ui__OutX));
    bufp->fullBit(oldp+7560,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                            >> 0x3bU)))));
    bufp->fullBit(oldp+7561,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                              [0x3bU])));
    bufp->fullBit(oldp+7562,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                    [0x3bU] >> 1U))));
    bufp->fullBit(oldp+7563,((1U & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                               >> 0x3bU))))));
    bufp->fullBit(oldp+7564,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT____Vcellout__gfor__BRA__59__KET____DOT__ui__OutX));
    bufp->fullBit(oldp+7565,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                            >> 5U)))));
    bufp->fullBit(oldp+7566,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                              [5U])));
    bufp->fullBit(oldp+7567,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                    [5U] >> 1U))));
    bufp->fullBit(oldp+7568,((1U & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                               >> 5U))))));
    bufp->fullBit(oldp+7569,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT____Vcellout__gfor__BRA__5__KET____DOT__ui__OutX));
    bufp->fullBit(oldp+7570,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                            >> 0x3cU)))));
    bufp->fullBit(oldp+7571,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                              [0x3cU])));
    bufp->fullBit(oldp+7572,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                    [0x3cU] >> 1U))));
    bufp->fullBit(oldp+7573,((1U & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                               >> 0x3cU))))));
    bufp->fullBit(oldp+7574,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT____Vcellout__gfor__BRA__60__KET____DOT__ui__OutX));
    bufp->fullBit(oldp+7575,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                            >> 0x3dU)))));
    bufp->fullBit(oldp+7576,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                              [0x3dU])));
    bufp->fullBit(oldp+7577,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                    [0x3dU] >> 1U))));
    bufp->fullBit(oldp+7578,((1U & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                               >> 0x3dU))))));
    bufp->fullBit(oldp+7579,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT____Vcellout__gfor__BRA__61__KET____DOT__ui__OutX));
    bufp->fullBit(oldp+7580,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                            >> 0x3eU)))));
    bufp->fullBit(oldp+7581,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                              [0x3eU])));
    bufp->fullBit(oldp+7582,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                    [0x3eU] >> 1U))));
    bufp->fullBit(oldp+7583,((1U & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                               >> 0x3eU))))));
    bufp->fullBit(oldp+7584,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT____Vcellout__gfor__BRA__62__KET____DOT__ui__OutX));
    bufp->fullBit(oldp+7585,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                            >> 0x3fU)))));
    bufp->fullBit(oldp+7586,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                              [0x3fU])));
    bufp->fullBit(oldp+7587,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                    [0x3fU] >> 1U))));
    bufp->fullBit(oldp+7588,((1U & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                               >> 0x3fU))))));
    bufp->fullBit(oldp+7589,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT____Vcellout__gfor__BRA__63__KET____DOT__ui__OutX));
    bufp->fullBit(oldp+7590,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                            >> 6U)))));
    bufp->fullBit(oldp+7591,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                              [6U])));
    bufp->fullBit(oldp+7592,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                    [6U] >> 1U))));
    bufp->fullBit(oldp+7593,((1U & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                               >> 6U))))));
    bufp->fullBit(oldp+7594,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT____Vcellout__gfor__BRA__6__KET____DOT__ui__OutX));
    bufp->fullBit(oldp+7595,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                            >> 7U)))));
    bufp->fullBit(oldp+7596,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                              [7U])));
    bufp->fullBit(oldp+7597,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                    [7U] >> 1U))));
    bufp->fullBit(oldp+7598,((1U & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                               >> 7U))))));
    bufp->fullBit(oldp+7599,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT____Vcellout__gfor__BRA__7__KET____DOT__ui__OutX));
    bufp->fullBit(oldp+7600,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                            >> 8U)))));
    bufp->fullBit(oldp+7601,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                              [8U])));
    bufp->fullBit(oldp+7602,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                    [8U] >> 1U))));
    bufp->fullBit(oldp+7603,((1U & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                               >> 8U))))));
    bufp->fullBit(oldp+7604,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT____Vcellout__gfor__BRA__8__KET____DOT__ui__OutX));
    bufp->fullBit(oldp+7605,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                            >> 9U)))));
    bufp->fullBit(oldp+7606,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                              [9U])));
    bufp->fullBit(oldp+7607,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                    [9U] >> 1U))));
    bufp->fullBit(oldp+7608,((1U & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                               >> 9U))))));
    bufp->fullBit(oldp+7609,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT____Vcellout__gfor__BRA__9__KET____DOT__ui__OutX));
    bufp->fullBit(oldp+7610,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY))));
    bufp->fullIData(oldp+7611,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData),17);
    bufp->fullSData(oldp+7612,((0x3fffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry)),14);
    bufp->fullBit(oldp+7613,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__FifSig) 
                               & (IData)((0U != (0x3000U 
                                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry)))) 
                              | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0))));
    bufp->fullBit(oldp+7614,((1U & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__FifSig)) 
                                     & (IData)((0x1000U 
                                                == 
                                                (0x3000U 
                                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry)))) 
                                    | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__FifSig)) 
                                        & (IData)((0x2000U 
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
    bufp->fullCData(oldp+7615,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT____Vcellinp__second4__A) 
                                 << 4U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT____Vcellinp__second4__B) 
                                            << 3U) 
                                           | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT____Vcellinp__second4__C) 
                                               << 2U) 
                                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT____Vcellinp__second3__A) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT____Vcellinp__second3__B)))))),5);
    bufp->fullCData(oldp+7616,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT____Vcellinp__third2__A) 
                                 << 3U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT____Vcellinp__third2__B) 
                                            << 2U) 
                                           | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT____Vcellinp__third2__C) 
                                               << 1U) 
                                              | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT____Vcellinp__third1__A))))),4);
    bufp->fullCData(oldp+7617,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT____Vcellinp__fourth2__A) 
                                 << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT____Vcellinp__fourth2__B))),2);
    bufp->fullCData(oldp+7618,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT____Vcellinp__fifth1__A) 
                                 << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT____Vcellinp__fifth1__B))),2);
    bufp->fullBit(oldp+7619,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__FifSig));
    bufp->fullBit(oldp+7620,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT____Vcellinp__fifth1__A));
    bufp->fullBit(oldp+7621,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT____Vcellinp__fifth1__B));
    bufp->fullBit(oldp+7622,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry 
                                    >> 0xbU))));
    bufp->fullBit(oldp+7623,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT____Vcellinp__sixth1__B));
    bufp->fullBit(oldp+7624,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                           [0xcU]))));
    bufp->fullBit(oldp+7625,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                           [0xdU]))));
    bufp->fullBit(oldp+7626,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                           [0xeU]))));
    bufp->fullBit(oldp+7627,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT____Vcellinp__second1__C));
    bufp->fullBit(oldp+7628,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT____Vcellinp__second3__B));
    bufp->fullBit(oldp+7629,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                           [9U]))));
    bufp->fullBit(oldp+7630,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                           [0xaU]))));
    bufp->fullBit(oldp+7631,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                           [0xbU]))));
    bufp->fullBit(oldp+7632,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT____Vcellinp__second1__B));
    bufp->fullBit(oldp+7633,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT____Vcellinp__second3__A));
    bufp->fullBit(oldp+7634,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                           [6U]))));
    bufp->fullBit(oldp+7635,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                           [7U]))));
    bufp->fullBit(oldp+7636,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                           [8U]))));
    bufp->fullBit(oldp+7637,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT____Vcellinp__second1__A));
    bufp->fullBit(oldp+7638,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT____Vcellinp__second4__C));
    bufp->fullBit(oldp+7639,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                           [3U]))));
    bufp->fullBit(oldp+7640,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                           [4U]))));
    bufp->fullBit(oldp+7641,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                           [5U]))));
    bufp->fullBit(oldp+7642,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT____Vcellinp__second2__C));
    bufp->fullBit(oldp+7643,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT____Vcellinp__second4__B));
    bufp->fullBit(oldp+7644,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                           [0U]))));
    bufp->fullBit(oldp+7645,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                           [1U]))));
    bufp->fullBit(oldp+7646,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                           [2U]))));
    bufp->fullBit(oldp+7647,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT____Vcellinp__second2__B));
    bufp->fullBit(oldp+7648,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT____Vcellinp__second4__A));
    bufp->fullBit(oldp+7649,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry 
                                    >> 9U))));
    bufp->fullBit(oldp+7650,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry 
                                    >> 8U))));
    bufp->fullBit(oldp+7651,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry 
                                    >> 7U))));
    bufp->fullBit(oldp+7652,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT____Vcellinp__fifth1__C));
    bufp->fullBit(oldp+7653,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT____Vcellinp__fourth2__A));
    bufp->fullBit(oldp+7654,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT____Vcellinp__fourth2__B));
    bufp->fullBit(oldp+7655,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry 
                                    >> 0xaU))));
    bufp->fullBit(oldp+7656,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT____Vcellinp__sixth1__C));
    bufp->fullBit(oldp+7657,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry 
                                    >> 2U))));
    bufp->fullBit(oldp+7658,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry 
                                    >> 1U))));
    bufp->fullBit(oldp+7659,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry)));
    bufp->fullBit(oldp+7660,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT____Vcellinp__third1__C));
    bufp->fullBit(oldp+7661,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT____Vcellinp__third1__A));
    bufp->fullBit(oldp+7662,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                           [0x10U]))));
    bufp->fullBit(oldp+7663,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry 
                                    >> 4U))));
    bufp->fullBit(oldp+7664,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry 
                                    >> 3U))));
    bufp->fullBit(oldp+7665,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT____Vcellinp__third1__B));
    bufp->fullBit(oldp+7666,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT____Vcellinp__third2__C));
    bufp->fullBit(oldp+7667,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                           [0xfU]))));
    bufp->fullBit(oldp+7668,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT____Vcellinp__fourth1__C));
    bufp->fullBit(oldp+7669,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT____Vcellinp__third2__B));
    bufp->fullBit(oldp+7670,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT____Vcellinp__fourth1__B));
    bufp->fullBit(oldp+7671,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT____Vcellinp__third2__A));
    bufp->fullBit(oldp+7672,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry 
                                    >> 0xdU))));
    bufp->fullBit(oldp+7673,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry 
                                    >> 0xcU))));
    bufp->fullBit(oldp+7674,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry 
                                    >> 6U))));
    bufp->fullBit(oldp+7675,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry 
                                    >> 5U))));
    bufp->fullBit(oldp+7676,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT____Vcellinp__fourth1__A));
    bufp->fullBit(oldp+7677,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT____Vcellinp__fourth2__C));
    bufp->fullCData(oldp+7678,(((4U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                >> 0x20U)) 
                                       << 2U)) | (3U 
                                                  & (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                             >> 0x1fU))))),3);
    bufp->fullQData(oldp+7679,((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                << 0x20U)),64);
    bufp->fullQData(oldp+7681,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellout__las__OutX),64);
    bufp->fullBit(oldp+7683,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__neg2x) 
                              | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__negx))));
    bufp->fullBit(oldp+7684,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__negx));
    bufp->fullBit(oldp+7685,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__x));
    bufp->fullBit(oldp+7686,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__neg2x));
    bufp->fullBit(oldp+7687,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT____Vcellout__fir__OutX));
    bufp->fullBit(oldp+7688,((1U & (IData)((0x3fffffffc00000ULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                               << 0x16U))))));
    bufp->fullBit(oldp+7689,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                              [0xaU])));
    bufp->fullBit(oldp+7690,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                    [0xaU] >> 1U))));
    bufp->fullBit(oldp+7691,((1U & (~ (IData)((0x3fffffffc00000ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  << 0x16U)))))));
    bufp->fullBit(oldp+7692,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT____Vcellout__gfor__BRA__10__KET____DOT__ui__OutX));
    bufp->fullBit(oldp+7693,((1U & (IData)((0x1fffffffe00000ULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                               << 0x15U))))));
    bufp->fullBit(oldp+7694,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                              [0xbU])));
    bufp->fullBit(oldp+7695,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                    [0xbU] >> 1U))));
    bufp->fullBit(oldp+7696,((1U & (~ (IData)((0x1fffffffe00000ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  << 0x15U)))))));
    bufp->fullBit(oldp+7697,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT____Vcellout__gfor__BRA__11__KET____DOT__ui__OutX));
    bufp->fullBit(oldp+7698,((1U & (IData)((0xffffffff00000ULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                               << 0x14U))))));
    bufp->fullBit(oldp+7699,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                              [0xcU])));
    bufp->fullBit(oldp+7700,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                    [0xcU] >> 1U))));
    bufp->fullBit(oldp+7701,((1U & (~ (IData)((0xffffffff00000ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  << 0x14U)))))));
    bufp->fullBit(oldp+7702,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT____Vcellout__gfor__BRA__12__KET____DOT__ui__OutX));
    bufp->fullBit(oldp+7703,((1U & (IData)((0x7fffffff80000ULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                               << 0x13U))))));
    bufp->fullBit(oldp+7704,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                              [0xdU])));
    bufp->fullBit(oldp+7705,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                    [0xdU] >> 1U))));
    bufp->fullBit(oldp+7706,((1U & (~ (IData)((0x7fffffff80000ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  << 0x13U)))))));
    bufp->fullBit(oldp+7707,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT____Vcellout__gfor__BRA__13__KET____DOT__ui__OutX));
    bufp->fullBit(oldp+7708,((1U & (IData)((0x3fffffffc0000ULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                               << 0x12U))))));
    bufp->fullBit(oldp+7709,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                              [0xeU])));
    bufp->fullBit(oldp+7710,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                    [0xeU] >> 1U))));
    bufp->fullBit(oldp+7711,((1U & (~ (IData)((0x3fffffffc0000ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  << 0x12U)))))));
    bufp->fullBit(oldp+7712,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT____Vcellout__gfor__BRA__14__KET____DOT__ui__OutX));
    bufp->fullBit(oldp+7713,((1U & (IData)((0x1fffffffe0000ULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                               << 0x11U))))));
    bufp->fullBit(oldp+7714,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                              [0xfU])));
    bufp->fullBit(oldp+7715,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                    [0xfU] >> 1U))));
    bufp->fullBit(oldp+7716,((1U & (~ (IData)((0x1fffffffe0000ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  << 0x11U)))))));
    bufp->fullBit(oldp+7717,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT____Vcellout__gfor__BRA__15__KET____DOT__ui__OutX));
    bufp->fullBit(oldp+7718,((1U & (IData)((0xffffffff0000ULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                               << 0x10U))))));
    bufp->fullBit(oldp+7719,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                              [0x10U])));
    bufp->fullBit(oldp+7720,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                    [0x10U] >> 1U))));
    bufp->fullBit(oldp+7721,((1U & (~ (IData)((0xffffffff0000ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  << 0x10U)))))));
    bufp->fullBit(oldp+7722,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT____Vcellout__gfor__BRA__16__KET____DOT__ui__OutX));
    bufp->fullBit(oldp+7723,((1U & (IData)((0x7fffffff8000ULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                               << 0xfU))))));
    bufp->fullBit(oldp+7724,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                              [0x11U])));
    bufp->fullBit(oldp+7725,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                    [0x11U] >> 1U))));
    bufp->fullBit(oldp+7726,((1U & (~ (IData)((0x7fffffff8000ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  << 0xfU)))))));
    bufp->fullBit(oldp+7727,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT____Vcellout__gfor__BRA__17__KET____DOT__ui__OutX));
    bufp->fullBit(oldp+7728,((1U & (IData)((0x3fffffffc000ULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                               << 0xeU))))));
    bufp->fullBit(oldp+7729,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                              [0x12U])));
    bufp->fullBit(oldp+7730,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                    [0x12U] >> 1U))));
    bufp->fullBit(oldp+7731,((1U & (~ (IData)((0x3fffffffc000ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  << 0xeU)))))));
    bufp->fullBit(oldp+7732,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT____Vcellout__gfor__BRA__18__KET____DOT__ui__OutX));
    bufp->fullBit(oldp+7733,((1U & (IData)((0x1fffffffe000ULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                               << 0xdU))))));
    bufp->fullBit(oldp+7734,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                              [0x13U])));
    bufp->fullBit(oldp+7735,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                    [0x13U] >> 1U))));
    bufp->fullBit(oldp+7736,((1U & (~ (IData)((0x1fffffffe000ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  << 0xdU)))))));
    bufp->fullBit(oldp+7737,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT____Vcellout__gfor__BRA__19__KET____DOT__ui__OutX));
    bufp->fullBit(oldp+7738,((1U & (IData)((0x7fffffff80000000ULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                               << 0x1fU))))));
    bufp->fullBit(oldp+7739,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                              [1U])));
    bufp->fullBit(oldp+7740,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                    [1U] >> 1U))));
    bufp->fullBit(oldp+7741,((1U & (~ (IData)((0x7fffffff80000000ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  << 0x1fU)))))));
    bufp->fullBit(oldp+7742,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT____Vcellout__gfor__BRA__1__KET____DOT__ui__OutX));
    bufp->fullBit(oldp+7743,((1U & (IData)((0xffffffff000ULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                               << 0xcU))))));
    bufp->fullBit(oldp+7744,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                              [0x14U])));
    bufp->fullBit(oldp+7745,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                    [0x14U] >> 1U))));
    bufp->fullBit(oldp+7746,((1U & (~ (IData)((0xffffffff000ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  << 0xcU)))))));
    bufp->fullBit(oldp+7747,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT____Vcellout__gfor__BRA__20__KET____DOT__ui__OutX));
    bufp->fullBit(oldp+7748,((1U & (IData)((0x7fffffff800ULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                               << 0xbU))))));
    bufp->fullBit(oldp+7749,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                              [0x15U])));
    bufp->fullBit(oldp+7750,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                    [0x15U] >> 1U))));
    bufp->fullBit(oldp+7751,((1U & (~ (IData)((0x7fffffff800ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  << 0xbU)))))));
    bufp->fullBit(oldp+7752,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT____Vcellout__gfor__BRA__21__KET____DOT__ui__OutX));
    bufp->fullBit(oldp+7753,((1U & (IData)((0x3fffffffc00ULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                               << 0xaU))))));
    bufp->fullBit(oldp+7754,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                              [0x16U])));
    bufp->fullBit(oldp+7755,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                    [0x16U] >> 1U))));
    bufp->fullBit(oldp+7756,((1U & (~ (IData)((0x3fffffffc00ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  << 0xaU)))))));
    bufp->fullBit(oldp+7757,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT____Vcellout__gfor__BRA__22__KET____DOT__ui__OutX));
    bufp->fullBit(oldp+7758,((1U & (IData)((0x1fffffffe00ULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                               << 9U))))));
    bufp->fullBit(oldp+7759,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                              [0x17U])));
    bufp->fullBit(oldp+7760,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                    [0x17U] >> 1U))));
    bufp->fullBit(oldp+7761,((1U & (~ (IData)((0x1fffffffe00ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  << 9U)))))));
    bufp->fullBit(oldp+7762,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT____Vcellout__gfor__BRA__23__KET____DOT__ui__OutX));
    bufp->fullBit(oldp+7763,((1U & (IData)((0xffffffff00ULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                               << 8U))))));
    bufp->fullBit(oldp+7764,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                              [0x18U])));
    bufp->fullBit(oldp+7765,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                    [0x18U] >> 1U))));
    bufp->fullBit(oldp+7766,((1U & (~ (IData)((0xffffffff00ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  << 8U)))))));
    bufp->fullBit(oldp+7767,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT____Vcellout__gfor__BRA__24__KET____DOT__ui__OutX));
    bufp->fullBit(oldp+7768,((1U & (IData)((0x7fffffff80ULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                               << 7U))))));
    bufp->fullBit(oldp+7769,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                              [0x19U])));
    bufp->fullBit(oldp+7770,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                    [0x19U] >> 1U))));
    bufp->fullBit(oldp+7771,((1U & (~ (IData)((0x7fffffff80ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  << 7U)))))));
    bufp->fullBit(oldp+7772,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT____Vcellout__gfor__BRA__25__KET____DOT__ui__OutX));
    bufp->fullBit(oldp+7773,((1U & (IData)((0x3fffffffc0ULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                               << 6U))))));
    bufp->fullBit(oldp+7774,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                              [0x1aU])));
    bufp->fullBit(oldp+7775,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                    [0x1aU] >> 1U))));
    bufp->fullBit(oldp+7776,((1U & (~ (IData)((0x3fffffffc0ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  << 6U)))))));
    bufp->fullBit(oldp+7777,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT____Vcellout__gfor__BRA__26__KET____DOT__ui__OutX));
    bufp->fullBit(oldp+7778,((1U & (IData)((0x1fffffffe0ULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                               << 5U))))));
    bufp->fullBit(oldp+7779,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                              [0x1bU])));
    bufp->fullBit(oldp+7780,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                    [0x1bU] >> 1U))));
    bufp->fullBit(oldp+7781,((1U & (~ (IData)((0x1fffffffe0ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  << 5U)))))));
    bufp->fullBit(oldp+7782,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT____Vcellout__gfor__BRA__27__KET____DOT__ui__OutX));
    bufp->fullBit(oldp+7783,((1U & (IData)((0xffffffff0ULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                               << 4U))))));
    bufp->fullBit(oldp+7784,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                              [0x1cU])));
    bufp->fullBit(oldp+7785,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                    [0x1cU] >> 1U))));
    bufp->fullBit(oldp+7786,((1U & (~ (IData)((0xffffffff0ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  << 4U)))))));
    bufp->fullBit(oldp+7787,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT____Vcellout__gfor__BRA__28__KET____DOT__ui__OutX));
    bufp->fullBit(oldp+7788,((1U & (IData)((0x7fffffff8ULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                               << 3U))))));
    bufp->fullBit(oldp+7789,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                              [0x1dU])));
    bufp->fullBit(oldp+7790,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                    [0x1dU] >> 1U))));
    bufp->fullBit(oldp+7791,((1U & (~ (IData)((0x7fffffff8ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  << 3U)))))));
    bufp->fullBit(oldp+7792,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT____Vcellout__gfor__BRA__29__KET____DOT__ui__OutX));
    bufp->fullBit(oldp+7793,((1U & (IData)((0x3fffffffc0000000ULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                               << 0x1eU))))));
    bufp->fullBit(oldp+7794,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                              [2U])));
    bufp->fullBit(oldp+7795,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                    [2U] >> 1U))));
    bufp->fullBit(oldp+7796,((1U & (~ (IData)((0x3fffffffc0000000ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  << 0x1eU)))))));
    bufp->fullBit(oldp+7797,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT____Vcellout__gfor__BRA__2__KET____DOT__ui__OutX));
    bufp->fullBit(oldp+7798,((1U & (IData)((0x3fffffffcULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                               << 2U))))));
    bufp->fullBit(oldp+7799,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                              [0x1eU])));
    bufp->fullBit(oldp+7800,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                    [0x1eU] >> 1U))));
    bufp->fullBit(oldp+7801,((1U & (~ (IData)((0x3fffffffcULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  << 2U)))))));
    bufp->fullBit(oldp+7802,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT____Vcellout__gfor__BRA__30__KET____DOT__ui__OutX));
    bufp->fullBit(oldp+7803,((1U & (IData)((0x1fffffffeULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                               << 1U))))));
    bufp->fullBit(oldp+7804,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                              [0x1fU])));
    bufp->fullBit(oldp+7805,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                    [0x1fU] >> 1U))));
    bufp->fullBit(oldp+7806,((1U & (~ (IData)((0x1fffffffeULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  << 1U)))))));
    bufp->fullBit(oldp+7807,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT____Vcellout__gfor__BRA__31__KET____DOT__ui__OutX));
    bufp->fullBit(oldp+7808,((1U & (IData)((0xffffffffULL 
                                            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX)))));
    bufp->fullBit(oldp+7809,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                              [0x20U])));
    bufp->fullBit(oldp+7810,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                    [0x20U] >> 1U))));
    bufp->fullBit(oldp+7811,((1U & (~ (IData)((0xffffffffULL 
                                               & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX))))));
    bufp->fullBit(oldp+7812,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT____Vcellout__gfor__BRA__32__KET____DOT__ui__OutX));
    bufp->fullBit(oldp+7813,((1U & (IData)((0x7fffffffULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                               >> 1U))))));
    bufp->fullBit(oldp+7814,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                              [0x21U])));
    bufp->fullBit(oldp+7815,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                    [0x21U] >> 1U))));
    bufp->fullBit(oldp+7816,((1U & (~ (IData)((0x7fffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 1U)))))));
    bufp->fullBit(oldp+7817,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT____Vcellout__gfor__BRA__33__KET____DOT__ui__OutX));
    bufp->fullBit(oldp+7818,((1U & (IData)((0x3fffffffULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                               >> 2U))))));
    bufp->fullBit(oldp+7819,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                              [0x22U])));
    bufp->fullBit(oldp+7820,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                    [0x22U] >> 1U))));
    bufp->fullBit(oldp+7821,((1U & (~ (IData)((0x3fffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 2U)))))));
    bufp->fullBit(oldp+7822,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT____Vcellout__gfor__BRA__34__KET____DOT__ui__OutX));
    bufp->fullBit(oldp+7823,((1U & (IData)((0x1fffffffULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                               >> 3U))))));
    bufp->fullBit(oldp+7824,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                              [0x23U])));
    bufp->fullBit(oldp+7825,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                    [0x23U] >> 1U))));
    bufp->fullBit(oldp+7826,((1U & (~ (IData)((0x1fffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 3U)))))));
    bufp->fullBit(oldp+7827,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT____Vcellout__gfor__BRA__35__KET____DOT__ui__OutX));
    bufp->fullBit(oldp+7828,((1U & (IData)((0xfffffffULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                               >> 4U))))));
    bufp->fullBit(oldp+7829,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                              [0x24U])));
    bufp->fullBit(oldp+7830,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                    [0x24U] >> 1U))));
    bufp->fullBit(oldp+7831,((1U & (~ (IData)((0xfffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 4U)))))));
    bufp->fullBit(oldp+7832,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT____Vcellout__gfor__BRA__36__KET____DOT__ui__OutX));
    bufp->fullBit(oldp+7833,((1U & (IData)((0x7ffffffULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                               >> 5U))))));
    bufp->fullBit(oldp+7834,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                              [0x25U])));
    bufp->fullBit(oldp+7835,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                    [0x25U] >> 1U))));
    bufp->fullBit(oldp+7836,((1U & (~ (IData)((0x7ffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 5U)))))));
    bufp->fullBit(oldp+7837,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT____Vcellout__gfor__BRA__37__KET____DOT__ui__OutX));
    bufp->fullBit(oldp+7838,((1U & (IData)((0x3ffffffULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                               >> 6U))))));
    bufp->fullBit(oldp+7839,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                              [0x26U])));
    bufp->fullBit(oldp+7840,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                    [0x26U] >> 1U))));
    bufp->fullBit(oldp+7841,((1U & (~ (IData)((0x3ffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 6U)))))));
    bufp->fullBit(oldp+7842,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT____Vcellout__gfor__BRA__38__KET____DOT__ui__OutX));
    bufp->fullBit(oldp+7843,((1U & (IData)((0x1ffffffULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                               >> 7U))))));
    bufp->fullBit(oldp+7844,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                              [0x27U])));
    bufp->fullBit(oldp+7845,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                    [0x27U] >> 1U))));
    bufp->fullBit(oldp+7846,((1U & (~ (IData)((0x1ffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 7U)))))));
    bufp->fullBit(oldp+7847,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT____Vcellout__gfor__BRA__39__KET____DOT__ui__OutX));
    bufp->fullBit(oldp+7848,((1U & (IData)((0x1fffffffe0000000ULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                               << 0x1dU))))));
    bufp->fullBit(oldp+7849,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                              [3U])));
    bufp->fullBit(oldp+7850,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                    [3U] >> 1U))));
    bufp->fullBit(oldp+7851,((1U & (~ (IData)((0x1fffffffe0000000ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  << 0x1dU)))))));
    bufp->fullBit(oldp+7852,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT____Vcellout__gfor__BRA__3__KET____DOT__ui__OutX));
    bufp->fullBit(oldp+7853,((1U & (IData)((0xffffffULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                               >> 8U))))));
    bufp->fullBit(oldp+7854,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                              [0x28U])));
    bufp->fullBit(oldp+7855,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                    [0x28U] >> 1U))));
    bufp->fullBit(oldp+7856,((1U & (~ (IData)((0xffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 8U)))))));
    bufp->fullBit(oldp+7857,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT____Vcellout__gfor__BRA__40__KET____DOT__ui__OutX));
    bufp->fullBit(oldp+7858,((1U & (IData)((0x7fffffULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                               >> 9U))))));
    bufp->fullBit(oldp+7859,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                              [0x29U])));
    bufp->fullBit(oldp+7860,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                    [0x29U] >> 1U))));
    bufp->fullBit(oldp+7861,((1U & (~ (IData)((0x7fffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 9U)))))));
    bufp->fullBit(oldp+7862,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT____Vcellout__gfor__BRA__41__KET____DOT__ui__OutX));
    bufp->fullBit(oldp+7863,((1U & (IData)((0x3fffffULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                               >> 0xaU))))));
    bufp->fullBit(oldp+7864,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                              [0x2aU])));
    bufp->fullBit(oldp+7865,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                    [0x2aU] >> 1U))));
    bufp->fullBit(oldp+7866,((1U & (~ (IData)((0x3fffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0xaU)))))));
    bufp->fullBit(oldp+7867,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT____Vcellout__gfor__BRA__42__KET____DOT__ui__OutX));
    bufp->fullBit(oldp+7868,((1U & (IData)((0x1fffffULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                               >> 0xbU))))));
    bufp->fullBit(oldp+7869,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                              [0x2bU])));
    bufp->fullBit(oldp+7870,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                    [0x2bU] >> 1U))));
    bufp->fullBit(oldp+7871,((1U & (~ (IData)((0x1fffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0xbU)))))));
    bufp->fullBit(oldp+7872,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT____Vcellout__gfor__BRA__43__KET____DOT__ui__OutX));
    bufp->fullBit(oldp+7873,((1U & (IData)((0xfffffULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                               >> 0xcU))))));
    bufp->fullBit(oldp+7874,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                              [0x2cU])));
    bufp->fullBit(oldp+7875,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                    [0x2cU] >> 1U))));
    bufp->fullBit(oldp+7876,((1U & (~ (IData)((0xfffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0xcU)))))));
    bufp->fullBit(oldp+7877,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT____Vcellout__gfor__BRA__44__KET____DOT__ui__OutX));
    bufp->fullBit(oldp+7878,((1U & (IData)((0x7ffffULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                               >> 0xdU))))));
    bufp->fullBit(oldp+7879,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                              [0x2dU])));
    bufp->fullBit(oldp+7880,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                    [0x2dU] >> 1U))));
    bufp->fullBit(oldp+7881,((1U & (~ (IData)((0x7ffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0xdU)))))));
    bufp->fullBit(oldp+7882,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT____Vcellout__gfor__BRA__45__KET____DOT__ui__OutX));
    bufp->fullBit(oldp+7883,((1U & (IData)((0x3ffffULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                               >> 0xeU))))));
    bufp->fullBit(oldp+7884,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                              [0x2eU])));
    bufp->fullBit(oldp+7885,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                    [0x2eU] >> 1U))));
    bufp->fullBit(oldp+7886,((1U & (~ (IData)((0x3ffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0xeU)))))));
    bufp->fullBit(oldp+7887,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT____Vcellout__gfor__BRA__46__KET____DOT__ui__OutX));
    bufp->fullBit(oldp+7888,((1U & (IData)((0x1ffffULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                               >> 0xfU))))));
    bufp->fullBit(oldp+7889,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                              [0x2fU])));
    bufp->fullBit(oldp+7890,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                    [0x2fU] >> 1U))));
    bufp->fullBit(oldp+7891,((1U & (~ (IData)((0x1ffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0xfU)))))));
    bufp->fullBit(oldp+7892,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT____Vcellout__gfor__BRA__47__KET____DOT__ui__OutX));
    bufp->fullBit(oldp+7893,((1U & (IData)((0xffffULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                               >> 0x10U))))));
    bufp->fullBit(oldp+7894,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                              [0x30U])));
    bufp->fullBit(oldp+7895,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                    [0x30U] >> 1U))));
    bufp->fullBit(oldp+7896,((1U & (~ (IData)((0xffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x10U)))))));
    bufp->fullBit(oldp+7897,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT____Vcellout__gfor__BRA__48__KET____DOT__ui__OutX));
    bufp->fullBit(oldp+7898,((1U & (IData)((0x7fffULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                               >> 0x11U))))));
    bufp->fullBit(oldp+7899,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                              [0x31U])));
    bufp->fullBit(oldp+7900,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                    [0x31U] >> 1U))));
    bufp->fullBit(oldp+7901,((1U & (~ (IData)((0x7fffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x11U)))))));
    bufp->fullBit(oldp+7902,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT____Vcellout__gfor__BRA__49__KET____DOT__ui__OutX));
    bufp->fullBit(oldp+7903,((1U & (IData)((0xffffffff0000000ULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                               << 0x1cU))))));
    bufp->fullBit(oldp+7904,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                              [4U])));
    bufp->fullBit(oldp+7905,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                    [4U] >> 1U))));
    bufp->fullBit(oldp+7906,((1U & (~ (IData)((0xffffffff0000000ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  << 0x1cU)))))));
    bufp->fullBit(oldp+7907,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT____Vcellout__gfor__BRA__4__KET____DOT__ui__OutX));
    bufp->fullBit(oldp+7908,((1U & (IData)((0x3fffULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                               >> 0x12U))))));
    bufp->fullBit(oldp+7909,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                              [0x32U])));
    bufp->fullBit(oldp+7910,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                    [0x32U] >> 1U))));
    bufp->fullBit(oldp+7911,((1U & (~ (IData)((0x3fffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x12U)))))));
    bufp->fullBit(oldp+7912,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT____Vcellout__gfor__BRA__50__KET____DOT__ui__OutX));
    bufp->fullBit(oldp+7913,((1U & (IData)((0x1fffULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                               >> 0x13U))))));
    bufp->fullBit(oldp+7914,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                              [0x33U])));
    bufp->fullBit(oldp+7915,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                    [0x33U] >> 1U))));
    bufp->fullBit(oldp+7916,((1U & (~ (IData)((0x1fffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x13U)))))));
    bufp->fullBit(oldp+7917,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT____Vcellout__gfor__BRA__51__KET____DOT__ui__OutX));
    bufp->fullBit(oldp+7918,((1U & (IData)((0xfffULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                               >> 0x14U))))));
    bufp->fullBit(oldp+7919,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                              [0x34U])));
    bufp->fullBit(oldp+7920,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                    [0x34U] >> 1U))));
    bufp->fullBit(oldp+7921,((1U & (~ (IData)((0xfffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x14U)))))));
    bufp->fullBit(oldp+7922,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT____Vcellout__gfor__BRA__52__KET____DOT__ui__OutX));
    bufp->fullBit(oldp+7923,((1U & (IData)((0x7ffULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                               >> 0x15U))))));
    bufp->fullBit(oldp+7924,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                              [0x35U])));
    bufp->fullBit(oldp+7925,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                    [0x35U] >> 1U))));
    bufp->fullBit(oldp+7926,((1U & (~ (IData)((0x7ffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x15U)))))));
    bufp->fullBit(oldp+7927,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT____Vcellout__gfor__BRA__53__KET____DOT__ui__OutX));
    bufp->fullBit(oldp+7928,((1U & (IData)((0x3ffULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                               >> 0x16U))))));
    bufp->fullBit(oldp+7929,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                              [0x36U])));
    bufp->fullBit(oldp+7930,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                    [0x36U] >> 1U))));
    bufp->fullBit(oldp+7931,((1U & (~ (IData)((0x3ffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x16U)))))));
    bufp->fullBit(oldp+7932,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT____Vcellout__gfor__BRA__54__KET____DOT__ui__OutX));
    bufp->fullBit(oldp+7933,((1U & (IData)((0x1ffULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                               >> 0x17U))))));
    bufp->fullBit(oldp+7934,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                              [0x37U])));
    bufp->fullBit(oldp+7935,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                    [0x37U] >> 1U))));
    bufp->fullBit(oldp+7936,((1U & (~ (IData)((0x1ffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x17U)))))));
    bufp->fullBit(oldp+7937,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT____Vcellout__gfor__BRA__55__KET____DOT__ui__OutX));
    bufp->fullBit(oldp+7938,((1U & (IData)((0xffULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                               >> 0x18U))))));
    bufp->fullBit(oldp+7939,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                              [0x38U])));
    bufp->fullBit(oldp+7940,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                    [0x38U] >> 1U))));
    bufp->fullBit(oldp+7941,((1U & (~ (IData)((0xffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x18U)))))));
    bufp->fullBit(oldp+7942,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT____Vcellout__gfor__BRA__56__KET____DOT__ui__OutX));
    bufp->fullBit(oldp+7943,((1U & (IData)((0x7fULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                               >> 0x19U))))));
    bufp->fullBit(oldp+7944,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                              [0x39U])));
    bufp->fullBit(oldp+7945,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                    [0x39U] >> 1U))));
    bufp->fullBit(oldp+7946,((1U & (~ (IData)((0x7fULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x19U)))))));
    bufp->fullBit(oldp+7947,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT____Vcellout__gfor__BRA__57__KET____DOT__ui__OutX));
    bufp->fullBit(oldp+7948,((1U & (IData)((0x3fULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                               >> 0x1aU))))));
    bufp->fullBit(oldp+7949,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                              [0x3aU])));
    bufp->fullBit(oldp+7950,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                    [0x3aU] >> 1U))));
    bufp->fullBit(oldp+7951,((1U & (~ (IData)((0x3fULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x1aU)))))));
    bufp->fullBit(oldp+7952,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT____Vcellout__gfor__BRA__58__KET____DOT__ui__OutX));
    bufp->fullBit(oldp+7953,((1U & (IData)((0x1fULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                               >> 0x1bU))))));
    bufp->fullBit(oldp+7954,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                              [0x3bU])));
    bufp->fullBit(oldp+7955,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                    [0x3bU] >> 1U))));
    bufp->fullBit(oldp+7956,((1U & (~ (IData)((0x1fULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x1bU)))))));
    bufp->fullBit(oldp+7957,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT____Vcellout__gfor__BRA__59__KET____DOT__ui__OutX));
    bufp->fullBit(oldp+7958,((1U & (IData)((0x7fffffff8000000ULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                               << 0x1bU))))));
    bufp->fullBit(oldp+7959,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                              [5U])));
    bufp->fullBit(oldp+7960,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                    [5U] >> 1U))));
    bufp->fullBit(oldp+7961,((1U & (~ (IData)((0x7fffffff8000000ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  << 0x1bU)))))));
    bufp->fullBit(oldp+7962,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT____Vcellout__gfor__BRA__5__KET____DOT__ui__OutX));
    bufp->fullBit(oldp+7963,((1U & (IData)((0xfULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                               >> 0x1cU))))));
    bufp->fullBit(oldp+7964,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                              [0x3cU])));
    bufp->fullBit(oldp+7965,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                    [0x3cU] >> 1U))));
    bufp->fullBit(oldp+7966,((1U & (~ (IData)((0xfULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x1cU)))))));
    bufp->fullBit(oldp+7967,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT____Vcellout__gfor__BRA__60__KET____DOT__ui__OutX));
    bufp->fullBit(oldp+7968,((1U & (IData)((7ULL & 
                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x1dU))))));
    bufp->fullBit(oldp+7969,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                              [0x3dU])));
    bufp->fullBit(oldp+7970,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                    [0x3dU] >> 1U))));
    bufp->fullBit(oldp+7971,((1U & (~ (IData)((7ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x1dU)))))));
    bufp->fullBit(oldp+7972,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT____Vcellout__gfor__BRA__61__KET____DOT__ui__OutX));
    bufp->fullBit(oldp+7973,((1U & (IData)((3ULL & 
                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x1eU))))));
    bufp->fullBit(oldp+7974,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                              [0x3eU])));
    bufp->fullBit(oldp+7975,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                    [0x3eU] >> 1U))));
    bufp->fullBit(oldp+7976,((1U & (~ (IData)((3ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x1eU)))))));
    bufp->fullBit(oldp+7977,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT____Vcellout__gfor__BRA__62__KET____DOT__ui__OutX));
    bufp->fullBit(oldp+7978,((1U & (IData)((1ULL & 
                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x1fU))))));
    bufp->fullBit(oldp+7979,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                              [0x3fU])));
    bufp->fullBit(oldp+7980,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                    [0x3fU] >> 1U))));
    bufp->fullBit(oldp+7981,((1U & (~ (IData)((1ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x1fU)))))));
    bufp->fullBit(oldp+7982,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT____Vcellout__gfor__BRA__63__KET____DOT__ui__OutX));
    bufp->fullBit(oldp+7983,((1U & (IData)((0x3fffffffc000000ULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                               << 0x1aU))))));
    bufp->fullBit(oldp+7984,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                              [6U])));
    bufp->fullBit(oldp+7985,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                    [6U] >> 1U))));
    bufp->fullBit(oldp+7986,((1U & (~ (IData)((0x3fffffffc000000ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  << 0x1aU)))))));
    bufp->fullBit(oldp+7987,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT____Vcellout__gfor__BRA__6__KET____DOT__ui__OutX));
    bufp->fullBit(oldp+7988,((1U & (IData)((0x1fffffffe000000ULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                               << 0x19U))))));
    bufp->fullBit(oldp+7989,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                              [7U])));
    bufp->fullBit(oldp+7990,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                    [7U] >> 1U))));
    bufp->fullBit(oldp+7991,((1U & (~ (IData)((0x1fffffffe000000ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  << 0x19U)))))));
    bufp->fullBit(oldp+7992,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT____Vcellout__gfor__BRA__7__KET____DOT__ui__OutX));
    bufp->fullBit(oldp+7993,((1U & (IData)((0xffffffff000000ULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                               << 0x18U))))));
    bufp->fullBit(oldp+7994,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                              [8U])));
    bufp->fullBit(oldp+7995,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                    [8U] >> 1U))));
    bufp->fullBit(oldp+7996,((1U & (~ (IData)((0xffffffff000000ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  << 0x18U)))))));
    bufp->fullBit(oldp+7997,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT____Vcellout__gfor__BRA__8__KET____DOT__ui__OutX));
    bufp->fullBit(oldp+7998,((1U & (IData)((0x7fffffff800000ULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                               << 0x17U))))));
    bufp->fullBit(oldp+7999,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                              [9U])));
    bufp->fullBit(oldp+8000,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                    [9U] >> 1U))));
    bufp->fullBit(oldp+8001,((1U & (~ (IData)((0x7fffffff800000ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  << 0x17U)))))));
    bufp->fullBit(oldp+8002,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT____Vcellout__gfor__BRA__9__KET____DOT__ui__OutX));
    bufp->fullBit(oldp+8003,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                            >> 0x20U)))));
    bufp->fullIData(oldp+8004,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData),17);
    bufp->fullBit(oldp+8005,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi__DOT__FifSig) 
                               & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi__DOT____Vcellinp__sixth1__B) 
                                  | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                              | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0))));
    bufp->fullBit(oldp+8006,((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi__DOT__FifSig)) 
                               & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                              | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi__DOT__FifSig)) 
                                  & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi__DOT____Vcellinp__sixth1__C)) 
                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi__DOT____Vcellinp__sixth1__B))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi__DOT__FifSig) 
                                    & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                        & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                       | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0)))))));
    bufp->fullCData(oldp+8007,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi__DOT____Vcellinp__second4__A) 
                                 << 4U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi__DOT____Vcellinp__second4__B) 
                                            << 3U) 
                                           | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi__DOT____Vcellinp__second4__C) 
                                               << 2U) 
                                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi__DOT____Vcellinp__second3__A) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi__DOT____Vcellinp__second3__B)))))),5);
    bufp->fullCData(oldp+8008,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi__DOT____Vcellinp__third2__A) 
                                 << 3U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi__DOT____Vcellinp__third2__B) 
                                            << 2U) 
                                           | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi__DOT____Vcellinp__third2__C) 
                                               << 1U) 
                                              | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi__DOT____Vcellinp__third1__A))))),4);
    bufp->fullCData(oldp+8009,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi__DOT____Vcellinp__fourth2__A) 
                                 << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi__DOT____Vcellinp__fourth2__B))),2);
    bufp->fullCData(oldp+8010,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi__DOT____Vcellinp__fifth1__A) 
                                 << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi__DOT____Vcellinp__fifth1__B))),2);
    bufp->fullBit(oldp+8011,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi__DOT__FifSig));
    bufp->fullBit(oldp+8012,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi__DOT____Vcellinp__fifth1__A));
    bufp->fullBit(oldp+8013,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi__DOT____Vcellinp__fifth1__B));
    bufp->fullBit(oldp+8014,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi__DOT____Vcellinp__fifth1__C));
    bufp->fullBit(oldp+8015,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi__DOT____Vcellinp__sixth1__B));
    bufp->fullBit(oldp+8016,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xcU] 
                                            >> 0xaU)))));
    bufp->fullBit(oldp+8017,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xdU] 
                                            >> 0xaU)))));
    bufp->fullBit(oldp+8018,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xeU] 
                                            >> 0xaU)))));
    bufp->fullBit(oldp+8019,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi__DOT____Vcellinp__second1__C));
    bufp->fullBit(oldp+8020,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi__DOT____Vcellinp__second3__B));
    bufp->fullBit(oldp+8021,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [9U] >> 0xaU)))));
    bufp->fullBit(oldp+8022,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xaU] 
                                            >> 0xaU)))));
    bufp->fullBit(oldp+8023,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xbU] 
                                            >> 0xaU)))));
    bufp->fullBit(oldp+8024,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi__DOT____Vcellinp__second1__B));
    bufp->fullBit(oldp+8025,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi__DOT____Vcellinp__second3__A));
    bufp->fullBit(oldp+8026,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [6U] >> 0xaU)))));
    bufp->fullBit(oldp+8027,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [7U] >> 0xaU)))));
    bufp->fullBit(oldp+8028,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [8U] >> 0xaU)))));
    bufp->fullBit(oldp+8029,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi__DOT____Vcellinp__second1__A));
    bufp->fullBit(oldp+8030,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi__DOT____Vcellinp__second4__C));
    bufp->fullBit(oldp+8031,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [3U] >> 0xaU)))));
    bufp->fullBit(oldp+8032,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [4U] >> 0xaU)))));
    bufp->fullBit(oldp+8033,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [5U] >> 0xaU)))));
    bufp->fullBit(oldp+8034,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi__DOT____Vcellinp__second2__C));
    bufp->fullBit(oldp+8035,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi__DOT____Vcellinp__second4__B));
    bufp->fullBit(oldp+8036,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0U] >> 0xaU)))));
    bufp->fullBit(oldp+8037,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [1U] >> 0xaU)))));
    bufp->fullBit(oldp+8038,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [2U] >> 0xaU)))));
    bufp->fullBit(oldp+8039,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi__DOT____Vcellinp__second2__B));
    bufp->fullBit(oldp+8040,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi__DOT____Vcellinp__second4__A));
    bufp->fullBit(oldp+8041,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi__DOT____Vcellinp__fourth1__A));
    bufp->fullBit(oldp+8042,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi__DOT____Vcellinp__fourth1__B));
    bufp->fullBit(oldp+8043,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi__DOT____Vcellinp__fourth1__C));
    bufp->fullBit(oldp+8044,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi__DOT____Vcellinp__fifth1__C));
    bufp->fullBit(oldp+8045,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi__DOT____Vcellinp__fourth2__A));
    bufp->fullBit(oldp+8046,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi__DOT____Vcellinp__fourth2__B));
    bufp->fullBit(oldp+8047,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi__DOT____Vcellinp__fourth2__C));
    bufp->fullBit(oldp+8048,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi__DOT____Vcellinp__sixth1__C));
    bufp->fullBit(oldp+8049,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi__DOT____Vcellinp__second1__A));
    bufp->fullBit(oldp+8050,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi__DOT____Vcellinp__second1__B));
    bufp->fullBit(oldp+8051,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi__DOT____Vcellinp__second1__C));
    bufp->fullBit(oldp+8052,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi__DOT____Vcellinp__third1__C));
    bufp->fullBit(oldp+8053,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi__DOT____Vcellinp__third1__A));
    bufp->fullBit(oldp+8054,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0x10U] 
                                            >> 0xaU)))));
    bufp->fullBit(oldp+8055,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi__DOT____Vcellinp__second2__B));
    bufp->fullBit(oldp+8056,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi__DOT____Vcellinp__second2__C));
    bufp->fullBit(oldp+8057,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi__DOT____Vcellinp__third1__B));
    bufp->fullBit(oldp+8058,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi__DOT____Vcellinp__third2__C));
    bufp->fullBit(oldp+8059,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xfU] 
                                            >> 0xaU)))));
    bufp->fullBit(oldp+8060,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi__DOT____Vcellinp__fourth1__C));
    bufp->fullBit(oldp+8061,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi__DOT____Vcellinp__third2__B));
    bufp->fullBit(oldp+8062,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi__DOT____Vcellinp__fourth1__B));
    bufp->fullBit(oldp+8063,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi__DOT____Vcellinp__third2__A));
    bufp->fullBit(oldp+8064,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi__DOT____Vcellinp__sixth1__B));
    bufp->fullBit(oldp+8065,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi__DOT____Vcellinp__sixth1__C));
    bufp->fullBit(oldp+8066,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi__DOT____Vcellinp__third1__B));
    bufp->fullBit(oldp+8067,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi__DOT____Vcellinp__third1__C));
    bufp->fullBit(oldp+8068,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi__DOT____Vcellinp__fourth1__A));
    bufp->fullBit(oldp+8069,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi__DOT____Vcellinp__fourth2__C));
    bufp->fullIData(oldp+8070,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__11__KET____DOT__bi__InData),17);
    bufp->fullBit(oldp+8071,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi__DOT__FifSig) 
                               & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi__DOT____Vcellinp__sixth1__B) 
                                  | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                              | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0))));
    bufp->fullBit(oldp+8072,((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi__DOT__FifSig)) 
                               & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                              | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi__DOT__FifSig)) 
                                  & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi__DOT____Vcellinp__sixth1__C)) 
                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi__DOT____Vcellinp__sixth1__B))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi__DOT__FifSig) 
                                    & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                        & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                       | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0)))))));
    bufp->fullCData(oldp+8073,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi__DOT____Vcellinp__second4__A) 
                                 << 4U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi__DOT____Vcellinp__second4__B) 
                                            << 3U) 
                                           | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi__DOT____Vcellinp__second4__C) 
                                               << 2U) 
                                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi__DOT____Vcellinp__second3__A) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi__DOT____Vcellinp__second3__B)))))),5);
    bufp->fullCData(oldp+8074,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi__DOT____Vcellinp__third2__A) 
                                 << 3U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi__DOT____Vcellinp__third2__B) 
                                            << 2U) 
                                           | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi__DOT____Vcellinp__third2__C) 
                                               << 1U) 
                                              | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi__DOT____Vcellinp__third1__A))))),4);
    bufp->fullCData(oldp+8075,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi__DOT____Vcellinp__fourth2__A) 
                                 << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi__DOT____Vcellinp__fourth2__B))),2);
    bufp->fullCData(oldp+8076,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi__DOT____Vcellinp__fifth1__A) 
                                 << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi__DOT____Vcellinp__fifth1__B))),2);
    bufp->fullBit(oldp+8077,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi__DOT__FifSig));
    bufp->fullBit(oldp+8078,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi__DOT____Vcellinp__fifth1__A));
    bufp->fullBit(oldp+8079,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi__DOT____Vcellinp__fifth1__B));
    bufp->fullBit(oldp+8080,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi__DOT____Vcellinp__sixth1__B));
    bufp->fullBit(oldp+8081,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xcU] 
                                            >> 0xbU)))));
    bufp->fullBit(oldp+8082,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xdU] 
                                            >> 0xbU)))));
    bufp->fullBit(oldp+8083,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xeU] 
                                            >> 0xbU)))));
    bufp->fullBit(oldp+8084,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi__DOT____Vcellinp__second1__C));
    bufp->fullBit(oldp+8085,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi__DOT____Vcellinp__second3__B));
    bufp->fullBit(oldp+8086,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [9U] >> 0xbU)))));
    bufp->fullBit(oldp+8087,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xaU] 
                                            >> 0xbU)))));
    bufp->fullBit(oldp+8088,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xbU] 
                                            >> 0xbU)))));
    bufp->fullBit(oldp+8089,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi__DOT____Vcellinp__second1__B));
    bufp->fullBit(oldp+8090,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi__DOT____Vcellinp__second3__A));
    bufp->fullBit(oldp+8091,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [6U] >> 0xbU)))));
    bufp->fullBit(oldp+8092,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [7U] >> 0xbU)))));
    bufp->fullBit(oldp+8093,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [8U] >> 0xbU)))));
    bufp->fullBit(oldp+8094,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi__DOT____Vcellinp__second1__A));
    bufp->fullBit(oldp+8095,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi__DOT____Vcellinp__second4__C));
    bufp->fullBit(oldp+8096,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [3U] >> 0xbU)))));
    bufp->fullBit(oldp+8097,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [4U] >> 0xbU)))));
    bufp->fullBit(oldp+8098,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [5U] >> 0xbU)))));
    bufp->fullBit(oldp+8099,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi__DOT____Vcellinp__second2__C));
    bufp->fullBit(oldp+8100,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi__DOT____Vcellinp__second4__B));
    bufp->fullBit(oldp+8101,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0U] >> 0xbU)))));
    bufp->fullBit(oldp+8102,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [1U] >> 0xbU)))));
    bufp->fullBit(oldp+8103,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [2U] >> 0xbU)))));
    bufp->fullBit(oldp+8104,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi__DOT____Vcellinp__second2__B));
    bufp->fullBit(oldp+8105,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi__DOT____Vcellinp__second4__A));
    bufp->fullBit(oldp+8106,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi__DOT____Vcellinp__fifth1__C));
    bufp->fullBit(oldp+8107,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi__DOT____Vcellinp__fourth2__A));
    bufp->fullBit(oldp+8108,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi__DOT____Vcellinp__fourth2__B));
    bufp->fullBit(oldp+8109,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi__DOT____Vcellinp__sixth1__C));
    bufp->fullBit(oldp+8110,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi__DOT____Vcellinp__third1__C));
    bufp->fullBit(oldp+8111,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi__DOT____Vcellinp__third1__A));
    bufp->fullBit(oldp+8112,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0x10U] 
                                            >> 0xbU)))));
    bufp->fullBit(oldp+8113,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi__DOT____Vcellinp__third1__B));
    bufp->fullBit(oldp+8114,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi__DOT____Vcellinp__third2__C));
    bufp->fullBit(oldp+8115,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xfU] 
                                            >> 0xbU)))));
    bufp->fullBit(oldp+8116,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi__DOT____Vcellinp__fourth1__C));
    bufp->fullBit(oldp+8117,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi__DOT____Vcellinp__third2__B));
    bufp->fullBit(oldp+8118,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi__DOT____Vcellinp__fourth1__B));
    bufp->fullBit(oldp+8119,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi__DOT____Vcellinp__third2__A));
    bufp->fullBit(oldp+8120,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi__DOT____Vcellinp__fourth1__A));
    bufp->fullBit(oldp+8121,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi__DOT____Vcellinp__fourth2__C));
    bufp->fullIData(oldp+8122,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__12__KET____DOT__bi__InData),17);
    bufp->fullBit(oldp+8123,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi__DOT__FifSig) 
                               & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi__DOT____Vcellinp__sixth1__B) 
                                  | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                              | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0))));
    bufp->fullBit(oldp+8124,((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi__DOT__FifSig)) 
                               & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                              | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi__DOT__FifSig)) 
                                  & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi__DOT____Vcellinp__sixth1__C)) 
                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi__DOT____Vcellinp__sixth1__B))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi__DOT__FifSig) 
                                    & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                        & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                       | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0)))))));
    bufp->fullCData(oldp+8125,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi__DOT____Vcellinp__second4__A) 
                                 << 4U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi__DOT____Vcellinp__second4__B) 
                                            << 3U) 
                                           | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi__DOT____Vcellinp__second4__C) 
                                               << 2U) 
                                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi__DOT____Vcellinp__second3__A) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi__DOT____Vcellinp__second3__B)))))),5);
    bufp->fullCData(oldp+8126,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi__DOT____Vcellinp__third2__A) 
                                 << 3U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi__DOT____Vcellinp__third2__B) 
                                            << 2U) 
                                           | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi__DOT____Vcellinp__third2__C) 
                                               << 1U) 
                                              | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi__DOT____Vcellinp__third1__A))))),4);
    bufp->fullCData(oldp+8127,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi__DOT____Vcellinp__fourth2__A) 
                                 << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi__DOT____Vcellinp__fourth2__B))),2);
    bufp->fullCData(oldp+8128,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi__DOT____Vcellinp__fifth1__A) 
                                 << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi__DOT____Vcellinp__fifth1__B))),2);
    bufp->fullBit(oldp+8129,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi__DOT__FifSig));
    bufp->fullBit(oldp+8130,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi__DOT____Vcellinp__fifth1__A));
    bufp->fullBit(oldp+8131,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi__DOT____Vcellinp__fifth1__B));
    bufp->fullBit(oldp+8132,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi__DOT____Vcellinp__sixth1__B));
    bufp->fullBit(oldp+8133,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xcU] 
                                            >> 0xcU)))));
    bufp->fullBit(oldp+8134,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xdU] 
                                            >> 0xcU)))));
    bufp->fullBit(oldp+8135,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xeU] 
                                            >> 0xcU)))));
    bufp->fullBit(oldp+8136,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi__DOT____Vcellinp__second1__C));
    bufp->fullBit(oldp+8137,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi__DOT____Vcellinp__second3__B));
    bufp->fullBit(oldp+8138,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [9U] >> 0xcU)))));
    bufp->fullBit(oldp+8139,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xaU] 
                                            >> 0xcU)))));
    bufp->fullBit(oldp+8140,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xbU] 
                                            >> 0xcU)))));
    bufp->fullBit(oldp+8141,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi__DOT____Vcellinp__second1__B));
    bufp->fullBit(oldp+8142,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi__DOT____Vcellinp__second3__A));
    bufp->fullBit(oldp+8143,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [6U] >> 0xcU)))));
    bufp->fullBit(oldp+8144,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [7U] >> 0xcU)))));
    bufp->fullBit(oldp+8145,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [8U] >> 0xcU)))));
    bufp->fullBit(oldp+8146,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi__DOT____Vcellinp__second1__A));
    bufp->fullBit(oldp+8147,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi__DOT____Vcellinp__second4__C));
    bufp->fullBit(oldp+8148,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [3U] >> 0xcU)))));
    bufp->fullBit(oldp+8149,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [4U] >> 0xcU)))));
    bufp->fullBit(oldp+8150,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [5U] >> 0xcU)))));
    bufp->fullBit(oldp+8151,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi__DOT____Vcellinp__second2__C));
    bufp->fullBit(oldp+8152,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi__DOT____Vcellinp__second4__B));
    bufp->fullBit(oldp+8153,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0U] >> 0xcU)))));
    bufp->fullBit(oldp+8154,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [1U] >> 0xcU)))));
    bufp->fullBit(oldp+8155,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [2U] >> 0xcU)))));
    bufp->fullBit(oldp+8156,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi__DOT____Vcellinp__second2__B));
    bufp->fullBit(oldp+8157,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi__DOT____Vcellinp__second4__A));
    bufp->fullBit(oldp+8158,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi__DOT____Vcellinp__fifth1__C));
    bufp->fullBit(oldp+8159,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi__DOT____Vcellinp__fourth2__A));
    bufp->fullBit(oldp+8160,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi__DOT____Vcellinp__fourth2__B));
    bufp->fullBit(oldp+8161,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi__DOT____Vcellinp__sixth1__C));
    bufp->fullBit(oldp+8162,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi__DOT____Vcellinp__third1__C));
    bufp->fullBit(oldp+8163,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi__DOT____Vcellinp__third1__A));
    bufp->fullBit(oldp+8164,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0x10U] 
                                            >> 0xcU)))));
    bufp->fullBit(oldp+8165,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi__DOT____Vcellinp__third1__B));
    bufp->fullBit(oldp+8166,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi__DOT____Vcellinp__third2__C));
    bufp->fullBit(oldp+8167,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xfU] 
                                            >> 0xcU)))));
    bufp->fullBit(oldp+8168,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi__DOT____Vcellinp__fourth1__C));
    bufp->fullBit(oldp+8169,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi__DOT____Vcellinp__third2__B));
    bufp->fullBit(oldp+8170,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi__DOT____Vcellinp__fourth1__B));
    bufp->fullBit(oldp+8171,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi__DOT____Vcellinp__third2__A));
    bufp->fullBit(oldp+8172,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi__DOT____Vcellinp__fourth1__A));
    bufp->fullBit(oldp+8173,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi__DOT____Vcellinp__fourth2__C));
    bufp->fullIData(oldp+8174,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__13__KET____DOT__bi__InData),17);
    bufp->fullBit(oldp+8175,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi__DOT__FifSig) 
                               & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi__DOT____Vcellinp__sixth1__B) 
                                  | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                              | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0))));
    bufp->fullBit(oldp+8176,((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi__DOT__FifSig)) 
                               & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                              | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi__DOT__FifSig)) 
                                  & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi__DOT____Vcellinp__sixth1__C)) 
                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi__DOT____Vcellinp__sixth1__B))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi__DOT__FifSig) 
                                    & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                        & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                       | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0)))))));
    bufp->fullCData(oldp+8177,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi__DOT____Vcellinp__second4__A) 
                                 << 4U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi__DOT____Vcellinp__second4__B) 
                                            << 3U) 
                                           | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi__DOT____Vcellinp__second4__C) 
                                               << 2U) 
                                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi__DOT____Vcellinp__second3__A) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi__DOT____Vcellinp__second3__B)))))),5);
    bufp->fullCData(oldp+8178,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi__DOT____Vcellinp__third2__A) 
                                 << 3U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi__DOT____Vcellinp__third2__B) 
                                            << 2U) 
                                           | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi__DOT____Vcellinp__third2__C) 
                                               << 1U) 
                                              | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi__DOT____Vcellinp__third1__A))))),4);
    bufp->fullCData(oldp+8179,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi__DOT____Vcellinp__fourth2__A) 
                                 << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi__DOT____Vcellinp__fourth2__B))),2);
    bufp->fullCData(oldp+8180,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi__DOT____Vcellinp__fifth1__A) 
                                 << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi__DOT____Vcellinp__fifth1__B))),2);
    bufp->fullBit(oldp+8181,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi__DOT__FifSig));
    bufp->fullBit(oldp+8182,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi__DOT____Vcellinp__fifth1__A));
    bufp->fullBit(oldp+8183,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi__DOT____Vcellinp__fifth1__B));
    bufp->fullBit(oldp+8184,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi__DOT____Vcellinp__sixth1__B));
    bufp->fullBit(oldp+8185,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xcU] 
                                            >> 0xdU)))));
    bufp->fullBit(oldp+8186,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xdU] 
                                            >> 0xdU)))));
    bufp->fullBit(oldp+8187,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xeU] 
                                            >> 0xdU)))));
    bufp->fullBit(oldp+8188,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi__DOT____Vcellinp__second1__C));
    bufp->fullBit(oldp+8189,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi__DOT____Vcellinp__second3__B));
    bufp->fullBit(oldp+8190,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [9U] >> 0xdU)))));
    bufp->fullBit(oldp+8191,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xaU] 
                                            >> 0xdU)))));
    bufp->fullBit(oldp+8192,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xbU] 
                                            >> 0xdU)))));
    bufp->fullBit(oldp+8193,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi__DOT____Vcellinp__second1__B));
    bufp->fullBit(oldp+8194,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi__DOT____Vcellinp__second3__A));
    bufp->fullBit(oldp+8195,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [6U] >> 0xdU)))));
    bufp->fullBit(oldp+8196,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [7U] >> 0xdU)))));
    bufp->fullBit(oldp+8197,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [8U] >> 0xdU)))));
    bufp->fullBit(oldp+8198,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi__DOT____Vcellinp__second1__A));
    bufp->fullBit(oldp+8199,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi__DOT____Vcellinp__second4__C));
    bufp->fullBit(oldp+8200,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [3U] >> 0xdU)))));
    bufp->fullBit(oldp+8201,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [4U] >> 0xdU)))));
    bufp->fullBit(oldp+8202,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [5U] >> 0xdU)))));
    bufp->fullBit(oldp+8203,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi__DOT____Vcellinp__second2__C));
    bufp->fullBit(oldp+8204,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi__DOT____Vcellinp__second4__B));
    bufp->fullBit(oldp+8205,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0U] >> 0xdU)))));
    bufp->fullBit(oldp+8206,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [1U] >> 0xdU)))));
    bufp->fullBit(oldp+8207,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [2U] >> 0xdU)))));
    bufp->fullBit(oldp+8208,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi__DOT____Vcellinp__second2__B));
    bufp->fullBit(oldp+8209,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi__DOT____Vcellinp__second4__A));
    bufp->fullBit(oldp+8210,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi__DOT____Vcellinp__fifth1__C));
    bufp->fullBit(oldp+8211,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi__DOT____Vcellinp__fourth2__A));
    bufp->fullBit(oldp+8212,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi__DOT____Vcellinp__fourth2__B));
    bufp->fullBit(oldp+8213,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi__DOT____Vcellinp__sixth1__C));
    bufp->fullBit(oldp+8214,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi__DOT____Vcellinp__third1__C));
    bufp->fullBit(oldp+8215,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi__DOT____Vcellinp__third1__A));
    bufp->fullBit(oldp+8216,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0x10U] 
                                            >> 0xdU)))));
    bufp->fullBit(oldp+8217,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi__DOT____Vcellinp__third1__B));
    bufp->fullBit(oldp+8218,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi__DOT____Vcellinp__third2__C));
    bufp->fullBit(oldp+8219,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xfU] 
                                            >> 0xdU)))));
    bufp->fullBit(oldp+8220,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi__DOT____Vcellinp__fourth1__C));
    bufp->fullBit(oldp+8221,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi__DOT____Vcellinp__third2__B));
    bufp->fullBit(oldp+8222,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi__DOT____Vcellinp__fourth1__B));
    bufp->fullBit(oldp+8223,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi__DOT____Vcellinp__third2__A));
    bufp->fullBit(oldp+8224,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi__DOT____Vcellinp__fourth1__A));
    bufp->fullBit(oldp+8225,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi__DOT____Vcellinp__fourth2__C));
    bufp->fullIData(oldp+8226,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__14__KET____DOT__bi__InData),17);
    bufp->fullBit(oldp+8227,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi__DOT__FifSig) 
                               & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi__DOT____Vcellinp__sixth1__B) 
                                  | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                              | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0))));
    bufp->fullBit(oldp+8228,((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi__DOT__FifSig)) 
                               & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                              | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi__DOT__FifSig)) 
                                  & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi__DOT____Vcellinp__sixth1__C)) 
                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi__DOT____Vcellinp__sixth1__B))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi__DOT__FifSig) 
                                    & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                        & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                       | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0)))))));
    bufp->fullCData(oldp+8229,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi__DOT____Vcellinp__second4__A) 
                                 << 4U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi__DOT____Vcellinp__second4__B) 
                                            << 3U) 
                                           | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi__DOT____Vcellinp__second4__C) 
                                               << 2U) 
                                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi__DOT____Vcellinp__second3__A) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi__DOT____Vcellinp__second3__B)))))),5);
    bufp->fullCData(oldp+8230,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi__DOT____Vcellinp__third2__A) 
                                 << 3U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi__DOT____Vcellinp__third2__B) 
                                            << 2U) 
                                           | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi__DOT____Vcellinp__third2__C) 
                                               << 1U) 
                                              | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi__DOT____Vcellinp__third1__A))))),4);
    bufp->fullCData(oldp+8231,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi__DOT____Vcellinp__fourth2__A) 
                                 << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi__DOT____Vcellinp__fourth2__B))),2);
    bufp->fullCData(oldp+8232,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi__DOT____Vcellinp__fifth1__A) 
                                 << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi__DOT____Vcellinp__fifth1__B))),2);
    bufp->fullBit(oldp+8233,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi__DOT__FifSig));
    bufp->fullBit(oldp+8234,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi__DOT____Vcellinp__fifth1__A));
    bufp->fullBit(oldp+8235,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi__DOT____Vcellinp__fifth1__B));
    bufp->fullBit(oldp+8236,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi__DOT____Vcellinp__sixth1__B));
    bufp->fullBit(oldp+8237,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xcU] 
                                            >> 0xeU)))));
    bufp->fullBit(oldp+8238,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xdU] 
                                            >> 0xeU)))));
    bufp->fullBit(oldp+8239,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xeU] 
                                            >> 0xeU)))));
    bufp->fullBit(oldp+8240,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi__DOT____Vcellinp__second1__C));
    bufp->fullBit(oldp+8241,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi__DOT____Vcellinp__second3__B));
    bufp->fullBit(oldp+8242,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [9U] >> 0xeU)))));
    bufp->fullBit(oldp+8243,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xaU] 
                                            >> 0xeU)))));
    bufp->fullBit(oldp+8244,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xbU] 
                                            >> 0xeU)))));
    bufp->fullBit(oldp+8245,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi__DOT____Vcellinp__second1__B));
    bufp->fullBit(oldp+8246,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi__DOT____Vcellinp__second3__A));
    bufp->fullBit(oldp+8247,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [6U] >> 0xeU)))));
    bufp->fullBit(oldp+8248,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [7U] >> 0xeU)))));
    bufp->fullBit(oldp+8249,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [8U] >> 0xeU)))));
    bufp->fullBit(oldp+8250,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi__DOT____Vcellinp__second1__A));
    bufp->fullBit(oldp+8251,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi__DOT____Vcellinp__second4__C));
    bufp->fullBit(oldp+8252,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [3U] >> 0xeU)))));
    bufp->fullBit(oldp+8253,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [4U] >> 0xeU)))));
    bufp->fullBit(oldp+8254,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [5U] >> 0xeU)))));
    bufp->fullBit(oldp+8255,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi__DOT____Vcellinp__second2__C));
    bufp->fullBit(oldp+8256,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi__DOT____Vcellinp__second4__B));
    bufp->fullBit(oldp+8257,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0U] >> 0xeU)))));
    bufp->fullBit(oldp+8258,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [1U] >> 0xeU)))));
    bufp->fullBit(oldp+8259,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [2U] >> 0xeU)))));
    bufp->fullBit(oldp+8260,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi__DOT____Vcellinp__second2__B));
    bufp->fullBit(oldp+8261,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi__DOT____Vcellinp__second4__A));
    bufp->fullBit(oldp+8262,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi__DOT____Vcellinp__fifth1__C));
    bufp->fullBit(oldp+8263,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi__DOT____Vcellinp__fourth2__A));
    bufp->fullBit(oldp+8264,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi__DOT____Vcellinp__fourth2__B));
    bufp->fullBit(oldp+8265,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi__DOT____Vcellinp__sixth1__C));
    bufp->fullBit(oldp+8266,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi__DOT____Vcellinp__third1__C));
    bufp->fullBit(oldp+8267,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi__DOT____Vcellinp__third1__A));
    bufp->fullBit(oldp+8268,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0x10U] 
                                            >> 0xeU)))));
    bufp->fullBit(oldp+8269,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi__DOT____Vcellinp__third1__B));
    bufp->fullBit(oldp+8270,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi__DOT____Vcellinp__third2__C));
    bufp->fullBit(oldp+8271,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xfU] 
                                            >> 0xeU)))));
    bufp->fullBit(oldp+8272,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi__DOT____Vcellinp__fourth1__C));
    bufp->fullBit(oldp+8273,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi__DOT____Vcellinp__third2__B));
    bufp->fullBit(oldp+8274,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi__DOT____Vcellinp__fourth1__B));
    bufp->fullBit(oldp+8275,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi__DOT____Vcellinp__third2__A));
    bufp->fullBit(oldp+8276,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi__DOT____Vcellinp__fourth1__A));
    bufp->fullBit(oldp+8277,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi__DOT____Vcellinp__fourth2__C));
    bufp->fullIData(oldp+8278,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__15__KET____DOT__bi__InData),17);
    bufp->fullBit(oldp+8279,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi__DOT__FifSig) 
                               & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi__DOT____Vcellinp__sixth1__B) 
                                  | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                              | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0))));
    bufp->fullBit(oldp+8280,((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi__DOT__FifSig)) 
                               & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                              | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi__DOT__FifSig)) 
                                  & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi__DOT____Vcellinp__sixth1__C)) 
                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi__DOT____Vcellinp__sixth1__B))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi__DOT__FifSig) 
                                    & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                        & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                       | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0)))))));
    bufp->fullCData(oldp+8281,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi__DOT____Vcellinp__second4__A) 
                                 << 4U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi__DOT____Vcellinp__second4__B) 
                                            << 3U) 
                                           | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi__DOT____Vcellinp__second4__C) 
                                               << 2U) 
                                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi__DOT____Vcellinp__second3__A) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi__DOT____Vcellinp__second3__B)))))),5);
    bufp->fullCData(oldp+8282,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi__DOT____Vcellinp__third2__A) 
                                 << 3U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi__DOT____Vcellinp__third2__B) 
                                            << 2U) 
                                           | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi__DOT____Vcellinp__third2__C) 
                                               << 1U) 
                                              | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi__DOT____Vcellinp__third1__A))))),4);
    bufp->fullCData(oldp+8283,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi__DOT____Vcellinp__fourth2__A) 
                                 << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi__DOT____Vcellinp__fourth2__B))),2);
    bufp->fullCData(oldp+8284,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi__DOT____Vcellinp__fifth1__A) 
                                 << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi__DOT____Vcellinp__fifth1__B))),2);
    bufp->fullBit(oldp+8285,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi__DOT__FifSig));
    bufp->fullBit(oldp+8286,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi__DOT____Vcellinp__fifth1__A));
    bufp->fullBit(oldp+8287,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi__DOT____Vcellinp__fifth1__B));
    bufp->fullBit(oldp+8288,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi__DOT____Vcellinp__sixth1__B));
    bufp->fullBit(oldp+8289,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xcU] 
                                            >> 0xfU)))));
    bufp->fullBit(oldp+8290,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xdU] 
                                            >> 0xfU)))));
    bufp->fullBit(oldp+8291,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xeU] 
                                            >> 0xfU)))));
    bufp->fullBit(oldp+8292,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi__DOT____Vcellinp__second1__C));
    bufp->fullBit(oldp+8293,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi__DOT____Vcellinp__second3__B));
    bufp->fullBit(oldp+8294,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [9U] >> 0xfU)))));
    bufp->fullBit(oldp+8295,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xaU] 
                                            >> 0xfU)))));
    bufp->fullBit(oldp+8296,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xbU] 
                                            >> 0xfU)))));
    bufp->fullBit(oldp+8297,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi__DOT____Vcellinp__second1__B));
    bufp->fullBit(oldp+8298,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi__DOT____Vcellinp__second3__A));
    bufp->fullBit(oldp+8299,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [6U] >> 0xfU)))));
    bufp->fullBit(oldp+8300,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [7U] >> 0xfU)))));
    bufp->fullBit(oldp+8301,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [8U] >> 0xfU)))));
    bufp->fullBit(oldp+8302,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi__DOT____Vcellinp__second1__A));
    bufp->fullBit(oldp+8303,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi__DOT____Vcellinp__second4__C));
    bufp->fullBit(oldp+8304,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [3U] >> 0xfU)))));
    bufp->fullBit(oldp+8305,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [4U] >> 0xfU)))));
    bufp->fullBit(oldp+8306,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [5U] >> 0xfU)))));
    bufp->fullBit(oldp+8307,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi__DOT____Vcellinp__second2__C));
    bufp->fullBit(oldp+8308,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi__DOT____Vcellinp__second4__B));
    bufp->fullBit(oldp+8309,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0U] >> 0xfU)))));
    bufp->fullBit(oldp+8310,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [1U] >> 0xfU)))));
    bufp->fullBit(oldp+8311,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [2U] >> 0xfU)))));
    bufp->fullBit(oldp+8312,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi__DOT____Vcellinp__second2__B));
    bufp->fullBit(oldp+8313,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi__DOT____Vcellinp__second4__A));
    bufp->fullBit(oldp+8314,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi__DOT____Vcellinp__fifth1__C));
    bufp->fullBit(oldp+8315,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi__DOT____Vcellinp__fourth2__A));
    bufp->fullBit(oldp+8316,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi__DOT____Vcellinp__fourth2__B));
    bufp->fullBit(oldp+8317,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi__DOT____Vcellinp__sixth1__C));
    bufp->fullBit(oldp+8318,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi__DOT____Vcellinp__third1__C));
    bufp->fullBit(oldp+8319,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi__DOT____Vcellinp__third1__A));
    bufp->fullBit(oldp+8320,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0x10U] 
                                            >> 0xfU)))));
    bufp->fullBit(oldp+8321,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi__DOT____Vcellinp__third1__B));
    bufp->fullBit(oldp+8322,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi__DOT____Vcellinp__third2__C));
    bufp->fullBit(oldp+8323,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xfU] 
                                            >> 0xfU)))));
    bufp->fullBit(oldp+8324,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi__DOT____Vcellinp__fourth1__C));
    bufp->fullBit(oldp+8325,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi__DOT____Vcellinp__third2__B));
    bufp->fullBit(oldp+8326,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi__DOT____Vcellinp__fourth1__B));
    bufp->fullBit(oldp+8327,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi__DOT____Vcellinp__third2__A));
    bufp->fullBit(oldp+8328,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi__DOT____Vcellinp__fourth1__A));
    bufp->fullBit(oldp+8329,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi__DOT____Vcellinp__fourth2__C));
    bufp->fullIData(oldp+8330,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__16__KET____DOT__bi__InData),17);
    bufp->fullBit(oldp+8331,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi__DOT__FifSig) 
                               & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi__DOT____Vcellinp__sixth1__B) 
                                  | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                              | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0))));
    bufp->fullBit(oldp+8332,((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi__DOT__FifSig)) 
                               & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                              | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi__DOT__FifSig)) 
                                  & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi__DOT____Vcellinp__sixth1__C)) 
                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi__DOT____Vcellinp__sixth1__B))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi__DOT__FifSig) 
                                    & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                        & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                       | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0)))))));
    bufp->fullCData(oldp+8333,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi__DOT____Vcellinp__second4__A) 
                                 << 4U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi__DOT____Vcellinp__second4__B) 
                                            << 3U) 
                                           | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi__DOT____Vcellinp__second4__C) 
                                               << 2U) 
                                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi__DOT____Vcellinp__second3__A) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi__DOT____Vcellinp__second3__B)))))),5);
    bufp->fullCData(oldp+8334,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi__DOT____Vcellinp__third2__A) 
                                 << 3U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi__DOT____Vcellinp__third2__B) 
                                            << 2U) 
                                           | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi__DOT____Vcellinp__third2__C) 
                                               << 1U) 
                                              | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi__DOT____Vcellinp__third1__A))))),4);
    bufp->fullCData(oldp+8335,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi__DOT____Vcellinp__fourth2__A) 
                                 << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi__DOT____Vcellinp__fourth2__B))),2);
    bufp->fullCData(oldp+8336,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi__DOT____Vcellinp__fifth1__A) 
                                 << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi__DOT____Vcellinp__fifth1__B))),2);
    bufp->fullBit(oldp+8337,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi__DOT__FifSig));
    bufp->fullBit(oldp+8338,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi__DOT____Vcellinp__fifth1__A));
    bufp->fullBit(oldp+8339,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi__DOT____Vcellinp__fifth1__B));
    bufp->fullBit(oldp+8340,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi__DOT____Vcellinp__sixth1__B));
    bufp->fullBit(oldp+8341,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xcU] 
                                            >> 0x10U)))));
    bufp->fullBit(oldp+8342,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xdU] 
                                            >> 0x10U)))));
    bufp->fullBit(oldp+8343,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xeU] 
                                            >> 0x10U)))));
    bufp->fullBit(oldp+8344,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi__DOT____Vcellinp__second1__C));
    bufp->fullBit(oldp+8345,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi__DOT____Vcellinp__second3__B));
    bufp->fullBit(oldp+8346,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [9U] >> 0x10U)))));
    bufp->fullBit(oldp+8347,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xaU] 
                                            >> 0x10U)))));
    bufp->fullBit(oldp+8348,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xbU] 
                                            >> 0x10U)))));
    bufp->fullBit(oldp+8349,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi__DOT____Vcellinp__second1__B));
    bufp->fullBit(oldp+8350,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi__DOT____Vcellinp__second3__A));
    bufp->fullBit(oldp+8351,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [6U] >> 0x10U)))));
    bufp->fullBit(oldp+8352,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [7U] >> 0x10U)))));
    bufp->fullBit(oldp+8353,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [8U] >> 0x10U)))));
    bufp->fullBit(oldp+8354,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi__DOT____Vcellinp__second1__A));
    bufp->fullBit(oldp+8355,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi__DOT____Vcellinp__second4__C));
    bufp->fullBit(oldp+8356,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [3U] >> 0x10U)))));
    bufp->fullBit(oldp+8357,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [4U] >> 0x10U)))));
    bufp->fullBit(oldp+8358,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [5U] >> 0x10U)))));
    bufp->fullBit(oldp+8359,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi__DOT____Vcellinp__second2__C));
    bufp->fullBit(oldp+8360,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi__DOT____Vcellinp__second4__B));
    bufp->fullBit(oldp+8361,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0U] >> 0x10U)))));
    bufp->fullBit(oldp+8362,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [1U] >> 0x10U)))));
    bufp->fullBit(oldp+8363,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [2U] >> 0x10U)))));
    bufp->fullBit(oldp+8364,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi__DOT____Vcellinp__second2__B));
    bufp->fullBit(oldp+8365,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi__DOT____Vcellinp__second4__A));
    bufp->fullBit(oldp+8366,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi__DOT____Vcellinp__fifth1__C));
    bufp->fullBit(oldp+8367,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi__DOT____Vcellinp__fourth2__A));
    bufp->fullBit(oldp+8368,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi__DOT____Vcellinp__fourth2__B));
    bufp->fullBit(oldp+8369,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi__DOT____Vcellinp__sixth1__C));
    bufp->fullBit(oldp+8370,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi__DOT____Vcellinp__third1__C));
    bufp->fullBit(oldp+8371,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi__DOT____Vcellinp__third1__A));
    bufp->fullBit(oldp+8372,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0x10U] 
                                            >> 0x10U)))));
    bufp->fullBit(oldp+8373,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi__DOT____Vcellinp__third1__B));
    bufp->fullBit(oldp+8374,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi__DOT____Vcellinp__third2__C));
    bufp->fullBit(oldp+8375,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xfU] 
                                            >> 0x10U)))));
    bufp->fullBit(oldp+8376,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi__DOT____Vcellinp__fourth1__C));
    bufp->fullBit(oldp+8377,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi__DOT____Vcellinp__third2__B));
    bufp->fullBit(oldp+8378,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi__DOT____Vcellinp__fourth1__B));
    bufp->fullBit(oldp+8379,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi__DOT____Vcellinp__third2__A));
    bufp->fullBit(oldp+8380,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi__DOT____Vcellinp__fourth1__A));
    bufp->fullBit(oldp+8381,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi__DOT____Vcellinp__fourth2__C));
    bufp->fullIData(oldp+8382,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__17__KET____DOT__bi__InData),17);
    bufp->fullBit(oldp+8383,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi__DOT__FifSig) 
                               & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi__DOT____Vcellinp__sixth1__B) 
                                  | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                              | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0))));
    bufp->fullBit(oldp+8384,((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi__DOT__FifSig)) 
                               & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                              | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi__DOT__FifSig)) 
                                  & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi__DOT____Vcellinp__sixth1__C)) 
                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi__DOT____Vcellinp__sixth1__B))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi__DOT__FifSig) 
                                    & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                        & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                       | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0)))))));
    bufp->fullCData(oldp+8385,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi__DOT____Vcellinp__second4__A) 
                                 << 4U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi__DOT____Vcellinp__second4__B) 
                                            << 3U) 
                                           | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi__DOT____Vcellinp__second4__C) 
                                               << 2U) 
                                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi__DOT____Vcellinp__second3__A) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi__DOT____Vcellinp__second3__B)))))),5);
    bufp->fullCData(oldp+8386,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi__DOT____Vcellinp__third2__A) 
                                 << 3U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi__DOT____Vcellinp__third2__B) 
                                            << 2U) 
                                           | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi__DOT____Vcellinp__third2__C) 
                                               << 1U) 
                                              | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi__DOT____Vcellinp__third1__A))))),4);
    bufp->fullCData(oldp+8387,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi__DOT____Vcellinp__fourth2__A) 
                                 << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi__DOT____Vcellinp__fourth2__B))),2);
    bufp->fullCData(oldp+8388,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi__DOT____Vcellinp__fifth1__A) 
                                 << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi__DOT____Vcellinp__fifth1__B))),2);
    bufp->fullBit(oldp+8389,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi__DOT__FifSig));
    bufp->fullBit(oldp+8390,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi__DOT____Vcellinp__fifth1__A));
    bufp->fullBit(oldp+8391,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi__DOT____Vcellinp__fifth1__B));
    bufp->fullBit(oldp+8392,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi__DOT____Vcellinp__sixth1__B));
    bufp->fullBit(oldp+8393,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xcU] 
                                            >> 0x11U)))));
    bufp->fullBit(oldp+8394,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xdU] 
                                            >> 0x11U)))));
    bufp->fullBit(oldp+8395,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xeU] 
                                            >> 0x11U)))));
    bufp->fullBit(oldp+8396,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi__DOT____Vcellinp__second1__C));
    bufp->fullBit(oldp+8397,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi__DOT____Vcellinp__second3__B));
    bufp->fullBit(oldp+8398,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [9U] >> 0x11U)))));
    bufp->fullBit(oldp+8399,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xaU] 
                                            >> 0x11U)))));
    bufp->fullBit(oldp+8400,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xbU] 
                                            >> 0x11U)))));
    bufp->fullBit(oldp+8401,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi__DOT____Vcellinp__second1__B));
    bufp->fullBit(oldp+8402,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi__DOT____Vcellinp__second3__A));
    bufp->fullBit(oldp+8403,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [6U] >> 0x11U)))));
    bufp->fullBit(oldp+8404,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [7U] >> 0x11U)))));
    bufp->fullBit(oldp+8405,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [8U] >> 0x11U)))));
    bufp->fullBit(oldp+8406,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi__DOT____Vcellinp__second1__A));
    bufp->fullBit(oldp+8407,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi__DOT____Vcellinp__second4__C));
    bufp->fullBit(oldp+8408,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [3U] >> 0x11U)))));
    bufp->fullBit(oldp+8409,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [4U] >> 0x11U)))));
    bufp->fullBit(oldp+8410,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [5U] >> 0x11U)))));
    bufp->fullBit(oldp+8411,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi__DOT____Vcellinp__second2__C));
    bufp->fullBit(oldp+8412,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi__DOT____Vcellinp__second4__B));
    bufp->fullBit(oldp+8413,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0U] >> 0x11U)))));
    bufp->fullBit(oldp+8414,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [1U] >> 0x11U)))));
    bufp->fullBit(oldp+8415,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [2U] >> 0x11U)))));
    bufp->fullBit(oldp+8416,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi__DOT____Vcellinp__second2__B));
    bufp->fullBit(oldp+8417,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi__DOT____Vcellinp__second4__A));
    bufp->fullBit(oldp+8418,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi__DOT____Vcellinp__fifth1__C));
    bufp->fullBit(oldp+8419,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi__DOT____Vcellinp__fourth2__A));
    bufp->fullBit(oldp+8420,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi__DOT____Vcellinp__fourth2__B));
    bufp->fullBit(oldp+8421,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi__DOT____Vcellinp__sixth1__C));
    bufp->fullBit(oldp+8422,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi__DOT____Vcellinp__third1__C));
    bufp->fullBit(oldp+8423,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi__DOT____Vcellinp__third1__A));
    bufp->fullBit(oldp+8424,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0x10U] 
                                            >> 0x11U)))));
    bufp->fullBit(oldp+8425,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi__DOT____Vcellinp__third1__B));
    bufp->fullBit(oldp+8426,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi__DOT____Vcellinp__third2__C));
    bufp->fullBit(oldp+8427,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xfU] 
                                            >> 0x11U)))));
    bufp->fullBit(oldp+8428,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi__DOT____Vcellinp__fourth1__C));
    bufp->fullBit(oldp+8429,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi__DOT____Vcellinp__third2__B));
    bufp->fullBit(oldp+8430,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi__DOT____Vcellinp__fourth1__B));
    bufp->fullBit(oldp+8431,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi__DOT____Vcellinp__third2__A));
    bufp->fullBit(oldp+8432,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi__DOT____Vcellinp__fourth1__A));
    bufp->fullBit(oldp+8433,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi__DOT____Vcellinp__fourth2__C));
    bufp->fullIData(oldp+8434,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__18__KET____DOT__bi__InData),17);
    bufp->fullBit(oldp+8435,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi__DOT__FifSig) 
                               & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi__DOT____Vcellinp__sixth1__B) 
                                  | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                              | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0))));
    bufp->fullBit(oldp+8436,((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi__DOT__FifSig)) 
                               & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                              | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi__DOT__FifSig)) 
                                  & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi__DOT____Vcellinp__sixth1__C)) 
                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi__DOT____Vcellinp__sixth1__B))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi__DOT__FifSig) 
                                    & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                        & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                       | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0)))))));
    bufp->fullCData(oldp+8437,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi__DOT____Vcellinp__second4__A) 
                                 << 4U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi__DOT____Vcellinp__second4__B) 
                                            << 3U) 
                                           | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi__DOT____Vcellinp__second4__C) 
                                               << 2U) 
                                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi__DOT____Vcellinp__second3__A) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi__DOT____Vcellinp__second3__B)))))),5);
    bufp->fullCData(oldp+8438,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi__DOT____Vcellinp__third2__A) 
                                 << 3U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi__DOT____Vcellinp__third2__B) 
                                            << 2U) 
                                           | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi__DOT____Vcellinp__third2__C) 
                                               << 1U) 
                                              | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi__DOT____Vcellinp__third1__A))))),4);
    bufp->fullCData(oldp+8439,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi__DOT____Vcellinp__fourth2__A) 
                                 << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi__DOT____Vcellinp__fourth2__B))),2);
    bufp->fullCData(oldp+8440,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi__DOT____Vcellinp__fifth1__A) 
                                 << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi__DOT____Vcellinp__fifth1__B))),2);
    bufp->fullBit(oldp+8441,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi__DOT__FifSig));
    bufp->fullBit(oldp+8442,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi__DOT____Vcellinp__fifth1__A));
    bufp->fullBit(oldp+8443,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi__DOT____Vcellinp__fifth1__B));
    bufp->fullBit(oldp+8444,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi__DOT____Vcellinp__sixth1__B));
    bufp->fullBit(oldp+8445,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xcU] 
                                            >> 0x12U)))));
    bufp->fullBit(oldp+8446,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xdU] 
                                            >> 0x12U)))));
    bufp->fullBit(oldp+8447,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xeU] 
                                            >> 0x12U)))));
    bufp->fullBit(oldp+8448,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi__DOT____Vcellinp__second1__C));
    bufp->fullBit(oldp+8449,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi__DOT____Vcellinp__second3__B));
    bufp->fullBit(oldp+8450,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [9U] >> 0x12U)))));
    bufp->fullBit(oldp+8451,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xaU] 
                                            >> 0x12U)))));
    bufp->fullBit(oldp+8452,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xbU] 
                                            >> 0x12U)))));
    bufp->fullBit(oldp+8453,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi__DOT____Vcellinp__second1__B));
    bufp->fullBit(oldp+8454,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi__DOT____Vcellinp__second3__A));
    bufp->fullBit(oldp+8455,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [6U] >> 0x12U)))));
    bufp->fullBit(oldp+8456,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [7U] >> 0x12U)))));
    bufp->fullBit(oldp+8457,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [8U] >> 0x12U)))));
    bufp->fullBit(oldp+8458,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi__DOT____Vcellinp__second1__A));
    bufp->fullBit(oldp+8459,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi__DOT____Vcellinp__second4__C));
    bufp->fullBit(oldp+8460,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [3U] >> 0x12U)))));
    bufp->fullBit(oldp+8461,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [4U] >> 0x12U)))));
    bufp->fullBit(oldp+8462,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [5U] >> 0x12U)))));
    bufp->fullBit(oldp+8463,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi__DOT____Vcellinp__second2__C));
    bufp->fullBit(oldp+8464,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi__DOT____Vcellinp__second4__B));
    bufp->fullBit(oldp+8465,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0U] >> 0x12U)))));
    bufp->fullBit(oldp+8466,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [1U] >> 0x12U)))));
    bufp->fullBit(oldp+8467,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [2U] >> 0x12U)))));
    bufp->fullBit(oldp+8468,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi__DOT____Vcellinp__second2__B));
    bufp->fullBit(oldp+8469,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi__DOT____Vcellinp__second4__A));
    bufp->fullBit(oldp+8470,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi__DOT____Vcellinp__fifth1__C));
    bufp->fullBit(oldp+8471,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi__DOT____Vcellinp__fourth2__A));
    bufp->fullBit(oldp+8472,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi__DOT____Vcellinp__fourth2__B));
    bufp->fullBit(oldp+8473,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi__DOT____Vcellinp__sixth1__C));
    bufp->fullBit(oldp+8474,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi__DOT____Vcellinp__third1__C));
    bufp->fullBit(oldp+8475,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi__DOT____Vcellinp__third1__A));
    bufp->fullBit(oldp+8476,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0x10U] 
                                            >> 0x12U)))));
    bufp->fullBit(oldp+8477,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi__DOT____Vcellinp__third1__B));
    bufp->fullBit(oldp+8478,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi__DOT____Vcellinp__third2__C));
    bufp->fullBit(oldp+8479,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xfU] 
                                            >> 0x12U)))));
    bufp->fullBit(oldp+8480,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi__DOT____Vcellinp__fourth1__C));
    bufp->fullBit(oldp+8481,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi__DOT____Vcellinp__third2__B));
    bufp->fullBit(oldp+8482,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi__DOT____Vcellinp__fourth1__B));
    bufp->fullBit(oldp+8483,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi__DOT____Vcellinp__third2__A));
    bufp->fullBit(oldp+8484,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi__DOT____Vcellinp__fourth1__A));
    bufp->fullBit(oldp+8485,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi__DOT____Vcellinp__fourth2__C));
    bufp->fullIData(oldp+8486,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__19__KET____DOT__bi__InData),17);
    bufp->fullBit(oldp+8487,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi__DOT__FifSig) 
                               & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi__DOT____Vcellinp__sixth1__B) 
                                  | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                              | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0))));
    bufp->fullBit(oldp+8488,((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi__DOT__FifSig)) 
                               & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                              | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi__DOT__FifSig)) 
                                  & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi__DOT____Vcellinp__sixth1__C)) 
                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi__DOT____Vcellinp__sixth1__B))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi__DOT__FifSig) 
                                    & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                        & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                       | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0)))))));
    bufp->fullCData(oldp+8489,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi__DOT____Vcellinp__second4__A) 
                                 << 4U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi__DOT____Vcellinp__second4__B) 
                                            << 3U) 
                                           | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi__DOT____Vcellinp__second4__C) 
                                               << 2U) 
                                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi__DOT____Vcellinp__second3__A) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi__DOT____Vcellinp__second3__B)))))),5);
    bufp->fullCData(oldp+8490,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi__DOT____Vcellinp__third2__A) 
                                 << 3U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi__DOT____Vcellinp__third2__B) 
                                            << 2U) 
                                           | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi__DOT____Vcellinp__third2__C) 
                                               << 1U) 
                                              | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi__DOT____Vcellinp__third1__A))))),4);
    bufp->fullCData(oldp+8491,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi__DOT____Vcellinp__fourth2__A) 
                                 << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi__DOT____Vcellinp__fourth2__B))),2);
    bufp->fullCData(oldp+8492,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi__DOT____Vcellinp__fifth1__A) 
                                 << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi__DOT____Vcellinp__fifth1__B))),2);
    bufp->fullBit(oldp+8493,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi__DOT__FifSig));
    bufp->fullBit(oldp+8494,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi__DOT____Vcellinp__fifth1__A));
    bufp->fullBit(oldp+8495,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi__DOT____Vcellinp__fifth1__B));
    bufp->fullBit(oldp+8496,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi__DOT____Vcellinp__sixth1__B));
    bufp->fullBit(oldp+8497,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xcU] 
                                            >> 0x13U)))));
    bufp->fullBit(oldp+8498,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xdU] 
                                            >> 0x13U)))));
    bufp->fullBit(oldp+8499,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xeU] 
                                            >> 0x13U)))));
    bufp->fullBit(oldp+8500,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi__DOT____Vcellinp__second1__C));
    bufp->fullBit(oldp+8501,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi__DOT____Vcellinp__second3__B));
    bufp->fullBit(oldp+8502,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [9U] >> 0x13U)))));
    bufp->fullBit(oldp+8503,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xaU] 
                                            >> 0x13U)))));
    bufp->fullBit(oldp+8504,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xbU] 
                                            >> 0x13U)))));
    bufp->fullBit(oldp+8505,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi__DOT____Vcellinp__second1__B));
    bufp->fullBit(oldp+8506,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi__DOT____Vcellinp__second3__A));
    bufp->fullBit(oldp+8507,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [6U] >> 0x13U)))));
    bufp->fullBit(oldp+8508,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [7U] >> 0x13U)))));
    bufp->fullBit(oldp+8509,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [8U] >> 0x13U)))));
    bufp->fullBit(oldp+8510,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi__DOT____Vcellinp__second1__A));
    bufp->fullBit(oldp+8511,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi__DOT____Vcellinp__second4__C));
    bufp->fullBit(oldp+8512,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [3U] >> 0x13U)))));
    bufp->fullBit(oldp+8513,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [4U] >> 0x13U)))));
    bufp->fullBit(oldp+8514,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [5U] >> 0x13U)))));
    bufp->fullBit(oldp+8515,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi__DOT____Vcellinp__second2__C));
    bufp->fullBit(oldp+8516,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi__DOT____Vcellinp__second4__B));
    bufp->fullBit(oldp+8517,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0U] >> 0x13U)))));
    bufp->fullBit(oldp+8518,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [1U] >> 0x13U)))));
    bufp->fullBit(oldp+8519,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [2U] >> 0x13U)))));
    bufp->fullBit(oldp+8520,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi__DOT____Vcellinp__second2__B));
    bufp->fullBit(oldp+8521,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi__DOT____Vcellinp__second4__A));
    bufp->fullBit(oldp+8522,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi__DOT____Vcellinp__fifth1__C));
    bufp->fullBit(oldp+8523,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi__DOT____Vcellinp__fourth2__A));
    bufp->fullBit(oldp+8524,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi__DOT____Vcellinp__fourth2__B));
    bufp->fullBit(oldp+8525,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi__DOT____Vcellinp__sixth1__C));
    bufp->fullBit(oldp+8526,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi__DOT____Vcellinp__third1__C));
    bufp->fullBit(oldp+8527,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi__DOT____Vcellinp__third1__A));
    bufp->fullBit(oldp+8528,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0x10U] 
                                            >> 0x13U)))));
    bufp->fullBit(oldp+8529,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi__DOT____Vcellinp__third1__B));
    bufp->fullBit(oldp+8530,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi__DOT____Vcellinp__third2__C));
    bufp->fullBit(oldp+8531,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xfU] 
                                            >> 0x13U)))));
    bufp->fullBit(oldp+8532,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi__DOT____Vcellinp__fourth1__C));
    bufp->fullBit(oldp+8533,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi__DOT____Vcellinp__third2__B));
    bufp->fullBit(oldp+8534,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi__DOT____Vcellinp__fourth1__B));
    bufp->fullBit(oldp+8535,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi__DOT____Vcellinp__third2__A));
    bufp->fullBit(oldp+8536,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi__DOT____Vcellinp__fourth1__A));
    bufp->fullBit(oldp+8537,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi__DOT____Vcellinp__fourth2__C));
    bufp->fullIData(oldp+8538,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData),17);
    bufp->fullBit(oldp+8539,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__FifSig) 
                               & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT____Vcellinp__sixth1__B) 
                                  | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                              | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0))));
    bufp->fullBit(oldp+8540,((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__FifSig)) 
                               & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                              | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__FifSig)) 
                                  & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT____Vcellinp__sixth1__C)) 
                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT____Vcellinp__sixth1__B))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__FifSig) 
                                    & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                        & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                       | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0)))))));
    bufp->fullCData(oldp+8541,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT____Vcellinp__second4__A) 
                                 << 4U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT____Vcellinp__second4__B) 
                                            << 3U) 
                                           | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT____Vcellinp__second4__C) 
                                               << 2U) 
                                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT____Vcellinp__second3__A) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT____Vcellinp__second3__B)))))),5);
    bufp->fullCData(oldp+8542,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT____Vcellinp__third2__A) 
                                 << 3U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT____Vcellinp__third2__B) 
                                            << 2U) 
                                           | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT____Vcellinp__third2__C) 
                                               << 1U) 
                                              | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT____Vcellinp__third1__A))))),4);
    bufp->fullCData(oldp+8543,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT____Vcellinp__fourth2__A) 
                                 << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT____Vcellinp__fourth2__B))),2);
    bufp->fullCData(oldp+8544,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT____Vcellinp__fifth1__A) 
                                 << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT____Vcellinp__fifth1__B))),2);
    bufp->fullBit(oldp+8545,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__FifSig));
    bufp->fullBit(oldp+8546,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT____Vcellinp__fifth1__A));
    bufp->fullBit(oldp+8547,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT____Vcellinp__fifth1__B));
    bufp->fullBit(oldp+8548,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT____Vcellinp__sixth1__B));
    bufp->fullBit(oldp+8549,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xcU] 
                                            >> 1U)))));
    bufp->fullBit(oldp+8550,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xdU] 
                                            >> 1U)))));
    bufp->fullBit(oldp+8551,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xeU] 
                                            >> 1U)))));
    bufp->fullBit(oldp+8552,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT____Vcellinp__second1__C));
    bufp->fullBit(oldp+8553,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT____Vcellinp__second3__B));
    bufp->fullBit(oldp+8554,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [9U] >> 1U)))));
    bufp->fullBit(oldp+8555,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xaU] 
                                            >> 1U)))));
    bufp->fullBit(oldp+8556,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xbU] 
                                            >> 1U)))));
    bufp->fullBit(oldp+8557,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT____Vcellinp__second1__B));
    bufp->fullBit(oldp+8558,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT____Vcellinp__second3__A));
    bufp->fullBit(oldp+8559,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [6U] >> 1U)))));
    bufp->fullBit(oldp+8560,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [7U] >> 1U)))));
    bufp->fullBit(oldp+8561,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [8U] >> 1U)))));
    bufp->fullBit(oldp+8562,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT____Vcellinp__second1__A));
    bufp->fullBit(oldp+8563,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT____Vcellinp__second4__C));
    bufp->fullBit(oldp+8564,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [3U] >> 1U)))));
    bufp->fullBit(oldp+8565,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [4U] >> 1U)))));
    bufp->fullBit(oldp+8566,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [5U] >> 1U)))));
    bufp->fullBit(oldp+8567,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT____Vcellinp__second2__C));
    bufp->fullBit(oldp+8568,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT____Vcellinp__second4__B));
    bufp->fullBit(oldp+8569,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0U] >> 1U)))));
    bufp->fullBit(oldp+8570,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [1U] >> 1U)))));
    bufp->fullBit(oldp+8571,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [2U] >> 1U)))));
    bufp->fullBit(oldp+8572,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT____Vcellinp__second2__B));
    bufp->fullBit(oldp+8573,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT____Vcellinp__second4__A));
    bufp->fullBit(oldp+8574,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT____Vcellinp__fifth1__C));
    bufp->fullBit(oldp+8575,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT____Vcellinp__fourth2__A));
    bufp->fullBit(oldp+8576,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT____Vcellinp__fourth2__B));
    bufp->fullBit(oldp+8577,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT____Vcellinp__sixth1__C));
    bufp->fullBit(oldp+8578,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT____Vcellinp__third1__C));
    bufp->fullBit(oldp+8579,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT____Vcellinp__third1__A));
    bufp->fullBit(oldp+8580,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0x10U] 
                                            >> 1U)))));
    bufp->fullBit(oldp+8581,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT____Vcellinp__third1__B));
    bufp->fullBit(oldp+8582,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT____Vcellinp__third2__C));
    bufp->fullBit(oldp+8583,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xfU] 
                                            >> 1U)))));
    bufp->fullBit(oldp+8584,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT____Vcellinp__fourth1__C));
    bufp->fullBit(oldp+8585,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT____Vcellinp__third2__B));
    bufp->fullBit(oldp+8586,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT____Vcellinp__fourth1__B));
    bufp->fullBit(oldp+8587,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT____Vcellinp__third2__A));
    bufp->fullBit(oldp+8588,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT____Vcellinp__fourth1__A));
    bufp->fullBit(oldp+8589,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT____Vcellinp__fourth2__C));
    bufp->fullIData(oldp+8590,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__20__KET____DOT__bi__InData),17);
    bufp->fullBit(oldp+8591,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi__DOT__FifSig) 
                               & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi__DOT____Vcellinp__sixth1__B) 
                                  | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                              | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0))));
    bufp->fullBit(oldp+8592,((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi__DOT__FifSig)) 
                               & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                              | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi__DOT__FifSig)) 
                                  & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi__DOT____Vcellinp__sixth1__C)) 
                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi__DOT____Vcellinp__sixth1__B))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi__DOT__FifSig) 
                                    & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                        & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                       | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0)))))));
    bufp->fullCData(oldp+8593,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi__DOT____Vcellinp__second4__A) 
                                 << 4U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi__DOT____Vcellinp__second4__B) 
                                            << 3U) 
                                           | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi__DOT____Vcellinp__second4__C) 
                                               << 2U) 
                                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi__DOT____Vcellinp__second3__A) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi__DOT____Vcellinp__second3__B)))))),5);
    bufp->fullCData(oldp+8594,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi__DOT____Vcellinp__third2__A) 
                                 << 3U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi__DOT____Vcellinp__third2__B) 
                                            << 2U) 
                                           | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi__DOT____Vcellinp__third2__C) 
                                               << 1U) 
                                              | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi__DOT____Vcellinp__third1__A))))),4);
    bufp->fullCData(oldp+8595,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi__DOT____Vcellinp__fourth2__A) 
                                 << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi__DOT____Vcellinp__fourth2__B))),2);
    bufp->fullCData(oldp+8596,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi__DOT____Vcellinp__fifth1__A) 
                                 << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi__DOT____Vcellinp__fifth1__B))),2);
    bufp->fullBit(oldp+8597,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi__DOT__FifSig));
    bufp->fullBit(oldp+8598,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi__DOT____Vcellinp__fifth1__A));
    bufp->fullBit(oldp+8599,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi__DOT____Vcellinp__fifth1__B));
    bufp->fullBit(oldp+8600,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__21__KET____DOT__bi__DOT____Vcellinp__sixth1__B));
    bufp->fullBit(oldp+8601,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xcU] 
                                            >> 0x14U)))));
    bufp->fullBit(oldp+8602,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xdU] 
                                            >> 0x14U)))));
    bufp->fullBit(oldp+8603,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xeU] 
                                            >> 0x14U)))));
    bufp->fullBit(oldp+8604,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__21__KET____DOT__bi__DOT____Vcellinp__second1__C));
    bufp->fullBit(oldp+8605,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi__DOT____Vcellinp__second3__B));
    bufp->fullBit(oldp+8606,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [9U] >> 0x14U)))));
    bufp->fullBit(oldp+8607,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xaU] 
                                            >> 0x14U)))));
    bufp->fullBit(oldp+8608,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xbU] 
                                            >> 0x14U)))));
    bufp->fullBit(oldp+8609,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__21__KET____DOT__bi__DOT____Vcellinp__second1__B));
    bufp->fullBit(oldp+8610,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi__DOT____Vcellinp__second3__A));
    bufp->fullBit(oldp+8611,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [6U] >> 0x14U)))));
    bufp->fullBit(oldp+8612,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [7U] >> 0x14U)))));
    bufp->fullBit(oldp+8613,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [8U] >> 0x14U)))));
    bufp->fullBit(oldp+8614,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__21__KET____DOT__bi__DOT____Vcellinp__second1__A));
    bufp->fullBit(oldp+8615,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi__DOT____Vcellinp__second4__C));
    bufp->fullBit(oldp+8616,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [3U] >> 0x14U)))));
    bufp->fullBit(oldp+8617,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [4U] >> 0x14U)))));
    bufp->fullBit(oldp+8618,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [5U] >> 0x14U)))));
    bufp->fullBit(oldp+8619,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__21__KET____DOT__bi__DOT____Vcellinp__second2__C));
    bufp->fullBit(oldp+8620,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi__DOT____Vcellinp__second4__B));
    bufp->fullBit(oldp+8621,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0U] >> 0x14U)))));
    bufp->fullBit(oldp+8622,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [1U] >> 0x14U)))));
    bufp->fullBit(oldp+8623,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [2U] >> 0x14U)))));
    bufp->fullBit(oldp+8624,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__21__KET____DOT__bi__DOT____Vcellinp__second2__B));
    bufp->fullBit(oldp+8625,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi__DOT____Vcellinp__second4__A));
    bufp->fullBit(oldp+8626,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__21__KET____DOT__bi__DOT____Vcellinp__fifth1__C));
    bufp->fullBit(oldp+8627,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi__DOT____Vcellinp__fourth2__A));
    bufp->fullBit(oldp+8628,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi__DOT____Vcellinp__fourth2__B));
    bufp->fullBit(oldp+8629,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__21__KET____DOT__bi__DOT____Vcellinp__sixth1__C));
    bufp->fullBit(oldp+8630,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__21__KET____DOT__bi__DOT____Vcellinp__third1__C));
    bufp->fullBit(oldp+8631,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi__DOT____Vcellinp__third1__A));
    bufp->fullBit(oldp+8632,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0x10U] 
                                            >> 0x14U)))));
    bufp->fullBit(oldp+8633,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__21__KET____DOT__bi__DOT____Vcellinp__third1__B));
    bufp->fullBit(oldp+8634,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi__DOT____Vcellinp__third2__C));
    bufp->fullBit(oldp+8635,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xfU] 
                                            >> 0x14U)))));
    bufp->fullBit(oldp+8636,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__21__KET____DOT__bi__DOT____Vcellinp__fourth1__C));
    bufp->fullBit(oldp+8637,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi__DOT____Vcellinp__third2__B));
    bufp->fullBit(oldp+8638,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__21__KET____DOT__bi__DOT____Vcellinp__fourth1__B));
    bufp->fullBit(oldp+8639,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi__DOT____Vcellinp__third2__A));
    bufp->fullBit(oldp+8640,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__21__KET____DOT__bi__DOT____Vcellinp__fourth1__A));
    bufp->fullBit(oldp+8641,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__21__KET____DOT__bi__DOT____Vcellinp__fourth2__C));
    bufp->fullIData(oldp+8642,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__21__KET____DOT__bi__InData),17);
    bufp->fullBit(oldp+8643,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__21__KET____DOT__bi__DOT__FifSig) 
                               & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__21__KET____DOT__bi__DOT____Vcellinp__sixth1__B) 
                                  | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__21__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                              | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__21__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0))));
    bufp->fullBit(oldp+8644,((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__21__KET____DOT__bi__DOT__FifSig)) 
                               & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__21__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__21__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                              | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__21__KET____DOT__bi__DOT__FifSig)) 
                                  & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__21__KET____DOT__bi__DOT____Vcellinp__sixth1__C)) 
                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__21__KET____DOT__bi__DOT____Vcellinp__sixth1__B))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__21__KET____DOT__bi__DOT__FifSig) 
                                    & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__21__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                        & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__21__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                       | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__21__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0)))))));
    bufp->fullCData(oldp+8645,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__21__KET____DOT__bi__DOT____Vcellinp__second4__A) 
                                 << 4U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__21__KET____DOT__bi__DOT____Vcellinp__second4__B) 
                                            << 3U) 
                                           | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__21__KET____DOT__bi__DOT____Vcellinp__second4__C) 
                                               << 2U) 
                                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__21__KET____DOT__bi__DOT____Vcellinp__second3__A) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__21__KET____DOT__bi__DOT____Vcellinp__second3__B)))))),5);
    bufp->fullCData(oldp+8646,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__21__KET____DOT__bi__DOT____Vcellinp__third2__A) 
                                 << 3U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__21__KET____DOT__bi__DOT____Vcellinp__third2__B) 
                                            << 2U) 
                                           | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__21__KET____DOT__bi__DOT____Vcellinp__third2__C) 
                                               << 1U) 
                                              | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__21__KET____DOT__bi__DOT____Vcellinp__third1__A))))),4);
    bufp->fullCData(oldp+8647,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__21__KET____DOT__bi__DOT____Vcellinp__fourth2__A) 
                                 << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__21__KET____DOT__bi__DOT____Vcellinp__fourth2__B))),2);
    bufp->fullCData(oldp+8648,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__21__KET____DOT__bi__DOT____Vcellinp__fifth1__A) 
                                 << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__21__KET____DOT__bi__DOT____Vcellinp__fifth1__B))),2);
    bufp->fullBit(oldp+8649,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__21__KET____DOT__bi__DOT__FifSig));
    bufp->fullBit(oldp+8650,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__21__KET____DOT__bi__DOT____Vcellinp__fifth1__A));
    bufp->fullBit(oldp+8651,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__21__KET____DOT__bi__DOT____Vcellinp__fifth1__B));
    bufp->fullBit(oldp+8652,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__22__KET____DOT__bi__DOT____Vcellinp__sixth1__B));
    bufp->fullBit(oldp+8653,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xcU] 
                                            >> 0x15U)))));
    bufp->fullBit(oldp+8654,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xdU] 
                                            >> 0x15U)))));
    bufp->fullBit(oldp+8655,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xeU] 
                                            >> 0x15U)))));
    bufp->fullBit(oldp+8656,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__22__KET____DOT__bi__DOT____Vcellinp__second1__C));
    bufp->fullBit(oldp+8657,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__21__KET____DOT__bi__DOT____Vcellinp__second3__B));
    bufp->fullBit(oldp+8658,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [9U] >> 0x15U)))));
    bufp->fullBit(oldp+8659,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xaU] 
                                            >> 0x15U)))));
    bufp->fullBit(oldp+8660,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xbU] 
                                            >> 0x15U)))));
    bufp->fullBit(oldp+8661,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__22__KET____DOT__bi__DOT____Vcellinp__second1__B));
    bufp->fullBit(oldp+8662,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__21__KET____DOT__bi__DOT____Vcellinp__second3__A));
    bufp->fullBit(oldp+8663,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [6U] >> 0x15U)))));
    bufp->fullBit(oldp+8664,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [7U] >> 0x15U)))));
    bufp->fullBit(oldp+8665,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [8U] >> 0x15U)))));
    bufp->fullBit(oldp+8666,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__22__KET____DOT__bi__DOT____Vcellinp__second1__A));
    bufp->fullBit(oldp+8667,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__21__KET____DOT__bi__DOT____Vcellinp__second4__C));
    bufp->fullBit(oldp+8668,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [3U] >> 0x15U)))));
    bufp->fullBit(oldp+8669,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [4U] >> 0x15U)))));
    bufp->fullBit(oldp+8670,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [5U] >> 0x15U)))));
    bufp->fullBit(oldp+8671,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__22__KET____DOT__bi__DOT____Vcellinp__second2__C));
    bufp->fullBit(oldp+8672,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__21__KET____DOT__bi__DOT____Vcellinp__second4__B));
    bufp->fullBit(oldp+8673,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0U] >> 0x15U)))));
    bufp->fullBit(oldp+8674,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [1U] >> 0x15U)))));
    bufp->fullBit(oldp+8675,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [2U] >> 0x15U)))));
    bufp->fullBit(oldp+8676,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__22__KET____DOT__bi__DOT____Vcellinp__second2__B));
    bufp->fullBit(oldp+8677,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__21__KET____DOT__bi__DOT____Vcellinp__second4__A));
    bufp->fullBit(oldp+8678,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__22__KET____DOT__bi__DOT____Vcellinp__fifth1__C));
    bufp->fullBit(oldp+8679,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__21__KET____DOT__bi__DOT____Vcellinp__fourth2__A));
    bufp->fullBit(oldp+8680,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__21__KET____DOT__bi__DOT____Vcellinp__fourth2__B));
    bufp->fullBit(oldp+8681,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__22__KET____DOT__bi__DOT____Vcellinp__sixth1__C));
    bufp->fullBit(oldp+8682,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__22__KET____DOT__bi__DOT____Vcellinp__third1__C));
    bufp->fullBit(oldp+8683,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__21__KET____DOT__bi__DOT____Vcellinp__third1__A));
    bufp->fullBit(oldp+8684,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0x10U] 
                                            >> 0x15U)))));
    bufp->fullBit(oldp+8685,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__22__KET____DOT__bi__DOT____Vcellinp__third1__B));
    bufp->fullBit(oldp+8686,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__21__KET____DOT__bi__DOT____Vcellinp__third2__C));
    bufp->fullBit(oldp+8687,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xfU] 
                                            >> 0x15U)))));
    bufp->fullBit(oldp+8688,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__22__KET____DOT__bi__DOT____Vcellinp__fourth1__C));
    bufp->fullBit(oldp+8689,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__21__KET____DOT__bi__DOT____Vcellinp__third2__B));
    bufp->fullBit(oldp+8690,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__22__KET____DOT__bi__DOT____Vcellinp__fourth1__B));
    bufp->fullBit(oldp+8691,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__21__KET____DOT__bi__DOT____Vcellinp__third2__A));
    bufp->fullBit(oldp+8692,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__22__KET____DOT__bi__DOT____Vcellinp__fourth1__A));
    bufp->fullBit(oldp+8693,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__22__KET____DOT__bi__DOT____Vcellinp__fourth2__C));
    bufp->fullIData(oldp+8694,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__22__KET____DOT__bi__InData),17);
    bufp->fullBit(oldp+8695,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__22__KET____DOT__bi__DOT__FifSig) 
                               & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__22__KET____DOT__bi__DOT____Vcellinp__sixth1__B) 
                                  | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__22__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                              | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__22__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0))));
    bufp->fullBit(oldp+8696,((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__22__KET____DOT__bi__DOT__FifSig)) 
                               & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__22__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__22__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                              | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__22__KET____DOT__bi__DOT__FifSig)) 
                                  & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__22__KET____DOT__bi__DOT____Vcellinp__sixth1__C)) 
                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__22__KET____DOT__bi__DOT____Vcellinp__sixth1__B))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__22__KET____DOT__bi__DOT__FifSig) 
                                    & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__22__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                        & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__22__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                       | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__22__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0)))))));
    bufp->fullCData(oldp+8697,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__22__KET____DOT__bi__DOT____Vcellinp__second4__A) 
                                 << 4U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__22__KET____DOT__bi__DOT____Vcellinp__second4__B) 
                                            << 3U) 
                                           | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__22__KET____DOT__bi__DOT____Vcellinp__second4__C) 
                                               << 2U) 
                                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__22__KET____DOT__bi__DOT____Vcellinp__second3__A) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__22__KET____DOT__bi__DOT____Vcellinp__second3__B)))))),5);
    bufp->fullCData(oldp+8698,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__22__KET____DOT__bi__DOT____Vcellinp__third2__A) 
                                 << 3U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__22__KET____DOT__bi__DOT____Vcellinp__third2__B) 
                                            << 2U) 
                                           | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__22__KET____DOT__bi__DOT____Vcellinp__third2__C) 
                                               << 1U) 
                                              | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__22__KET____DOT__bi__DOT____Vcellinp__third1__A))))),4);
    bufp->fullCData(oldp+8699,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__22__KET____DOT__bi__DOT____Vcellinp__fourth2__A) 
                                 << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__22__KET____DOT__bi__DOT____Vcellinp__fourth2__B))),2);
    bufp->fullCData(oldp+8700,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__22__KET____DOT__bi__DOT____Vcellinp__fifth1__A) 
                                 << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__22__KET____DOT__bi__DOT____Vcellinp__fifth1__B))),2);
    bufp->fullBit(oldp+8701,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__22__KET____DOT__bi__DOT__FifSig));
    bufp->fullBit(oldp+8702,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__22__KET____DOT__bi__DOT____Vcellinp__fifth1__A));
    bufp->fullBit(oldp+8703,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__22__KET____DOT__bi__DOT____Vcellinp__fifth1__B));
    bufp->fullBit(oldp+8704,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__23__KET____DOT__bi__DOT____Vcellinp__sixth1__B));
    bufp->fullBit(oldp+8705,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xcU] 
                                            >> 0x16U)))));
    bufp->fullBit(oldp+8706,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xdU] 
                                            >> 0x16U)))));
    bufp->fullBit(oldp+8707,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xeU] 
                                            >> 0x16U)))));
    bufp->fullBit(oldp+8708,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__23__KET____DOT__bi__DOT____Vcellinp__second1__C));
    bufp->fullBit(oldp+8709,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__22__KET____DOT__bi__DOT____Vcellinp__second3__B));
    bufp->fullBit(oldp+8710,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [9U] >> 0x16U)))));
    bufp->fullBit(oldp+8711,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xaU] 
                                            >> 0x16U)))));
    bufp->fullBit(oldp+8712,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xbU] 
                                            >> 0x16U)))));
    bufp->fullBit(oldp+8713,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__23__KET____DOT__bi__DOT____Vcellinp__second1__B));
    bufp->fullBit(oldp+8714,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__22__KET____DOT__bi__DOT____Vcellinp__second3__A));
    bufp->fullBit(oldp+8715,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [6U] >> 0x16U)))));
    bufp->fullBit(oldp+8716,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [7U] >> 0x16U)))));
    bufp->fullBit(oldp+8717,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [8U] >> 0x16U)))));
    bufp->fullBit(oldp+8718,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__23__KET____DOT__bi__DOT____Vcellinp__second1__A));
    bufp->fullBit(oldp+8719,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__22__KET____DOT__bi__DOT____Vcellinp__second4__C));
    bufp->fullBit(oldp+8720,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [3U] >> 0x16U)))));
    bufp->fullBit(oldp+8721,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [4U] >> 0x16U)))));
    bufp->fullBit(oldp+8722,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [5U] >> 0x16U)))));
    bufp->fullBit(oldp+8723,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__23__KET____DOT__bi__DOT____Vcellinp__second2__C));
    bufp->fullBit(oldp+8724,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__22__KET____DOT__bi__DOT____Vcellinp__second4__B));
    bufp->fullBit(oldp+8725,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0U] >> 0x16U)))));
    bufp->fullBit(oldp+8726,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [1U] >> 0x16U)))));
    bufp->fullBit(oldp+8727,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [2U] >> 0x16U)))));
    bufp->fullBit(oldp+8728,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__23__KET____DOT__bi__DOT____Vcellinp__second2__B));
    bufp->fullBit(oldp+8729,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__22__KET____DOT__bi__DOT____Vcellinp__second4__A));
    bufp->fullBit(oldp+8730,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__23__KET____DOT__bi__DOT____Vcellinp__fifth1__C));
    bufp->fullBit(oldp+8731,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__22__KET____DOT__bi__DOT____Vcellinp__fourth2__A));
    bufp->fullBit(oldp+8732,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__22__KET____DOT__bi__DOT____Vcellinp__fourth2__B));
    bufp->fullBit(oldp+8733,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__23__KET____DOT__bi__DOT____Vcellinp__sixth1__C));
    bufp->fullBit(oldp+8734,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__23__KET____DOT__bi__DOT____Vcellinp__third1__C));
    bufp->fullBit(oldp+8735,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__22__KET____DOT__bi__DOT____Vcellinp__third1__A));
    bufp->fullBit(oldp+8736,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0x10U] 
                                            >> 0x16U)))));
    bufp->fullBit(oldp+8737,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__23__KET____DOT__bi__DOT____Vcellinp__third1__B));
    bufp->fullBit(oldp+8738,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__22__KET____DOT__bi__DOT____Vcellinp__third2__C));
    bufp->fullBit(oldp+8739,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xfU] 
                                            >> 0x16U)))));
    bufp->fullBit(oldp+8740,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__23__KET____DOT__bi__DOT____Vcellinp__fourth1__C));
    bufp->fullBit(oldp+8741,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__22__KET____DOT__bi__DOT____Vcellinp__third2__B));
    bufp->fullBit(oldp+8742,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__23__KET____DOT__bi__DOT____Vcellinp__fourth1__B));
    bufp->fullBit(oldp+8743,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__22__KET____DOT__bi__DOT____Vcellinp__third2__A));
    bufp->fullBit(oldp+8744,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__23__KET____DOT__bi__DOT____Vcellinp__fourth1__A));
    bufp->fullBit(oldp+8745,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__23__KET____DOT__bi__DOT____Vcellinp__fourth2__C));
    bufp->fullIData(oldp+8746,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__23__KET____DOT__bi__InData),17);
    bufp->fullBit(oldp+8747,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__23__KET____DOT__bi__DOT__FifSig) 
                               & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__23__KET____DOT__bi__DOT____Vcellinp__sixth1__B) 
                                  | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__23__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                              | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__23__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0))));
    bufp->fullBit(oldp+8748,((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__23__KET____DOT__bi__DOT__FifSig)) 
                               & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__23__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__23__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                              | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__23__KET____DOT__bi__DOT__FifSig)) 
                                  & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__23__KET____DOT__bi__DOT____Vcellinp__sixth1__C)) 
                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__23__KET____DOT__bi__DOT____Vcellinp__sixth1__B))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__23__KET____DOT__bi__DOT__FifSig) 
                                    & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__23__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                        & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__23__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                       | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__23__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0)))))));
    bufp->fullCData(oldp+8749,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__23__KET____DOT__bi__DOT____Vcellinp__second4__A) 
                                 << 4U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__23__KET____DOT__bi__DOT____Vcellinp__second4__B) 
                                            << 3U) 
                                           | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__23__KET____DOT__bi__DOT____Vcellinp__second4__C) 
                                               << 2U) 
                                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__23__KET____DOT__bi__DOT____Vcellinp__second3__A) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__23__KET____DOT__bi__DOT____Vcellinp__second3__B)))))),5);
    bufp->fullCData(oldp+8750,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__23__KET____DOT__bi__DOT____Vcellinp__third2__A) 
                                 << 3U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__23__KET____DOT__bi__DOT____Vcellinp__third2__B) 
                                            << 2U) 
                                           | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__23__KET____DOT__bi__DOT____Vcellinp__third2__C) 
                                               << 1U) 
                                              | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__23__KET____DOT__bi__DOT____Vcellinp__third1__A))))),4);
    bufp->fullCData(oldp+8751,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__23__KET____DOT__bi__DOT____Vcellinp__fourth2__A) 
                                 << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__23__KET____DOT__bi__DOT____Vcellinp__fourth2__B))),2);
    bufp->fullCData(oldp+8752,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__23__KET____DOT__bi__DOT____Vcellinp__fifth1__A) 
                                 << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__23__KET____DOT__bi__DOT____Vcellinp__fifth1__B))),2);
    bufp->fullBit(oldp+8753,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__23__KET____DOT__bi__DOT__FifSig));
    bufp->fullBit(oldp+8754,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__23__KET____DOT__bi__DOT____Vcellinp__fifth1__A));
    bufp->fullBit(oldp+8755,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__23__KET____DOT__bi__DOT____Vcellinp__fifth1__B));
    bufp->fullBit(oldp+8756,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__24__KET____DOT__bi__DOT____Vcellinp__sixth1__B));
    bufp->fullBit(oldp+8757,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xcU] 
                                            >> 0x17U)))));
    bufp->fullBit(oldp+8758,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xdU] 
                                            >> 0x17U)))));
    bufp->fullBit(oldp+8759,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xeU] 
                                            >> 0x17U)))));
    bufp->fullBit(oldp+8760,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__24__KET____DOT__bi__DOT____Vcellinp__second1__C));
    bufp->fullBit(oldp+8761,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__23__KET____DOT__bi__DOT____Vcellinp__second3__B));
    bufp->fullBit(oldp+8762,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [9U] >> 0x17U)))));
    bufp->fullBit(oldp+8763,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xaU] 
                                            >> 0x17U)))));
    bufp->fullBit(oldp+8764,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xbU] 
                                            >> 0x17U)))));
    bufp->fullBit(oldp+8765,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__24__KET____DOT__bi__DOT____Vcellinp__second1__B));
    bufp->fullBit(oldp+8766,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__23__KET____DOT__bi__DOT____Vcellinp__second3__A));
    bufp->fullBit(oldp+8767,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [6U] >> 0x17U)))));
    bufp->fullBit(oldp+8768,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [7U] >> 0x17U)))));
    bufp->fullBit(oldp+8769,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [8U] >> 0x17U)))));
    bufp->fullBit(oldp+8770,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__24__KET____DOT__bi__DOT____Vcellinp__second1__A));
    bufp->fullBit(oldp+8771,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__23__KET____DOT__bi__DOT____Vcellinp__second4__C));
    bufp->fullBit(oldp+8772,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [3U] >> 0x17U)))));
    bufp->fullBit(oldp+8773,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [4U] >> 0x17U)))));
    bufp->fullBit(oldp+8774,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [5U] >> 0x17U)))));
    bufp->fullBit(oldp+8775,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__24__KET____DOT__bi__DOT____Vcellinp__second2__C));
    bufp->fullBit(oldp+8776,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__23__KET____DOT__bi__DOT____Vcellinp__second4__B));
    bufp->fullBit(oldp+8777,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0U] >> 0x17U)))));
    bufp->fullBit(oldp+8778,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [1U] >> 0x17U)))));
    bufp->fullBit(oldp+8779,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [2U] >> 0x17U)))));
    bufp->fullBit(oldp+8780,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__24__KET____DOT__bi__DOT____Vcellinp__second2__B));
    bufp->fullBit(oldp+8781,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__23__KET____DOT__bi__DOT____Vcellinp__second4__A));
    bufp->fullBit(oldp+8782,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__24__KET____DOT__bi__DOT____Vcellinp__fifth1__C));
    bufp->fullBit(oldp+8783,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__23__KET____DOT__bi__DOT____Vcellinp__fourth2__A));
    bufp->fullBit(oldp+8784,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__23__KET____DOT__bi__DOT____Vcellinp__fourth2__B));
    bufp->fullBit(oldp+8785,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__24__KET____DOT__bi__DOT____Vcellinp__sixth1__C));
    bufp->fullBit(oldp+8786,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__24__KET____DOT__bi__DOT____Vcellinp__third1__C));
    bufp->fullBit(oldp+8787,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__23__KET____DOT__bi__DOT____Vcellinp__third1__A));
    bufp->fullBit(oldp+8788,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0x10U] 
                                            >> 0x17U)))));
    bufp->fullBit(oldp+8789,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__24__KET____DOT__bi__DOT____Vcellinp__third1__B));
    bufp->fullBit(oldp+8790,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__23__KET____DOT__bi__DOT____Vcellinp__third2__C));
    bufp->fullBit(oldp+8791,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xfU] 
                                            >> 0x17U)))));
    bufp->fullBit(oldp+8792,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__24__KET____DOT__bi__DOT____Vcellinp__fourth1__C));
    bufp->fullBit(oldp+8793,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__23__KET____DOT__bi__DOT____Vcellinp__third2__B));
    bufp->fullBit(oldp+8794,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__24__KET____DOT__bi__DOT____Vcellinp__fourth1__B));
    bufp->fullBit(oldp+8795,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__23__KET____DOT__bi__DOT____Vcellinp__third2__A));
    bufp->fullBit(oldp+8796,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__24__KET____DOT__bi__DOT____Vcellinp__fourth1__A));
    bufp->fullBit(oldp+8797,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__24__KET____DOT__bi__DOT____Vcellinp__fourth2__C));
    bufp->fullIData(oldp+8798,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__24__KET____DOT__bi__InData),17);
    bufp->fullBit(oldp+8799,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__24__KET____DOT__bi__DOT__FifSig) 
                               & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__24__KET____DOT__bi__DOT____Vcellinp__sixth1__B) 
                                  | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__24__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                              | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__24__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0))));
    bufp->fullBit(oldp+8800,((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__24__KET____DOT__bi__DOT__FifSig)) 
                               & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__24__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__24__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                              | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__24__KET____DOT__bi__DOT__FifSig)) 
                                  & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__24__KET____DOT__bi__DOT____Vcellinp__sixth1__C)) 
                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__24__KET____DOT__bi__DOT____Vcellinp__sixth1__B))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__24__KET____DOT__bi__DOT__FifSig) 
                                    & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__24__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                        & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__24__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                       | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__24__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0)))))));
    bufp->fullCData(oldp+8801,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__24__KET____DOT__bi__DOT____Vcellinp__second4__A) 
                                 << 4U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__24__KET____DOT__bi__DOT____Vcellinp__second4__B) 
                                            << 3U) 
                                           | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__24__KET____DOT__bi__DOT____Vcellinp__second4__C) 
                                               << 2U) 
                                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__24__KET____DOT__bi__DOT____Vcellinp__second3__A) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__24__KET____DOT__bi__DOT____Vcellinp__second3__B)))))),5);
    bufp->fullCData(oldp+8802,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__24__KET____DOT__bi__DOT____Vcellinp__third2__A) 
                                 << 3U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__24__KET____DOT__bi__DOT____Vcellinp__third2__B) 
                                            << 2U) 
                                           | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__24__KET____DOT__bi__DOT____Vcellinp__third2__C) 
                                               << 1U) 
                                              | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__24__KET____DOT__bi__DOT____Vcellinp__third1__A))))),4);
    bufp->fullCData(oldp+8803,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__24__KET____DOT__bi__DOT____Vcellinp__fourth2__A) 
                                 << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__24__KET____DOT__bi__DOT____Vcellinp__fourth2__B))),2);
    bufp->fullCData(oldp+8804,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__24__KET____DOT__bi__DOT____Vcellinp__fifth1__A) 
                                 << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__24__KET____DOT__bi__DOT____Vcellinp__fifth1__B))),2);
    bufp->fullBit(oldp+8805,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__24__KET____DOT__bi__DOT__FifSig));
    bufp->fullBit(oldp+8806,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__24__KET____DOT__bi__DOT____Vcellinp__fifth1__A));
    bufp->fullBit(oldp+8807,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__24__KET____DOT__bi__DOT____Vcellinp__fifth1__B));
    bufp->fullBit(oldp+8808,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__25__KET____DOT__bi__DOT____Vcellinp__sixth1__B));
    bufp->fullBit(oldp+8809,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xcU] 
                                            >> 0x18U)))));
    bufp->fullBit(oldp+8810,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xdU] 
                                            >> 0x18U)))));
    bufp->fullBit(oldp+8811,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xeU] 
                                            >> 0x18U)))));
    bufp->fullBit(oldp+8812,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__25__KET____DOT__bi__DOT____Vcellinp__second1__C));
    bufp->fullBit(oldp+8813,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__24__KET____DOT__bi__DOT____Vcellinp__second3__B));
    bufp->fullBit(oldp+8814,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [9U] >> 0x18U)))));
    bufp->fullBit(oldp+8815,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xaU] 
                                            >> 0x18U)))));
    bufp->fullBit(oldp+8816,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xbU] 
                                            >> 0x18U)))));
    bufp->fullBit(oldp+8817,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__25__KET____DOT__bi__DOT____Vcellinp__second1__B));
    bufp->fullBit(oldp+8818,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__24__KET____DOT__bi__DOT____Vcellinp__second3__A));
    bufp->fullBit(oldp+8819,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [6U] >> 0x18U)))));
    bufp->fullBit(oldp+8820,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [7U] >> 0x18U)))));
    bufp->fullBit(oldp+8821,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [8U] >> 0x18U)))));
    bufp->fullBit(oldp+8822,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__25__KET____DOT__bi__DOT____Vcellinp__second1__A));
    bufp->fullBit(oldp+8823,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__24__KET____DOT__bi__DOT____Vcellinp__second4__C));
    bufp->fullBit(oldp+8824,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [3U] >> 0x18U)))));
    bufp->fullBit(oldp+8825,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [4U] >> 0x18U)))));
    bufp->fullBit(oldp+8826,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [5U] >> 0x18U)))));
    bufp->fullBit(oldp+8827,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__25__KET____DOT__bi__DOT____Vcellinp__second2__C));
    bufp->fullBit(oldp+8828,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__24__KET____DOT__bi__DOT____Vcellinp__second4__B));
    bufp->fullBit(oldp+8829,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0U] >> 0x18U)))));
    bufp->fullBit(oldp+8830,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [1U] >> 0x18U)))));
    bufp->fullBit(oldp+8831,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [2U] >> 0x18U)))));
    bufp->fullBit(oldp+8832,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__25__KET____DOT__bi__DOT____Vcellinp__second2__B));
    bufp->fullBit(oldp+8833,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__24__KET____DOT__bi__DOT____Vcellinp__second4__A));
    bufp->fullBit(oldp+8834,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__25__KET____DOT__bi__DOT____Vcellinp__fifth1__C));
    bufp->fullBit(oldp+8835,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__24__KET____DOT__bi__DOT____Vcellinp__fourth2__A));
    bufp->fullBit(oldp+8836,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__24__KET____DOT__bi__DOT____Vcellinp__fourth2__B));
    bufp->fullBit(oldp+8837,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__25__KET____DOT__bi__DOT____Vcellinp__sixth1__C));
    bufp->fullBit(oldp+8838,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__25__KET____DOT__bi__DOT____Vcellinp__third1__C));
    bufp->fullBit(oldp+8839,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__24__KET____DOT__bi__DOT____Vcellinp__third1__A));
    bufp->fullBit(oldp+8840,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0x10U] 
                                            >> 0x18U)))));
    bufp->fullBit(oldp+8841,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__25__KET____DOT__bi__DOT____Vcellinp__third1__B));
    bufp->fullBit(oldp+8842,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__24__KET____DOT__bi__DOT____Vcellinp__third2__C));
    bufp->fullBit(oldp+8843,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xfU] 
                                            >> 0x18U)))));
    bufp->fullBit(oldp+8844,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__25__KET____DOT__bi__DOT____Vcellinp__fourth1__C));
    bufp->fullBit(oldp+8845,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__24__KET____DOT__bi__DOT____Vcellinp__third2__B));
    bufp->fullBit(oldp+8846,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__25__KET____DOT__bi__DOT____Vcellinp__fourth1__B));
    bufp->fullBit(oldp+8847,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__24__KET____DOT__bi__DOT____Vcellinp__third2__A));
    bufp->fullBit(oldp+8848,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__25__KET____DOT__bi__DOT____Vcellinp__fourth1__A));
    bufp->fullBit(oldp+8849,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__25__KET____DOT__bi__DOT____Vcellinp__fourth2__C));
    bufp->fullIData(oldp+8850,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__25__KET____DOT__bi__InData),17);
    bufp->fullBit(oldp+8851,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__25__KET____DOT__bi__DOT__FifSig) 
                               & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__25__KET____DOT__bi__DOT____Vcellinp__sixth1__B) 
                                  | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__25__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                              | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__25__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0))));
    bufp->fullBit(oldp+8852,((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__25__KET____DOT__bi__DOT__FifSig)) 
                               & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__25__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__25__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                              | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__25__KET____DOT__bi__DOT__FifSig)) 
                                  & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__25__KET____DOT__bi__DOT____Vcellinp__sixth1__C)) 
                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__25__KET____DOT__bi__DOT____Vcellinp__sixth1__B))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__25__KET____DOT__bi__DOT__FifSig) 
                                    & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__25__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                        & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__25__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                       | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__25__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0)))))));
    bufp->fullCData(oldp+8853,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__25__KET____DOT__bi__DOT____Vcellinp__second4__A) 
                                 << 4U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__25__KET____DOT__bi__DOT____Vcellinp__second4__B) 
                                            << 3U) 
                                           | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__25__KET____DOT__bi__DOT____Vcellinp__second4__C) 
                                               << 2U) 
                                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__25__KET____DOT__bi__DOT____Vcellinp__second3__A) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__25__KET____DOT__bi__DOT____Vcellinp__second3__B)))))),5);
    bufp->fullCData(oldp+8854,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__25__KET____DOT__bi__DOT____Vcellinp__third2__A) 
                                 << 3U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__25__KET____DOT__bi__DOT____Vcellinp__third2__B) 
                                            << 2U) 
                                           | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__25__KET____DOT__bi__DOT____Vcellinp__third2__C) 
                                               << 1U) 
                                              | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__25__KET____DOT__bi__DOT____Vcellinp__third1__A))))),4);
    bufp->fullCData(oldp+8855,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__25__KET____DOT__bi__DOT____Vcellinp__fourth2__A) 
                                 << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__25__KET____DOT__bi__DOT____Vcellinp__fourth2__B))),2);
    bufp->fullCData(oldp+8856,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__25__KET____DOT__bi__DOT____Vcellinp__fifth1__A) 
                                 << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__25__KET____DOT__bi__DOT____Vcellinp__fifth1__B))),2);
    bufp->fullBit(oldp+8857,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__25__KET____DOT__bi__DOT__FifSig));
    bufp->fullBit(oldp+8858,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__25__KET____DOT__bi__DOT____Vcellinp__fifth1__A));
    bufp->fullBit(oldp+8859,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__25__KET____DOT__bi__DOT____Vcellinp__fifth1__B));
    bufp->fullBit(oldp+8860,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__26__KET____DOT__bi__DOT____Vcellinp__sixth1__B));
    bufp->fullBit(oldp+8861,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xcU] 
                                            >> 0x19U)))));
    bufp->fullBit(oldp+8862,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xdU] 
                                            >> 0x19U)))));
    bufp->fullBit(oldp+8863,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xeU] 
                                            >> 0x19U)))));
    bufp->fullBit(oldp+8864,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__26__KET____DOT__bi__DOT____Vcellinp__second1__C));
    bufp->fullBit(oldp+8865,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__25__KET____DOT__bi__DOT____Vcellinp__second3__B));
    bufp->fullBit(oldp+8866,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [9U] >> 0x19U)))));
    bufp->fullBit(oldp+8867,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xaU] 
                                            >> 0x19U)))));
    bufp->fullBit(oldp+8868,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xbU] 
                                            >> 0x19U)))));
    bufp->fullBit(oldp+8869,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__26__KET____DOT__bi__DOT____Vcellinp__second1__B));
    bufp->fullBit(oldp+8870,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__25__KET____DOT__bi__DOT____Vcellinp__second3__A));
    bufp->fullBit(oldp+8871,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [6U] >> 0x19U)))));
    bufp->fullBit(oldp+8872,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [7U] >> 0x19U)))));
    bufp->fullBit(oldp+8873,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [8U] >> 0x19U)))));
    bufp->fullBit(oldp+8874,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__26__KET____DOT__bi__DOT____Vcellinp__second1__A));
    bufp->fullBit(oldp+8875,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__25__KET____DOT__bi__DOT____Vcellinp__second4__C));
    bufp->fullBit(oldp+8876,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [3U] >> 0x19U)))));
    bufp->fullBit(oldp+8877,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [4U] >> 0x19U)))));
    bufp->fullBit(oldp+8878,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [5U] >> 0x19U)))));
    bufp->fullBit(oldp+8879,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__26__KET____DOT__bi__DOT____Vcellinp__second2__C));
    bufp->fullBit(oldp+8880,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__25__KET____DOT__bi__DOT____Vcellinp__second4__B));
    bufp->fullBit(oldp+8881,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0U] >> 0x19U)))));
    bufp->fullBit(oldp+8882,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [1U] >> 0x19U)))));
    bufp->fullBit(oldp+8883,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [2U] >> 0x19U)))));
    bufp->fullBit(oldp+8884,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__26__KET____DOT__bi__DOT____Vcellinp__second2__B));
    bufp->fullBit(oldp+8885,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__25__KET____DOT__bi__DOT____Vcellinp__second4__A));
    bufp->fullBit(oldp+8886,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__26__KET____DOT__bi__DOT____Vcellinp__fifth1__C));
    bufp->fullBit(oldp+8887,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__25__KET____DOT__bi__DOT____Vcellinp__fourth2__A));
    bufp->fullBit(oldp+8888,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__25__KET____DOT__bi__DOT____Vcellinp__fourth2__B));
    bufp->fullBit(oldp+8889,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__26__KET____DOT__bi__DOT____Vcellinp__sixth1__C));
    bufp->fullBit(oldp+8890,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__26__KET____DOT__bi__DOT____Vcellinp__third1__C));
    bufp->fullBit(oldp+8891,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__25__KET____DOT__bi__DOT____Vcellinp__third1__A));
    bufp->fullBit(oldp+8892,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0x10U] 
                                            >> 0x19U)))));
    bufp->fullBit(oldp+8893,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__26__KET____DOT__bi__DOT____Vcellinp__third1__B));
    bufp->fullBit(oldp+8894,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__25__KET____DOT__bi__DOT____Vcellinp__third2__C));
    bufp->fullBit(oldp+8895,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xfU] 
                                            >> 0x19U)))));
    bufp->fullBit(oldp+8896,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__26__KET____DOT__bi__DOT____Vcellinp__fourth1__C));
    bufp->fullBit(oldp+8897,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__25__KET____DOT__bi__DOT____Vcellinp__third2__B));
    bufp->fullBit(oldp+8898,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__26__KET____DOT__bi__DOT____Vcellinp__fourth1__B));
    bufp->fullBit(oldp+8899,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__25__KET____DOT__bi__DOT____Vcellinp__third2__A));
    bufp->fullBit(oldp+8900,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__26__KET____DOT__bi__DOT____Vcellinp__fourth1__A));
    bufp->fullBit(oldp+8901,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__26__KET____DOT__bi__DOT____Vcellinp__fourth2__C));
    bufp->fullIData(oldp+8902,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__26__KET____DOT__bi__InData),17);
    bufp->fullBit(oldp+8903,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__26__KET____DOT__bi__DOT__FifSig) 
                               & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__26__KET____DOT__bi__DOT____Vcellinp__sixth1__B) 
                                  | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__26__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                              | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__26__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0))));
    bufp->fullBit(oldp+8904,((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__26__KET____DOT__bi__DOT__FifSig)) 
                               & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__26__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__26__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                              | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__26__KET____DOT__bi__DOT__FifSig)) 
                                  & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__26__KET____DOT__bi__DOT____Vcellinp__sixth1__C)) 
                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__26__KET____DOT__bi__DOT____Vcellinp__sixth1__B))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__26__KET____DOT__bi__DOT__FifSig) 
                                    & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__26__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                        & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__26__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                       | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__26__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0)))))));
    bufp->fullCData(oldp+8905,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__26__KET____DOT__bi__DOT____Vcellinp__second4__A) 
                                 << 4U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__26__KET____DOT__bi__DOT____Vcellinp__second4__B) 
                                            << 3U) 
                                           | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__26__KET____DOT__bi__DOT____Vcellinp__second4__C) 
                                               << 2U) 
                                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__26__KET____DOT__bi__DOT____Vcellinp__second3__A) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__26__KET____DOT__bi__DOT____Vcellinp__second3__B)))))),5);
    bufp->fullCData(oldp+8906,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__26__KET____DOT__bi__DOT____Vcellinp__third2__A) 
                                 << 3U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__26__KET____DOT__bi__DOT____Vcellinp__third2__B) 
                                            << 2U) 
                                           | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__26__KET____DOT__bi__DOT____Vcellinp__third2__C) 
                                               << 1U) 
                                              | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__26__KET____DOT__bi__DOT____Vcellinp__third1__A))))),4);
    bufp->fullCData(oldp+8907,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__26__KET____DOT__bi__DOT____Vcellinp__fourth2__A) 
                                 << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__26__KET____DOT__bi__DOT____Vcellinp__fourth2__B))),2);
    bufp->fullCData(oldp+8908,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__26__KET____DOT__bi__DOT____Vcellinp__fifth1__A) 
                                 << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__26__KET____DOT__bi__DOT____Vcellinp__fifth1__B))),2);
    bufp->fullBit(oldp+8909,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__26__KET____DOT__bi__DOT__FifSig));
    bufp->fullBit(oldp+8910,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__26__KET____DOT__bi__DOT____Vcellinp__fifth1__A));
    bufp->fullBit(oldp+8911,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__26__KET____DOT__bi__DOT____Vcellinp__fifth1__B));
    bufp->fullBit(oldp+8912,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__27__KET____DOT__bi__DOT____Vcellinp__sixth1__B));
    bufp->fullBit(oldp+8913,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xcU] 
                                            >> 0x1aU)))));
    bufp->fullBit(oldp+8914,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xdU] 
                                            >> 0x1aU)))));
    bufp->fullBit(oldp+8915,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xeU] 
                                            >> 0x1aU)))));
    bufp->fullBit(oldp+8916,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__27__KET____DOT__bi__DOT____Vcellinp__second1__C));
    bufp->fullBit(oldp+8917,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__26__KET____DOT__bi__DOT____Vcellinp__second3__B));
    bufp->fullBit(oldp+8918,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [9U] >> 0x1aU)))));
    bufp->fullBit(oldp+8919,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xaU] 
                                            >> 0x1aU)))));
    bufp->fullBit(oldp+8920,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xbU] 
                                            >> 0x1aU)))));
    bufp->fullBit(oldp+8921,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__27__KET____DOT__bi__DOT____Vcellinp__second1__B));
    bufp->fullBit(oldp+8922,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__26__KET____DOT__bi__DOT____Vcellinp__second3__A));
    bufp->fullBit(oldp+8923,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [6U] >> 0x1aU)))));
    bufp->fullBit(oldp+8924,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [7U] >> 0x1aU)))));
    bufp->fullBit(oldp+8925,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [8U] >> 0x1aU)))));
    bufp->fullBit(oldp+8926,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__27__KET____DOT__bi__DOT____Vcellinp__second1__A));
    bufp->fullBit(oldp+8927,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__26__KET____DOT__bi__DOT____Vcellinp__second4__C));
    bufp->fullBit(oldp+8928,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [3U] >> 0x1aU)))));
    bufp->fullBit(oldp+8929,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [4U] >> 0x1aU)))));
    bufp->fullBit(oldp+8930,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [5U] >> 0x1aU)))));
    bufp->fullBit(oldp+8931,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__27__KET____DOT__bi__DOT____Vcellinp__second2__C));
    bufp->fullBit(oldp+8932,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__26__KET____DOT__bi__DOT____Vcellinp__second4__B));
    bufp->fullBit(oldp+8933,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0U] >> 0x1aU)))));
    bufp->fullBit(oldp+8934,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [1U] >> 0x1aU)))));
    bufp->fullBit(oldp+8935,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [2U] >> 0x1aU)))));
    bufp->fullBit(oldp+8936,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__27__KET____DOT__bi__DOT____Vcellinp__second2__B));
    bufp->fullBit(oldp+8937,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__26__KET____DOT__bi__DOT____Vcellinp__second4__A));
    bufp->fullBit(oldp+8938,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__27__KET____DOT__bi__DOT____Vcellinp__fifth1__C));
    bufp->fullBit(oldp+8939,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__26__KET____DOT__bi__DOT____Vcellinp__fourth2__A));
    bufp->fullBit(oldp+8940,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__26__KET____DOT__bi__DOT____Vcellinp__fourth2__B));
    bufp->fullBit(oldp+8941,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__27__KET____DOT__bi__DOT____Vcellinp__sixth1__C));
    bufp->fullBit(oldp+8942,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__27__KET____DOT__bi__DOT____Vcellinp__third1__C));
    bufp->fullBit(oldp+8943,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__26__KET____DOT__bi__DOT____Vcellinp__third1__A));
    bufp->fullBit(oldp+8944,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0x10U] 
                                            >> 0x1aU)))));
    bufp->fullBit(oldp+8945,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__27__KET____DOT__bi__DOT____Vcellinp__third1__B));
    bufp->fullBit(oldp+8946,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__26__KET____DOT__bi__DOT____Vcellinp__third2__C));
    bufp->fullBit(oldp+8947,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xfU] 
                                            >> 0x1aU)))));
    bufp->fullBit(oldp+8948,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__27__KET____DOT__bi__DOT____Vcellinp__fourth1__C));
    bufp->fullBit(oldp+8949,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__26__KET____DOT__bi__DOT____Vcellinp__third2__B));
    bufp->fullBit(oldp+8950,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__27__KET____DOT__bi__DOT____Vcellinp__fourth1__B));
    bufp->fullBit(oldp+8951,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__26__KET____DOT__bi__DOT____Vcellinp__third2__A));
    bufp->fullBit(oldp+8952,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__27__KET____DOT__bi__DOT____Vcellinp__fourth1__A));
    bufp->fullBit(oldp+8953,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__27__KET____DOT__bi__DOT____Vcellinp__fourth2__C));
    bufp->fullIData(oldp+8954,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__27__KET____DOT__bi__InData),17);
    bufp->fullBit(oldp+8955,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__27__KET____DOT__bi__DOT__FifSig) 
                               & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__27__KET____DOT__bi__DOT____Vcellinp__sixth1__B) 
                                  | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__27__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                              | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__27__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0))));
    bufp->fullBit(oldp+8956,((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__27__KET____DOT__bi__DOT__FifSig)) 
                               & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__27__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__27__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                              | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__27__KET____DOT__bi__DOT__FifSig)) 
                                  & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__27__KET____DOT__bi__DOT____Vcellinp__sixth1__C)) 
                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__27__KET____DOT__bi__DOT____Vcellinp__sixth1__B))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__27__KET____DOT__bi__DOT__FifSig) 
                                    & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__27__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                        & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__27__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                       | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__27__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0)))))));
    bufp->fullCData(oldp+8957,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__27__KET____DOT__bi__DOT____Vcellinp__second4__A) 
                                 << 4U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__27__KET____DOT__bi__DOT____Vcellinp__second4__B) 
                                            << 3U) 
                                           | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__27__KET____DOT__bi__DOT____Vcellinp__second4__C) 
                                               << 2U) 
                                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__27__KET____DOT__bi__DOT____Vcellinp__second3__A) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__27__KET____DOT__bi__DOT____Vcellinp__second3__B)))))),5);
    bufp->fullCData(oldp+8958,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__27__KET____DOT__bi__DOT____Vcellinp__third2__A) 
                                 << 3U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__27__KET____DOT__bi__DOT____Vcellinp__third2__B) 
                                            << 2U) 
                                           | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__27__KET____DOT__bi__DOT____Vcellinp__third2__C) 
                                               << 1U) 
                                              | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__27__KET____DOT__bi__DOT____Vcellinp__third1__A))))),4);
    bufp->fullCData(oldp+8959,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__27__KET____DOT__bi__DOT____Vcellinp__fourth2__A) 
                                 << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__27__KET____DOT__bi__DOT____Vcellinp__fourth2__B))),2);
    bufp->fullCData(oldp+8960,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__27__KET____DOT__bi__DOT____Vcellinp__fifth1__A) 
                                 << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__27__KET____DOT__bi__DOT____Vcellinp__fifth1__B))),2);
    bufp->fullBit(oldp+8961,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__27__KET____DOT__bi__DOT__FifSig));
    bufp->fullBit(oldp+8962,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__27__KET____DOT__bi__DOT____Vcellinp__fifth1__A));
    bufp->fullBit(oldp+8963,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__27__KET____DOT__bi__DOT____Vcellinp__fifth1__B));
    bufp->fullBit(oldp+8964,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__28__KET____DOT__bi__DOT____Vcellinp__sixth1__B));
    bufp->fullBit(oldp+8965,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xcU] 
                                            >> 0x1bU)))));
    bufp->fullBit(oldp+8966,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xdU] 
                                            >> 0x1bU)))));
    bufp->fullBit(oldp+8967,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xeU] 
                                            >> 0x1bU)))));
    bufp->fullBit(oldp+8968,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__28__KET____DOT__bi__DOT____Vcellinp__second1__C));
    bufp->fullBit(oldp+8969,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__27__KET____DOT__bi__DOT____Vcellinp__second3__B));
    bufp->fullBit(oldp+8970,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [9U] >> 0x1bU)))));
    bufp->fullBit(oldp+8971,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xaU] 
                                            >> 0x1bU)))));
    bufp->fullBit(oldp+8972,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xbU] 
                                            >> 0x1bU)))));
    bufp->fullBit(oldp+8973,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__28__KET____DOT__bi__DOT____Vcellinp__second1__B));
    bufp->fullBit(oldp+8974,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__27__KET____DOT__bi__DOT____Vcellinp__second3__A));
    bufp->fullBit(oldp+8975,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [6U] >> 0x1bU)))));
    bufp->fullBit(oldp+8976,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [7U] >> 0x1bU)))));
    bufp->fullBit(oldp+8977,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [8U] >> 0x1bU)))));
    bufp->fullBit(oldp+8978,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__28__KET____DOT__bi__DOT____Vcellinp__second1__A));
    bufp->fullBit(oldp+8979,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__27__KET____DOT__bi__DOT____Vcellinp__second4__C));
    bufp->fullBit(oldp+8980,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [3U] >> 0x1bU)))));
    bufp->fullBit(oldp+8981,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [4U] >> 0x1bU)))));
    bufp->fullBit(oldp+8982,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [5U] >> 0x1bU)))));
    bufp->fullBit(oldp+8983,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__28__KET____DOT__bi__DOT____Vcellinp__second2__C));
    bufp->fullBit(oldp+8984,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__27__KET____DOT__bi__DOT____Vcellinp__second4__B));
    bufp->fullBit(oldp+8985,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0U] >> 0x1bU)))));
    bufp->fullBit(oldp+8986,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [1U] >> 0x1bU)))));
    bufp->fullBit(oldp+8987,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [2U] >> 0x1bU)))));
    bufp->fullBit(oldp+8988,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__28__KET____DOT__bi__DOT____Vcellinp__second2__B));
    bufp->fullBit(oldp+8989,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__27__KET____DOT__bi__DOT____Vcellinp__second4__A));
    bufp->fullBit(oldp+8990,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__28__KET____DOT__bi__DOT____Vcellinp__fifth1__C));
    bufp->fullBit(oldp+8991,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__27__KET____DOT__bi__DOT____Vcellinp__fourth2__A));
    bufp->fullBit(oldp+8992,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__27__KET____DOT__bi__DOT____Vcellinp__fourth2__B));
    bufp->fullBit(oldp+8993,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__28__KET____DOT__bi__DOT____Vcellinp__sixth1__C));
    bufp->fullBit(oldp+8994,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__28__KET____DOT__bi__DOT____Vcellinp__third1__C));
    bufp->fullBit(oldp+8995,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__27__KET____DOT__bi__DOT____Vcellinp__third1__A));
    bufp->fullBit(oldp+8996,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0x10U] 
                                            >> 0x1bU)))));
    bufp->fullBit(oldp+8997,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__28__KET____DOT__bi__DOT____Vcellinp__third1__B));
    bufp->fullBit(oldp+8998,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__27__KET____DOT__bi__DOT____Vcellinp__third2__C));
    bufp->fullBit(oldp+8999,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xfU] 
                                            >> 0x1bU)))));
    bufp->fullBit(oldp+9000,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__28__KET____DOT__bi__DOT____Vcellinp__fourth1__C));
    bufp->fullBit(oldp+9001,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__27__KET____DOT__bi__DOT____Vcellinp__third2__B));
    bufp->fullBit(oldp+9002,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__28__KET____DOT__bi__DOT____Vcellinp__fourth1__B));
    bufp->fullBit(oldp+9003,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__27__KET____DOT__bi__DOT____Vcellinp__third2__A));
    bufp->fullBit(oldp+9004,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__28__KET____DOT__bi__DOT____Vcellinp__fourth1__A));
    bufp->fullBit(oldp+9005,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__28__KET____DOT__bi__DOT____Vcellinp__fourth2__C));
    bufp->fullIData(oldp+9006,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__28__KET____DOT__bi__InData),17);
    bufp->fullBit(oldp+9007,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__28__KET____DOT__bi__DOT__FifSig) 
                               & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__28__KET____DOT__bi__DOT____Vcellinp__sixth1__B) 
                                  | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__28__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                              | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__28__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0))));
    bufp->fullBit(oldp+9008,((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__28__KET____DOT__bi__DOT__FifSig)) 
                               & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__28__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__28__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                              | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__28__KET____DOT__bi__DOT__FifSig)) 
                                  & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__28__KET____DOT__bi__DOT____Vcellinp__sixth1__C)) 
                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__28__KET____DOT__bi__DOT____Vcellinp__sixth1__B))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__28__KET____DOT__bi__DOT__FifSig) 
                                    & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__28__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                        & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__28__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                       | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__28__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0)))))));
    bufp->fullCData(oldp+9009,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__28__KET____DOT__bi__DOT____Vcellinp__second4__A) 
                                 << 4U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__28__KET____DOT__bi__DOT____Vcellinp__second4__B) 
                                            << 3U) 
                                           | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__28__KET____DOT__bi__DOT____Vcellinp__second4__C) 
                                               << 2U) 
                                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__28__KET____DOT__bi__DOT____Vcellinp__second3__A) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__28__KET____DOT__bi__DOT____Vcellinp__second3__B)))))),5);
    bufp->fullCData(oldp+9010,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__28__KET____DOT__bi__DOT____Vcellinp__third2__A) 
                                 << 3U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__28__KET____DOT__bi__DOT____Vcellinp__third2__B) 
                                            << 2U) 
                                           | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__28__KET____DOT__bi__DOT____Vcellinp__third2__C) 
                                               << 1U) 
                                              | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__28__KET____DOT__bi__DOT____Vcellinp__third1__A))))),4);
    bufp->fullCData(oldp+9011,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__28__KET____DOT__bi__DOT____Vcellinp__fourth2__A) 
                                 << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__28__KET____DOT__bi__DOT____Vcellinp__fourth2__B))),2);
    bufp->fullCData(oldp+9012,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__28__KET____DOT__bi__DOT____Vcellinp__fifth1__A) 
                                 << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__28__KET____DOT__bi__DOT____Vcellinp__fifth1__B))),2);
    bufp->fullBit(oldp+9013,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__28__KET____DOT__bi__DOT__FifSig));
    bufp->fullBit(oldp+9014,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__28__KET____DOT__bi__DOT____Vcellinp__fifth1__A));
    bufp->fullBit(oldp+9015,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__28__KET____DOT__bi__DOT____Vcellinp__fifth1__B));
    bufp->fullBit(oldp+9016,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__29__KET____DOT__bi__DOT____Vcellinp__sixth1__B));
    bufp->fullBit(oldp+9017,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xcU] 
                                            >> 0x1cU)))));
    bufp->fullBit(oldp+9018,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xdU] 
                                            >> 0x1cU)))));
    bufp->fullBit(oldp+9019,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xeU] 
                                            >> 0x1cU)))));
    bufp->fullBit(oldp+9020,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__29__KET____DOT__bi__DOT____Vcellinp__second1__C));
    bufp->fullBit(oldp+9021,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__28__KET____DOT__bi__DOT____Vcellinp__second3__B));
    bufp->fullBit(oldp+9022,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [9U] >> 0x1cU)))));
    bufp->fullBit(oldp+9023,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xaU] 
                                            >> 0x1cU)))));
    bufp->fullBit(oldp+9024,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xbU] 
                                            >> 0x1cU)))));
    bufp->fullBit(oldp+9025,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__29__KET____DOT__bi__DOT____Vcellinp__second1__B));
    bufp->fullBit(oldp+9026,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__28__KET____DOT__bi__DOT____Vcellinp__second3__A));
    bufp->fullBit(oldp+9027,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [6U] >> 0x1cU)))));
    bufp->fullBit(oldp+9028,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [7U] >> 0x1cU)))));
    bufp->fullBit(oldp+9029,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [8U] >> 0x1cU)))));
    bufp->fullBit(oldp+9030,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__29__KET____DOT__bi__DOT____Vcellinp__second1__A));
    bufp->fullBit(oldp+9031,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__28__KET____DOT__bi__DOT____Vcellinp__second4__C));
    bufp->fullBit(oldp+9032,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [3U] >> 0x1cU)))));
    bufp->fullBit(oldp+9033,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [4U] >> 0x1cU)))));
    bufp->fullBit(oldp+9034,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [5U] >> 0x1cU)))));
    bufp->fullBit(oldp+9035,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__29__KET____DOT__bi__DOT____Vcellinp__second2__C));
    bufp->fullBit(oldp+9036,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__28__KET____DOT__bi__DOT____Vcellinp__second4__B));
    bufp->fullBit(oldp+9037,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0U] >> 0x1cU)))));
    bufp->fullBit(oldp+9038,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [1U] >> 0x1cU)))));
    bufp->fullBit(oldp+9039,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [2U] >> 0x1cU)))));
    bufp->fullBit(oldp+9040,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__29__KET____DOT__bi__DOT____Vcellinp__second2__B));
    bufp->fullBit(oldp+9041,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__28__KET____DOT__bi__DOT____Vcellinp__second4__A));
    bufp->fullBit(oldp+9042,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__29__KET____DOT__bi__DOT____Vcellinp__fifth1__C));
    bufp->fullBit(oldp+9043,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__28__KET____DOT__bi__DOT____Vcellinp__fourth2__A));
    bufp->fullBit(oldp+9044,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__28__KET____DOT__bi__DOT____Vcellinp__fourth2__B));
    bufp->fullBit(oldp+9045,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__29__KET____DOT__bi__DOT____Vcellinp__sixth1__C));
    bufp->fullBit(oldp+9046,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__29__KET____DOT__bi__DOT____Vcellinp__third1__C));
    bufp->fullBit(oldp+9047,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__28__KET____DOT__bi__DOT____Vcellinp__third1__A));
    bufp->fullBit(oldp+9048,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0x10U] 
                                            >> 0x1cU)))));
    bufp->fullBit(oldp+9049,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__29__KET____DOT__bi__DOT____Vcellinp__third1__B));
    bufp->fullBit(oldp+9050,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__28__KET____DOT__bi__DOT____Vcellinp__third2__C));
    bufp->fullBit(oldp+9051,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xfU] 
                                            >> 0x1cU)))));
    bufp->fullBit(oldp+9052,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__29__KET____DOT__bi__DOT____Vcellinp__fourth1__C));
    bufp->fullBit(oldp+9053,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__28__KET____DOT__bi__DOT____Vcellinp__third2__B));
    bufp->fullBit(oldp+9054,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__29__KET____DOT__bi__DOT____Vcellinp__fourth1__B));
    bufp->fullBit(oldp+9055,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__28__KET____DOT__bi__DOT____Vcellinp__third2__A));
    bufp->fullBit(oldp+9056,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__29__KET____DOT__bi__DOT____Vcellinp__fourth1__A));
    bufp->fullBit(oldp+9057,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__29__KET____DOT__bi__DOT____Vcellinp__fourth2__C));
    bufp->fullIData(oldp+9058,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__29__KET____DOT__bi__InData),17);
    bufp->fullBit(oldp+9059,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__29__KET____DOT__bi__DOT__FifSig) 
                               & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__29__KET____DOT__bi__DOT____Vcellinp__sixth1__B) 
                                  | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__29__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                              | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__29__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0))));
    bufp->fullBit(oldp+9060,((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__29__KET____DOT__bi__DOT__FifSig)) 
                               & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__29__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__29__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                              | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__29__KET____DOT__bi__DOT__FifSig)) 
                                  & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__29__KET____DOT__bi__DOT____Vcellinp__sixth1__C)) 
                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__29__KET____DOT__bi__DOT____Vcellinp__sixth1__B))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__29__KET____DOT__bi__DOT__FifSig) 
                                    & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__29__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                        & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__29__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                       | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__29__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0)))))));
    bufp->fullCData(oldp+9061,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__29__KET____DOT__bi__DOT____Vcellinp__second4__A) 
                                 << 4U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__29__KET____DOT__bi__DOT____Vcellinp__second4__B) 
                                            << 3U) 
                                           | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__29__KET____DOT__bi__DOT____Vcellinp__second4__C) 
                                               << 2U) 
                                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__29__KET____DOT__bi__DOT____Vcellinp__second3__A) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__29__KET____DOT__bi__DOT____Vcellinp__second3__B)))))),5);
    bufp->fullCData(oldp+9062,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__29__KET____DOT__bi__DOT____Vcellinp__third2__A) 
                                 << 3U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__29__KET____DOT__bi__DOT____Vcellinp__third2__B) 
                                            << 2U) 
                                           | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__29__KET____DOT__bi__DOT____Vcellinp__third2__C) 
                                               << 1U) 
                                              | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__29__KET____DOT__bi__DOT____Vcellinp__third1__A))))),4);
    bufp->fullCData(oldp+9063,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__29__KET____DOT__bi__DOT____Vcellinp__fourth2__A) 
                                 << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__29__KET____DOT__bi__DOT____Vcellinp__fourth2__B))),2);
    bufp->fullCData(oldp+9064,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__29__KET____DOT__bi__DOT____Vcellinp__fifth1__A) 
                                 << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__29__KET____DOT__bi__DOT____Vcellinp__fifth1__B))),2);
    bufp->fullBit(oldp+9065,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__29__KET____DOT__bi__DOT__FifSig));
    bufp->fullBit(oldp+9066,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__29__KET____DOT__bi__DOT____Vcellinp__fifth1__A));
    bufp->fullBit(oldp+9067,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__29__KET____DOT__bi__DOT____Vcellinp__fifth1__B));
    bufp->fullBit(oldp+9068,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__30__KET____DOT__bi__DOT____Vcellinp__sixth1__B));
    bufp->fullBit(oldp+9069,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xcU] 
                                            >> 0x1dU)))));
    bufp->fullBit(oldp+9070,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xdU] 
                                            >> 0x1dU)))));
    bufp->fullBit(oldp+9071,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xeU] 
                                            >> 0x1dU)))));
    bufp->fullBit(oldp+9072,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__30__KET____DOT__bi__DOT____Vcellinp__second1__C));
    bufp->fullBit(oldp+9073,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__29__KET____DOT__bi__DOT____Vcellinp__second3__B));
    bufp->fullBit(oldp+9074,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [9U] >> 0x1dU)))));
    bufp->fullBit(oldp+9075,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xaU] 
                                            >> 0x1dU)))));
    bufp->fullBit(oldp+9076,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xbU] 
                                            >> 0x1dU)))));
    bufp->fullBit(oldp+9077,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__30__KET____DOT__bi__DOT____Vcellinp__second1__B));
    bufp->fullBit(oldp+9078,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__29__KET____DOT__bi__DOT____Vcellinp__second3__A));
    bufp->fullBit(oldp+9079,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [6U] >> 0x1dU)))));
    bufp->fullBit(oldp+9080,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [7U] >> 0x1dU)))));
    bufp->fullBit(oldp+9081,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [8U] >> 0x1dU)))));
    bufp->fullBit(oldp+9082,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__30__KET____DOT__bi__DOT____Vcellinp__second1__A));
    bufp->fullBit(oldp+9083,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__29__KET____DOT__bi__DOT____Vcellinp__second4__C));
    bufp->fullBit(oldp+9084,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [3U] >> 0x1dU)))));
    bufp->fullBit(oldp+9085,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [4U] >> 0x1dU)))));
    bufp->fullBit(oldp+9086,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [5U] >> 0x1dU)))));
    bufp->fullBit(oldp+9087,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__30__KET____DOT__bi__DOT____Vcellinp__second2__C));
    bufp->fullBit(oldp+9088,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__29__KET____DOT__bi__DOT____Vcellinp__second4__B));
    bufp->fullBit(oldp+9089,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0U] >> 0x1dU)))));
    bufp->fullBit(oldp+9090,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [1U] >> 0x1dU)))));
    bufp->fullBit(oldp+9091,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [2U] >> 0x1dU)))));
    bufp->fullBit(oldp+9092,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__30__KET____DOT__bi__DOT____Vcellinp__second2__B));
    bufp->fullBit(oldp+9093,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__29__KET____DOT__bi__DOT____Vcellinp__second4__A));
    bufp->fullBit(oldp+9094,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__30__KET____DOT__bi__DOT____Vcellinp__fifth1__C));
    bufp->fullBit(oldp+9095,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__29__KET____DOT__bi__DOT____Vcellinp__fourth2__A));
    bufp->fullBit(oldp+9096,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__29__KET____DOT__bi__DOT____Vcellinp__fourth2__B));
    bufp->fullBit(oldp+9097,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__30__KET____DOT__bi__DOT____Vcellinp__sixth1__C));
    bufp->fullBit(oldp+9098,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__30__KET____DOT__bi__DOT____Vcellinp__third1__C));
    bufp->fullBit(oldp+9099,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__29__KET____DOT__bi__DOT____Vcellinp__third1__A));
    bufp->fullBit(oldp+9100,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0x10U] 
                                            >> 0x1dU)))));
    bufp->fullBit(oldp+9101,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__30__KET____DOT__bi__DOT____Vcellinp__third1__B));
    bufp->fullBit(oldp+9102,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__29__KET____DOT__bi__DOT____Vcellinp__third2__C));
    bufp->fullBit(oldp+9103,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xfU] 
                                            >> 0x1dU)))));
    bufp->fullBit(oldp+9104,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__30__KET____DOT__bi__DOT____Vcellinp__fourth1__C));
    bufp->fullBit(oldp+9105,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__29__KET____DOT__bi__DOT____Vcellinp__third2__B));
    bufp->fullBit(oldp+9106,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__30__KET____DOT__bi__DOT____Vcellinp__fourth1__B));
    bufp->fullBit(oldp+9107,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__29__KET____DOT__bi__DOT____Vcellinp__third2__A));
    bufp->fullBit(oldp+9108,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__30__KET____DOT__bi__DOT____Vcellinp__fourth1__A));
    bufp->fullBit(oldp+9109,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__30__KET____DOT__bi__DOT____Vcellinp__fourth2__C));
    bufp->fullIData(oldp+9110,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData),17);
    bufp->fullBit(oldp+9111,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__FifSig) 
                               & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT____Vcellinp__sixth1__B) 
                                  | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                              | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0))));
    bufp->fullBit(oldp+9112,((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__FifSig)) 
                               & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                              | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__FifSig)) 
                                  & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT____Vcellinp__sixth1__C)) 
                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT____Vcellinp__sixth1__B))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__FifSig) 
                                    & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                        & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                       | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0)))))));
    bufp->fullCData(oldp+9113,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT____Vcellinp__second4__A) 
                                 << 4U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT____Vcellinp__second4__B) 
                                            << 3U) 
                                           | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT____Vcellinp__second4__C) 
                                               << 2U) 
                                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT____Vcellinp__second3__A) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT____Vcellinp__second3__B)))))),5);
    bufp->fullCData(oldp+9114,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT____Vcellinp__third2__A) 
                                 << 3U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT____Vcellinp__third2__B) 
                                            << 2U) 
                                           | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT____Vcellinp__third2__C) 
                                               << 1U) 
                                              | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT____Vcellinp__third1__A))))),4);
    bufp->fullCData(oldp+9115,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT____Vcellinp__fourth2__A) 
                                 << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT____Vcellinp__fourth2__B))),2);
    bufp->fullCData(oldp+9116,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT____Vcellinp__fifth1__A) 
                                 << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT____Vcellinp__fifth1__B))),2);
    bufp->fullBit(oldp+9117,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__FifSig));
    bufp->fullBit(oldp+9118,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT____Vcellinp__fifth1__A));
    bufp->fullBit(oldp+9119,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT____Vcellinp__fifth1__B));
    bufp->fullBit(oldp+9120,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT____Vcellinp__sixth1__B));
    bufp->fullBit(oldp+9121,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xcU] 
                                            >> 2U)))));
    bufp->fullBit(oldp+9122,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xdU] 
                                            >> 2U)))));
    bufp->fullBit(oldp+9123,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xeU] 
                                            >> 2U)))));
    bufp->fullBit(oldp+9124,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT____Vcellinp__second1__C));
    bufp->fullBit(oldp+9125,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT____Vcellinp__second3__B));
    bufp->fullBit(oldp+9126,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [9U] >> 2U)))));
    bufp->fullBit(oldp+9127,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xaU] 
                                            >> 2U)))));
    bufp->fullBit(oldp+9128,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xbU] 
                                            >> 2U)))));
    bufp->fullBit(oldp+9129,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT____Vcellinp__second1__B));
    bufp->fullBit(oldp+9130,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT____Vcellinp__second3__A));
    bufp->fullBit(oldp+9131,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [6U] >> 2U)))));
    bufp->fullBit(oldp+9132,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [7U] >> 2U)))));
    bufp->fullBit(oldp+9133,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [8U] >> 2U)))));
    bufp->fullBit(oldp+9134,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT____Vcellinp__second1__A));
    bufp->fullBit(oldp+9135,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT____Vcellinp__second4__C));
    bufp->fullBit(oldp+9136,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [3U] >> 2U)))));
    bufp->fullBit(oldp+9137,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [4U] >> 2U)))));
    bufp->fullBit(oldp+9138,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [5U] >> 2U)))));
    bufp->fullBit(oldp+9139,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT____Vcellinp__second2__C));
    bufp->fullBit(oldp+9140,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT____Vcellinp__second4__B));
    bufp->fullBit(oldp+9141,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0U] >> 2U)))));
    bufp->fullBit(oldp+9142,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [1U] >> 2U)))));
    bufp->fullBit(oldp+9143,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [2U] >> 2U)))));
    bufp->fullBit(oldp+9144,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT____Vcellinp__second2__B));
    bufp->fullBit(oldp+9145,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT____Vcellinp__second4__A));
    bufp->fullBit(oldp+9146,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT____Vcellinp__fifth1__C));
    bufp->fullBit(oldp+9147,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT____Vcellinp__fourth2__A));
    bufp->fullBit(oldp+9148,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT____Vcellinp__fourth2__B));
    bufp->fullBit(oldp+9149,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT____Vcellinp__sixth1__C));
    bufp->fullBit(oldp+9150,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT____Vcellinp__third1__C));
    bufp->fullBit(oldp+9151,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT____Vcellinp__third1__A));
    bufp->fullBit(oldp+9152,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0x10U] 
                                            >> 2U)))));
    bufp->fullBit(oldp+9153,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT____Vcellinp__third1__B));
    bufp->fullBit(oldp+9154,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT____Vcellinp__third2__C));
    bufp->fullBit(oldp+9155,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xfU] 
                                            >> 2U)))));
    bufp->fullBit(oldp+9156,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT____Vcellinp__fourth1__C));
    bufp->fullBit(oldp+9157,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT____Vcellinp__third2__B));
    bufp->fullBit(oldp+9158,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT____Vcellinp__fourth1__B));
    bufp->fullBit(oldp+9159,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT____Vcellinp__third2__A));
    bufp->fullBit(oldp+9160,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT____Vcellinp__fourth1__A));
    bufp->fullBit(oldp+9161,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT____Vcellinp__fourth2__C));
    bufp->fullIData(oldp+9162,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__30__KET____DOT__bi__InData),17);
    bufp->fullBit(oldp+9163,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__30__KET____DOT__bi__DOT__FifSig) 
                               & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__30__KET____DOT__bi__DOT____Vcellinp__sixth1__B) 
                                  | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__30__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                              | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__30__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0))));
    bufp->fullBit(oldp+9164,((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__30__KET____DOT__bi__DOT__FifSig)) 
                               & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__30__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__30__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                              | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__30__KET____DOT__bi__DOT__FifSig)) 
                                  & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__30__KET____DOT__bi__DOT____Vcellinp__sixth1__C)) 
                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__30__KET____DOT__bi__DOT____Vcellinp__sixth1__B))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__30__KET____DOT__bi__DOT__FifSig) 
                                    & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__30__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                        & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__30__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                       | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__30__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0)))))));
    bufp->fullCData(oldp+9165,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__30__KET____DOT__bi__DOT____Vcellinp__second4__A) 
                                 << 4U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__30__KET____DOT__bi__DOT____Vcellinp__second4__B) 
                                            << 3U) 
                                           | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__30__KET____DOT__bi__DOT____Vcellinp__second4__C) 
                                               << 2U) 
                                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__30__KET____DOT__bi__DOT____Vcellinp__second3__A) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__30__KET____DOT__bi__DOT____Vcellinp__second3__B)))))),5);
    bufp->fullCData(oldp+9166,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__30__KET____DOT__bi__DOT____Vcellinp__third2__A) 
                                 << 3U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__30__KET____DOT__bi__DOT____Vcellinp__third2__B) 
                                            << 2U) 
                                           | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__30__KET____DOT__bi__DOT____Vcellinp__third2__C) 
                                               << 1U) 
                                              | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__30__KET____DOT__bi__DOT____Vcellinp__third1__A))))),4);
    bufp->fullCData(oldp+9167,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__30__KET____DOT__bi__DOT____Vcellinp__fourth2__A) 
                                 << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__30__KET____DOT__bi__DOT____Vcellinp__fourth2__B))),2);
    bufp->fullCData(oldp+9168,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__30__KET____DOT__bi__DOT____Vcellinp__fifth1__A) 
                                 << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__30__KET____DOT__bi__DOT____Vcellinp__fifth1__B))),2);
    bufp->fullBit(oldp+9169,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__30__KET____DOT__bi__DOT__FifSig));
    bufp->fullBit(oldp+9170,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__30__KET____DOT__bi__DOT____Vcellinp__fifth1__A));
    bufp->fullBit(oldp+9171,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__30__KET____DOT__bi__DOT____Vcellinp__fifth1__B));
    bufp->fullBit(oldp+9172,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__31__KET____DOT__bi__DOT____Vcellinp__sixth1__B));
    bufp->fullBit(oldp+9173,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xcU] 
                                            >> 0x1eU)))));
    bufp->fullBit(oldp+9174,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xdU] 
                                            >> 0x1eU)))));
    bufp->fullBit(oldp+9175,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xeU] 
                                            >> 0x1eU)))));
    bufp->fullBit(oldp+9176,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__31__KET____DOT__bi__DOT____Vcellinp__second1__C));
    bufp->fullBit(oldp+9177,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__30__KET____DOT__bi__DOT____Vcellinp__second3__B));
    bufp->fullBit(oldp+9178,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [9U] >> 0x1eU)))));
    bufp->fullBit(oldp+9179,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xaU] 
                                            >> 0x1eU)))));
    bufp->fullBit(oldp+9180,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xbU] 
                                            >> 0x1eU)))));
    bufp->fullBit(oldp+9181,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__31__KET____DOT__bi__DOT____Vcellinp__second1__B));
    bufp->fullBit(oldp+9182,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__30__KET____DOT__bi__DOT____Vcellinp__second3__A));
    bufp->fullBit(oldp+9183,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [6U] >> 0x1eU)))));
    bufp->fullBit(oldp+9184,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [7U] >> 0x1eU)))));
    bufp->fullBit(oldp+9185,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [8U] >> 0x1eU)))));
    bufp->fullBit(oldp+9186,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__31__KET____DOT__bi__DOT____Vcellinp__second1__A));
    bufp->fullBit(oldp+9187,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__30__KET____DOT__bi__DOT____Vcellinp__second4__C));
    bufp->fullBit(oldp+9188,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [3U] >> 0x1eU)))));
    bufp->fullBit(oldp+9189,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [4U] >> 0x1eU)))));
    bufp->fullBit(oldp+9190,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [5U] >> 0x1eU)))));
    bufp->fullBit(oldp+9191,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__31__KET____DOT__bi__DOT____Vcellinp__second2__C));
    bufp->fullBit(oldp+9192,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__30__KET____DOT__bi__DOT____Vcellinp__second4__B));
    bufp->fullBit(oldp+9193,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0U] >> 0x1eU)))));
    bufp->fullBit(oldp+9194,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [1U] >> 0x1eU)))));
    bufp->fullBit(oldp+9195,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [2U] >> 0x1eU)))));
    bufp->fullBit(oldp+9196,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__31__KET____DOT__bi__DOT____Vcellinp__second2__B));
    bufp->fullBit(oldp+9197,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__30__KET____DOT__bi__DOT____Vcellinp__second4__A));
    bufp->fullBit(oldp+9198,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__31__KET____DOT__bi__DOT____Vcellinp__fifth1__C));
    bufp->fullBit(oldp+9199,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__30__KET____DOT__bi__DOT____Vcellinp__fourth2__A));
    bufp->fullBit(oldp+9200,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__30__KET____DOT__bi__DOT____Vcellinp__fourth2__B));
    bufp->fullBit(oldp+9201,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__31__KET____DOT__bi__DOT____Vcellinp__sixth1__C));
    bufp->fullBit(oldp+9202,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__31__KET____DOT__bi__DOT____Vcellinp__third1__C));
    bufp->fullBit(oldp+9203,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__30__KET____DOT__bi__DOT____Vcellinp__third1__A));
    bufp->fullBit(oldp+9204,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0x10U] 
                                            >> 0x1eU)))));
    bufp->fullBit(oldp+9205,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__31__KET____DOT__bi__DOT____Vcellinp__third1__B));
    bufp->fullBit(oldp+9206,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__30__KET____DOT__bi__DOT____Vcellinp__third2__C));
    bufp->fullBit(oldp+9207,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xfU] 
                                            >> 0x1eU)))));
    bufp->fullBit(oldp+9208,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__31__KET____DOT__bi__DOT____Vcellinp__fourth1__C));
    bufp->fullBit(oldp+9209,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__30__KET____DOT__bi__DOT____Vcellinp__third2__B));
    bufp->fullBit(oldp+9210,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__31__KET____DOT__bi__DOT____Vcellinp__fourth1__B));
    bufp->fullBit(oldp+9211,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__30__KET____DOT__bi__DOT____Vcellinp__third2__A));
    bufp->fullBit(oldp+9212,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__31__KET____DOT__bi__DOT____Vcellinp__fourth1__A));
    bufp->fullBit(oldp+9213,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__31__KET____DOT__bi__DOT____Vcellinp__fourth2__C));
    bufp->fullIData(oldp+9214,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__31__KET____DOT__bi__InData),17);
    bufp->fullBit(oldp+9215,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__31__KET____DOT__bi__DOT__FifSig) 
                               & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__31__KET____DOT__bi__DOT____Vcellinp__sixth1__B) 
                                  | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__31__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                              | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__31__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0))));
    bufp->fullBit(oldp+9216,((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__31__KET____DOT__bi__DOT__FifSig)) 
                               & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__31__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__31__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                              | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__31__KET____DOT__bi__DOT__FifSig)) 
                                  & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__31__KET____DOT__bi__DOT____Vcellinp__sixth1__C)) 
                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__31__KET____DOT__bi__DOT____Vcellinp__sixth1__B))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__31__KET____DOT__bi__DOT__FifSig) 
                                    & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__31__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                        & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__31__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                       | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__31__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0)))))));
    bufp->fullCData(oldp+9217,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__31__KET____DOT__bi__DOT____Vcellinp__second4__A) 
                                 << 4U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__31__KET____DOT__bi__DOT____Vcellinp__second4__B) 
                                            << 3U) 
                                           | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__31__KET____DOT__bi__DOT____Vcellinp__second4__C) 
                                               << 2U) 
                                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__31__KET____DOT__bi__DOT____Vcellinp__second3__A) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__31__KET____DOT__bi__DOT____Vcellinp__second3__B)))))),5);
    bufp->fullCData(oldp+9218,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__31__KET____DOT__bi__DOT____Vcellinp__third2__A) 
                                 << 3U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__31__KET____DOT__bi__DOT____Vcellinp__third2__B) 
                                            << 2U) 
                                           | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__31__KET____DOT__bi__DOT____Vcellinp__third2__C) 
                                               << 1U) 
                                              | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__31__KET____DOT__bi__DOT____Vcellinp__third1__A))))),4);
    bufp->fullCData(oldp+9219,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__31__KET____DOT__bi__DOT____Vcellinp__fourth2__A) 
                                 << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__31__KET____DOT__bi__DOT____Vcellinp__fourth2__B))),2);
    bufp->fullCData(oldp+9220,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__31__KET____DOT__bi__DOT____Vcellinp__fifth1__A) 
                                 << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__31__KET____DOT__bi__DOT____Vcellinp__fifth1__B))),2);
    bufp->fullBit(oldp+9221,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__31__KET____DOT__bi__DOT__FifSig));
    bufp->fullBit(oldp+9222,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__31__KET____DOT__bi__DOT____Vcellinp__fifth1__A));
    bufp->fullBit(oldp+9223,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__31__KET____DOT__bi__DOT____Vcellinp__fifth1__B));
    bufp->fullBit(oldp+9224,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__32__KET____DOT__bi__DOT____Vcellinp__sixth1__B));
    bufp->fullBit(oldp+9225,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xcU] 
                                            >> 0x1fU)))));
    bufp->fullBit(oldp+9226,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xdU] 
                                            >> 0x1fU)))));
    bufp->fullBit(oldp+9227,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xeU] 
                                            >> 0x1fU)))));
    bufp->fullBit(oldp+9228,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__32__KET____DOT__bi__DOT____Vcellinp__second1__C));
    bufp->fullBit(oldp+9229,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__31__KET____DOT__bi__DOT____Vcellinp__second3__B));
    bufp->fullBit(oldp+9230,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [9U] >> 0x1fU)))));
    bufp->fullBit(oldp+9231,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xaU] 
                                            >> 0x1fU)))));
    bufp->fullBit(oldp+9232,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xbU] 
                                            >> 0x1fU)))));
    bufp->fullBit(oldp+9233,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__32__KET____DOT__bi__DOT____Vcellinp__second1__B));
    bufp->fullBit(oldp+9234,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__31__KET____DOT__bi__DOT____Vcellinp__second3__A));
    bufp->fullBit(oldp+9235,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [6U] >> 0x1fU)))));
    bufp->fullBit(oldp+9236,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [7U] >> 0x1fU)))));
    bufp->fullBit(oldp+9237,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [8U] >> 0x1fU)))));
    bufp->fullBit(oldp+9238,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__32__KET____DOT__bi__DOT____Vcellinp__second1__A));
    bufp->fullBit(oldp+9239,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__31__KET____DOT__bi__DOT____Vcellinp__second4__C));
    bufp->fullBit(oldp+9240,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [3U] >> 0x1fU)))));
    bufp->fullBit(oldp+9241,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [4U] >> 0x1fU)))));
    bufp->fullBit(oldp+9242,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [5U] >> 0x1fU)))));
    bufp->fullBit(oldp+9243,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__32__KET____DOT__bi__DOT____Vcellinp__second2__C));
    bufp->fullBit(oldp+9244,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__31__KET____DOT__bi__DOT____Vcellinp__second4__B));
    bufp->fullBit(oldp+9245,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0U] >> 0x1fU)))));
    bufp->fullBit(oldp+9246,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [1U] >> 0x1fU)))));
    bufp->fullBit(oldp+9247,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [2U] >> 0x1fU)))));
    bufp->fullBit(oldp+9248,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__32__KET____DOT__bi__DOT____Vcellinp__second2__B));
    bufp->fullBit(oldp+9249,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__31__KET____DOT__bi__DOT____Vcellinp__second4__A));
    bufp->fullBit(oldp+9250,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__32__KET____DOT__bi__DOT____Vcellinp__fifth1__C));
    bufp->fullBit(oldp+9251,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__31__KET____DOT__bi__DOT____Vcellinp__fourth2__A));
    bufp->fullBit(oldp+9252,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__31__KET____DOT__bi__DOT____Vcellinp__fourth2__B));
    bufp->fullBit(oldp+9253,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__32__KET____DOT__bi__DOT____Vcellinp__sixth1__C));
    bufp->fullBit(oldp+9254,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__32__KET____DOT__bi__DOT____Vcellinp__third1__C));
    bufp->fullBit(oldp+9255,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__31__KET____DOT__bi__DOT____Vcellinp__third1__A));
    bufp->fullBit(oldp+9256,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0x10U] 
                                            >> 0x1fU)))));
    bufp->fullBit(oldp+9257,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__32__KET____DOT__bi__DOT____Vcellinp__third1__B));
    bufp->fullBit(oldp+9258,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__31__KET____DOT__bi__DOT____Vcellinp__third2__C));
    bufp->fullBit(oldp+9259,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xfU] 
                                            >> 0x1fU)))));
    bufp->fullBit(oldp+9260,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__32__KET____DOT__bi__DOT____Vcellinp__fourth1__C));
    bufp->fullBit(oldp+9261,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__31__KET____DOT__bi__DOT____Vcellinp__third2__B));
    bufp->fullBit(oldp+9262,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__32__KET____DOT__bi__DOT____Vcellinp__fourth1__B));
    bufp->fullBit(oldp+9263,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__31__KET____DOT__bi__DOT____Vcellinp__third2__A));
    bufp->fullBit(oldp+9264,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__32__KET____DOT__bi__DOT____Vcellinp__fourth1__A));
    bufp->fullBit(oldp+9265,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__32__KET____DOT__bi__DOT____Vcellinp__fourth2__C));
    bufp->fullIData(oldp+9266,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__32__KET____DOT__bi__InData),17);
    bufp->fullBit(oldp+9267,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__32__KET____DOT__bi__DOT__FifSig) 
                               & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__32__KET____DOT__bi__DOT____Vcellinp__sixth1__B) 
                                  | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__32__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                              | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__32__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0))));
    bufp->fullBit(oldp+9268,((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__32__KET____DOT__bi__DOT__FifSig)) 
                               & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__32__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__32__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                              | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__32__KET____DOT__bi__DOT__FifSig)) 
                                  & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__32__KET____DOT__bi__DOT____Vcellinp__sixth1__C)) 
                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__32__KET____DOT__bi__DOT____Vcellinp__sixth1__B))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__32__KET____DOT__bi__DOT__FifSig) 
                                    & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__32__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                        & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__32__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                       | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__32__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0)))))));
    bufp->fullCData(oldp+9269,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__32__KET____DOT__bi__DOT____Vcellinp__second4__A) 
                                 << 4U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__32__KET____DOT__bi__DOT____Vcellinp__second4__B) 
                                            << 3U) 
                                           | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__32__KET____DOT__bi__DOT____Vcellinp__second4__C) 
                                               << 2U) 
                                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__32__KET____DOT__bi__DOT____Vcellinp__second3__A) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__32__KET____DOT__bi__DOT____Vcellinp__second3__B)))))),5);
    bufp->fullCData(oldp+9270,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__32__KET____DOT__bi__DOT____Vcellinp__third2__A) 
                                 << 3U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__32__KET____DOT__bi__DOT____Vcellinp__third2__B) 
                                            << 2U) 
                                           | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__32__KET____DOT__bi__DOT____Vcellinp__third2__C) 
                                               << 1U) 
                                              | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__32__KET____DOT__bi__DOT____Vcellinp__third1__A))))),4);
    bufp->fullCData(oldp+9271,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__32__KET____DOT__bi__DOT____Vcellinp__fourth2__A) 
                                 << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__32__KET____DOT__bi__DOT____Vcellinp__fourth2__B))),2);
    bufp->fullCData(oldp+9272,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__32__KET____DOT__bi__DOT____Vcellinp__fifth1__A) 
                                 << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__32__KET____DOT__bi__DOT____Vcellinp__fifth1__B))),2);
    bufp->fullBit(oldp+9273,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__32__KET____DOT__bi__DOT__FifSig));
    bufp->fullBit(oldp+9274,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__32__KET____DOT__bi__DOT____Vcellinp__fifth1__A));
    bufp->fullBit(oldp+9275,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__32__KET____DOT__bi__DOT____Vcellinp__fifth1__B));
    bufp->fullBit(oldp+9276,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__33__KET____DOT__bi__DOT____Vcellinp__sixth1__B));
    bufp->fullBit(oldp+9277,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xcU] 
                                            >> 0x20U)))));
    bufp->fullBit(oldp+9278,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xdU] 
                                            >> 0x20U)))));
    bufp->fullBit(oldp+9279,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xeU] 
                                            >> 0x20U)))));
    bufp->fullBit(oldp+9280,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__33__KET____DOT__bi__DOT____Vcellinp__second1__C));
    bufp->fullBit(oldp+9281,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__32__KET____DOT__bi__DOT____Vcellinp__second3__B));
    bufp->fullBit(oldp+9282,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [9U] >> 0x20U)))));
    bufp->fullBit(oldp+9283,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xaU] 
                                            >> 0x20U)))));
    bufp->fullBit(oldp+9284,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xbU] 
                                            >> 0x20U)))));
    bufp->fullBit(oldp+9285,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__33__KET____DOT__bi__DOT____Vcellinp__second1__B));
    bufp->fullBit(oldp+9286,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__32__KET____DOT__bi__DOT____Vcellinp__second3__A));
    bufp->fullBit(oldp+9287,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [6U] >> 0x20U)))));
    bufp->fullBit(oldp+9288,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [7U] >> 0x20U)))));
    bufp->fullBit(oldp+9289,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [8U] >> 0x20U)))));
    bufp->fullBit(oldp+9290,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__33__KET____DOT__bi__DOT____Vcellinp__second1__A));
    bufp->fullBit(oldp+9291,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__32__KET____DOT__bi__DOT____Vcellinp__second4__C));
    bufp->fullBit(oldp+9292,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [3U] >> 0x20U)))));
    bufp->fullBit(oldp+9293,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [4U] >> 0x20U)))));
    bufp->fullBit(oldp+9294,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [5U] >> 0x20U)))));
    bufp->fullBit(oldp+9295,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__33__KET____DOT__bi__DOT____Vcellinp__second2__C));
    bufp->fullBit(oldp+9296,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__32__KET____DOT__bi__DOT____Vcellinp__second4__B));
    bufp->fullBit(oldp+9297,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0U] >> 0x20U)))));
    bufp->fullBit(oldp+9298,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [1U] >> 0x20U)))));
    bufp->fullBit(oldp+9299,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [2U] >> 0x20U)))));
    bufp->fullBit(oldp+9300,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__33__KET____DOT__bi__DOT____Vcellinp__second2__B));
    bufp->fullBit(oldp+9301,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__32__KET____DOT__bi__DOT____Vcellinp__second4__A));
    bufp->fullBit(oldp+9302,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__33__KET____DOT__bi__DOT____Vcellinp__fifth1__C));
    bufp->fullBit(oldp+9303,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__32__KET____DOT__bi__DOT____Vcellinp__fourth2__A));
    bufp->fullBit(oldp+9304,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__32__KET____DOT__bi__DOT____Vcellinp__fourth2__B));
    bufp->fullBit(oldp+9305,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__33__KET____DOT__bi__DOT____Vcellinp__sixth1__C));
    bufp->fullBit(oldp+9306,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__33__KET____DOT__bi__DOT____Vcellinp__third1__C));
    bufp->fullBit(oldp+9307,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__32__KET____DOT__bi__DOT____Vcellinp__third1__A));
    bufp->fullBit(oldp+9308,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0x10U] 
                                            >> 0x20U)))));
    bufp->fullBit(oldp+9309,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__33__KET____DOT__bi__DOT____Vcellinp__third1__B));
    bufp->fullBit(oldp+9310,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__32__KET____DOT__bi__DOT____Vcellinp__third2__C));
    bufp->fullBit(oldp+9311,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xfU] 
                                            >> 0x20U)))));
    bufp->fullBit(oldp+9312,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__33__KET____DOT__bi__DOT____Vcellinp__fourth1__C));
    bufp->fullBit(oldp+9313,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__32__KET____DOT__bi__DOT____Vcellinp__third2__B));
    bufp->fullBit(oldp+9314,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__33__KET____DOT__bi__DOT____Vcellinp__fourth1__B));
    bufp->fullBit(oldp+9315,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__32__KET____DOT__bi__DOT____Vcellinp__third2__A));
    bufp->fullBit(oldp+9316,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__33__KET____DOT__bi__DOT____Vcellinp__fourth1__A));
    bufp->fullBit(oldp+9317,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__33__KET____DOT__bi__DOT____Vcellinp__fourth2__C));
    bufp->fullIData(oldp+9318,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__33__KET____DOT__bi__InData),17);
    bufp->fullBit(oldp+9319,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__33__KET____DOT__bi__DOT__FifSig) 
                               & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__33__KET____DOT__bi__DOT____Vcellinp__sixth1__B) 
                                  | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__33__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                              | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__33__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0))));
    bufp->fullBit(oldp+9320,((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__33__KET____DOT__bi__DOT__FifSig)) 
                               & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__33__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__33__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                              | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__33__KET____DOT__bi__DOT__FifSig)) 
                                  & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__33__KET____DOT__bi__DOT____Vcellinp__sixth1__C)) 
                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__33__KET____DOT__bi__DOT____Vcellinp__sixth1__B))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__33__KET____DOT__bi__DOT__FifSig) 
                                    & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__33__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                        & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__33__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                       | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__33__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0)))))));
    bufp->fullCData(oldp+9321,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__33__KET____DOT__bi__DOT____Vcellinp__second4__A) 
                                 << 4U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__33__KET____DOT__bi__DOT____Vcellinp__second4__B) 
                                            << 3U) 
                                           | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__33__KET____DOT__bi__DOT____Vcellinp__second4__C) 
                                               << 2U) 
                                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__33__KET____DOT__bi__DOT____Vcellinp__second3__A) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__33__KET____DOT__bi__DOT____Vcellinp__second3__B)))))),5);
    bufp->fullCData(oldp+9322,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__33__KET____DOT__bi__DOT____Vcellinp__third2__A) 
                                 << 3U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__33__KET____DOT__bi__DOT____Vcellinp__third2__B) 
                                            << 2U) 
                                           | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__33__KET____DOT__bi__DOT____Vcellinp__third2__C) 
                                               << 1U) 
                                              | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__33__KET____DOT__bi__DOT____Vcellinp__third1__A))))),4);
    bufp->fullCData(oldp+9323,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__33__KET____DOT__bi__DOT____Vcellinp__fourth2__A) 
                                 << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__33__KET____DOT__bi__DOT____Vcellinp__fourth2__B))),2);
    bufp->fullCData(oldp+9324,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__33__KET____DOT__bi__DOT____Vcellinp__fifth1__A) 
                                 << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__33__KET____DOT__bi__DOT____Vcellinp__fifth1__B))),2);
    bufp->fullBit(oldp+9325,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__33__KET____DOT__bi__DOT__FifSig));
    bufp->fullBit(oldp+9326,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__33__KET____DOT__bi__DOT____Vcellinp__fifth1__A));
    bufp->fullBit(oldp+9327,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__33__KET____DOT__bi__DOT____Vcellinp__fifth1__B));
    bufp->fullBit(oldp+9328,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__34__KET____DOT__bi__DOT____Vcellinp__sixth1__B));
    bufp->fullBit(oldp+9329,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xcU] 
                                            >> 0x21U)))));
    bufp->fullBit(oldp+9330,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xdU] 
                                            >> 0x21U)))));
    bufp->fullBit(oldp+9331,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xeU] 
                                            >> 0x21U)))));
    bufp->fullBit(oldp+9332,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__34__KET____DOT__bi__DOT____Vcellinp__second1__C));
    bufp->fullBit(oldp+9333,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__33__KET____DOT__bi__DOT____Vcellinp__second3__B));
    bufp->fullBit(oldp+9334,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [9U] >> 0x21U)))));
    bufp->fullBit(oldp+9335,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xaU] 
                                            >> 0x21U)))));
    bufp->fullBit(oldp+9336,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xbU] 
                                            >> 0x21U)))));
    bufp->fullBit(oldp+9337,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__34__KET____DOT__bi__DOT____Vcellinp__second1__B));
    bufp->fullBit(oldp+9338,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__33__KET____DOT__bi__DOT____Vcellinp__second3__A));
    bufp->fullBit(oldp+9339,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [6U] >> 0x21U)))));
    bufp->fullBit(oldp+9340,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [7U] >> 0x21U)))));
    bufp->fullBit(oldp+9341,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [8U] >> 0x21U)))));
    bufp->fullBit(oldp+9342,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__34__KET____DOT__bi__DOT____Vcellinp__second1__A));
    bufp->fullBit(oldp+9343,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__33__KET____DOT__bi__DOT____Vcellinp__second4__C));
    bufp->fullBit(oldp+9344,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [3U] >> 0x21U)))));
    bufp->fullBit(oldp+9345,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [4U] >> 0x21U)))));
    bufp->fullBit(oldp+9346,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [5U] >> 0x21U)))));
    bufp->fullBit(oldp+9347,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__34__KET____DOT__bi__DOT____Vcellinp__second2__C));
    bufp->fullBit(oldp+9348,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__33__KET____DOT__bi__DOT____Vcellinp__second4__B));
    bufp->fullBit(oldp+9349,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0U] >> 0x21U)))));
    bufp->fullBit(oldp+9350,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [1U] >> 0x21U)))));
    bufp->fullBit(oldp+9351,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [2U] >> 0x21U)))));
    bufp->fullBit(oldp+9352,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__34__KET____DOT__bi__DOT____Vcellinp__second2__B));
    bufp->fullBit(oldp+9353,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__33__KET____DOT__bi__DOT____Vcellinp__second4__A));
    bufp->fullBit(oldp+9354,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__34__KET____DOT__bi__DOT____Vcellinp__fifth1__C));
    bufp->fullBit(oldp+9355,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__33__KET____DOT__bi__DOT____Vcellinp__fourth2__A));
    bufp->fullBit(oldp+9356,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__33__KET____DOT__bi__DOT____Vcellinp__fourth2__B));
    bufp->fullBit(oldp+9357,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__34__KET____DOT__bi__DOT____Vcellinp__sixth1__C));
    bufp->fullBit(oldp+9358,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__34__KET____DOT__bi__DOT____Vcellinp__third1__C));
    bufp->fullBit(oldp+9359,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__33__KET____DOT__bi__DOT____Vcellinp__third1__A));
    bufp->fullBit(oldp+9360,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0x10U] 
                                            >> 0x21U)))));
    bufp->fullBit(oldp+9361,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__34__KET____DOT__bi__DOT____Vcellinp__third1__B));
    bufp->fullBit(oldp+9362,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__33__KET____DOT__bi__DOT____Vcellinp__third2__C));
    bufp->fullBit(oldp+9363,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xfU] 
                                            >> 0x21U)))));
    bufp->fullBit(oldp+9364,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__34__KET____DOT__bi__DOT____Vcellinp__fourth1__C));
    bufp->fullBit(oldp+9365,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__33__KET____DOT__bi__DOT____Vcellinp__third2__B));
    bufp->fullBit(oldp+9366,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__34__KET____DOT__bi__DOT____Vcellinp__fourth1__B));
    bufp->fullBit(oldp+9367,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__33__KET____DOT__bi__DOT____Vcellinp__third2__A));
    bufp->fullBit(oldp+9368,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__34__KET____DOT__bi__DOT____Vcellinp__fourth1__A));
    bufp->fullBit(oldp+9369,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__34__KET____DOT__bi__DOT____Vcellinp__fourth2__C));
    bufp->fullIData(oldp+9370,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__34__KET____DOT__bi__InData),17);
    bufp->fullBit(oldp+9371,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__34__KET____DOT__bi__DOT__FifSig) 
                               & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__34__KET____DOT__bi__DOT____Vcellinp__sixth1__B) 
                                  | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__34__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                              | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__34__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0))));
    bufp->fullBit(oldp+9372,((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__34__KET____DOT__bi__DOT__FifSig)) 
                               & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__34__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__34__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                              | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__34__KET____DOT__bi__DOT__FifSig)) 
                                  & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__34__KET____DOT__bi__DOT____Vcellinp__sixth1__C)) 
                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__34__KET____DOT__bi__DOT____Vcellinp__sixth1__B))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__34__KET____DOT__bi__DOT__FifSig) 
                                    & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__34__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                        & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__34__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                       | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__34__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0)))))));
    bufp->fullCData(oldp+9373,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__34__KET____DOT__bi__DOT____Vcellinp__second4__A) 
                                 << 4U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__34__KET____DOT__bi__DOT____Vcellinp__second4__B) 
                                            << 3U) 
                                           | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__34__KET____DOT__bi__DOT____Vcellinp__second4__C) 
                                               << 2U) 
                                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__34__KET____DOT__bi__DOT____Vcellinp__second3__A) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__34__KET____DOT__bi__DOT____Vcellinp__second3__B)))))),5);
    bufp->fullCData(oldp+9374,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__34__KET____DOT__bi__DOT____Vcellinp__third2__A) 
                                 << 3U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__34__KET____DOT__bi__DOT____Vcellinp__third2__B) 
                                            << 2U) 
                                           | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__34__KET____DOT__bi__DOT____Vcellinp__third2__C) 
                                               << 1U) 
                                              | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__34__KET____DOT__bi__DOT____Vcellinp__third1__A))))),4);
    bufp->fullCData(oldp+9375,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__34__KET____DOT__bi__DOT____Vcellinp__fourth2__A) 
                                 << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__34__KET____DOT__bi__DOT____Vcellinp__fourth2__B))),2);
    bufp->fullCData(oldp+9376,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__34__KET____DOT__bi__DOT____Vcellinp__fifth1__A) 
                                 << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__34__KET____DOT__bi__DOT____Vcellinp__fifth1__B))),2);
    bufp->fullBit(oldp+9377,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__34__KET____DOT__bi__DOT__FifSig));
    bufp->fullBit(oldp+9378,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__34__KET____DOT__bi__DOT____Vcellinp__fifth1__A));
    bufp->fullBit(oldp+9379,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__34__KET____DOT__bi__DOT____Vcellinp__fifth1__B));
    bufp->fullBit(oldp+9380,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__35__KET____DOT__bi__DOT____Vcellinp__sixth1__B));
    bufp->fullBit(oldp+9381,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xcU] 
                                            >> 0x22U)))));
    bufp->fullBit(oldp+9382,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xdU] 
                                            >> 0x22U)))));
    bufp->fullBit(oldp+9383,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xeU] 
                                            >> 0x22U)))));
    bufp->fullBit(oldp+9384,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__35__KET____DOT__bi__DOT____Vcellinp__second1__C));
    bufp->fullBit(oldp+9385,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__34__KET____DOT__bi__DOT____Vcellinp__second3__B));
    bufp->fullBit(oldp+9386,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [9U] >> 0x22U)))));
    bufp->fullBit(oldp+9387,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xaU] 
                                            >> 0x22U)))));
    bufp->fullBit(oldp+9388,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xbU] 
                                            >> 0x22U)))));
    bufp->fullBit(oldp+9389,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__35__KET____DOT__bi__DOT____Vcellinp__second1__B));
    bufp->fullBit(oldp+9390,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__34__KET____DOT__bi__DOT____Vcellinp__second3__A));
    bufp->fullBit(oldp+9391,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [6U] >> 0x22U)))));
    bufp->fullBit(oldp+9392,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [7U] >> 0x22U)))));
    bufp->fullBit(oldp+9393,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [8U] >> 0x22U)))));
    bufp->fullBit(oldp+9394,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__35__KET____DOT__bi__DOT____Vcellinp__second1__A));
    bufp->fullBit(oldp+9395,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__34__KET____DOT__bi__DOT____Vcellinp__second4__C));
    bufp->fullBit(oldp+9396,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [3U] >> 0x22U)))));
    bufp->fullBit(oldp+9397,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [4U] >> 0x22U)))));
    bufp->fullBit(oldp+9398,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [5U] >> 0x22U)))));
    bufp->fullBit(oldp+9399,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__35__KET____DOT__bi__DOT____Vcellinp__second2__C));
    bufp->fullBit(oldp+9400,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__34__KET____DOT__bi__DOT____Vcellinp__second4__B));
    bufp->fullBit(oldp+9401,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0U] >> 0x22U)))));
    bufp->fullBit(oldp+9402,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [1U] >> 0x22U)))));
    bufp->fullBit(oldp+9403,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [2U] >> 0x22U)))));
    bufp->fullBit(oldp+9404,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__35__KET____DOT__bi__DOT____Vcellinp__second2__B));
    bufp->fullBit(oldp+9405,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__34__KET____DOT__bi__DOT____Vcellinp__second4__A));
    bufp->fullBit(oldp+9406,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__35__KET____DOT__bi__DOT____Vcellinp__fifth1__C));
    bufp->fullBit(oldp+9407,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__34__KET____DOT__bi__DOT____Vcellinp__fourth2__A));
    bufp->fullBit(oldp+9408,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__34__KET____DOT__bi__DOT____Vcellinp__fourth2__B));
    bufp->fullBit(oldp+9409,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__35__KET____DOT__bi__DOT____Vcellinp__sixth1__C));
    bufp->fullBit(oldp+9410,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__35__KET____DOT__bi__DOT____Vcellinp__third1__C));
    bufp->fullBit(oldp+9411,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__34__KET____DOT__bi__DOT____Vcellinp__third1__A));
    bufp->fullBit(oldp+9412,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0x10U] 
                                            >> 0x22U)))));
    bufp->fullBit(oldp+9413,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__35__KET____DOT__bi__DOT____Vcellinp__third1__B));
    bufp->fullBit(oldp+9414,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__34__KET____DOT__bi__DOT____Vcellinp__third2__C));
    bufp->fullBit(oldp+9415,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xfU] 
                                            >> 0x22U)))));
    bufp->fullBit(oldp+9416,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__35__KET____DOT__bi__DOT____Vcellinp__fourth1__C));
    bufp->fullBit(oldp+9417,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__34__KET____DOT__bi__DOT____Vcellinp__third2__B));
    bufp->fullBit(oldp+9418,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__35__KET____DOT__bi__DOT____Vcellinp__fourth1__B));
    bufp->fullBit(oldp+9419,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__34__KET____DOT__bi__DOT____Vcellinp__third2__A));
    bufp->fullBit(oldp+9420,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__35__KET____DOT__bi__DOT____Vcellinp__fourth1__A));
    bufp->fullBit(oldp+9421,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__35__KET____DOT__bi__DOT____Vcellinp__fourth2__C));
    bufp->fullIData(oldp+9422,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__35__KET____DOT__bi__InData),17);
    bufp->fullBit(oldp+9423,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__35__KET____DOT__bi__DOT__FifSig) 
                               & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__35__KET____DOT__bi__DOT____Vcellinp__sixth1__B) 
                                  | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__35__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                              | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__35__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0))));
    bufp->fullBit(oldp+9424,((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__35__KET____DOT__bi__DOT__FifSig)) 
                               & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__35__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__35__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                              | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__35__KET____DOT__bi__DOT__FifSig)) 
                                  & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__35__KET____DOT__bi__DOT____Vcellinp__sixth1__C)) 
                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__35__KET____DOT__bi__DOT____Vcellinp__sixth1__B))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__35__KET____DOT__bi__DOT__FifSig) 
                                    & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__35__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                        & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__35__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                       | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__35__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0)))))));
    bufp->fullCData(oldp+9425,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__35__KET____DOT__bi__DOT____Vcellinp__second4__A) 
                                 << 4U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__35__KET____DOT__bi__DOT____Vcellinp__second4__B) 
                                            << 3U) 
                                           | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__35__KET____DOT__bi__DOT____Vcellinp__second4__C) 
                                               << 2U) 
                                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__35__KET____DOT__bi__DOT____Vcellinp__second3__A) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__35__KET____DOT__bi__DOT____Vcellinp__second3__B)))))),5);
    bufp->fullCData(oldp+9426,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__35__KET____DOT__bi__DOT____Vcellinp__third2__A) 
                                 << 3U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__35__KET____DOT__bi__DOT____Vcellinp__third2__B) 
                                            << 2U) 
                                           | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__35__KET____DOT__bi__DOT____Vcellinp__third2__C) 
                                               << 1U) 
                                              | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__35__KET____DOT__bi__DOT____Vcellinp__third1__A))))),4);
    bufp->fullCData(oldp+9427,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__35__KET____DOT__bi__DOT____Vcellinp__fourth2__A) 
                                 << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__35__KET____DOT__bi__DOT____Vcellinp__fourth2__B))),2);
    bufp->fullCData(oldp+9428,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__35__KET____DOT__bi__DOT____Vcellinp__fifth1__A) 
                                 << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__35__KET____DOT__bi__DOT____Vcellinp__fifth1__B))),2);
    bufp->fullBit(oldp+9429,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__35__KET____DOT__bi__DOT__FifSig));
    bufp->fullBit(oldp+9430,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__35__KET____DOT__bi__DOT____Vcellinp__fifth1__A));
    bufp->fullBit(oldp+9431,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__35__KET____DOT__bi__DOT____Vcellinp__fifth1__B));
    bufp->fullBit(oldp+9432,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__36__KET____DOT__bi__DOT____Vcellinp__sixth1__B));
    bufp->fullBit(oldp+9433,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xcU] 
                                            >> 0x23U)))));
    bufp->fullBit(oldp+9434,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xdU] 
                                            >> 0x23U)))));
    bufp->fullBit(oldp+9435,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xeU] 
                                            >> 0x23U)))));
    bufp->fullBit(oldp+9436,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__36__KET____DOT__bi__DOT____Vcellinp__second1__C));
    bufp->fullBit(oldp+9437,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__35__KET____DOT__bi__DOT____Vcellinp__second3__B));
    bufp->fullBit(oldp+9438,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [9U] >> 0x23U)))));
    bufp->fullBit(oldp+9439,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xaU] 
                                            >> 0x23U)))));
    bufp->fullBit(oldp+9440,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xbU] 
                                            >> 0x23U)))));
    bufp->fullBit(oldp+9441,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__36__KET____DOT__bi__DOT____Vcellinp__second1__B));
    bufp->fullBit(oldp+9442,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__35__KET____DOT__bi__DOT____Vcellinp__second3__A));
    bufp->fullBit(oldp+9443,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [6U] >> 0x23U)))));
    bufp->fullBit(oldp+9444,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [7U] >> 0x23U)))));
    bufp->fullBit(oldp+9445,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [8U] >> 0x23U)))));
    bufp->fullBit(oldp+9446,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__36__KET____DOT__bi__DOT____Vcellinp__second1__A));
    bufp->fullBit(oldp+9447,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__35__KET____DOT__bi__DOT____Vcellinp__second4__C));
    bufp->fullBit(oldp+9448,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [3U] >> 0x23U)))));
    bufp->fullBit(oldp+9449,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [4U] >> 0x23U)))));
    bufp->fullBit(oldp+9450,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [5U] >> 0x23U)))));
    bufp->fullBit(oldp+9451,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__36__KET____DOT__bi__DOT____Vcellinp__second2__C));
    bufp->fullBit(oldp+9452,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__35__KET____DOT__bi__DOT____Vcellinp__second4__B));
    bufp->fullBit(oldp+9453,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0U] >> 0x23U)))));
    bufp->fullBit(oldp+9454,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [1U] >> 0x23U)))));
    bufp->fullBit(oldp+9455,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [2U] >> 0x23U)))));
    bufp->fullBit(oldp+9456,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__36__KET____DOT__bi__DOT____Vcellinp__second2__B));
    bufp->fullBit(oldp+9457,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__35__KET____DOT__bi__DOT____Vcellinp__second4__A));
    bufp->fullBit(oldp+9458,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__36__KET____DOT__bi__DOT____Vcellinp__fifth1__C));
    bufp->fullBit(oldp+9459,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__35__KET____DOT__bi__DOT____Vcellinp__fourth2__A));
    bufp->fullBit(oldp+9460,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__35__KET____DOT__bi__DOT____Vcellinp__fourth2__B));
    bufp->fullBit(oldp+9461,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__36__KET____DOT__bi__DOT____Vcellinp__sixth1__C));
    bufp->fullBit(oldp+9462,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__36__KET____DOT__bi__DOT____Vcellinp__third1__C));
    bufp->fullBit(oldp+9463,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__35__KET____DOT__bi__DOT____Vcellinp__third1__A));
    bufp->fullBit(oldp+9464,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0x10U] 
                                            >> 0x23U)))));
    bufp->fullBit(oldp+9465,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__36__KET____DOT__bi__DOT____Vcellinp__third1__B));
    bufp->fullBit(oldp+9466,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__35__KET____DOT__bi__DOT____Vcellinp__third2__C));
    bufp->fullBit(oldp+9467,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xfU] 
                                            >> 0x23U)))));
    bufp->fullBit(oldp+9468,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__36__KET____DOT__bi__DOT____Vcellinp__fourth1__C));
    bufp->fullBit(oldp+9469,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__35__KET____DOT__bi__DOT____Vcellinp__third2__B));
    bufp->fullBit(oldp+9470,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__36__KET____DOT__bi__DOT____Vcellinp__fourth1__B));
    bufp->fullBit(oldp+9471,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__35__KET____DOT__bi__DOT____Vcellinp__third2__A));
    bufp->fullBit(oldp+9472,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__36__KET____DOT__bi__DOT____Vcellinp__fourth1__A));
    bufp->fullBit(oldp+9473,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__36__KET____DOT__bi__DOT____Vcellinp__fourth2__C));
    bufp->fullIData(oldp+9474,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__36__KET____DOT__bi__InData),17);
    bufp->fullBit(oldp+9475,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__36__KET____DOT__bi__DOT__FifSig) 
                               & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__36__KET____DOT__bi__DOT____Vcellinp__sixth1__B) 
                                  | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__36__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                              | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__36__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0))));
    bufp->fullBit(oldp+9476,((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__36__KET____DOT__bi__DOT__FifSig)) 
                               & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__36__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__36__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                              | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__36__KET____DOT__bi__DOT__FifSig)) 
                                  & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__36__KET____DOT__bi__DOT____Vcellinp__sixth1__C)) 
                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__36__KET____DOT__bi__DOT____Vcellinp__sixth1__B))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__36__KET____DOT__bi__DOT__FifSig) 
                                    & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__36__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                        & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__36__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                       | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__36__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0)))))));
    bufp->fullCData(oldp+9477,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__36__KET____DOT__bi__DOT____Vcellinp__second4__A) 
                                 << 4U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__36__KET____DOT__bi__DOT____Vcellinp__second4__B) 
                                            << 3U) 
                                           | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__36__KET____DOT__bi__DOT____Vcellinp__second4__C) 
                                               << 2U) 
                                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__36__KET____DOT__bi__DOT____Vcellinp__second3__A) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__36__KET____DOT__bi__DOT____Vcellinp__second3__B)))))),5);
    bufp->fullCData(oldp+9478,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__36__KET____DOT__bi__DOT____Vcellinp__third2__A) 
                                 << 3U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__36__KET____DOT__bi__DOT____Vcellinp__third2__B) 
                                            << 2U) 
                                           | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__36__KET____DOT__bi__DOT____Vcellinp__third2__C) 
                                               << 1U) 
                                              | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__36__KET____DOT__bi__DOT____Vcellinp__third1__A))))),4);
    bufp->fullCData(oldp+9479,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__36__KET____DOT__bi__DOT____Vcellinp__fourth2__A) 
                                 << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__36__KET____DOT__bi__DOT____Vcellinp__fourth2__B))),2);
    bufp->fullCData(oldp+9480,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__36__KET____DOT__bi__DOT____Vcellinp__fifth1__A) 
                                 << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__36__KET____DOT__bi__DOT____Vcellinp__fifth1__B))),2);
    bufp->fullBit(oldp+9481,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__36__KET____DOT__bi__DOT__FifSig));
    bufp->fullBit(oldp+9482,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__36__KET____DOT__bi__DOT____Vcellinp__fifth1__A));
    bufp->fullBit(oldp+9483,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__36__KET____DOT__bi__DOT____Vcellinp__fifth1__B));
    bufp->fullBit(oldp+9484,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__37__KET____DOT__bi__DOT____Vcellinp__sixth1__B));
    bufp->fullBit(oldp+9485,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xcU] 
                                            >> 0x24U)))));
    bufp->fullBit(oldp+9486,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xdU] 
                                            >> 0x24U)))));
    bufp->fullBit(oldp+9487,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xeU] 
                                            >> 0x24U)))));
    bufp->fullBit(oldp+9488,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__37__KET____DOT__bi__DOT____Vcellinp__second1__C));
    bufp->fullBit(oldp+9489,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__36__KET____DOT__bi__DOT____Vcellinp__second3__B));
    bufp->fullBit(oldp+9490,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [9U] >> 0x24U)))));
    bufp->fullBit(oldp+9491,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xaU] 
                                            >> 0x24U)))));
    bufp->fullBit(oldp+9492,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xbU] 
                                            >> 0x24U)))));
    bufp->fullBit(oldp+9493,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__37__KET____DOT__bi__DOT____Vcellinp__second1__B));
    bufp->fullBit(oldp+9494,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__36__KET____DOT__bi__DOT____Vcellinp__second3__A));
    bufp->fullBit(oldp+9495,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [6U] >> 0x24U)))));
    bufp->fullBit(oldp+9496,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [7U] >> 0x24U)))));
    bufp->fullBit(oldp+9497,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [8U] >> 0x24U)))));
    bufp->fullBit(oldp+9498,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__37__KET____DOT__bi__DOT____Vcellinp__second1__A));
    bufp->fullBit(oldp+9499,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__36__KET____DOT__bi__DOT____Vcellinp__second4__C));
    bufp->fullBit(oldp+9500,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [3U] >> 0x24U)))));
    bufp->fullBit(oldp+9501,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [4U] >> 0x24U)))));
    bufp->fullBit(oldp+9502,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [5U] >> 0x24U)))));
    bufp->fullBit(oldp+9503,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__37__KET____DOT__bi__DOT____Vcellinp__second2__C));
    bufp->fullBit(oldp+9504,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__36__KET____DOT__bi__DOT____Vcellinp__second4__B));
    bufp->fullBit(oldp+9505,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0U] >> 0x24U)))));
    bufp->fullBit(oldp+9506,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [1U] >> 0x24U)))));
    bufp->fullBit(oldp+9507,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [2U] >> 0x24U)))));
    bufp->fullBit(oldp+9508,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__37__KET____DOT__bi__DOT____Vcellinp__second2__B));
    bufp->fullBit(oldp+9509,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__36__KET____DOT__bi__DOT____Vcellinp__second4__A));
    bufp->fullBit(oldp+9510,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__37__KET____DOT__bi__DOT____Vcellinp__fifth1__C));
    bufp->fullBit(oldp+9511,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__36__KET____DOT__bi__DOT____Vcellinp__fourth2__A));
    bufp->fullBit(oldp+9512,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__36__KET____DOT__bi__DOT____Vcellinp__fourth2__B));
    bufp->fullBit(oldp+9513,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__37__KET____DOT__bi__DOT____Vcellinp__sixth1__C));
    bufp->fullBit(oldp+9514,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__37__KET____DOT__bi__DOT____Vcellinp__third1__C));
    bufp->fullBit(oldp+9515,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__36__KET____DOT__bi__DOT____Vcellinp__third1__A));
    bufp->fullBit(oldp+9516,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0x10U] 
                                            >> 0x24U)))));
    bufp->fullBit(oldp+9517,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__37__KET____DOT__bi__DOT____Vcellinp__third1__B));
    bufp->fullBit(oldp+9518,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__36__KET____DOT__bi__DOT____Vcellinp__third2__C));
    bufp->fullBit(oldp+9519,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xfU] 
                                            >> 0x24U)))));
    bufp->fullBit(oldp+9520,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__37__KET____DOT__bi__DOT____Vcellinp__fourth1__C));
    bufp->fullBit(oldp+9521,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__36__KET____DOT__bi__DOT____Vcellinp__third2__B));
    bufp->fullBit(oldp+9522,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__37__KET____DOT__bi__DOT____Vcellinp__fourth1__B));
    bufp->fullBit(oldp+9523,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__36__KET____DOT__bi__DOT____Vcellinp__third2__A));
    bufp->fullBit(oldp+9524,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__37__KET____DOT__bi__DOT____Vcellinp__fourth1__A));
    bufp->fullBit(oldp+9525,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__37__KET____DOT__bi__DOT____Vcellinp__fourth2__C));
    bufp->fullIData(oldp+9526,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__37__KET____DOT__bi__InData),17);
    bufp->fullBit(oldp+9527,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__37__KET____DOT__bi__DOT__FifSig) 
                               & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__37__KET____DOT__bi__DOT____Vcellinp__sixth1__B) 
                                  | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__37__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                              | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__37__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0))));
    bufp->fullBit(oldp+9528,((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__37__KET____DOT__bi__DOT__FifSig)) 
                               & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__37__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__37__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                              | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__37__KET____DOT__bi__DOT__FifSig)) 
                                  & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__37__KET____DOT__bi__DOT____Vcellinp__sixth1__C)) 
                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__37__KET____DOT__bi__DOT____Vcellinp__sixth1__B))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__37__KET____DOT__bi__DOT__FifSig) 
                                    & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__37__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                        & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__37__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                       | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__37__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0)))))));
    bufp->fullCData(oldp+9529,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__37__KET____DOT__bi__DOT____Vcellinp__second4__A) 
                                 << 4U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__37__KET____DOT__bi__DOT____Vcellinp__second4__B) 
                                            << 3U) 
                                           | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__37__KET____DOT__bi__DOT____Vcellinp__second4__C) 
                                               << 2U) 
                                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__37__KET____DOT__bi__DOT____Vcellinp__second3__A) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__37__KET____DOT__bi__DOT____Vcellinp__second3__B)))))),5);
    bufp->fullCData(oldp+9530,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__37__KET____DOT__bi__DOT____Vcellinp__third2__A) 
                                 << 3U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__37__KET____DOT__bi__DOT____Vcellinp__third2__B) 
                                            << 2U) 
                                           | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__37__KET____DOT__bi__DOT____Vcellinp__third2__C) 
                                               << 1U) 
                                              | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__37__KET____DOT__bi__DOT____Vcellinp__third1__A))))),4);
    bufp->fullCData(oldp+9531,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__37__KET____DOT__bi__DOT____Vcellinp__fourth2__A) 
                                 << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__37__KET____DOT__bi__DOT____Vcellinp__fourth2__B))),2);
    bufp->fullCData(oldp+9532,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__37__KET____DOT__bi__DOT____Vcellinp__fifth1__A) 
                                 << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__37__KET____DOT__bi__DOT____Vcellinp__fifth1__B))),2);
    bufp->fullBit(oldp+9533,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__37__KET____DOT__bi__DOT__FifSig));
    bufp->fullBit(oldp+9534,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__37__KET____DOT__bi__DOT____Vcellinp__fifth1__A));
    bufp->fullBit(oldp+9535,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__37__KET____DOT__bi__DOT____Vcellinp__fifth1__B));
    bufp->fullBit(oldp+9536,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__38__KET____DOT__bi__DOT____Vcellinp__sixth1__B));
    bufp->fullBit(oldp+9537,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xcU] 
                                            >> 0x25U)))));
    bufp->fullBit(oldp+9538,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xdU] 
                                            >> 0x25U)))));
    bufp->fullBit(oldp+9539,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xeU] 
                                            >> 0x25U)))));
    bufp->fullBit(oldp+9540,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__38__KET____DOT__bi__DOT____Vcellinp__second1__C));
    bufp->fullBit(oldp+9541,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__37__KET____DOT__bi__DOT____Vcellinp__second3__B));
    bufp->fullBit(oldp+9542,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [9U] >> 0x25U)))));
    bufp->fullBit(oldp+9543,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xaU] 
                                            >> 0x25U)))));
    bufp->fullBit(oldp+9544,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xbU] 
                                            >> 0x25U)))));
    bufp->fullBit(oldp+9545,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__38__KET____DOT__bi__DOT____Vcellinp__second1__B));
    bufp->fullBit(oldp+9546,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__37__KET____DOT__bi__DOT____Vcellinp__second3__A));
    bufp->fullBit(oldp+9547,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [6U] >> 0x25U)))));
    bufp->fullBit(oldp+9548,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [7U] >> 0x25U)))));
    bufp->fullBit(oldp+9549,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [8U] >> 0x25U)))));
    bufp->fullBit(oldp+9550,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__38__KET____DOT__bi__DOT____Vcellinp__second1__A));
    bufp->fullBit(oldp+9551,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__37__KET____DOT__bi__DOT____Vcellinp__second4__C));
    bufp->fullBit(oldp+9552,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [3U] >> 0x25U)))));
    bufp->fullBit(oldp+9553,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [4U] >> 0x25U)))));
    bufp->fullBit(oldp+9554,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [5U] >> 0x25U)))));
    bufp->fullBit(oldp+9555,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__38__KET____DOT__bi__DOT____Vcellinp__second2__C));
    bufp->fullBit(oldp+9556,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__37__KET____DOT__bi__DOT____Vcellinp__second4__B));
    bufp->fullBit(oldp+9557,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0U] >> 0x25U)))));
    bufp->fullBit(oldp+9558,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [1U] >> 0x25U)))));
    bufp->fullBit(oldp+9559,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [2U] >> 0x25U)))));
    bufp->fullBit(oldp+9560,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__38__KET____DOT__bi__DOT____Vcellinp__second2__B));
    bufp->fullBit(oldp+9561,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__37__KET____DOT__bi__DOT____Vcellinp__second4__A));
    bufp->fullBit(oldp+9562,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__38__KET____DOT__bi__DOT____Vcellinp__fifth1__C));
    bufp->fullBit(oldp+9563,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__37__KET____DOT__bi__DOT____Vcellinp__fourth2__A));
    bufp->fullBit(oldp+9564,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__37__KET____DOT__bi__DOT____Vcellinp__fourth2__B));
    bufp->fullBit(oldp+9565,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__38__KET____DOT__bi__DOT____Vcellinp__sixth1__C));
    bufp->fullBit(oldp+9566,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__38__KET____DOT__bi__DOT____Vcellinp__third1__C));
    bufp->fullBit(oldp+9567,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__37__KET____DOT__bi__DOT____Vcellinp__third1__A));
    bufp->fullBit(oldp+9568,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0x10U] 
                                            >> 0x25U)))));
    bufp->fullBit(oldp+9569,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__38__KET____DOT__bi__DOT____Vcellinp__third1__B));
    bufp->fullBit(oldp+9570,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__37__KET____DOT__bi__DOT____Vcellinp__third2__C));
    bufp->fullBit(oldp+9571,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xfU] 
                                            >> 0x25U)))));
    bufp->fullBit(oldp+9572,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__38__KET____DOT__bi__DOT____Vcellinp__fourth1__C));
    bufp->fullBit(oldp+9573,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__37__KET____DOT__bi__DOT____Vcellinp__third2__B));
    bufp->fullBit(oldp+9574,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__38__KET____DOT__bi__DOT____Vcellinp__fourth1__B));
    bufp->fullBit(oldp+9575,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__37__KET____DOT__bi__DOT____Vcellinp__third2__A));
    bufp->fullBit(oldp+9576,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__38__KET____DOT__bi__DOT____Vcellinp__fourth1__A));
    bufp->fullBit(oldp+9577,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__38__KET____DOT__bi__DOT____Vcellinp__fourth2__C));
    bufp->fullIData(oldp+9578,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__38__KET____DOT__bi__InData),17);
    bufp->fullBit(oldp+9579,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__38__KET____DOT__bi__DOT__FifSig) 
                               & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__38__KET____DOT__bi__DOT____Vcellinp__sixth1__B) 
                                  | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__38__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                              | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__38__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0))));
    bufp->fullBit(oldp+9580,((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__38__KET____DOT__bi__DOT__FifSig)) 
                               & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__38__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__38__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                              | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__38__KET____DOT__bi__DOT__FifSig)) 
                                  & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__38__KET____DOT__bi__DOT____Vcellinp__sixth1__C)) 
                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__38__KET____DOT__bi__DOT____Vcellinp__sixth1__B))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__38__KET____DOT__bi__DOT__FifSig) 
                                    & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__38__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                        & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__38__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                       | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__38__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0)))))));
    bufp->fullCData(oldp+9581,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__38__KET____DOT__bi__DOT____Vcellinp__second4__A) 
                                 << 4U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__38__KET____DOT__bi__DOT____Vcellinp__second4__B) 
                                            << 3U) 
                                           | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__38__KET____DOT__bi__DOT____Vcellinp__second4__C) 
                                               << 2U) 
                                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__38__KET____DOT__bi__DOT____Vcellinp__second3__A) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__38__KET____DOT__bi__DOT____Vcellinp__second3__B)))))),5);
    bufp->fullCData(oldp+9582,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__38__KET____DOT__bi__DOT____Vcellinp__third2__A) 
                                 << 3U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__38__KET____DOT__bi__DOT____Vcellinp__third2__B) 
                                            << 2U) 
                                           | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__38__KET____DOT__bi__DOT____Vcellinp__third2__C) 
                                               << 1U) 
                                              | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__38__KET____DOT__bi__DOT____Vcellinp__third1__A))))),4);
    bufp->fullCData(oldp+9583,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__38__KET____DOT__bi__DOT____Vcellinp__fourth2__A) 
                                 << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__38__KET____DOT__bi__DOT____Vcellinp__fourth2__B))),2);
    bufp->fullCData(oldp+9584,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__38__KET____DOT__bi__DOT____Vcellinp__fifth1__A) 
                                 << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__38__KET____DOT__bi__DOT____Vcellinp__fifth1__B))),2);
    bufp->fullBit(oldp+9585,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__38__KET____DOT__bi__DOT__FifSig));
    bufp->fullBit(oldp+9586,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__38__KET____DOT__bi__DOT____Vcellinp__fifth1__A));
    bufp->fullBit(oldp+9587,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__38__KET____DOT__bi__DOT____Vcellinp__fifth1__B));
    bufp->fullBit(oldp+9588,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__39__KET____DOT__bi__DOT____Vcellinp__sixth1__B));
    bufp->fullBit(oldp+9589,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xcU] 
                                            >> 0x26U)))));
    bufp->fullBit(oldp+9590,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xdU] 
                                            >> 0x26U)))));
    bufp->fullBit(oldp+9591,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xeU] 
                                            >> 0x26U)))));
    bufp->fullBit(oldp+9592,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__39__KET____DOT__bi__DOT____Vcellinp__second1__C));
    bufp->fullBit(oldp+9593,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__38__KET____DOT__bi__DOT____Vcellinp__second3__B));
    bufp->fullBit(oldp+9594,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [9U] >> 0x26U)))));
    bufp->fullBit(oldp+9595,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xaU] 
                                            >> 0x26U)))));
    bufp->fullBit(oldp+9596,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xbU] 
                                            >> 0x26U)))));
    bufp->fullBit(oldp+9597,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__39__KET____DOT__bi__DOT____Vcellinp__second1__B));
    bufp->fullBit(oldp+9598,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__38__KET____DOT__bi__DOT____Vcellinp__second3__A));
    bufp->fullBit(oldp+9599,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [6U] >> 0x26U)))));
    bufp->fullBit(oldp+9600,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [7U] >> 0x26U)))));
    bufp->fullBit(oldp+9601,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [8U] >> 0x26U)))));
    bufp->fullBit(oldp+9602,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__39__KET____DOT__bi__DOT____Vcellinp__second1__A));
    bufp->fullBit(oldp+9603,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__38__KET____DOT__bi__DOT____Vcellinp__second4__C));
    bufp->fullBit(oldp+9604,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [3U] >> 0x26U)))));
    bufp->fullBit(oldp+9605,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [4U] >> 0x26U)))));
    bufp->fullBit(oldp+9606,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [5U] >> 0x26U)))));
    bufp->fullBit(oldp+9607,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__39__KET____DOT__bi__DOT____Vcellinp__second2__C));
    bufp->fullBit(oldp+9608,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__38__KET____DOT__bi__DOT____Vcellinp__second4__B));
    bufp->fullBit(oldp+9609,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0U] >> 0x26U)))));
    bufp->fullBit(oldp+9610,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [1U] >> 0x26U)))));
    bufp->fullBit(oldp+9611,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [2U] >> 0x26U)))));
    bufp->fullBit(oldp+9612,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__39__KET____DOT__bi__DOT____Vcellinp__second2__B));
    bufp->fullBit(oldp+9613,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__38__KET____DOT__bi__DOT____Vcellinp__second4__A));
    bufp->fullBit(oldp+9614,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__39__KET____DOT__bi__DOT____Vcellinp__fifth1__C));
    bufp->fullBit(oldp+9615,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__38__KET____DOT__bi__DOT____Vcellinp__fourth2__A));
    bufp->fullBit(oldp+9616,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__38__KET____DOT__bi__DOT____Vcellinp__fourth2__B));
    bufp->fullBit(oldp+9617,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__39__KET____DOT__bi__DOT____Vcellinp__sixth1__C));
    bufp->fullBit(oldp+9618,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__39__KET____DOT__bi__DOT____Vcellinp__third1__C));
    bufp->fullBit(oldp+9619,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__38__KET____DOT__bi__DOT____Vcellinp__third1__A));
    bufp->fullBit(oldp+9620,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0x10U] 
                                            >> 0x26U)))));
    bufp->fullBit(oldp+9621,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__39__KET____DOT__bi__DOT____Vcellinp__third1__B));
    bufp->fullBit(oldp+9622,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__38__KET____DOT__bi__DOT____Vcellinp__third2__C));
    bufp->fullBit(oldp+9623,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xfU] 
                                            >> 0x26U)))));
    bufp->fullBit(oldp+9624,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__39__KET____DOT__bi__DOT____Vcellinp__fourth1__C));
    bufp->fullBit(oldp+9625,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__38__KET____DOT__bi__DOT____Vcellinp__third2__B));
    bufp->fullBit(oldp+9626,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__39__KET____DOT__bi__DOT____Vcellinp__fourth1__B));
    bufp->fullBit(oldp+9627,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__38__KET____DOT__bi__DOT____Vcellinp__third2__A));
    bufp->fullBit(oldp+9628,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__39__KET____DOT__bi__DOT____Vcellinp__fourth1__A));
    bufp->fullBit(oldp+9629,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__39__KET____DOT__bi__DOT____Vcellinp__fourth2__C));
    bufp->fullIData(oldp+9630,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__39__KET____DOT__bi__InData),17);
    bufp->fullBit(oldp+9631,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__39__KET____DOT__bi__DOT__FifSig) 
                               & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__39__KET____DOT__bi__DOT____Vcellinp__sixth1__B) 
                                  | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__39__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                              | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__39__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0))));
    bufp->fullBit(oldp+9632,((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__39__KET____DOT__bi__DOT__FifSig)) 
                               & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__39__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__39__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                              | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__39__KET____DOT__bi__DOT__FifSig)) 
                                  & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__39__KET____DOT__bi__DOT____Vcellinp__sixth1__C)) 
                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__39__KET____DOT__bi__DOT____Vcellinp__sixth1__B))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__39__KET____DOT__bi__DOT__FifSig) 
                                    & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__39__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                        & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__39__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                       | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__39__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0)))))));
    bufp->fullCData(oldp+9633,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__39__KET____DOT__bi__DOT____Vcellinp__second4__A) 
                                 << 4U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__39__KET____DOT__bi__DOT____Vcellinp__second4__B) 
                                            << 3U) 
                                           | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__39__KET____DOT__bi__DOT____Vcellinp__second4__C) 
                                               << 2U) 
                                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__39__KET____DOT__bi__DOT____Vcellinp__second3__A) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__39__KET____DOT__bi__DOT____Vcellinp__second3__B)))))),5);
    bufp->fullCData(oldp+9634,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__39__KET____DOT__bi__DOT____Vcellinp__third2__A) 
                                 << 3U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__39__KET____DOT__bi__DOT____Vcellinp__third2__B) 
                                            << 2U) 
                                           | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__39__KET____DOT__bi__DOT____Vcellinp__third2__C) 
                                               << 1U) 
                                              | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__39__KET____DOT__bi__DOT____Vcellinp__third1__A))))),4);
    bufp->fullCData(oldp+9635,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__39__KET____DOT__bi__DOT____Vcellinp__fourth2__A) 
                                 << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__39__KET____DOT__bi__DOT____Vcellinp__fourth2__B))),2);
    bufp->fullCData(oldp+9636,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__39__KET____DOT__bi__DOT____Vcellinp__fifth1__A) 
                                 << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__39__KET____DOT__bi__DOT____Vcellinp__fifth1__B))),2);
    bufp->fullBit(oldp+9637,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__39__KET____DOT__bi__DOT__FifSig));
    bufp->fullBit(oldp+9638,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__39__KET____DOT__bi__DOT____Vcellinp__fifth1__A));
    bufp->fullBit(oldp+9639,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__39__KET____DOT__bi__DOT____Vcellinp__fifth1__B));
    bufp->fullBit(oldp+9640,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__40__KET____DOT__bi__DOT____Vcellinp__sixth1__B));
    bufp->fullBit(oldp+9641,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xcU] 
                                            >> 0x27U)))));
    bufp->fullBit(oldp+9642,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xdU] 
                                            >> 0x27U)))));
    bufp->fullBit(oldp+9643,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xeU] 
                                            >> 0x27U)))));
    bufp->fullBit(oldp+9644,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__40__KET____DOT__bi__DOT____Vcellinp__second1__C));
    bufp->fullBit(oldp+9645,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__39__KET____DOT__bi__DOT____Vcellinp__second3__B));
    bufp->fullBit(oldp+9646,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [9U] >> 0x27U)))));
    bufp->fullBit(oldp+9647,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xaU] 
                                            >> 0x27U)))));
    bufp->fullBit(oldp+9648,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xbU] 
                                            >> 0x27U)))));
    bufp->fullBit(oldp+9649,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__40__KET____DOT__bi__DOT____Vcellinp__second1__B));
    bufp->fullBit(oldp+9650,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__39__KET____DOT__bi__DOT____Vcellinp__second3__A));
    bufp->fullBit(oldp+9651,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [6U] >> 0x27U)))));
    bufp->fullBit(oldp+9652,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [7U] >> 0x27U)))));
    bufp->fullBit(oldp+9653,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [8U] >> 0x27U)))));
    bufp->fullBit(oldp+9654,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__40__KET____DOT__bi__DOT____Vcellinp__second1__A));
    bufp->fullBit(oldp+9655,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__39__KET____DOT__bi__DOT____Vcellinp__second4__C));
    bufp->fullBit(oldp+9656,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [3U] >> 0x27U)))));
    bufp->fullBit(oldp+9657,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [4U] >> 0x27U)))));
    bufp->fullBit(oldp+9658,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [5U] >> 0x27U)))));
    bufp->fullBit(oldp+9659,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__40__KET____DOT__bi__DOT____Vcellinp__second2__C));
    bufp->fullBit(oldp+9660,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__39__KET____DOT__bi__DOT____Vcellinp__second4__B));
    bufp->fullBit(oldp+9661,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0U] >> 0x27U)))));
    bufp->fullBit(oldp+9662,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [1U] >> 0x27U)))));
    bufp->fullBit(oldp+9663,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [2U] >> 0x27U)))));
    bufp->fullBit(oldp+9664,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__40__KET____DOT__bi__DOT____Vcellinp__second2__B));
    bufp->fullBit(oldp+9665,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__39__KET____DOT__bi__DOT____Vcellinp__second4__A));
    bufp->fullBit(oldp+9666,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__40__KET____DOT__bi__DOT____Vcellinp__fifth1__C));
    bufp->fullBit(oldp+9667,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__39__KET____DOT__bi__DOT____Vcellinp__fourth2__A));
    bufp->fullBit(oldp+9668,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__39__KET____DOT__bi__DOT____Vcellinp__fourth2__B));
    bufp->fullBit(oldp+9669,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__40__KET____DOT__bi__DOT____Vcellinp__sixth1__C));
    bufp->fullBit(oldp+9670,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__40__KET____DOT__bi__DOT____Vcellinp__third1__C));
    bufp->fullBit(oldp+9671,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__39__KET____DOT__bi__DOT____Vcellinp__third1__A));
    bufp->fullBit(oldp+9672,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0x10U] 
                                            >> 0x27U)))));
    bufp->fullBit(oldp+9673,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__40__KET____DOT__bi__DOT____Vcellinp__third1__B));
    bufp->fullBit(oldp+9674,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__39__KET____DOT__bi__DOT____Vcellinp__third2__C));
    bufp->fullBit(oldp+9675,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xfU] 
                                            >> 0x27U)))));
    bufp->fullBit(oldp+9676,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__40__KET____DOT__bi__DOT____Vcellinp__fourth1__C));
    bufp->fullBit(oldp+9677,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__39__KET____DOT__bi__DOT____Vcellinp__third2__B));
    bufp->fullBit(oldp+9678,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__40__KET____DOT__bi__DOT____Vcellinp__fourth1__B));
    bufp->fullBit(oldp+9679,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__39__KET____DOT__bi__DOT____Vcellinp__third2__A));
    bufp->fullBit(oldp+9680,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__40__KET____DOT__bi__DOT____Vcellinp__fourth1__A));
    bufp->fullBit(oldp+9681,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__40__KET____DOT__bi__DOT____Vcellinp__fourth2__C));
    bufp->fullIData(oldp+9682,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData),17);
    bufp->fullBit(oldp+9683,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT__FifSig) 
                               & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT____Vcellinp__sixth1__B) 
                                  | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                              | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0))));
    bufp->fullBit(oldp+9684,((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT__FifSig)) 
                               & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                              | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT__FifSig)) 
                                  & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT____Vcellinp__sixth1__C)) 
                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT____Vcellinp__sixth1__B))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT__FifSig) 
                                    & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                        & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                       | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0)))))));
    bufp->fullCData(oldp+9685,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT____Vcellinp__second4__A) 
                                 << 4U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT____Vcellinp__second4__B) 
                                            << 3U) 
                                           | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT____Vcellinp__second4__C) 
                                               << 2U) 
                                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT____Vcellinp__second3__A) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT____Vcellinp__second3__B)))))),5);
    bufp->fullCData(oldp+9686,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT____Vcellinp__third2__A) 
                                 << 3U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT____Vcellinp__third2__B) 
                                            << 2U) 
                                           | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT____Vcellinp__third2__C) 
                                               << 1U) 
                                              | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT____Vcellinp__third1__A))))),4);
    bufp->fullCData(oldp+9687,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT____Vcellinp__fourth2__A) 
                                 << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT____Vcellinp__fourth2__B))),2);
    bufp->fullCData(oldp+9688,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT____Vcellinp__fifth1__A) 
                                 << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT____Vcellinp__fifth1__B))),2);
    bufp->fullBit(oldp+9689,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT__FifSig));
    bufp->fullBit(oldp+9690,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT____Vcellinp__fifth1__A));
    bufp->fullBit(oldp+9691,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT____Vcellinp__fifth1__B));
    bufp->fullBit(oldp+9692,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi__DOT____Vcellinp__sixth1__B));
    bufp->fullBit(oldp+9693,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xcU] 
                                            >> 3U)))));
    bufp->fullBit(oldp+9694,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xdU] 
                                            >> 3U)))));
    bufp->fullBit(oldp+9695,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xeU] 
                                            >> 3U)))));
    bufp->fullBit(oldp+9696,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi__DOT____Vcellinp__second1__C));
    bufp->fullBit(oldp+9697,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT____Vcellinp__second3__B));
    bufp->fullBit(oldp+9698,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [9U] >> 3U)))));
    bufp->fullBit(oldp+9699,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xaU] 
                                            >> 3U)))));
    bufp->fullBit(oldp+9700,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xbU] 
                                            >> 3U)))));
    bufp->fullBit(oldp+9701,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi__DOT____Vcellinp__second1__B));
    bufp->fullBit(oldp+9702,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT____Vcellinp__second3__A));
    bufp->fullBit(oldp+9703,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [6U] >> 3U)))));
    bufp->fullBit(oldp+9704,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [7U] >> 3U)))));
    bufp->fullBit(oldp+9705,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [8U] >> 3U)))));
    bufp->fullBit(oldp+9706,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi__DOT____Vcellinp__second1__A));
    bufp->fullBit(oldp+9707,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT____Vcellinp__second4__C));
    bufp->fullBit(oldp+9708,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [3U] >> 3U)))));
    bufp->fullBit(oldp+9709,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [4U] >> 3U)))));
    bufp->fullBit(oldp+9710,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [5U] >> 3U)))));
    bufp->fullBit(oldp+9711,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi__DOT____Vcellinp__second2__C));
    bufp->fullBit(oldp+9712,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT____Vcellinp__second4__B));
    bufp->fullBit(oldp+9713,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0U] >> 3U)))));
    bufp->fullBit(oldp+9714,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [1U] >> 3U)))));
    bufp->fullBit(oldp+9715,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [2U] >> 3U)))));
    bufp->fullBit(oldp+9716,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi__DOT____Vcellinp__second2__B));
    bufp->fullBit(oldp+9717,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT____Vcellinp__second4__A));
    bufp->fullBit(oldp+9718,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi__DOT____Vcellinp__fifth1__C));
    bufp->fullBit(oldp+9719,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT____Vcellinp__fourth2__A));
    bufp->fullBit(oldp+9720,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT____Vcellinp__fourth2__B));
    bufp->fullBit(oldp+9721,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi__DOT____Vcellinp__sixth1__C));
    bufp->fullBit(oldp+9722,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi__DOT____Vcellinp__third1__C));
    bufp->fullBit(oldp+9723,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT____Vcellinp__third1__A));
    bufp->fullBit(oldp+9724,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0x10U] 
                                            >> 3U)))));
    bufp->fullBit(oldp+9725,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi__DOT____Vcellinp__third1__B));
    bufp->fullBit(oldp+9726,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT____Vcellinp__third2__C));
    bufp->fullBit(oldp+9727,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xfU] 
                                            >> 3U)))));
    bufp->fullBit(oldp+9728,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi__DOT____Vcellinp__fourth1__C));
    bufp->fullBit(oldp+9729,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT____Vcellinp__third2__B));
    bufp->fullBit(oldp+9730,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi__DOT____Vcellinp__fourth1__B));
    bufp->fullBit(oldp+9731,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT____Vcellinp__third2__A));
    bufp->fullBit(oldp+9732,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi__DOT____Vcellinp__fourth1__A));
    bufp->fullBit(oldp+9733,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi__DOT____Vcellinp__fourth2__C));
    bufp->fullIData(oldp+9734,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__40__KET____DOT__bi__InData),17);
    bufp->fullBit(oldp+9735,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__40__KET____DOT__bi__DOT__FifSig) 
                               & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__40__KET____DOT__bi__DOT____Vcellinp__sixth1__B) 
                                  | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__40__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                              | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__40__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0))));
    bufp->fullBit(oldp+9736,((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__40__KET____DOT__bi__DOT__FifSig)) 
                               & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__40__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__40__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                              | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__40__KET____DOT__bi__DOT__FifSig)) 
                                  & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__40__KET____DOT__bi__DOT____Vcellinp__sixth1__C)) 
                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__40__KET____DOT__bi__DOT____Vcellinp__sixth1__B))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__40__KET____DOT__bi__DOT__FifSig) 
                                    & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__40__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                        & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__40__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                       | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__40__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0)))))));
    bufp->fullCData(oldp+9737,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__40__KET____DOT__bi__DOT____Vcellinp__second4__A) 
                                 << 4U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__40__KET____DOT__bi__DOT____Vcellinp__second4__B) 
                                            << 3U) 
                                           | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__40__KET____DOT__bi__DOT____Vcellinp__second4__C) 
                                               << 2U) 
                                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__40__KET____DOT__bi__DOT____Vcellinp__second3__A) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__40__KET____DOT__bi__DOT____Vcellinp__second3__B)))))),5);
    bufp->fullCData(oldp+9738,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__40__KET____DOT__bi__DOT____Vcellinp__third2__A) 
                                 << 3U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__40__KET____DOT__bi__DOT____Vcellinp__third2__B) 
                                            << 2U) 
                                           | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__40__KET____DOT__bi__DOT____Vcellinp__third2__C) 
                                               << 1U) 
                                              | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__40__KET____DOT__bi__DOT____Vcellinp__third1__A))))),4);
    bufp->fullCData(oldp+9739,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__40__KET____DOT__bi__DOT____Vcellinp__fourth2__A) 
                                 << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__40__KET____DOT__bi__DOT____Vcellinp__fourth2__B))),2);
    bufp->fullCData(oldp+9740,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__40__KET____DOT__bi__DOT____Vcellinp__fifth1__A) 
                                 << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__40__KET____DOT__bi__DOT____Vcellinp__fifth1__B))),2);
    bufp->fullBit(oldp+9741,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__40__KET____DOT__bi__DOT__FifSig));
    bufp->fullBit(oldp+9742,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__40__KET____DOT__bi__DOT____Vcellinp__fifth1__A));
    bufp->fullBit(oldp+9743,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__40__KET____DOT__bi__DOT____Vcellinp__fifth1__B));
    bufp->fullBit(oldp+9744,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__41__KET____DOT__bi__DOT____Vcellinp__sixth1__B));
    bufp->fullBit(oldp+9745,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xcU] 
                                            >> 0x28U)))));
    bufp->fullBit(oldp+9746,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xdU] 
                                            >> 0x28U)))));
    bufp->fullBit(oldp+9747,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xeU] 
                                            >> 0x28U)))));
    bufp->fullBit(oldp+9748,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__41__KET____DOT__bi__DOT____Vcellinp__second1__C));
    bufp->fullBit(oldp+9749,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__40__KET____DOT__bi__DOT____Vcellinp__second3__B));
    bufp->fullBit(oldp+9750,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [9U] >> 0x28U)))));
    bufp->fullBit(oldp+9751,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xaU] 
                                            >> 0x28U)))));
    bufp->fullBit(oldp+9752,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xbU] 
                                            >> 0x28U)))));
    bufp->fullBit(oldp+9753,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__41__KET____DOT__bi__DOT____Vcellinp__second1__B));
    bufp->fullBit(oldp+9754,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__40__KET____DOT__bi__DOT____Vcellinp__second3__A));
    bufp->fullBit(oldp+9755,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [6U] >> 0x28U)))));
    bufp->fullBit(oldp+9756,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [7U] >> 0x28U)))));
    bufp->fullBit(oldp+9757,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [8U] >> 0x28U)))));
    bufp->fullBit(oldp+9758,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__41__KET____DOT__bi__DOT____Vcellinp__second1__A));
    bufp->fullBit(oldp+9759,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__40__KET____DOT__bi__DOT____Vcellinp__second4__C));
    bufp->fullBit(oldp+9760,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [3U] >> 0x28U)))));
    bufp->fullBit(oldp+9761,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [4U] >> 0x28U)))));
    bufp->fullBit(oldp+9762,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [5U] >> 0x28U)))));
    bufp->fullBit(oldp+9763,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__41__KET____DOT__bi__DOT____Vcellinp__second2__C));
    bufp->fullBit(oldp+9764,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__40__KET____DOT__bi__DOT____Vcellinp__second4__B));
    bufp->fullBit(oldp+9765,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0U] >> 0x28U)))));
    bufp->fullBit(oldp+9766,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [1U] >> 0x28U)))));
    bufp->fullBit(oldp+9767,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [2U] >> 0x28U)))));
    bufp->fullBit(oldp+9768,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__41__KET____DOT__bi__DOT____Vcellinp__second2__B));
    bufp->fullBit(oldp+9769,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__40__KET____DOT__bi__DOT____Vcellinp__second4__A));
    bufp->fullBit(oldp+9770,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__41__KET____DOT__bi__DOT____Vcellinp__fifth1__C));
    bufp->fullBit(oldp+9771,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__40__KET____DOT__bi__DOT____Vcellinp__fourth2__A));
    bufp->fullBit(oldp+9772,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__40__KET____DOT__bi__DOT____Vcellinp__fourth2__B));
    bufp->fullBit(oldp+9773,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__41__KET____DOT__bi__DOT____Vcellinp__sixth1__C));
    bufp->fullBit(oldp+9774,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__41__KET____DOT__bi__DOT____Vcellinp__third1__C));
    bufp->fullBit(oldp+9775,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__40__KET____DOT__bi__DOT____Vcellinp__third1__A));
    bufp->fullBit(oldp+9776,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0x10U] 
                                            >> 0x28U)))));
    bufp->fullBit(oldp+9777,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__41__KET____DOT__bi__DOT____Vcellinp__third1__B));
    bufp->fullBit(oldp+9778,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__40__KET____DOT__bi__DOT____Vcellinp__third2__C));
    bufp->fullBit(oldp+9779,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xfU] 
                                            >> 0x28U)))));
    bufp->fullBit(oldp+9780,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__41__KET____DOT__bi__DOT____Vcellinp__fourth1__C));
    bufp->fullBit(oldp+9781,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__40__KET____DOT__bi__DOT____Vcellinp__third2__B));
    bufp->fullBit(oldp+9782,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__41__KET____DOT__bi__DOT____Vcellinp__fourth1__B));
    bufp->fullBit(oldp+9783,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__40__KET____DOT__bi__DOT____Vcellinp__third2__A));
    bufp->fullBit(oldp+9784,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__41__KET____DOT__bi__DOT____Vcellinp__fourth1__A));
    bufp->fullBit(oldp+9785,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__41__KET____DOT__bi__DOT____Vcellinp__fourth2__C));
    bufp->fullIData(oldp+9786,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__41__KET____DOT__bi__InData),17);
    bufp->fullBit(oldp+9787,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__41__KET____DOT__bi__DOT__FifSig) 
                               & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__41__KET____DOT__bi__DOT____Vcellinp__sixth1__B) 
                                  | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__41__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                              | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__41__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0))));
    bufp->fullBit(oldp+9788,((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__41__KET____DOT__bi__DOT__FifSig)) 
                               & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__41__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__41__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                              | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__41__KET____DOT__bi__DOT__FifSig)) 
                                  & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__41__KET____DOT__bi__DOT____Vcellinp__sixth1__C)) 
                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__41__KET____DOT__bi__DOT____Vcellinp__sixth1__B))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__41__KET____DOT__bi__DOT__FifSig) 
                                    & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__41__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                        & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__41__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                       | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__41__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0)))))));
    bufp->fullCData(oldp+9789,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__41__KET____DOT__bi__DOT____Vcellinp__second4__A) 
                                 << 4U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__41__KET____DOT__bi__DOT____Vcellinp__second4__B) 
                                            << 3U) 
                                           | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__41__KET____DOT__bi__DOT____Vcellinp__second4__C) 
                                               << 2U) 
                                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__41__KET____DOT__bi__DOT____Vcellinp__second3__A) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__41__KET____DOT__bi__DOT____Vcellinp__second3__B)))))),5);
    bufp->fullCData(oldp+9790,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__41__KET____DOT__bi__DOT____Vcellinp__third2__A) 
                                 << 3U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__41__KET____DOT__bi__DOT____Vcellinp__third2__B) 
                                            << 2U) 
                                           | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__41__KET____DOT__bi__DOT____Vcellinp__third2__C) 
                                               << 1U) 
                                              | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__41__KET____DOT__bi__DOT____Vcellinp__third1__A))))),4);
    bufp->fullCData(oldp+9791,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__41__KET____DOT__bi__DOT____Vcellinp__fourth2__A) 
                                 << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__41__KET____DOT__bi__DOT____Vcellinp__fourth2__B))),2);
    bufp->fullCData(oldp+9792,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__41__KET____DOT__bi__DOT____Vcellinp__fifth1__A) 
                                 << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__41__KET____DOT__bi__DOT____Vcellinp__fifth1__B))),2);
    bufp->fullBit(oldp+9793,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__41__KET____DOT__bi__DOT__FifSig));
    bufp->fullBit(oldp+9794,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__41__KET____DOT__bi__DOT____Vcellinp__fifth1__A));
    bufp->fullBit(oldp+9795,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__41__KET____DOT__bi__DOT____Vcellinp__fifth1__B));
    bufp->fullBit(oldp+9796,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__42__KET____DOT__bi__DOT____Vcellinp__sixth1__B));
    bufp->fullBit(oldp+9797,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xcU] 
                                            >> 0x29U)))));
    bufp->fullBit(oldp+9798,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xdU] 
                                            >> 0x29U)))));
    bufp->fullBit(oldp+9799,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xeU] 
                                            >> 0x29U)))));
    bufp->fullBit(oldp+9800,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__42__KET____DOT__bi__DOT____Vcellinp__second1__C));
    bufp->fullBit(oldp+9801,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__41__KET____DOT__bi__DOT____Vcellinp__second3__B));
    bufp->fullBit(oldp+9802,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [9U] >> 0x29U)))));
    bufp->fullBit(oldp+9803,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xaU] 
                                            >> 0x29U)))));
    bufp->fullBit(oldp+9804,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xbU] 
                                            >> 0x29U)))));
    bufp->fullBit(oldp+9805,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__42__KET____DOT__bi__DOT____Vcellinp__second1__B));
    bufp->fullBit(oldp+9806,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__41__KET____DOT__bi__DOT____Vcellinp__second3__A));
    bufp->fullBit(oldp+9807,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [6U] >> 0x29U)))));
    bufp->fullBit(oldp+9808,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [7U] >> 0x29U)))));
    bufp->fullBit(oldp+9809,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [8U] >> 0x29U)))));
    bufp->fullBit(oldp+9810,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__42__KET____DOT__bi__DOT____Vcellinp__second1__A));
    bufp->fullBit(oldp+9811,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__41__KET____DOT__bi__DOT____Vcellinp__second4__C));
    bufp->fullBit(oldp+9812,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [3U] >> 0x29U)))));
    bufp->fullBit(oldp+9813,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [4U] >> 0x29U)))));
    bufp->fullBit(oldp+9814,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [5U] >> 0x29U)))));
    bufp->fullBit(oldp+9815,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__42__KET____DOT__bi__DOT____Vcellinp__second2__C));
    bufp->fullBit(oldp+9816,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__41__KET____DOT__bi__DOT____Vcellinp__second4__B));
    bufp->fullBit(oldp+9817,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0U] >> 0x29U)))));
    bufp->fullBit(oldp+9818,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [1U] >> 0x29U)))));
    bufp->fullBit(oldp+9819,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [2U] >> 0x29U)))));
    bufp->fullBit(oldp+9820,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__42__KET____DOT__bi__DOT____Vcellinp__second2__B));
    bufp->fullBit(oldp+9821,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__41__KET____DOT__bi__DOT____Vcellinp__second4__A));
    bufp->fullBit(oldp+9822,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__42__KET____DOT__bi__DOT____Vcellinp__fifth1__C));
    bufp->fullBit(oldp+9823,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__41__KET____DOT__bi__DOT____Vcellinp__fourth2__A));
    bufp->fullBit(oldp+9824,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__41__KET____DOT__bi__DOT____Vcellinp__fourth2__B));
    bufp->fullBit(oldp+9825,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__42__KET____DOT__bi__DOT____Vcellinp__sixth1__C));
    bufp->fullBit(oldp+9826,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__42__KET____DOT__bi__DOT____Vcellinp__third1__C));
    bufp->fullBit(oldp+9827,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__41__KET____DOT__bi__DOT____Vcellinp__third1__A));
    bufp->fullBit(oldp+9828,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0x10U] 
                                            >> 0x29U)))));
    bufp->fullBit(oldp+9829,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__42__KET____DOT__bi__DOT____Vcellinp__third1__B));
    bufp->fullBit(oldp+9830,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__41__KET____DOT__bi__DOT____Vcellinp__third2__C));
    bufp->fullBit(oldp+9831,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xfU] 
                                            >> 0x29U)))));
    bufp->fullBit(oldp+9832,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__42__KET____DOT__bi__DOT____Vcellinp__fourth1__C));
    bufp->fullBit(oldp+9833,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__41__KET____DOT__bi__DOT____Vcellinp__third2__B));
    bufp->fullBit(oldp+9834,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__42__KET____DOT__bi__DOT____Vcellinp__fourth1__B));
    bufp->fullBit(oldp+9835,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__41__KET____DOT__bi__DOT____Vcellinp__third2__A));
    bufp->fullBit(oldp+9836,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__42__KET____DOT__bi__DOT____Vcellinp__fourth1__A));
    bufp->fullBit(oldp+9837,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__42__KET____DOT__bi__DOT____Vcellinp__fourth2__C));
    bufp->fullIData(oldp+9838,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__42__KET____DOT__bi__InData),17);
    bufp->fullBit(oldp+9839,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__42__KET____DOT__bi__DOT__FifSig) 
                               & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__42__KET____DOT__bi__DOT____Vcellinp__sixth1__B) 
                                  | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__42__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                              | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__42__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0))));
    bufp->fullBit(oldp+9840,((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__42__KET____DOT__bi__DOT__FifSig)) 
                               & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__42__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__42__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                              | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__42__KET____DOT__bi__DOT__FifSig)) 
                                  & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__42__KET____DOT__bi__DOT____Vcellinp__sixth1__C)) 
                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__42__KET____DOT__bi__DOT____Vcellinp__sixth1__B))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__42__KET____DOT__bi__DOT__FifSig) 
                                    & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__42__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                        & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__42__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                       | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__42__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0)))))));
    bufp->fullCData(oldp+9841,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__42__KET____DOT__bi__DOT____Vcellinp__second4__A) 
                                 << 4U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__42__KET____DOT__bi__DOT____Vcellinp__second4__B) 
                                            << 3U) 
                                           | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__42__KET____DOT__bi__DOT____Vcellinp__second4__C) 
                                               << 2U) 
                                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__42__KET____DOT__bi__DOT____Vcellinp__second3__A) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__42__KET____DOT__bi__DOT____Vcellinp__second3__B)))))),5);
    bufp->fullCData(oldp+9842,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__42__KET____DOT__bi__DOT____Vcellinp__third2__A) 
                                 << 3U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__42__KET____DOT__bi__DOT____Vcellinp__third2__B) 
                                            << 2U) 
                                           | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__42__KET____DOT__bi__DOT____Vcellinp__third2__C) 
                                               << 1U) 
                                              | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__42__KET____DOT__bi__DOT____Vcellinp__third1__A))))),4);
    bufp->fullCData(oldp+9843,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__42__KET____DOT__bi__DOT____Vcellinp__fourth2__A) 
                                 << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__42__KET____DOT__bi__DOT____Vcellinp__fourth2__B))),2);
    bufp->fullCData(oldp+9844,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__42__KET____DOT__bi__DOT____Vcellinp__fifth1__A) 
                                 << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__42__KET____DOT__bi__DOT____Vcellinp__fifth1__B))),2);
    bufp->fullBit(oldp+9845,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__42__KET____DOT__bi__DOT__FifSig));
    bufp->fullBit(oldp+9846,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__42__KET____DOT__bi__DOT____Vcellinp__fifth1__A));
    bufp->fullBit(oldp+9847,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__42__KET____DOT__bi__DOT____Vcellinp__fifth1__B));
    bufp->fullBit(oldp+9848,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__43__KET____DOT__bi__DOT____Vcellinp__sixth1__B));
    bufp->fullBit(oldp+9849,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xcU] 
                                            >> 0x2aU)))));
    bufp->fullBit(oldp+9850,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xdU] 
                                            >> 0x2aU)))));
    bufp->fullBit(oldp+9851,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xeU] 
                                            >> 0x2aU)))));
    bufp->fullBit(oldp+9852,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__43__KET____DOT__bi__DOT____Vcellinp__second1__C));
    bufp->fullBit(oldp+9853,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__42__KET____DOT__bi__DOT____Vcellinp__second3__B));
    bufp->fullBit(oldp+9854,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [9U] >> 0x2aU)))));
    bufp->fullBit(oldp+9855,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xaU] 
                                            >> 0x2aU)))));
    bufp->fullBit(oldp+9856,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xbU] 
                                            >> 0x2aU)))));
    bufp->fullBit(oldp+9857,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__43__KET____DOT__bi__DOT____Vcellinp__second1__B));
    bufp->fullBit(oldp+9858,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__42__KET____DOT__bi__DOT____Vcellinp__second3__A));
    bufp->fullBit(oldp+9859,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [6U] >> 0x2aU)))));
    bufp->fullBit(oldp+9860,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [7U] >> 0x2aU)))));
    bufp->fullBit(oldp+9861,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [8U] >> 0x2aU)))));
    bufp->fullBit(oldp+9862,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__43__KET____DOT__bi__DOT____Vcellinp__second1__A));
    bufp->fullBit(oldp+9863,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__42__KET____DOT__bi__DOT____Vcellinp__second4__C));
    bufp->fullBit(oldp+9864,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [3U] >> 0x2aU)))));
    bufp->fullBit(oldp+9865,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [4U] >> 0x2aU)))));
    bufp->fullBit(oldp+9866,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [5U] >> 0x2aU)))));
    bufp->fullBit(oldp+9867,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__43__KET____DOT__bi__DOT____Vcellinp__second2__C));
    bufp->fullBit(oldp+9868,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__42__KET____DOT__bi__DOT____Vcellinp__second4__B));
    bufp->fullBit(oldp+9869,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0U] >> 0x2aU)))));
    bufp->fullBit(oldp+9870,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [1U] >> 0x2aU)))));
    bufp->fullBit(oldp+9871,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [2U] >> 0x2aU)))));
    bufp->fullBit(oldp+9872,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__43__KET____DOT__bi__DOT____Vcellinp__second2__B));
    bufp->fullBit(oldp+9873,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__42__KET____DOT__bi__DOT____Vcellinp__second4__A));
    bufp->fullBit(oldp+9874,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__43__KET____DOT__bi__DOT____Vcellinp__fifth1__C));
    bufp->fullBit(oldp+9875,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__42__KET____DOT__bi__DOT____Vcellinp__fourth2__A));
    bufp->fullBit(oldp+9876,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__42__KET____DOT__bi__DOT____Vcellinp__fourth2__B));
    bufp->fullBit(oldp+9877,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__43__KET____DOT__bi__DOT____Vcellinp__sixth1__C));
    bufp->fullBit(oldp+9878,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__43__KET____DOT__bi__DOT____Vcellinp__third1__C));
    bufp->fullBit(oldp+9879,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__42__KET____DOT__bi__DOT____Vcellinp__third1__A));
    bufp->fullBit(oldp+9880,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0x10U] 
                                            >> 0x2aU)))));
    bufp->fullBit(oldp+9881,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__43__KET____DOT__bi__DOT____Vcellinp__third1__B));
    bufp->fullBit(oldp+9882,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__42__KET____DOT__bi__DOT____Vcellinp__third2__C));
    bufp->fullBit(oldp+9883,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xfU] 
                                            >> 0x2aU)))));
    bufp->fullBit(oldp+9884,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__43__KET____DOT__bi__DOT____Vcellinp__fourth1__C));
    bufp->fullBit(oldp+9885,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__42__KET____DOT__bi__DOT____Vcellinp__third2__B));
    bufp->fullBit(oldp+9886,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__43__KET____DOT__bi__DOT____Vcellinp__fourth1__B));
    bufp->fullBit(oldp+9887,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__42__KET____DOT__bi__DOT____Vcellinp__third2__A));
    bufp->fullBit(oldp+9888,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__43__KET____DOT__bi__DOT____Vcellinp__fourth1__A));
    bufp->fullBit(oldp+9889,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__43__KET____DOT__bi__DOT____Vcellinp__fourth2__C));
    bufp->fullIData(oldp+9890,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__43__KET____DOT__bi__InData),17);
    bufp->fullBit(oldp+9891,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__43__KET____DOT__bi__DOT__FifSig) 
                               & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__43__KET____DOT__bi__DOT____Vcellinp__sixth1__B) 
                                  | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__43__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                              | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__43__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0))));
    bufp->fullBit(oldp+9892,((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__43__KET____DOT__bi__DOT__FifSig)) 
                               & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__43__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__43__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                              | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__43__KET____DOT__bi__DOT__FifSig)) 
                                  & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__43__KET____DOT__bi__DOT____Vcellinp__sixth1__C)) 
                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__43__KET____DOT__bi__DOT____Vcellinp__sixth1__B))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__43__KET____DOT__bi__DOT__FifSig) 
                                    & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__43__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                        & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__43__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                       | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__43__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0)))))));
    bufp->fullCData(oldp+9893,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__43__KET____DOT__bi__DOT____Vcellinp__second4__A) 
                                 << 4U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__43__KET____DOT__bi__DOT____Vcellinp__second4__B) 
                                            << 3U) 
                                           | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__43__KET____DOT__bi__DOT____Vcellinp__second4__C) 
                                               << 2U) 
                                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__43__KET____DOT__bi__DOT____Vcellinp__second3__A) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__43__KET____DOT__bi__DOT____Vcellinp__second3__B)))))),5);
    bufp->fullCData(oldp+9894,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__43__KET____DOT__bi__DOT____Vcellinp__third2__A) 
                                 << 3U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__43__KET____DOT__bi__DOT____Vcellinp__third2__B) 
                                            << 2U) 
                                           | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__43__KET____DOT__bi__DOT____Vcellinp__third2__C) 
                                               << 1U) 
                                              | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__43__KET____DOT__bi__DOT____Vcellinp__third1__A))))),4);
    bufp->fullCData(oldp+9895,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__43__KET____DOT__bi__DOT____Vcellinp__fourth2__A) 
                                 << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__43__KET____DOT__bi__DOT____Vcellinp__fourth2__B))),2);
    bufp->fullCData(oldp+9896,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__43__KET____DOT__bi__DOT____Vcellinp__fifth1__A) 
                                 << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__43__KET____DOT__bi__DOT____Vcellinp__fifth1__B))),2);
    bufp->fullBit(oldp+9897,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__43__KET____DOT__bi__DOT__FifSig));
    bufp->fullBit(oldp+9898,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__43__KET____DOT__bi__DOT____Vcellinp__fifth1__A));
    bufp->fullBit(oldp+9899,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__43__KET____DOT__bi__DOT____Vcellinp__fifth1__B));
    bufp->fullBit(oldp+9900,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__44__KET____DOT__bi__DOT____Vcellinp__sixth1__B));
    bufp->fullBit(oldp+9901,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xcU] 
                                            >> 0x2bU)))));
    bufp->fullBit(oldp+9902,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xdU] 
                                            >> 0x2bU)))));
    bufp->fullBit(oldp+9903,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xeU] 
                                            >> 0x2bU)))));
    bufp->fullBit(oldp+9904,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__44__KET____DOT__bi__DOT____Vcellinp__second1__C));
    bufp->fullBit(oldp+9905,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__43__KET____DOT__bi__DOT____Vcellinp__second3__B));
    bufp->fullBit(oldp+9906,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [9U] >> 0x2bU)))));
    bufp->fullBit(oldp+9907,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xaU] 
                                            >> 0x2bU)))));
    bufp->fullBit(oldp+9908,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xbU] 
                                            >> 0x2bU)))));
    bufp->fullBit(oldp+9909,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__44__KET____DOT__bi__DOT____Vcellinp__second1__B));
    bufp->fullBit(oldp+9910,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__43__KET____DOT__bi__DOT____Vcellinp__second3__A));
    bufp->fullBit(oldp+9911,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [6U] >> 0x2bU)))));
    bufp->fullBit(oldp+9912,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [7U] >> 0x2bU)))));
    bufp->fullBit(oldp+9913,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [8U] >> 0x2bU)))));
    bufp->fullBit(oldp+9914,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__44__KET____DOT__bi__DOT____Vcellinp__second1__A));
    bufp->fullBit(oldp+9915,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__43__KET____DOT__bi__DOT____Vcellinp__second4__C));
    bufp->fullBit(oldp+9916,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [3U] >> 0x2bU)))));
    bufp->fullBit(oldp+9917,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [4U] >> 0x2bU)))));
    bufp->fullBit(oldp+9918,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [5U] >> 0x2bU)))));
    bufp->fullBit(oldp+9919,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__44__KET____DOT__bi__DOT____Vcellinp__second2__C));
    bufp->fullBit(oldp+9920,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__43__KET____DOT__bi__DOT____Vcellinp__second4__B));
    bufp->fullBit(oldp+9921,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0U] >> 0x2bU)))));
    bufp->fullBit(oldp+9922,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [1U] >> 0x2bU)))));
    bufp->fullBit(oldp+9923,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [2U] >> 0x2bU)))));
    bufp->fullBit(oldp+9924,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__44__KET____DOT__bi__DOT____Vcellinp__second2__B));
    bufp->fullBit(oldp+9925,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__43__KET____DOT__bi__DOT____Vcellinp__second4__A));
    bufp->fullBit(oldp+9926,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__44__KET____DOT__bi__DOT____Vcellinp__fifth1__C));
    bufp->fullBit(oldp+9927,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__43__KET____DOT__bi__DOT____Vcellinp__fourth2__A));
    bufp->fullBit(oldp+9928,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__43__KET____DOT__bi__DOT____Vcellinp__fourth2__B));
    bufp->fullBit(oldp+9929,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__44__KET____DOT__bi__DOT____Vcellinp__sixth1__C));
    bufp->fullBit(oldp+9930,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__44__KET____DOT__bi__DOT____Vcellinp__third1__C));
    bufp->fullBit(oldp+9931,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__43__KET____DOT__bi__DOT____Vcellinp__third1__A));
    bufp->fullBit(oldp+9932,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0x10U] 
                                            >> 0x2bU)))));
    bufp->fullBit(oldp+9933,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__44__KET____DOT__bi__DOT____Vcellinp__third1__B));
    bufp->fullBit(oldp+9934,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__43__KET____DOT__bi__DOT____Vcellinp__third2__C));
    bufp->fullBit(oldp+9935,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xfU] 
                                            >> 0x2bU)))));
    bufp->fullBit(oldp+9936,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__44__KET____DOT__bi__DOT____Vcellinp__fourth1__C));
    bufp->fullBit(oldp+9937,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__43__KET____DOT__bi__DOT____Vcellinp__third2__B));
    bufp->fullBit(oldp+9938,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__44__KET____DOT__bi__DOT____Vcellinp__fourth1__B));
    bufp->fullBit(oldp+9939,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__43__KET____DOT__bi__DOT____Vcellinp__third2__A));
    bufp->fullBit(oldp+9940,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__44__KET____DOT__bi__DOT____Vcellinp__fourth1__A));
    bufp->fullBit(oldp+9941,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__44__KET____DOT__bi__DOT____Vcellinp__fourth2__C));
    bufp->fullIData(oldp+9942,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__44__KET____DOT__bi__InData),17);
    bufp->fullBit(oldp+9943,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__44__KET____DOT__bi__DOT__FifSig) 
                               & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__44__KET____DOT__bi__DOT____Vcellinp__sixth1__B) 
                                  | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__44__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                              | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__44__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0))));
    bufp->fullBit(oldp+9944,((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__44__KET____DOT__bi__DOT__FifSig)) 
                               & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__44__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__44__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                              | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__44__KET____DOT__bi__DOT__FifSig)) 
                                  & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__44__KET____DOT__bi__DOT____Vcellinp__sixth1__C)) 
                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__44__KET____DOT__bi__DOT____Vcellinp__sixth1__B))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__44__KET____DOT__bi__DOT__FifSig) 
                                    & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__44__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                        & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__44__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                       | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__44__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0)))))));
    bufp->fullCData(oldp+9945,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__44__KET____DOT__bi__DOT____Vcellinp__second4__A) 
                                 << 4U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__44__KET____DOT__bi__DOT____Vcellinp__second4__B) 
                                            << 3U) 
                                           | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__44__KET____DOT__bi__DOT____Vcellinp__second4__C) 
                                               << 2U) 
                                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__44__KET____DOT__bi__DOT____Vcellinp__second3__A) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__44__KET____DOT__bi__DOT____Vcellinp__second3__B)))))),5);
    bufp->fullCData(oldp+9946,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__44__KET____DOT__bi__DOT____Vcellinp__third2__A) 
                                 << 3U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__44__KET____DOT__bi__DOT____Vcellinp__third2__B) 
                                            << 2U) 
                                           | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__44__KET____DOT__bi__DOT____Vcellinp__third2__C) 
                                               << 1U) 
                                              | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__44__KET____DOT__bi__DOT____Vcellinp__third1__A))))),4);
    bufp->fullCData(oldp+9947,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__44__KET____DOT__bi__DOT____Vcellinp__fourth2__A) 
                                 << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__44__KET____DOT__bi__DOT____Vcellinp__fourth2__B))),2);
    bufp->fullCData(oldp+9948,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__44__KET____DOT__bi__DOT____Vcellinp__fifth1__A) 
                                 << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__44__KET____DOT__bi__DOT____Vcellinp__fifth1__B))),2);
    bufp->fullBit(oldp+9949,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__44__KET____DOT__bi__DOT__FifSig));
    bufp->fullBit(oldp+9950,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__44__KET____DOT__bi__DOT____Vcellinp__fifth1__A));
    bufp->fullBit(oldp+9951,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__44__KET____DOT__bi__DOT____Vcellinp__fifth1__B));
    bufp->fullBit(oldp+9952,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT____Vcellinp__sixth1__B));
    bufp->fullBit(oldp+9953,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xcU] 
                                            >> 0x2cU)))));
    bufp->fullBit(oldp+9954,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xdU] 
                                            >> 0x2cU)))));
    bufp->fullBit(oldp+9955,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xeU] 
                                            >> 0x2cU)))));
    bufp->fullBit(oldp+9956,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT____Vcellinp__second1__C));
    bufp->fullBit(oldp+9957,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__44__KET____DOT__bi__DOT____Vcellinp__second3__B));
    bufp->fullBit(oldp+9958,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [9U] >> 0x2cU)))));
    bufp->fullBit(oldp+9959,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xaU] 
                                            >> 0x2cU)))));
    bufp->fullBit(oldp+9960,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xbU] 
                                            >> 0x2cU)))));
    bufp->fullBit(oldp+9961,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT____Vcellinp__second1__B));
    bufp->fullBit(oldp+9962,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__44__KET____DOT__bi__DOT____Vcellinp__second3__A));
    bufp->fullBit(oldp+9963,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [6U] >> 0x2cU)))));
    bufp->fullBit(oldp+9964,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [7U] >> 0x2cU)))));
    bufp->fullBit(oldp+9965,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [8U] >> 0x2cU)))));
    bufp->fullBit(oldp+9966,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT____Vcellinp__second1__A));
    bufp->fullBit(oldp+9967,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__44__KET____DOT__bi__DOT____Vcellinp__second4__C));
    bufp->fullBit(oldp+9968,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [3U] >> 0x2cU)))));
    bufp->fullBit(oldp+9969,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [4U] >> 0x2cU)))));
    bufp->fullBit(oldp+9970,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [5U] >> 0x2cU)))));
    bufp->fullBit(oldp+9971,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT____Vcellinp__second2__C));
    bufp->fullBit(oldp+9972,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__44__KET____DOT__bi__DOT____Vcellinp__second4__B));
    bufp->fullBit(oldp+9973,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0U] >> 0x2cU)))));
    bufp->fullBit(oldp+9974,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [1U] >> 0x2cU)))));
    bufp->fullBit(oldp+9975,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [2U] >> 0x2cU)))));
    bufp->fullBit(oldp+9976,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT____Vcellinp__second2__B));
    bufp->fullBit(oldp+9977,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__44__KET____DOT__bi__DOT____Vcellinp__second4__A));
    bufp->fullBit(oldp+9978,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT____Vcellinp__fifth1__C));
    bufp->fullBit(oldp+9979,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__44__KET____DOT__bi__DOT____Vcellinp__fourth2__A));
    bufp->fullBit(oldp+9980,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__44__KET____DOT__bi__DOT____Vcellinp__fourth2__B));
    bufp->fullBit(oldp+9981,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT____Vcellinp__sixth1__C));
    bufp->fullBit(oldp+9982,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT____Vcellinp__third1__C));
    bufp->fullBit(oldp+9983,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__44__KET____DOT__bi__DOT____Vcellinp__third1__A));
    bufp->fullBit(oldp+9984,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0x10U] 
                                            >> 0x2cU)))));
    bufp->fullBit(oldp+9985,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT____Vcellinp__third1__B));
    bufp->fullBit(oldp+9986,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__44__KET____DOT__bi__DOT____Vcellinp__third2__C));
    bufp->fullBit(oldp+9987,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                            [0xfU] 
                                            >> 0x2cU)))));
    bufp->fullBit(oldp+9988,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT____Vcellinp__fourth1__C));
    bufp->fullBit(oldp+9989,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__44__KET____DOT__bi__DOT____Vcellinp__third2__B));
    bufp->fullBit(oldp+9990,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT____Vcellinp__fourth1__B));
    bufp->fullBit(oldp+9991,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__44__KET____DOT__bi__DOT____Vcellinp__third2__A));
    bufp->fullBit(oldp+9992,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT____Vcellinp__fourth1__A));
    bufp->fullBit(oldp+9993,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT____Vcellinp__fourth2__C));
    bufp->fullIData(oldp+9994,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__45__KET____DOT__bi__InData),17);
    bufp->fullBit(oldp+9995,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT__FifSig) 
                               & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT____Vcellinp__sixth1__B) 
                                  | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                              | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0))));
    bufp->fullBit(oldp+9996,((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT__FifSig)) 
                               & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                              | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT__FifSig)) 
                                  & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT____Vcellinp__sixth1__C)) 
                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT____Vcellinp__sixth1__B))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT__FifSig) 
                                    & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                        & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                       | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0)))))));
    bufp->fullCData(oldp+9997,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT____Vcellinp__second4__A) 
                                 << 4U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT____Vcellinp__second4__B) 
                                            << 3U) 
                                           | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT____Vcellinp__second4__C) 
                                               << 2U) 
                                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT____Vcellinp__second3__A) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT____Vcellinp__second3__B)))))),5);
    bufp->fullCData(oldp+9998,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT____Vcellinp__third2__A) 
                                 << 3U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT____Vcellinp__third2__B) 
                                            << 2U) 
                                           | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT____Vcellinp__third2__C) 
                                               << 1U) 
                                              | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT____Vcellinp__third1__A))))),4);
    bufp->fullCData(oldp+9999,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT____Vcellinp__fourth2__A) 
                                 << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT____Vcellinp__fourth2__B))),2);
    bufp->fullCData(oldp+10000,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT____Vcellinp__fifth1__A) 
                                  << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT____Vcellinp__fifth1__B))),2);
    bufp->fullBit(oldp+10001,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT__FifSig));
    bufp->fullBit(oldp+10002,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT____Vcellinp__fifth1__A));
    bufp->fullBit(oldp+10003,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT____Vcellinp__fifth1__B));
    bufp->fullBit(oldp+10004,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT____Vcellinp__sixth1__B));
    bufp->fullBit(oldp+10005,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0xcU] 
                                             >> 0x2dU)))));
    bufp->fullBit(oldp+10006,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0xdU] 
                                             >> 0x2dU)))));
    bufp->fullBit(oldp+10007,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0xeU] 
                                             >> 0x2dU)))));
    bufp->fullBit(oldp+10008,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT____Vcellinp__second1__C));
    bufp->fullBit(oldp+10009,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT____Vcellinp__second3__B));
    bufp->fullBit(oldp+10010,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [9U] >> 0x2dU)))));
    bufp->fullBit(oldp+10011,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0xaU] 
                                             >> 0x2dU)))));
    bufp->fullBit(oldp+10012,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0xbU] 
                                             >> 0x2dU)))));
    bufp->fullBit(oldp+10013,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT____Vcellinp__second1__B));
    bufp->fullBit(oldp+10014,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT____Vcellinp__second3__A));
    bufp->fullBit(oldp+10015,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [6U] >> 0x2dU)))));
    bufp->fullBit(oldp+10016,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [7U] >> 0x2dU)))));
    bufp->fullBit(oldp+10017,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [8U] >> 0x2dU)))));
    bufp->fullBit(oldp+10018,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT____Vcellinp__second1__A));
    bufp->fullBit(oldp+10019,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT____Vcellinp__second4__C));
    bufp->fullBit(oldp+10020,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [3U] >> 0x2dU)))));
    bufp->fullBit(oldp+10021,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [4U] >> 0x2dU)))));
    bufp->fullBit(oldp+10022,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [5U] >> 0x2dU)))));
    bufp->fullBit(oldp+10023,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT____Vcellinp__second2__C));
    bufp->fullBit(oldp+10024,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT____Vcellinp__second4__B));
    bufp->fullBit(oldp+10025,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0U] >> 0x2dU)))));
    bufp->fullBit(oldp+10026,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [1U] >> 0x2dU)))));
    bufp->fullBit(oldp+10027,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [2U] >> 0x2dU)))));
    bufp->fullBit(oldp+10028,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT____Vcellinp__second2__B));
    bufp->fullBit(oldp+10029,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT____Vcellinp__second4__A));
    bufp->fullBit(oldp+10030,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT____Vcellinp__fifth1__C));
    bufp->fullBit(oldp+10031,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT____Vcellinp__fourth2__A));
    bufp->fullBit(oldp+10032,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT____Vcellinp__fourth2__B));
    bufp->fullBit(oldp+10033,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT____Vcellinp__sixth1__C));
    bufp->fullBit(oldp+10034,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT____Vcellinp__third1__C));
    bufp->fullBit(oldp+10035,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT____Vcellinp__third1__A));
    bufp->fullBit(oldp+10036,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0x10U] 
                                             >> 0x2dU)))));
    bufp->fullBit(oldp+10037,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT____Vcellinp__third1__B));
    bufp->fullBit(oldp+10038,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT____Vcellinp__third2__C));
    bufp->fullBit(oldp+10039,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0xfU] 
                                             >> 0x2dU)))));
    bufp->fullBit(oldp+10040,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT____Vcellinp__fourth1__C));
    bufp->fullBit(oldp+10041,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT____Vcellinp__third2__B));
    bufp->fullBit(oldp+10042,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT____Vcellinp__fourth1__B));
    bufp->fullBit(oldp+10043,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT____Vcellinp__third2__A));
    bufp->fullBit(oldp+10044,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT____Vcellinp__fourth1__A));
    bufp->fullBit(oldp+10045,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT____Vcellinp__fourth2__C));
    bufp->fullIData(oldp+10046,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__46__KET____DOT__bi__InData),17);
    bufp->fullBit(oldp+10047,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT__FifSig) 
                                & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT____Vcellinp__sixth1__B) 
                                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                               | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0))));
    bufp->fullBit(oldp+10048,((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT__FifSig)) 
                                & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                               | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT__FifSig)) 
                                   & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT____Vcellinp__sixth1__C)) 
                                      & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT____Vcellinp__sixth1__B))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT__FifSig) 
                                     & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                         & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                        | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0)))))));
    bufp->fullCData(oldp+10049,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT____Vcellinp__second4__A) 
                                  << 4U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT____Vcellinp__second4__B) 
                                             << 3U) 
                                            | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT____Vcellinp__second4__C) 
                                                << 2U) 
                                               | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT____Vcellinp__second3__A) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT____Vcellinp__second3__B)))))),5);
    bufp->fullCData(oldp+10050,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT____Vcellinp__third2__A) 
                                  << 3U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT____Vcellinp__third2__B) 
                                             << 2U) 
                                            | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT____Vcellinp__third2__C) 
                                                << 1U) 
                                               | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT____Vcellinp__third1__A))))),4);
    bufp->fullCData(oldp+10051,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT____Vcellinp__fourth2__A) 
                                  << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT____Vcellinp__fourth2__B))),2);
    bufp->fullCData(oldp+10052,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT____Vcellinp__fifth1__A) 
                                  << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT____Vcellinp__fifth1__B))),2);
    bufp->fullBit(oldp+10053,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT__FifSig));
    bufp->fullBit(oldp+10054,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT____Vcellinp__fifth1__A));
    bufp->fullBit(oldp+10055,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT____Vcellinp__fifth1__B));
    bufp->fullBit(oldp+10056,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT____Vcellinp__sixth1__B));
    bufp->fullBit(oldp+10057,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0xcU] 
                                             >> 0x2eU)))));
    bufp->fullBit(oldp+10058,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0xdU] 
                                             >> 0x2eU)))));
    bufp->fullBit(oldp+10059,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0xeU] 
                                             >> 0x2eU)))));
    bufp->fullBit(oldp+10060,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT____Vcellinp__second1__C));
    bufp->fullBit(oldp+10061,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT____Vcellinp__second3__B));
    bufp->fullBit(oldp+10062,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [9U] >> 0x2eU)))));
    bufp->fullBit(oldp+10063,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0xaU] 
                                             >> 0x2eU)))));
    bufp->fullBit(oldp+10064,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0xbU] 
                                             >> 0x2eU)))));
    bufp->fullBit(oldp+10065,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT____Vcellinp__second1__B));
    bufp->fullBit(oldp+10066,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT____Vcellinp__second3__A));
    bufp->fullBit(oldp+10067,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [6U] >> 0x2eU)))));
    bufp->fullBit(oldp+10068,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [7U] >> 0x2eU)))));
    bufp->fullBit(oldp+10069,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [8U] >> 0x2eU)))));
    bufp->fullBit(oldp+10070,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT____Vcellinp__second1__A));
    bufp->fullBit(oldp+10071,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT____Vcellinp__second4__C));
    bufp->fullBit(oldp+10072,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [3U] >> 0x2eU)))));
    bufp->fullBit(oldp+10073,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [4U] >> 0x2eU)))));
    bufp->fullBit(oldp+10074,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [5U] >> 0x2eU)))));
    bufp->fullBit(oldp+10075,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT____Vcellinp__second2__C));
    bufp->fullBit(oldp+10076,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT____Vcellinp__second4__B));
    bufp->fullBit(oldp+10077,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0U] >> 0x2eU)))));
    bufp->fullBit(oldp+10078,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [1U] >> 0x2eU)))));
    bufp->fullBit(oldp+10079,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [2U] >> 0x2eU)))));
    bufp->fullBit(oldp+10080,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT____Vcellinp__second2__B));
    bufp->fullBit(oldp+10081,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT____Vcellinp__second4__A));
    bufp->fullBit(oldp+10082,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT____Vcellinp__fifth1__C));
    bufp->fullBit(oldp+10083,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT____Vcellinp__fourth2__A));
    bufp->fullBit(oldp+10084,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT____Vcellinp__fourth2__B));
    bufp->fullBit(oldp+10085,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT____Vcellinp__sixth1__C));
    bufp->fullBit(oldp+10086,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT____Vcellinp__third1__C));
    bufp->fullBit(oldp+10087,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT____Vcellinp__third1__A));
    bufp->fullBit(oldp+10088,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0x10U] 
                                             >> 0x2eU)))));
    bufp->fullBit(oldp+10089,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT____Vcellinp__third1__B));
    bufp->fullBit(oldp+10090,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT____Vcellinp__third2__C));
    bufp->fullBit(oldp+10091,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0xfU] 
                                             >> 0x2eU)))));
    bufp->fullBit(oldp+10092,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT____Vcellinp__fourth1__C));
    bufp->fullBit(oldp+10093,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT____Vcellinp__third2__B));
    bufp->fullBit(oldp+10094,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT____Vcellinp__fourth1__B));
    bufp->fullBit(oldp+10095,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT____Vcellinp__third2__A));
    bufp->fullBit(oldp+10096,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT____Vcellinp__fourth1__A));
    bufp->fullBit(oldp+10097,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT____Vcellinp__fourth2__C));
    bufp->fullIData(oldp+10098,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__47__KET____DOT__bi__InData),17);
    bufp->fullBit(oldp+10099,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT__FifSig) 
                                & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT____Vcellinp__sixth1__B) 
                                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                               | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0))));
    bufp->fullBit(oldp+10100,((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT__FifSig)) 
                                & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                               | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT__FifSig)) 
                                   & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT____Vcellinp__sixth1__C)) 
                                      & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT____Vcellinp__sixth1__B))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT__FifSig) 
                                     & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                         & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                        | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0)))))));
    bufp->fullCData(oldp+10101,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT____Vcellinp__second4__A) 
                                  << 4U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT____Vcellinp__second4__B) 
                                             << 3U) 
                                            | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT____Vcellinp__second4__C) 
                                                << 2U) 
                                               | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT____Vcellinp__second3__A) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT____Vcellinp__second3__B)))))),5);
    bufp->fullCData(oldp+10102,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT____Vcellinp__third2__A) 
                                  << 3U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT____Vcellinp__third2__B) 
                                             << 2U) 
                                            | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT____Vcellinp__third2__C) 
                                                << 1U) 
                                               | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT____Vcellinp__third1__A))))),4);
    bufp->fullCData(oldp+10103,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT____Vcellinp__fourth2__A) 
                                  << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT____Vcellinp__fourth2__B))),2);
    bufp->fullCData(oldp+10104,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT____Vcellinp__fifth1__A) 
                                  << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT____Vcellinp__fifth1__B))),2);
    bufp->fullBit(oldp+10105,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT__FifSig));
    bufp->fullBit(oldp+10106,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT____Vcellinp__fifth1__A));
    bufp->fullBit(oldp+10107,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT____Vcellinp__fifth1__B));
    bufp->fullBit(oldp+10108,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT____Vcellinp__sixth1__B));
    bufp->fullBit(oldp+10109,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0xcU] 
                                             >> 0x2fU)))));
    bufp->fullBit(oldp+10110,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0xdU] 
                                             >> 0x2fU)))));
    bufp->fullBit(oldp+10111,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0xeU] 
                                             >> 0x2fU)))));
    bufp->fullBit(oldp+10112,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT____Vcellinp__second1__C));
    bufp->fullBit(oldp+10113,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT____Vcellinp__second3__B));
    bufp->fullBit(oldp+10114,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [9U] >> 0x2fU)))));
    bufp->fullBit(oldp+10115,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0xaU] 
                                             >> 0x2fU)))));
    bufp->fullBit(oldp+10116,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0xbU] 
                                             >> 0x2fU)))));
    bufp->fullBit(oldp+10117,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT____Vcellinp__second1__B));
    bufp->fullBit(oldp+10118,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT____Vcellinp__second3__A));
    bufp->fullBit(oldp+10119,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [6U] >> 0x2fU)))));
    bufp->fullBit(oldp+10120,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [7U] >> 0x2fU)))));
    bufp->fullBit(oldp+10121,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [8U] >> 0x2fU)))));
    bufp->fullBit(oldp+10122,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT____Vcellinp__second1__A));
    bufp->fullBit(oldp+10123,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT____Vcellinp__second4__C));
    bufp->fullBit(oldp+10124,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [3U] >> 0x2fU)))));
    bufp->fullBit(oldp+10125,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [4U] >> 0x2fU)))));
    bufp->fullBit(oldp+10126,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [5U] >> 0x2fU)))));
    bufp->fullBit(oldp+10127,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT____Vcellinp__second2__C));
    bufp->fullBit(oldp+10128,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT____Vcellinp__second4__B));
    bufp->fullBit(oldp+10129,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0U] >> 0x2fU)))));
    bufp->fullBit(oldp+10130,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [1U] >> 0x2fU)))));
    bufp->fullBit(oldp+10131,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [2U] >> 0x2fU)))));
    bufp->fullBit(oldp+10132,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT____Vcellinp__second2__B));
    bufp->fullBit(oldp+10133,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT____Vcellinp__second4__A));
    bufp->fullBit(oldp+10134,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT____Vcellinp__fifth1__C));
    bufp->fullBit(oldp+10135,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT____Vcellinp__fourth2__A));
    bufp->fullBit(oldp+10136,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT____Vcellinp__fourth2__B));
    bufp->fullBit(oldp+10137,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT____Vcellinp__sixth1__C));
    bufp->fullBit(oldp+10138,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT____Vcellinp__third1__C));
    bufp->fullBit(oldp+10139,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT____Vcellinp__third1__A));
    bufp->fullBit(oldp+10140,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0x10U] 
                                             >> 0x2fU)))));
    bufp->fullBit(oldp+10141,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT____Vcellinp__third1__B));
    bufp->fullBit(oldp+10142,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT____Vcellinp__third2__C));
    bufp->fullBit(oldp+10143,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0xfU] 
                                             >> 0x2fU)))));
    bufp->fullBit(oldp+10144,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT____Vcellinp__fourth1__C));
    bufp->fullBit(oldp+10145,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT____Vcellinp__third2__B));
    bufp->fullBit(oldp+10146,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT____Vcellinp__fourth1__B));
    bufp->fullBit(oldp+10147,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT____Vcellinp__third2__A));
    bufp->fullBit(oldp+10148,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT____Vcellinp__fourth1__A));
    bufp->fullBit(oldp+10149,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT____Vcellinp__fourth2__C));
    bufp->fullIData(oldp+10150,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__48__KET____DOT__bi__InData),17);
    bufp->fullBit(oldp+10151,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT__FifSig) 
                                & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT____Vcellinp__sixth1__B) 
                                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                               | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0))));
    bufp->fullBit(oldp+10152,((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT__FifSig)) 
                                & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                               | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT__FifSig)) 
                                   & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT____Vcellinp__sixth1__C)) 
                                      & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT____Vcellinp__sixth1__B))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT__FifSig) 
                                     & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                         & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                        | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0)))))));
    bufp->fullCData(oldp+10153,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT____Vcellinp__second4__A) 
                                  << 4U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT____Vcellinp__second4__B) 
                                             << 3U) 
                                            | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT____Vcellinp__second4__C) 
                                                << 2U) 
                                               | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT____Vcellinp__second3__A) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT____Vcellinp__second3__B)))))),5);
    bufp->fullCData(oldp+10154,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT____Vcellinp__third2__A) 
                                  << 3U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT____Vcellinp__third2__B) 
                                             << 2U) 
                                            | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT____Vcellinp__third2__C) 
                                                << 1U) 
                                               | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT____Vcellinp__third1__A))))),4);
    bufp->fullCData(oldp+10155,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT____Vcellinp__fourth2__A) 
                                  << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT____Vcellinp__fourth2__B))),2);
    bufp->fullCData(oldp+10156,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT____Vcellinp__fifth1__A) 
                                  << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT____Vcellinp__fifth1__B))),2);
    bufp->fullBit(oldp+10157,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT__FifSig));
    bufp->fullBit(oldp+10158,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT____Vcellinp__fifth1__A));
    bufp->fullBit(oldp+10159,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT____Vcellinp__fifth1__B));
    bufp->fullBit(oldp+10160,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT____Vcellinp__sixth1__B));
    bufp->fullBit(oldp+10161,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0xcU] 
                                             >> 0x30U)))));
    bufp->fullBit(oldp+10162,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0xdU] 
                                             >> 0x30U)))));
    bufp->fullBit(oldp+10163,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0xeU] 
                                             >> 0x30U)))));
    bufp->fullBit(oldp+10164,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT____Vcellinp__second1__C));
    bufp->fullBit(oldp+10165,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT____Vcellinp__second3__B));
    bufp->fullBit(oldp+10166,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [9U] >> 0x30U)))));
    bufp->fullBit(oldp+10167,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0xaU] 
                                             >> 0x30U)))));
    bufp->fullBit(oldp+10168,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0xbU] 
                                             >> 0x30U)))));
    bufp->fullBit(oldp+10169,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT____Vcellinp__second1__B));
    bufp->fullBit(oldp+10170,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT____Vcellinp__second3__A));
    bufp->fullBit(oldp+10171,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [6U] >> 0x30U)))));
    bufp->fullBit(oldp+10172,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [7U] >> 0x30U)))));
    bufp->fullBit(oldp+10173,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [8U] >> 0x30U)))));
    bufp->fullBit(oldp+10174,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT____Vcellinp__second1__A));
    bufp->fullBit(oldp+10175,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT____Vcellinp__second4__C));
    bufp->fullBit(oldp+10176,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [3U] >> 0x30U)))));
    bufp->fullBit(oldp+10177,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [4U] >> 0x30U)))));
    bufp->fullBit(oldp+10178,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [5U] >> 0x30U)))));
    bufp->fullBit(oldp+10179,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT____Vcellinp__second2__C));
    bufp->fullBit(oldp+10180,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT____Vcellinp__second4__B));
    bufp->fullBit(oldp+10181,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0U] >> 0x30U)))));
    bufp->fullBit(oldp+10182,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [1U] >> 0x30U)))));
    bufp->fullBit(oldp+10183,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [2U] >> 0x30U)))));
    bufp->fullBit(oldp+10184,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT____Vcellinp__second2__B));
    bufp->fullBit(oldp+10185,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT____Vcellinp__second4__A));
    bufp->fullBit(oldp+10186,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT____Vcellinp__fifth1__C));
    bufp->fullBit(oldp+10187,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT____Vcellinp__fourth2__A));
    bufp->fullBit(oldp+10188,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT____Vcellinp__fourth2__B));
    bufp->fullBit(oldp+10189,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT____Vcellinp__sixth1__C));
    bufp->fullBit(oldp+10190,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT____Vcellinp__third1__C));
    bufp->fullBit(oldp+10191,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT____Vcellinp__third1__A));
    bufp->fullBit(oldp+10192,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0x10U] 
                                             >> 0x30U)))));
    bufp->fullBit(oldp+10193,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT____Vcellinp__third1__B));
    bufp->fullBit(oldp+10194,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT____Vcellinp__third2__C));
    bufp->fullBit(oldp+10195,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0xfU] 
                                             >> 0x30U)))));
    bufp->fullBit(oldp+10196,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT____Vcellinp__fourth1__C));
    bufp->fullBit(oldp+10197,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT____Vcellinp__third2__B));
    bufp->fullBit(oldp+10198,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT____Vcellinp__fourth1__B));
    bufp->fullBit(oldp+10199,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT____Vcellinp__third2__A));
    bufp->fullBit(oldp+10200,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT____Vcellinp__fourth1__A));
    bufp->fullBit(oldp+10201,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT____Vcellinp__fourth2__C));
    bufp->fullIData(oldp+10202,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__49__KET____DOT__bi__InData),17);
    bufp->fullBit(oldp+10203,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT__FifSig) 
                                & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT____Vcellinp__sixth1__B) 
                                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                               | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0))));
    bufp->fullBit(oldp+10204,((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT__FifSig)) 
                                & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                               | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT__FifSig)) 
                                   & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT____Vcellinp__sixth1__C)) 
                                      & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT____Vcellinp__sixth1__B))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT__FifSig) 
                                     & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                         & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                        | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0)))))));
    bufp->fullCData(oldp+10205,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT____Vcellinp__second4__A) 
                                  << 4U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT____Vcellinp__second4__B) 
                                             << 3U) 
                                            | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT____Vcellinp__second4__C) 
                                                << 2U) 
                                               | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT____Vcellinp__second3__A) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT____Vcellinp__second3__B)))))),5);
    bufp->fullCData(oldp+10206,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT____Vcellinp__third2__A) 
                                  << 3U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT____Vcellinp__third2__B) 
                                             << 2U) 
                                            | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT____Vcellinp__third2__C) 
                                                << 1U) 
                                               | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT____Vcellinp__third1__A))))),4);
    bufp->fullCData(oldp+10207,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT____Vcellinp__fourth2__A) 
                                  << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT____Vcellinp__fourth2__B))),2);
    bufp->fullCData(oldp+10208,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT____Vcellinp__fifth1__A) 
                                  << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT____Vcellinp__fifth1__B))),2);
    bufp->fullBit(oldp+10209,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT__FifSig));
    bufp->fullBit(oldp+10210,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT____Vcellinp__fifth1__A));
    bufp->fullBit(oldp+10211,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT____Vcellinp__fifth1__B));
    bufp->fullBit(oldp+10212,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT____Vcellinp__sixth1__B));
    bufp->fullBit(oldp+10213,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0xcU] 
                                             >> 0x31U)))));
    bufp->fullBit(oldp+10214,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0xdU] 
                                             >> 0x31U)))));
    bufp->fullBit(oldp+10215,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0xeU] 
                                             >> 0x31U)))));
    bufp->fullBit(oldp+10216,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT____Vcellinp__second1__C));
    bufp->fullBit(oldp+10217,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT____Vcellinp__second3__B));
    bufp->fullBit(oldp+10218,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [9U] >> 0x31U)))));
    bufp->fullBit(oldp+10219,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0xaU] 
                                             >> 0x31U)))));
    bufp->fullBit(oldp+10220,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0xbU] 
                                             >> 0x31U)))));
    bufp->fullBit(oldp+10221,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT____Vcellinp__second1__B));
    bufp->fullBit(oldp+10222,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT____Vcellinp__second3__A));
    bufp->fullBit(oldp+10223,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [6U] >> 0x31U)))));
    bufp->fullBit(oldp+10224,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [7U] >> 0x31U)))));
    bufp->fullBit(oldp+10225,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [8U] >> 0x31U)))));
    bufp->fullBit(oldp+10226,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT____Vcellinp__second1__A));
    bufp->fullBit(oldp+10227,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT____Vcellinp__second4__C));
    bufp->fullBit(oldp+10228,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [3U] >> 0x31U)))));
    bufp->fullBit(oldp+10229,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [4U] >> 0x31U)))));
    bufp->fullBit(oldp+10230,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [5U] >> 0x31U)))));
    bufp->fullBit(oldp+10231,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT____Vcellinp__second2__C));
    bufp->fullBit(oldp+10232,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT____Vcellinp__second4__B));
    bufp->fullBit(oldp+10233,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0U] >> 0x31U)))));
    bufp->fullBit(oldp+10234,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [1U] >> 0x31U)))));
    bufp->fullBit(oldp+10235,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [2U] >> 0x31U)))));
    bufp->fullBit(oldp+10236,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT____Vcellinp__second2__B));
    bufp->fullBit(oldp+10237,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT____Vcellinp__second4__A));
    bufp->fullBit(oldp+10238,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT____Vcellinp__fifth1__C));
    bufp->fullBit(oldp+10239,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT____Vcellinp__fourth2__A));
    bufp->fullBit(oldp+10240,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT____Vcellinp__fourth2__B));
    bufp->fullBit(oldp+10241,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT____Vcellinp__sixth1__C));
    bufp->fullBit(oldp+10242,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT____Vcellinp__third1__C));
    bufp->fullBit(oldp+10243,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT____Vcellinp__third1__A));
    bufp->fullBit(oldp+10244,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0x10U] 
                                             >> 0x31U)))));
    bufp->fullBit(oldp+10245,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT____Vcellinp__third1__B));
    bufp->fullBit(oldp+10246,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT____Vcellinp__third2__C));
    bufp->fullBit(oldp+10247,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0xfU] 
                                             >> 0x31U)))));
    bufp->fullBit(oldp+10248,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT____Vcellinp__fourth1__C));
    bufp->fullBit(oldp+10249,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT____Vcellinp__third2__B));
    bufp->fullBit(oldp+10250,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT____Vcellinp__fourth1__B));
    bufp->fullBit(oldp+10251,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT____Vcellinp__third2__A));
    bufp->fullBit(oldp+10252,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT____Vcellinp__fourth1__A));
    bufp->fullBit(oldp+10253,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT____Vcellinp__fourth2__C));
    bufp->fullIData(oldp+10254,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData),17);
    bufp->fullBit(oldp+10255,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi__DOT__FifSig) 
                                & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi__DOT____Vcellinp__sixth1__B) 
                                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                               | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0))));
    bufp->fullBit(oldp+10256,((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi__DOT__FifSig)) 
                                & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                               | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi__DOT__FifSig)) 
                                   & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi__DOT____Vcellinp__sixth1__C)) 
                                      & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi__DOT____Vcellinp__sixth1__B))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi__DOT__FifSig) 
                                     & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                         & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                        | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0)))))));
    bufp->fullCData(oldp+10257,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi__DOT____Vcellinp__second4__A) 
                                  << 4U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi__DOT____Vcellinp__second4__B) 
                                             << 3U) 
                                            | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi__DOT____Vcellinp__second4__C) 
                                                << 2U) 
                                               | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi__DOT____Vcellinp__second3__A) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi__DOT____Vcellinp__second3__B)))))),5);
    bufp->fullCData(oldp+10258,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi__DOT____Vcellinp__third2__A) 
                                  << 3U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi__DOT____Vcellinp__third2__B) 
                                             << 2U) 
                                            | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi__DOT____Vcellinp__third2__C) 
                                                << 1U) 
                                               | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi__DOT____Vcellinp__third1__A))))),4);
    bufp->fullCData(oldp+10259,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi__DOT____Vcellinp__fourth2__A) 
                                  << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi__DOT____Vcellinp__fourth2__B))),2);
    bufp->fullCData(oldp+10260,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi__DOT____Vcellinp__fifth1__A) 
                                  << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi__DOT____Vcellinp__fifth1__B))),2);
    bufp->fullBit(oldp+10261,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi__DOT__FifSig));
    bufp->fullBit(oldp+10262,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi__DOT____Vcellinp__fifth1__A));
    bufp->fullBit(oldp+10263,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi__DOT____Vcellinp__fifth1__B));
    bufp->fullBit(oldp+10264,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT____Vcellinp__sixth1__B));
    bufp->fullBit(oldp+10265,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0xcU] 
                                             >> 4U)))));
    bufp->fullBit(oldp+10266,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0xdU] 
                                             >> 4U)))));
    bufp->fullBit(oldp+10267,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0xeU] 
                                             >> 4U)))));
    bufp->fullBit(oldp+10268,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT____Vcellinp__second1__C));
    bufp->fullBit(oldp+10269,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi__DOT____Vcellinp__second3__B));
    bufp->fullBit(oldp+10270,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [9U] >> 4U)))));
    bufp->fullBit(oldp+10271,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0xaU] 
                                             >> 4U)))));
    bufp->fullBit(oldp+10272,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0xbU] 
                                             >> 4U)))));
    bufp->fullBit(oldp+10273,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT____Vcellinp__second1__B));
    bufp->fullBit(oldp+10274,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi__DOT____Vcellinp__second3__A));
    bufp->fullBit(oldp+10275,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [6U] >> 4U)))));
    bufp->fullBit(oldp+10276,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [7U] >> 4U)))));
    bufp->fullBit(oldp+10277,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [8U] >> 4U)))));
    bufp->fullBit(oldp+10278,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT____Vcellinp__second1__A));
    bufp->fullBit(oldp+10279,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi__DOT____Vcellinp__second4__C));
    bufp->fullBit(oldp+10280,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [3U] >> 4U)))));
    bufp->fullBit(oldp+10281,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [4U] >> 4U)))));
    bufp->fullBit(oldp+10282,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [5U] >> 4U)))));
    bufp->fullBit(oldp+10283,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT____Vcellinp__second2__C));
    bufp->fullBit(oldp+10284,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi__DOT____Vcellinp__second4__B));
    bufp->fullBit(oldp+10285,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0U] >> 4U)))));
    bufp->fullBit(oldp+10286,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [1U] >> 4U)))));
    bufp->fullBit(oldp+10287,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [2U] >> 4U)))));
    bufp->fullBit(oldp+10288,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT____Vcellinp__second2__B));
    bufp->fullBit(oldp+10289,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi__DOT____Vcellinp__second4__A));
    bufp->fullBit(oldp+10290,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT____Vcellinp__fifth1__C));
    bufp->fullBit(oldp+10291,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi__DOT____Vcellinp__fourth2__A));
    bufp->fullBit(oldp+10292,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi__DOT____Vcellinp__fourth2__B));
    bufp->fullBit(oldp+10293,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT____Vcellinp__sixth1__C));
    bufp->fullBit(oldp+10294,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT____Vcellinp__third1__C));
    bufp->fullBit(oldp+10295,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi__DOT____Vcellinp__third1__A));
    bufp->fullBit(oldp+10296,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0x10U] 
                                             >> 4U)))));
    bufp->fullBit(oldp+10297,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT____Vcellinp__third1__B));
    bufp->fullBit(oldp+10298,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi__DOT____Vcellinp__third2__C));
    bufp->fullBit(oldp+10299,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0xfU] 
                                             >> 4U)))));
    bufp->fullBit(oldp+10300,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT____Vcellinp__fourth1__C));
    bufp->fullBit(oldp+10301,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi__DOT____Vcellinp__third2__B));
    bufp->fullBit(oldp+10302,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT____Vcellinp__fourth1__B));
    bufp->fullBit(oldp+10303,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi__DOT____Vcellinp__third2__A));
    bufp->fullBit(oldp+10304,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT____Vcellinp__fourth1__A));
    bufp->fullBit(oldp+10305,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT____Vcellinp__fourth2__C));
    bufp->fullIData(oldp+10306,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__50__KET____DOT__bi__InData),17);
    bufp->fullBit(oldp+10307,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT__FifSig) 
                                & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT____Vcellinp__sixth1__B) 
                                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                               | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0))));
    bufp->fullBit(oldp+10308,((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT__FifSig)) 
                                & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                               | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT__FifSig)) 
                                   & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT____Vcellinp__sixth1__C)) 
                                      & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT____Vcellinp__sixth1__B))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT__FifSig) 
                                     & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                         & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                        | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0)))))));
    bufp->fullCData(oldp+10309,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT____Vcellinp__second4__A) 
                                  << 4U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT____Vcellinp__second4__B) 
                                             << 3U) 
                                            | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT____Vcellinp__second4__C) 
                                                << 2U) 
                                               | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT____Vcellinp__second3__A) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT____Vcellinp__second3__B)))))),5);
    bufp->fullCData(oldp+10310,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT____Vcellinp__third2__A) 
                                  << 3U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT____Vcellinp__third2__B) 
                                             << 2U) 
                                            | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT____Vcellinp__third2__C) 
                                                << 1U) 
                                               | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT____Vcellinp__third1__A))))),4);
    bufp->fullCData(oldp+10311,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT____Vcellinp__fourth2__A) 
                                  << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT____Vcellinp__fourth2__B))),2);
    bufp->fullCData(oldp+10312,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT____Vcellinp__fifth1__A) 
                                  << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT____Vcellinp__fifth1__B))),2);
    bufp->fullBit(oldp+10313,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT__FifSig));
    bufp->fullBit(oldp+10314,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT____Vcellinp__fifth1__A));
    bufp->fullBit(oldp+10315,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT____Vcellinp__fifth1__B));
    bufp->fullBit(oldp+10316,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT____Vcellinp__sixth1__B));
    bufp->fullBit(oldp+10317,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0xcU] 
                                             >> 0x32U)))));
    bufp->fullBit(oldp+10318,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0xdU] 
                                             >> 0x32U)))));
    bufp->fullBit(oldp+10319,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0xeU] 
                                             >> 0x32U)))));
    bufp->fullBit(oldp+10320,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT____Vcellinp__second1__C));
    bufp->fullBit(oldp+10321,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT____Vcellinp__second3__B));
    bufp->fullBit(oldp+10322,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [9U] >> 0x32U)))));
    bufp->fullBit(oldp+10323,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0xaU] 
                                             >> 0x32U)))));
    bufp->fullBit(oldp+10324,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0xbU] 
                                             >> 0x32U)))));
    bufp->fullBit(oldp+10325,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT____Vcellinp__second1__B));
    bufp->fullBit(oldp+10326,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT____Vcellinp__second3__A));
    bufp->fullBit(oldp+10327,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [6U] >> 0x32U)))));
    bufp->fullBit(oldp+10328,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [7U] >> 0x32U)))));
    bufp->fullBit(oldp+10329,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [8U] >> 0x32U)))));
    bufp->fullBit(oldp+10330,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT____Vcellinp__second1__A));
    bufp->fullBit(oldp+10331,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT____Vcellinp__second4__C));
    bufp->fullBit(oldp+10332,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [3U] >> 0x32U)))));
    bufp->fullBit(oldp+10333,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [4U] >> 0x32U)))));
    bufp->fullBit(oldp+10334,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [5U] >> 0x32U)))));
    bufp->fullBit(oldp+10335,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT____Vcellinp__second2__C));
    bufp->fullBit(oldp+10336,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT____Vcellinp__second4__B));
    bufp->fullBit(oldp+10337,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0U] >> 0x32U)))));
    bufp->fullBit(oldp+10338,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [1U] >> 0x32U)))));
    bufp->fullBit(oldp+10339,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [2U] >> 0x32U)))));
    bufp->fullBit(oldp+10340,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT____Vcellinp__second2__B));
    bufp->fullBit(oldp+10341,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT____Vcellinp__second4__A));
    bufp->fullBit(oldp+10342,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT____Vcellinp__fifth1__C));
    bufp->fullBit(oldp+10343,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT____Vcellinp__fourth2__A));
    bufp->fullBit(oldp+10344,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT____Vcellinp__fourth2__B));
    bufp->fullBit(oldp+10345,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT____Vcellinp__sixth1__C));
    bufp->fullBit(oldp+10346,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT____Vcellinp__third1__C));
    bufp->fullBit(oldp+10347,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT____Vcellinp__third1__A));
    bufp->fullBit(oldp+10348,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0x10U] 
                                             >> 0x32U)))));
    bufp->fullBit(oldp+10349,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT____Vcellinp__third1__B));
    bufp->fullBit(oldp+10350,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT____Vcellinp__third2__C));
    bufp->fullBit(oldp+10351,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0xfU] 
                                             >> 0x32U)))));
    bufp->fullBit(oldp+10352,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT____Vcellinp__fourth1__C));
    bufp->fullBit(oldp+10353,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT____Vcellinp__third2__B));
    bufp->fullBit(oldp+10354,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT____Vcellinp__fourth1__B));
    bufp->fullBit(oldp+10355,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT____Vcellinp__third2__A));
    bufp->fullBit(oldp+10356,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT____Vcellinp__fourth1__A));
    bufp->fullBit(oldp+10357,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT____Vcellinp__fourth2__C));
    bufp->fullIData(oldp+10358,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__51__KET____DOT__bi__InData),17);
    bufp->fullBit(oldp+10359,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT__FifSig) 
                                & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT____Vcellinp__sixth1__B) 
                                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                               | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0))));
    bufp->fullBit(oldp+10360,((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT__FifSig)) 
                                & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                               | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT__FifSig)) 
                                   & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT____Vcellinp__sixth1__C)) 
                                      & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT____Vcellinp__sixth1__B))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT__FifSig) 
                                     & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                         & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                        | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0)))))));
    bufp->fullCData(oldp+10361,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT____Vcellinp__second4__A) 
                                  << 4U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT____Vcellinp__second4__B) 
                                             << 3U) 
                                            | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT____Vcellinp__second4__C) 
                                                << 2U) 
                                               | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT____Vcellinp__second3__A) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT____Vcellinp__second3__B)))))),5);
    bufp->fullCData(oldp+10362,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT____Vcellinp__third2__A) 
                                  << 3U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT____Vcellinp__third2__B) 
                                             << 2U) 
                                            | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT____Vcellinp__third2__C) 
                                                << 1U) 
                                               | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT____Vcellinp__third1__A))))),4);
    bufp->fullCData(oldp+10363,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT____Vcellinp__fourth2__A) 
                                  << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT____Vcellinp__fourth2__B))),2);
    bufp->fullCData(oldp+10364,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT____Vcellinp__fifth1__A) 
                                  << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT____Vcellinp__fifth1__B))),2);
    bufp->fullBit(oldp+10365,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT__FifSig));
    bufp->fullBit(oldp+10366,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT____Vcellinp__fifth1__A));
    bufp->fullBit(oldp+10367,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT____Vcellinp__fifth1__B));
    bufp->fullBit(oldp+10368,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT____Vcellinp__sixth1__B));
    bufp->fullBit(oldp+10369,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0xcU] 
                                             >> 0x33U)))));
    bufp->fullBit(oldp+10370,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0xdU] 
                                             >> 0x33U)))));
    bufp->fullBit(oldp+10371,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0xeU] 
                                             >> 0x33U)))));
    bufp->fullBit(oldp+10372,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT____Vcellinp__second1__C));
    bufp->fullBit(oldp+10373,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT____Vcellinp__second3__B));
    bufp->fullBit(oldp+10374,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [9U] >> 0x33U)))));
    bufp->fullBit(oldp+10375,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0xaU] 
                                             >> 0x33U)))));
    bufp->fullBit(oldp+10376,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0xbU] 
                                             >> 0x33U)))));
    bufp->fullBit(oldp+10377,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT____Vcellinp__second1__B));
    bufp->fullBit(oldp+10378,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT____Vcellinp__second3__A));
    bufp->fullBit(oldp+10379,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [6U] >> 0x33U)))));
    bufp->fullBit(oldp+10380,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [7U] >> 0x33U)))));
    bufp->fullBit(oldp+10381,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [8U] >> 0x33U)))));
    bufp->fullBit(oldp+10382,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT____Vcellinp__second1__A));
    bufp->fullBit(oldp+10383,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT____Vcellinp__second4__C));
    bufp->fullBit(oldp+10384,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [3U] >> 0x33U)))));
    bufp->fullBit(oldp+10385,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [4U] >> 0x33U)))));
    bufp->fullBit(oldp+10386,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [5U] >> 0x33U)))));
    bufp->fullBit(oldp+10387,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT____Vcellinp__second2__C));
    bufp->fullBit(oldp+10388,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT____Vcellinp__second4__B));
    bufp->fullBit(oldp+10389,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0U] >> 0x33U)))));
    bufp->fullBit(oldp+10390,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [1U] >> 0x33U)))));
    bufp->fullBit(oldp+10391,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [2U] >> 0x33U)))));
    bufp->fullBit(oldp+10392,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT____Vcellinp__second2__B));
    bufp->fullBit(oldp+10393,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT____Vcellinp__second4__A));
    bufp->fullBit(oldp+10394,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT____Vcellinp__fifth1__C));
    bufp->fullBit(oldp+10395,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT____Vcellinp__fourth2__A));
    bufp->fullBit(oldp+10396,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT____Vcellinp__fourth2__B));
    bufp->fullBit(oldp+10397,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT____Vcellinp__sixth1__C));
    bufp->fullBit(oldp+10398,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT____Vcellinp__third1__C));
    bufp->fullBit(oldp+10399,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT____Vcellinp__third1__A));
    bufp->fullBit(oldp+10400,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0x10U] 
                                             >> 0x33U)))));
    bufp->fullBit(oldp+10401,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT____Vcellinp__third1__B));
    bufp->fullBit(oldp+10402,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT____Vcellinp__third2__C));
    bufp->fullBit(oldp+10403,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0xfU] 
                                             >> 0x33U)))));
    bufp->fullBit(oldp+10404,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT____Vcellinp__fourth1__C));
    bufp->fullBit(oldp+10405,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT____Vcellinp__third2__B));
    bufp->fullBit(oldp+10406,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT____Vcellinp__fourth1__B));
    bufp->fullBit(oldp+10407,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT____Vcellinp__third2__A));
    bufp->fullBit(oldp+10408,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT____Vcellinp__fourth1__A));
    bufp->fullBit(oldp+10409,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT____Vcellinp__fourth2__C));
    bufp->fullIData(oldp+10410,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__52__KET____DOT__bi__InData),17);
    bufp->fullBit(oldp+10411,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT__FifSig) 
                                & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT____Vcellinp__sixth1__B) 
                                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                               | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0))));
    bufp->fullBit(oldp+10412,((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT__FifSig)) 
                                & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                               | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT__FifSig)) 
                                   & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT____Vcellinp__sixth1__C)) 
                                      & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT____Vcellinp__sixth1__B))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT__FifSig) 
                                     & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                         & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                        | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0)))))));
    bufp->fullCData(oldp+10413,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT____Vcellinp__second4__A) 
                                  << 4U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT____Vcellinp__second4__B) 
                                             << 3U) 
                                            | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT____Vcellinp__second4__C) 
                                                << 2U) 
                                               | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT____Vcellinp__second3__A) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT____Vcellinp__second3__B)))))),5);
    bufp->fullCData(oldp+10414,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT____Vcellinp__third2__A) 
                                  << 3U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT____Vcellinp__third2__B) 
                                             << 2U) 
                                            | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT____Vcellinp__third2__C) 
                                                << 1U) 
                                               | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT____Vcellinp__third1__A))))),4);
    bufp->fullCData(oldp+10415,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT____Vcellinp__fourth2__A) 
                                  << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT____Vcellinp__fourth2__B))),2);
    bufp->fullCData(oldp+10416,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT____Vcellinp__fifth1__A) 
                                  << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT____Vcellinp__fifth1__B))),2);
    bufp->fullBit(oldp+10417,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT__FifSig));
    bufp->fullBit(oldp+10418,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT____Vcellinp__fifth1__A));
    bufp->fullBit(oldp+10419,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT____Vcellinp__fifth1__B));
    bufp->fullBit(oldp+10420,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT____Vcellinp__sixth1__B));
    bufp->fullBit(oldp+10421,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0xcU] 
                                             >> 0x34U)))));
    bufp->fullBit(oldp+10422,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0xdU] 
                                             >> 0x34U)))));
    bufp->fullBit(oldp+10423,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0xeU] 
                                             >> 0x34U)))));
    bufp->fullBit(oldp+10424,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT____Vcellinp__second1__C));
    bufp->fullBit(oldp+10425,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT____Vcellinp__second3__B));
    bufp->fullBit(oldp+10426,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [9U] >> 0x34U)))));
    bufp->fullBit(oldp+10427,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0xaU] 
                                             >> 0x34U)))));
    bufp->fullBit(oldp+10428,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0xbU] 
                                             >> 0x34U)))));
    bufp->fullBit(oldp+10429,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT____Vcellinp__second1__B));
    bufp->fullBit(oldp+10430,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT____Vcellinp__second3__A));
    bufp->fullBit(oldp+10431,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [6U] >> 0x34U)))));
    bufp->fullBit(oldp+10432,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [7U] >> 0x34U)))));
    bufp->fullBit(oldp+10433,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [8U] >> 0x34U)))));
    bufp->fullBit(oldp+10434,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT____Vcellinp__second1__A));
    bufp->fullBit(oldp+10435,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT____Vcellinp__second4__C));
    bufp->fullBit(oldp+10436,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [3U] >> 0x34U)))));
    bufp->fullBit(oldp+10437,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [4U] >> 0x34U)))));
    bufp->fullBit(oldp+10438,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [5U] >> 0x34U)))));
    bufp->fullBit(oldp+10439,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT____Vcellinp__second2__C));
    bufp->fullBit(oldp+10440,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT____Vcellinp__second4__B));
    bufp->fullBit(oldp+10441,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0U] >> 0x34U)))));
    bufp->fullBit(oldp+10442,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [1U] >> 0x34U)))));
    bufp->fullBit(oldp+10443,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [2U] >> 0x34U)))));
    bufp->fullBit(oldp+10444,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT____Vcellinp__second2__B));
    bufp->fullBit(oldp+10445,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT____Vcellinp__second4__A));
    bufp->fullBit(oldp+10446,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT____Vcellinp__fifth1__C));
    bufp->fullBit(oldp+10447,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT____Vcellinp__fourth2__A));
    bufp->fullBit(oldp+10448,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT____Vcellinp__fourth2__B));
    bufp->fullBit(oldp+10449,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT____Vcellinp__sixth1__C));
    bufp->fullBit(oldp+10450,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT____Vcellinp__third1__C));
    bufp->fullBit(oldp+10451,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT____Vcellinp__third1__A));
    bufp->fullBit(oldp+10452,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0x10U] 
                                             >> 0x34U)))));
    bufp->fullBit(oldp+10453,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT____Vcellinp__third1__B));
    bufp->fullBit(oldp+10454,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT____Vcellinp__third2__C));
    bufp->fullBit(oldp+10455,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0xfU] 
                                             >> 0x34U)))));
    bufp->fullBit(oldp+10456,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT____Vcellinp__fourth1__C));
    bufp->fullBit(oldp+10457,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT____Vcellinp__third2__B));
    bufp->fullBit(oldp+10458,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT____Vcellinp__fourth1__B));
    bufp->fullBit(oldp+10459,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT____Vcellinp__third2__A));
    bufp->fullBit(oldp+10460,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT____Vcellinp__fourth1__A));
    bufp->fullBit(oldp+10461,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT____Vcellinp__fourth2__C));
    bufp->fullIData(oldp+10462,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__53__KET____DOT__bi__InData),17);
    bufp->fullBit(oldp+10463,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT__FifSig) 
                                & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT____Vcellinp__sixth1__B) 
                                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                               | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0))));
    bufp->fullBit(oldp+10464,((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT__FifSig)) 
                                & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                               | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT__FifSig)) 
                                   & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT____Vcellinp__sixth1__C)) 
                                      & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT____Vcellinp__sixth1__B))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT__FifSig) 
                                     & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                         & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                        | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0)))))));
    bufp->fullCData(oldp+10465,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT____Vcellinp__second4__A) 
                                  << 4U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT____Vcellinp__second4__B) 
                                             << 3U) 
                                            | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT____Vcellinp__second4__C) 
                                                << 2U) 
                                               | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT____Vcellinp__second3__A) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT____Vcellinp__second3__B)))))),5);
    bufp->fullCData(oldp+10466,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT____Vcellinp__third2__A) 
                                  << 3U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT____Vcellinp__third2__B) 
                                             << 2U) 
                                            | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT____Vcellinp__third2__C) 
                                                << 1U) 
                                               | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT____Vcellinp__third1__A))))),4);
    bufp->fullCData(oldp+10467,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT____Vcellinp__fourth2__A) 
                                  << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT____Vcellinp__fourth2__B))),2);
    bufp->fullCData(oldp+10468,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT____Vcellinp__fifth1__A) 
                                  << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT____Vcellinp__fifth1__B))),2);
    bufp->fullBit(oldp+10469,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT__FifSig));
    bufp->fullBit(oldp+10470,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT____Vcellinp__fifth1__A));
    bufp->fullBit(oldp+10471,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT____Vcellinp__fifth1__B));
    bufp->fullBit(oldp+10472,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT____Vcellinp__sixth1__B));
    bufp->fullBit(oldp+10473,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0xcU] 
                                             >> 0x35U)))));
    bufp->fullBit(oldp+10474,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0xdU] 
                                             >> 0x35U)))));
    bufp->fullBit(oldp+10475,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0xeU] 
                                             >> 0x35U)))));
    bufp->fullBit(oldp+10476,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT____Vcellinp__second1__C));
    bufp->fullBit(oldp+10477,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT____Vcellinp__second3__B));
    bufp->fullBit(oldp+10478,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [9U] >> 0x35U)))));
    bufp->fullBit(oldp+10479,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0xaU] 
                                             >> 0x35U)))));
    bufp->fullBit(oldp+10480,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0xbU] 
                                             >> 0x35U)))));
    bufp->fullBit(oldp+10481,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT____Vcellinp__second1__B));
    bufp->fullBit(oldp+10482,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT____Vcellinp__second3__A));
    bufp->fullBit(oldp+10483,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [6U] >> 0x35U)))));
    bufp->fullBit(oldp+10484,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [7U] >> 0x35U)))));
    bufp->fullBit(oldp+10485,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [8U] >> 0x35U)))));
    bufp->fullBit(oldp+10486,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT____Vcellinp__second1__A));
    bufp->fullBit(oldp+10487,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT____Vcellinp__second4__C));
    bufp->fullBit(oldp+10488,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [3U] >> 0x35U)))));
    bufp->fullBit(oldp+10489,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [4U] >> 0x35U)))));
    bufp->fullBit(oldp+10490,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [5U] >> 0x35U)))));
    bufp->fullBit(oldp+10491,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT____Vcellinp__second2__C));
    bufp->fullBit(oldp+10492,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT____Vcellinp__second4__B));
    bufp->fullBit(oldp+10493,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0U] >> 0x35U)))));
    bufp->fullBit(oldp+10494,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [1U] >> 0x35U)))));
    bufp->fullBit(oldp+10495,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [2U] >> 0x35U)))));
    bufp->fullBit(oldp+10496,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT____Vcellinp__second2__B));
    bufp->fullBit(oldp+10497,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT____Vcellinp__second4__A));
    bufp->fullBit(oldp+10498,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT____Vcellinp__fifth1__C));
    bufp->fullBit(oldp+10499,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT____Vcellinp__fourth2__A));
    bufp->fullBit(oldp+10500,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT____Vcellinp__fourth2__B));
    bufp->fullBit(oldp+10501,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT____Vcellinp__sixth1__C));
    bufp->fullBit(oldp+10502,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT____Vcellinp__third1__C));
    bufp->fullBit(oldp+10503,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT____Vcellinp__third1__A));
    bufp->fullBit(oldp+10504,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0x10U] 
                                             >> 0x35U)))));
    bufp->fullBit(oldp+10505,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT____Vcellinp__third1__B));
    bufp->fullBit(oldp+10506,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT____Vcellinp__third2__C));
    bufp->fullBit(oldp+10507,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0xfU] 
                                             >> 0x35U)))));
    bufp->fullBit(oldp+10508,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT____Vcellinp__fourth1__C));
    bufp->fullBit(oldp+10509,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT____Vcellinp__third2__B));
    bufp->fullBit(oldp+10510,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT____Vcellinp__fourth1__B));
    bufp->fullBit(oldp+10511,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT____Vcellinp__third2__A));
    bufp->fullBit(oldp+10512,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT____Vcellinp__fourth1__A));
    bufp->fullBit(oldp+10513,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT____Vcellinp__fourth2__C));
    bufp->fullIData(oldp+10514,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__54__KET____DOT__bi__InData),17);
    bufp->fullBit(oldp+10515,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT__FifSig) 
                                & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT____Vcellinp__sixth1__B) 
                                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                               | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0))));
    bufp->fullBit(oldp+10516,((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT__FifSig)) 
                                & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                               | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT__FifSig)) 
                                   & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT____Vcellinp__sixth1__C)) 
                                      & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT____Vcellinp__sixth1__B))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT__FifSig) 
                                     & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                         & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                        | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0)))))));
    bufp->fullCData(oldp+10517,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT____Vcellinp__second4__A) 
                                  << 4U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT____Vcellinp__second4__B) 
                                             << 3U) 
                                            | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT____Vcellinp__second4__C) 
                                                << 2U) 
                                               | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT____Vcellinp__second3__A) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT____Vcellinp__second3__B)))))),5);
    bufp->fullCData(oldp+10518,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT____Vcellinp__third2__A) 
                                  << 3U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT____Vcellinp__third2__B) 
                                             << 2U) 
                                            | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT____Vcellinp__third2__C) 
                                                << 1U) 
                                               | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT____Vcellinp__third1__A))))),4);
    bufp->fullCData(oldp+10519,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT____Vcellinp__fourth2__A) 
                                  << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT____Vcellinp__fourth2__B))),2);
    bufp->fullCData(oldp+10520,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT____Vcellinp__fifth1__A) 
                                  << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT____Vcellinp__fifth1__B))),2);
    bufp->fullBit(oldp+10521,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT__FifSig));
    bufp->fullBit(oldp+10522,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT____Vcellinp__fifth1__A));
    bufp->fullBit(oldp+10523,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT____Vcellinp__fifth1__B));
    bufp->fullBit(oldp+10524,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT____Vcellinp__sixth1__B));
    bufp->fullBit(oldp+10525,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0xcU] 
                                             >> 0x36U)))));
    bufp->fullBit(oldp+10526,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0xdU] 
                                             >> 0x36U)))));
    bufp->fullBit(oldp+10527,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0xeU] 
                                             >> 0x36U)))));
    bufp->fullBit(oldp+10528,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT____Vcellinp__second1__C));
    bufp->fullBit(oldp+10529,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT____Vcellinp__second3__B));
    bufp->fullBit(oldp+10530,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [9U] >> 0x36U)))));
    bufp->fullBit(oldp+10531,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0xaU] 
                                             >> 0x36U)))));
    bufp->fullBit(oldp+10532,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0xbU] 
                                             >> 0x36U)))));
    bufp->fullBit(oldp+10533,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT____Vcellinp__second1__B));
    bufp->fullBit(oldp+10534,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT____Vcellinp__second3__A));
    bufp->fullBit(oldp+10535,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [6U] >> 0x36U)))));
    bufp->fullBit(oldp+10536,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [7U] >> 0x36U)))));
    bufp->fullBit(oldp+10537,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [8U] >> 0x36U)))));
    bufp->fullBit(oldp+10538,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT____Vcellinp__second1__A));
    bufp->fullBit(oldp+10539,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT____Vcellinp__second4__C));
    bufp->fullBit(oldp+10540,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [3U] >> 0x36U)))));
    bufp->fullBit(oldp+10541,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [4U] >> 0x36U)))));
    bufp->fullBit(oldp+10542,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [5U] >> 0x36U)))));
    bufp->fullBit(oldp+10543,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT____Vcellinp__second2__C));
    bufp->fullBit(oldp+10544,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT____Vcellinp__second4__B));
    bufp->fullBit(oldp+10545,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0U] >> 0x36U)))));
    bufp->fullBit(oldp+10546,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [1U] >> 0x36U)))));
    bufp->fullBit(oldp+10547,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [2U] >> 0x36U)))));
    bufp->fullBit(oldp+10548,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT____Vcellinp__second2__B));
    bufp->fullBit(oldp+10549,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT____Vcellinp__second4__A));
    bufp->fullBit(oldp+10550,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT____Vcellinp__fifth1__C));
    bufp->fullBit(oldp+10551,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT____Vcellinp__fourth2__A));
    bufp->fullBit(oldp+10552,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT____Vcellinp__fourth2__B));
    bufp->fullBit(oldp+10553,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT____Vcellinp__sixth1__C));
    bufp->fullBit(oldp+10554,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT____Vcellinp__third1__C));
    bufp->fullBit(oldp+10555,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT____Vcellinp__third1__A));
    bufp->fullBit(oldp+10556,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0x10U] 
                                             >> 0x36U)))));
    bufp->fullBit(oldp+10557,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT____Vcellinp__third1__B));
    bufp->fullBit(oldp+10558,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT____Vcellinp__third2__C));
    bufp->fullBit(oldp+10559,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0xfU] 
                                             >> 0x36U)))));
    bufp->fullBit(oldp+10560,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT____Vcellinp__fourth1__C));
    bufp->fullBit(oldp+10561,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT____Vcellinp__third2__B));
    bufp->fullBit(oldp+10562,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT____Vcellinp__fourth1__B));
    bufp->fullBit(oldp+10563,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT____Vcellinp__third2__A));
    bufp->fullBit(oldp+10564,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT____Vcellinp__fourth1__A));
    bufp->fullBit(oldp+10565,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT____Vcellinp__fourth2__C));
    bufp->fullIData(oldp+10566,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__55__KET____DOT__bi__InData),17);
    bufp->fullBit(oldp+10567,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT__FifSig) 
                                & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT____Vcellinp__sixth1__B) 
                                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                               | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0))));
    bufp->fullBit(oldp+10568,((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT__FifSig)) 
                                & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                               | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT__FifSig)) 
                                   & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT____Vcellinp__sixth1__C)) 
                                      & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT____Vcellinp__sixth1__B))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT__FifSig) 
                                     & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                         & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                        | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0)))))));
    bufp->fullCData(oldp+10569,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT____Vcellinp__second4__A) 
                                  << 4U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT____Vcellinp__second4__B) 
                                             << 3U) 
                                            | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT____Vcellinp__second4__C) 
                                                << 2U) 
                                               | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT____Vcellinp__second3__A) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT____Vcellinp__second3__B)))))),5);
    bufp->fullCData(oldp+10570,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT____Vcellinp__third2__A) 
                                  << 3U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT____Vcellinp__third2__B) 
                                             << 2U) 
                                            | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT____Vcellinp__third2__C) 
                                                << 1U) 
                                               | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT____Vcellinp__third1__A))))),4);
    bufp->fullCData(oldp+10571,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT____Vcellinp__fourth2__A) 
                                  << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT____Vcellinp__fourth2__B))),2);
    bufp->fullCData(oldp+10572,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT____Vcellinp__fifth1__A) 
                                  << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT____Vcellinp__fifth1__B))),2);
    bufp->fullBit(oldp+10573,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT__FifSig));
    bufp->fullBit(oldp+10574,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT____Vcellinp__fifth1__A));
    bufp->fullBit(oldp+10575,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT____Vcellinp__fifth1__B));
    bufp->fullBit(oldp+10576,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT____Vcellinp__sixth1__B));
    bufp->fullBit(oldp+10577,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0xcU] 
                                             >> 0x37U)))));
    bufp->fullBit(oldp+10578,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0xdU] 
                                             >> 0x37U)))));
    bufp->fullBit(oldp+10579,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0xeU] 
                                             >> 0x37U)))));
    bufp->fullBit(oldp+10580,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT____Vcellinp__second1__C));
    bufp->fullBit(oldp+10581,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT____Vcellinp__second3__B));
    bufp->fullBit(oldp+10582,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [9U] >> 0x37U)))));
    bufp->fullBit(oldp+10583,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0xaU] 
                                             >> 0x37U)))));
    bufp->fullBit(oldp+10584,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0xbU] 
                                             >> 0x37U)))));
    bufp->fullBit(oldp+10585,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT____Vcellinp__second1__B));
    bufp->fullBit(oldp+10586,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT____Vcellinp__second3__A));
    bufp->fullBit(oldp+10587,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [6U] >> 0x37U)))));
    bufp->fullBit(oldp+10588,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [7U] >> 0x37U)))));
    bufp->fullBit(oldp+10589,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [8U] >> 0x37U)))));
    bufp->fullBit(oldp+10590,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT____Vcellinp__second1__A));
    bufp->fullBit(oldp+10591,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT____Vcellinp__second4__C));
    bufp->fullBit(oldp+10592,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [3U] >> 0x37U)))));
    bufp->fullBit(oldp+10593,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [4U] >> 0x37U)))));
    bufp->fullBit(oldp+10594,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [5U] >> 0x37U)))));
    bufp->fullBit(oldp+10595,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT____Vcellinp__second2__C));
    bufp->fullBit(oldp+10596,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT____Vcellinp__second4__B));
    bufp->fullBit(oldp+10597,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0U] >> 0x37U)))));
    bufp->fullBit(oldp+10598,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [1U] >> 0x37U)))));
    bufp->fullBit(oldp+10599,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [2U] >> 0x37U)))));
    bufp->fullBit(oldp+10600,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT____Vcellinp__second2__B));
    bufp->fullBit(oldp+10601,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT____Vcellinp__second4__A));
    bufp->fullBit(oldp+10602,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT____Vcellinp__fifth1__C));
    bufp->fullBit(oldp+10603,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT____Vcellinp__fourth2__A));
    bufp->fullBit(oldp+10604,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT____Vcellinp__fourth2__B));
    bufp->fullBit(oldp+10605,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT____Vcellinp__sixth1__C));
    bufp->fullBit(oldp+10606,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT____Vcellinp__third1__C));
    bufp->fullBit(oldp+10607,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT____Vcellinp__third1__A));
    bufp->fullBit(oldp+10608,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0x10U] 
                                             >> 0x37U)))));
    bufp->fullBit(oldp+10609,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT____Vcellinp__third1__B));
    bufp->fullBit(oldp+10610,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT____Vcellinp__third2__C));
    bufp->fullBit(oldp+10611,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0xfU] 
                                             >> 0x37U)))));
    bufp->fullBit(oldp+10612,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT____Vcellinp__fourth1__C));
    bufp->fullBit(oldp+10613,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT____Vcellinp__third2__B));
    bufp->fullBit(oldp+10614,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT____Vcellinp__fourth1__B));
    bufp->fullBit(oldp+10615,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT____Vcellinp__third2__A));
    bufp->fullBit(oldp+10616,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT____Vcellinp__fourth1__A));
    bufp->fullBit(oldp+10617,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT____Vcellinp__fourth2__C));
    bufp->fullIData(oldp+10618,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__56__KET____DOT__bi__InData),17);
    bufp->fullBit(oldp+10619,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT__FifSig) 
                                & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT____Vcellinp__sixth1__B) 
                                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                               | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0))));
    bufp->fullBit(oldp+10620,((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT__FifSig)) 
                                & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                               | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT__FifSig)) 
                                   & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT____Vcellinp__sixth1__C)) 
                                      & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT____Vcellinp__sixth1__B))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT__FifSig) 
                                     & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                         & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                        | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0)))))));
    bufp->fullCData(oldp+10621,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT____Vcellinp__second4__A) 
                                  << 4U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT____Vcellinp__second4__B) 
                                             << 3U) 
                                            | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT____Vcellinp__second4__C) 
                                                << 2U) 
                                               | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT____Vcellinp__second3__A) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT____Vcellinp__second3__B)))))),5);
    bufp->fullCData(oldp+10622,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT____Vcellinp__third2__A) 
                                  << 3U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT____Vcellinp__third2__B) 
                                             << 2U) 
                                            | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT____Vcellinp__third2__C) 
                                                << 1U) 
                                               | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT____Vcellinp__third1__A))))),4);
    bufp->fullCData(oldp+10623,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT____Vcellinp__fourth2__A) 
                                  << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT____Vcellinp__fourth2__B))),2);
    bufp->fullCData(oldp+10624,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT____Vcellinp__fifth1__A) 
                                  << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT____Vcellinp__fifth1__B))),2);
    bufp->fullBit(oldp+10625,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT__FifSig));
    bufp->fullBit(oldp+10626,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT____Vcellinp__fifth1__A));
    bufp->fullBit(oldp+10627,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT____Vcellinp__fifth1__B));
    bufp->fullBit(oldp+10628,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT____Vcellinp__sixth1__B));
    bufp->fullBit(oldp+10629,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0xcU] 
                                             >> 0x38U)))));
    bufp->fullBit(oldp+10630,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0xdU] 
                                             >> 0x38U)))));
    bufp->fullBit(oldp+10631,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0xeU] 
                                             >> 0x38U)))));
    bufp->fullBit(oldp+10632,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT____Vcellinp__second1__C));
    bufp->fullBit(oldp+10633,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT____Vcellinp__second3__B));
    bufp->fullBit(oldp+10634,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [9U] >> 0x38U)))));
    bufp->fullBit(oldp+10635,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0xaU] 
                                             >> 0x38U)))));
    bufp->fullBit(oldp+10636,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0xbU] 
                                             >> 0x38U)))));
    bufp->fullBit(oldp+10637,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT____Vcellinp__second1__B));
    bufp->fullBit(oldp+10638,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT____Vcellinp__second3__A));
    bufp->fullBit(oldp+10639,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [6U] >> 0x38U)))));
    bufp->fullBit(oldp+10640,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [7U] >> 0x38U)))));
    bufp->fullBit(oldp+10641,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [8U] >> 0x38U)))));
    bufp->fullBit(oldp+10642,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT____Vcellinp__second1__A));
    bufp->fullBit(oldp+10643,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT____Vcellinp__second4__C));
    bufp->fullBit(oldp+10644,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [3U] >> 0x38U)))));
    bufp->fullBit(oldp+10645,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [4U] >> 0x38U)))));
    bufp->fullBit(oldp+10646,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [5U] >> 0x38U)))));
    bufp->fullBit(oldp+10647,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT____Vcellinp__second2__C));
    bufp->fullBit(oldp+10648,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT____Vcellinp__second4__B));
    bufp->fullBit(oldp+10649,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0U] >> 0x38U)))));
    bufp->fullBit(oldp+10650,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [1U] >> 0x38U)))));
    bufp->fullBit(oldp+10651,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [2U] >> 0x38U)))));
    bufp->fullBit(oldp+10652,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT____Vcellinp__second2__B));
    bufp->fullBit(oldp+10653,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT____Vcellinp__second4__A));
    bufp->fullBit(oldp+10654,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT____Vcellinp__fifth1__C));
    bufp->fullBit(oldp+10655,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT____Vcellinp__fourth2__A));
    bufp->fullBit(oldp+10656,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT____Vcellinp__fourth2__B));
    bufp->fullBit(oldp+10657,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT____Vcellinp__sixth1__C));
    bufp->fullBit(oldp+10658,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT____Vcellinp__third1__C));
    bufp->fullBit(oldp+10659,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT____Vcellinp__third1__A));
    bufp->fullBit(oldp+10660,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0x10U] 
                                             >> 0x38U)))));
    bufp->fullBit(oldp+10661,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT____Vcellinp__third1__B));
    bufp->fullBit(oldp+10662,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT____Vcellinp__third2__C));
    bufp->fullBit(oldp+10663,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0xfU] 
                                             >> 0x38U)))));
    bufp->fullBit(oldp+10664,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT____Vcellinp__fourth1__C));
    bufp->fullBit(oldp+10665,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT____Vcellinp__third2__B));
    bufp->fullBit(oldp+10666,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT____Vcellinp__fourth1__B));
    bufp->fullBit(oldp+10667,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT____Vcellinp__third2__A));
    bufp->fullBit(oldp+10668,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT____Vcellinp__fourth1__A));
    bufp->fullBit(oldp+10669,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT____Vcellinp__fourth2__C));
    bufp->fullIData(oldp+10670,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__57__KET____DOT__bi__InData),17);
    bufp->fullBit(oldp+10671,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT__FifSig) 
                                & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT____Vcellinp__sixth1__B) 
                                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                               | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0))));
    bufp->fullBit(oldp+10672,((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT__FifSig)) 
                                & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                               | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT__FifSig)) 
                                   & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT____Vcellinp__sixth1__C)) 
                                      & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT____Vcellinp__sixth1__B))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT__FifSig) 
                                     & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                         & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                        | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0)))))));
    bufp->fullCData(oldp+10673,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT____Vcellinp__second4__A) 
                                  << 4U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT____Vcellinp__second4__B) 
                                             << 3U) 
                                            | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT____Vcellinp__second4__C) 
                                                << 2U) 
                                               | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT____Vcellinp__second3__A) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT____Vcellinp__second3__B)))))),5);
    bufp->fullCData(oldp+10674,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT____Vcellinp__third2__A) 
                                  << 3U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT____Vcellinp__third2__B) 
                                             << 2U) 
                                            | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT____Vcellinp__third2__C) 
                                                << 1U) 
                                               | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT____Vcellinp__third1__A))))),4);
    bufp->fullCData(oldp+10675,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT____Vcellinp__fourth2__A) 
                                  << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT____Vcellinp__fourth2__B))),2);
    bufp->fullCData(oldp+10676,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT____Vcellinp__fifth1__A) 
                                  << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT____Vcellinp__fifth1__B))),2);
    bufp->fullBit(oldp+10677,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT__FifSig));
    bufp->fullBit(oldp+10678,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT____Vcellinp__fifth1__A));
    bufp->fullBit(oldp+10679,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT____Vcellinp__fifth1__B));
    bufp->fullBit(oldp+10680,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT____Vcellinp__sixth1__B));
    bufp->fullBit(oldp+10681,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0xcU] 
                                             >> 0x39U)))));
    bufp->fullBit(oldp+10682,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0xdU] 
                                             >> 0x39U)))));
    bufp->fullBit(oldp+10683,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0xeU] 
                                             >> 0x39U)))));
    bufp->fullBit(oldp+10684,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT____Vcellinp__second1__C));
    bufp->fullBit(oldp+10685,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT____Vcellinp__second3__B));
    bufp->fullBit(oldp+10686,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [9U] >> 0x39U)))));
    bufp->fullBit(oldp+10687,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0xaU] 
                                             >> 0x39U)))));
    bufp->fullBit(oldp+10688,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0xbU] 
                                             >> 0x39U)))));
    bufp->fullBit(oldp+10689,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT____Vcellinp__second1__B));
    bufp->fullBit(oldp+10690,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT____Vcellinp__second3__A));
    bufp->fullBit(oldp+10691,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [6U] >> 0x39U)))));
    bufp->fullBit(oldp+10692,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [7U] >> 0x39U)))));
    bufp->fullBit(oldp+10693,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [8U] >> 0x39U)))));
    bufp->fullBit(oldp+10694,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT____Vcellinp__second1__A));
    bufp->fullBit(oldp+10695,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT____Vcellinp__second4__C));
    bufp->fullBit(oldp+10696,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [3U] >> 0x39U)))));
    bufp->fullBit(oldp+10697,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [4U] >> 0x39U)))));
    bufp->fullBit(oldp+10698,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [5U] >> 0x39U)))));
    bufp->fullBit(oldp+10699,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT____Vcellinp__second2__C));
    bufp->fullBit(oldp+10700,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT____Vcellinp__second4__B));
    bufp->fullBit(oldp+10701,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0U] >> 0x39U)))));
    bufp->fullBit(oldp+10702,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [1U] >> 0x39U)))));
    bufp->fullBit(oldp+10703,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [2U] >> 0x39U)))));
    bufp->fullBit(oldp+10704,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT____Vcellinp__second2__B));
    bufp->fullBit(oldp+10705,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT____Vcellinp__second4__A));
    bufp->fullBit(oldp+10706,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT____Vcellinp__fifth1__C));
    bufp->fullBit(oldp+10707,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT____Vcellinp__fourth2__A));
    bufp->fullBit(oldp+10708,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT____Vcellinp__fourth2__B));
    bufp->fullBit(oldp+10709,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT____Vcellinp__sixth1__C));
    bufp->fullBit(oldp+10710,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT____Vcellinp__third1__C));
    bufp->fullBit(oldp+10711,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT____Vcellinp__third1__A));
    bufp->fullBit(oldp+10712,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0x10U] 
                                             >> 0x39U)))));
    bufp->fullBit(oldp+10713,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT____Vcellinp__third1__B));
    bufp->fullBit(oldp+10714,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT____Vcellinp__third2__C));
    bufp->fullBit(oldp+10715,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0xfU] 
                                             >> 0x39U)))));
    bufp->fullBit(oldp+10716,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT____Vcellinp__fourth1__C));
    bufp->fullBit(oldp+10717,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT____Vcellinp__third2__B));
    bufp->fullBit(oldp+10718,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT____Vcellinp__fourth1__B));
    bufp->fullBit(oldp+10719,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT____Vcellinp__third2__A));
    bufp->fullBit(oldp+10720,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT____Vcellinp__fourth1__A));
    bufp->fullBit(oldp+10721,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT____Vcellinp__fourth2__C));
    bufp->fullIData(oldp+10722,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__58__KET____DOT__bi__InData),17);
    bufp->fullBit(oldp+10723,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT__FifSig) 
                                & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT____Vcellinp__sixth1__B) 
                                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                               | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0))));
    bufp->fullBit(oldp+10724,((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT__FifSig)) 
                                & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                               | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT__FifSig)) 
                                   & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT____Vcellinp__sixth1__C)) 
                                      & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT____Vcellinp__sixth1__B))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT__FifSig) 
                                     & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                         & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                        | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0)))))));
    bufp->fullCData(oldp+10725,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT____Vcellinp__second4__A) 
                                  << 4U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT____Vcellinp__second4__B) 
                                             << 3U) 
                                            | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT____Vcellinp__second4__C) 
                                                << 2U) 
                                               | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT____Vcellinp__second3__A) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT____Vcellinp__second3__B)))))),5);
    bufp->fullCData(oldp+10726,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT____Vcellinp__third2__A) 
                                  << 3U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT____Vcellinp__third2__B) 
                                             << 2U) 
                                            | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT____Vcellinp__third2__C) 
                                                << 1U) 
                                               | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT____Vcellinp__third1__A))))),4);
    bufp->fullCData(oldp+10727,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT____Vcellinp__fourth2__A) 
                                  << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT____Vcellinp__fourth2__B))),2);
    bufp->fullCData(oldp+10728,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT____Vcellinp__fifth1__A) 
                                  << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT____Vcellinp__fifth1__B))),2);
    bufp->fullBit(oldp+10729,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT__FifSig));
    bufp->fullBit(oldp+10730,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT____Vcellinp__fifth1__A));
    bufp->fullBit(oldp+10731,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT____Vcellinp__fifth1__B));
    bufp->fullBit(oldp+10732,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT____Vcellinp__sixth1__B));
    bufp->fullBit(oldp+10733,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0xcU] 
                                             >> 0x3aU)))));
    bufp->fullBit(oldp+10734,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0xdU] 
                                             >> 0x3aU)))));
    bufp->fullBit(oldp+10735,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0xeU] 
                                             >> 0x3aU)))));
    bufp->fullBit(oldp+10736,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT____Vcellinp__second1__C));
    bufp->fullBit(oldp+10737,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT____Vcellinp__second3__B));
    bufp->fullBit(oldp+10738,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [9U] >> 0x3aU)))));
    bufp->fullBit(oldp+10739,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0xaU] 
                                             >> 0x3aU)))));
    bufp->fullBit(oldp+10740,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0xbU] 
                                             >> 0x3aU)))));
    bufp->fullBit(oldp+10741,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT____Vcellinp__second1__B));
    bufp->fullBit(oldp+10742,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT____Vcellinp__second3__A));
    bufp->fullBit(oldp+10743,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [6U] >> 0x3aU)))));
    bufp->fullBit(oldp+10744,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [7U] >> 0x3aU)))));
    bufp->fullBit(oldp+10745,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [8U] >> 0x3aU)))));
    bufp->fullBit(oldp+10746,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT____Vcellinp__second1__A));
    bufp->fullBit(oldp+10747,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT____Vcellinp__second4__C));
    bufp->fullBit(oldp+10748,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [3U] >> 0x3aU)))));
    bufp->fullBit(oldp+10749,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [4U] >> 0x3aU)))));
    bufp->fullBit(oldp+10750,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [5U] >> 0x3aU)))));
    bufp->fullBit(oldp+10751,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT____Vcellinp__second2__C));
    bufp->fullBit(oldp+10752,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT____Vcellinp__second4__B));
    bufp->fullBit(oldp+10753,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0U] >> 0x3aU)))));
    bufp->fullBit(oldp+10754,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [1U] >> 0x3aU)))));
    bufp->fullBit(oldp+10755,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [2U] >> 0x3aU)))));
    bufp->fullBit(oldp+10756,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT____Vcellinp__second2__B));
    bufp->fullBit(oldp+10757,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT____Vcellinp__second4__A));
    bufp->fullBit(oldp+10758,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT____Vcellinp__fifth1__C));
    bufp->fullBit(oldp+10759,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT____Vcellinp__fourth2__A));
    bufp->fullBit(oldp+10760,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT____Vcellinp__fourth2__B));
    bufp->fullBit(oldp+10761,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT____Vcellinp__sixth1__C));
    bufp->fullBit(oldp+10762,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT____Vcellinp__third1__C));
    bufp->fullBit(oldp+10763,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT____Vcellinp__third1__A));
    bufp->fullBit(oldp+10764,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0x10U] 
                                             >> 0x3aU)))));
    bufp->fullBit(oldp+10765,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT____Vcellinp__third1__B));
    bufp->fullBit(oldp+10766,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT____Vcellinp__third2__C));
    bufp->fullBit(oldp+10767,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0xfU] 
                                             >> 0x3aU)))));
    bufp->fullBit(oldp+10768,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT____Vcellinp__fourth1__C));
    bufp->fullBit(oldp+10769,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT____Vcellinp__third2__B));
    bufp->fullBit(oldp+10770,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT____Vcellinp__fourth1__B));
    bufp->fullBit(oldp+10771,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT____Vcellinp__third2__A));
    bufp->fullBit(oldp+10772,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT____Vcellinp__fourth1__A));
    bufp->fullBit(oldp+10773,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT____Vcellinp__fourth2__C));
    bufp->fullIData(oldp+10774,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__59__KET____DOT__bi__InData),17);
    bufp->fullBit(oldp+10775,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__FifSig) 
                                & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT____Vcellinp__sixth1__B) 
                                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                               | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0))));
    bufp->fullBit(oldp+10776,((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__FifSig)) 
                                & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                               | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__FifSig)) 
                                   & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT____Vcellinp__sixth1__C)) 
                                      & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT____Vcellinp__sixth1__B))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__FifSig) 
                                     & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                         & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                        | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0)))))));
    bufp->fullCData(oldp+10777,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT____Vcellinp__second4__A) 
                                  << 4U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT____Vcellinp__second4__B) 
                                             << 3U) 
                                            | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT____Vcellinp__second4__C) 
                                                << 2U) 
                                               | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT____Vcellinp__second3__A) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT____Vcellinp__second3__B)))))),5);
    bufp->fullCData(oldp+10778,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT____Vcellinp__third2__A) 
                                  << 3U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT____Vcellinp__third2__B) 
                                             << 2U) 
                                            | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT____Vcellinp__third2__C) 
                                                << 1U) 
                                               | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT____Vcellinp__third1__A))))),4);
    bufp->fullCData(oldp+10779,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT____Vcellinp__fourth2__A) 
                                  << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT____Vcellinp__fourth2__B))),2);
    bufp->fullCData(oldp+10780,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT____Vcellinp__fifth1__A) 
                                  << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT____Vcellinp__fifth1__B))),2);
    bufp->fullBit(oldp+10781,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__FifSig));
    bufp->fullBit(oldp+10782,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT____Vcellinp__fifth1__A));
    bufp->fullBit(oldp+10783,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT____Vcellinp__fifth1__B));
    bufp->fullBit(oldp+10784,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT____Vcellinp__sixth1__B));
    bufp->fullBit(oldp+10785,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0xcU] 
                                             >> 0x3bU)))));
    bufp->fullBit(oldp+10786,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0xdU] 
                                             >> 0x3bU)))));
    bufp->fullBit(oldp+10787,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0xeU] 
                                             >> 0x3bU)))));
    bufp->fullBit(oldp+10788,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT____Vcellinp__second1__C));
    bufp->fullBit(oldp+10789,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT____Vcellinp__second3__B));
    bufp->fullBit(oldp+10790,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [9U] >> 0x3bU)))));
    bufp->fullBit(oldp+10791,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0xaU] 
                                             >> 0x3bU)))));
    bufp->fullBit(oldp+10792,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0xbU] 
                                             >> 0x3bU)))));
    bufp->fullBit(oldp+10793,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT____Vcellinp__second1__B));
    bufp->fullBit(oldp+10794,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT____Vcellinp__second3__A));
    bufp->fullBit(oldp+10795,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [6U] >> 0x3bU)))));
    bufp->fullBit(oldp+10796,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [7U] >> 0x3bU)))));
    bufp->fullBit(oldp+10797,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [8U] >> 0x3bU)))));
    bufp->fullBit(oldp+10798,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT____Vcellinp__second1__A));
    bufp->fullBit(oldp+10799,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT____Vcellinp__second4__C));
    bufp->fullBit(oldp+10800,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [3U] >> 0x3bU)))));
    bufp->fullBit(oldp+10801,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [4U] >> 0x3bU)))));
    bufp->fullBit(oldp+10802,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [5U] >> 0x3bU)))));
    bufp->fullBit(oldp+10803,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT____Vcellinp__second2__C));
    bufp->fullBit(oldp+10804,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT____Vcellinp__second4__B));
    bufp->fullBit(oldp+10805,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0U] >> 0x3bU)))));
    bufp->fullBit(oldp+10806,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [1U] >> 0x3bU)))));
    bufp->fullBit(oldp+10807,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [2U] >> 0x3bU)))));
    bufp->fullBit(oldp+10808,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT____Vcellinp__second2__B));
    bufp->fullBit(oldp+10809,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT____Vcellinp__second4__A));
    bufp->fullBit(oldp+10810,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT____Vcellinp__fifth1__C));
    bufp->fullBit(oldp+10811,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT____Vcellinp__fourth2__A));
    bufp->fullBit(oldp+10812,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT____Vcellinp__fourth2__B));
    bufp->fullBit(oldp+10813,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT____Vcellinp__sixth1__C));
    bufp->fullBit(oldp+10814,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT____Vcellinp__third1__C));
    bufp->fullBit(oldp+10815,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT____Vcellinp__third1__A));
    bufp->fullBit(oldp+10816,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0x10U] 
                                             >> 0x3bU)))));
    bufp->fullBit(oldp+10817,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT____Vcellinp__third1__B));
    bufp->fullBit(oldp+10818,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT____Vcellinp__third2__C));
    bufp->fullBit(oldp+10819,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0xfU] 
                                             >> 0x3bU)))));
    bufp->fullBit(oldp+10820,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT____Vcellinp__fourth1__C));
    bufp->fullBit(oldp+10821,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT____Vcellinp__third2__B));
    bufp->fullBit(oldp+10822,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT____Vcellinp__fourth1__B));
    bufp->fullBit(oldp+10823,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT____Vcellinp__third2__A));
    bufp->fullBit(oldp+10824,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT____Vcellinp__fourth1__A));
    bufp->fullBit(oldp+10825,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT____Vcellinp__fourth2__C));
    bufp->fullIData(oldp+10826,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData),17);
    bufp->fullBit(oldp+10827,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT__FifSig) 
                                & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT____Vcellinp__sixth1__B) 
                                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                               | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0))));
    bufp->fullBit(oldp+10828,((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT__FifSig)) 
                                & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                               | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT__FifSig)) 
                                   & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT____Vcellinp__sixth1__C)) 
                                      & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT____Vcellinp__sixth1__B))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT__FifSig) 
                                     & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                         & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                        | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0)))))));
    bufp->fullCData(oldp+10829,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT____Vcellinp__second4__A) 
                                  << 4U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT____Vcellinp__second4__B) 
                                             << 3U) 
                                            | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT____Vcellinp__second4__C) 
                                                << 2U) 
                                               | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT____Vcellinp__second3__A) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT____Vcellinp__second3__B)))))),5);
    bufp->fullCData(oldp+10830,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT____Vcellinp__third2__A) 
                                  << 3U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT____Vcellinp__third2__B) 
                                             << 2U) 
                                            | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT____Vcellinp__third2__C) 
                                                << 1U) 
                                               | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT____Vcellinp__third1__A))))),4);
    bufp->fullCData(oldp+10831,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT____Vcellinp__fourth2__A) 
                                  << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT____Vcellinp__fourth2__B))),2);
    bufp->fullCData(oldp+10832,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT____Vcellinp__fifth1__A) 
                                  << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT____Vcellinp__fifth1__B))),2);
    bufp->fullBit(oldp+10833,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT__FifSig));
    bufp->fullBit(oldp+10834,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT____Vcellinp__fifth1__A));
    bufp->fullBit(oldp+10835,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT____Vcellinp__fifth1__B));
    bufp->fullBit(oldp+10836,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT____Vcellinp__sixth1__B));
    bufp->fullBit(oldp+10837,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0xcU] 
                                             >> 5U)))));
    bufp->fullBit(oldp+10838,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0xdU] 
                                             >> 5U)))));
    bufp->fullBit(oldp+10839,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0xeU] 
                                             >> 5U)))));
    bufp->fullBit(oldp+10840,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT____Vcellinp__second1__C));
    bufp->fullBit(oldp+10841,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT____Vcellinp__second3__B));
    bufp->fullBit(oldp+10842,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [9U] >> 5U)))));
    bufp->fullBit(oldp+10843,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0xaU] 
                                             >> 5U)))));
    bufp->fullBit(oldp+10844,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0xbU] 
                                             >> 5U)))));
    bufp->fullBit(oldp+10845,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT____Vcellinp__second1__B));
    bufp->fullBit(oldp+10846,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT____Vcellinp__second3__A));
    bufp->fullBit(oldp+10847,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [6U] >> 5U)))));
    bufp->fullBit(oldp+10848,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [7U] >> 5U)))));
    bufp->fullBit(oldp+10849,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [8U] >> 5U)))));
    bufp->fullBit(oldp+10850,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT____Vcellinp__second1__A));
    bufp->fullBit(oldp+10851,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT____Vcellinp__second4__C));
    bufp->fullBit(oldp+10852,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [3U] >> 5U)))));
    bufp->fullBit(oldp+10853,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [4U] >> 5U)))));
    bufp->fullBit(oldp+10854,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [5U] >> 5U)))));
    bufp->fullBit(oldp+10855,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT____Vcellinp__second2__C));
    bufp->fullBit(oldp+10856,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT____Vcellinp__second4__B));
    bufp->fullBit(oldp+10857,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0U] >> 5U)))));
    bufp->fullBit(oldp+10858,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [1U] >> 5U)))));
    bufp->fullBit(oldp+10859,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [2U] >> 5U)))));
    bufp->fullBit(oldp+10860,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT____Vcellinp__second2__B));
    bufp->fullBit(oldp+10861,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT____Vcellinp__second4__A));
    bufp->fullBit(oldp+10862,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT____Vcellinp__fifth1__C));
    bufp->fullBit(oldp+10863,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT____Vcellinp__fourth2__A));
    bufp->fullBit(oldp+10864,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT____Vcellinp__fourth2__B));
    bufp->fullBit(oldp+10865,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT____Vcellinp__sixth1__C));
    bufp->fullBit(oldp+10866,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT____Vcellinp__third1__C));
    bufp->fullBit(oldp+10867,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT____Vcellinp__third1__A));
    bufp->fullBit(oldp+10868,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0x10U] 
                                             >> 5U)))));
    bufp->fullBit(oldp+10869,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT____Vcellinp__third1__B));
    bufp->fullBit(oldp+10870,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT____Vcellinp__third2__C));
    bufp->fullBit(oldp+10871,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0xfU] 
                                             >> 5U)))));
    bufp->fullBit(oldp+10872,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT____Vcellinp__fourth1__C));
    bufp->fullBit(oldp+10873,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT____Vcellinp__third2__B));
    bufp->fullBit(oldp+10874,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT____Vcellinp__fourth1__B));
    bufp->fullBit(oldp+10875,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT____Vcellinp__third2__A));
    bufp->fullBit(oldp+10876,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT____Vcellinp__fourth1__A));
    bufp->fullBit(oldp+10877,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT____Vcellinp__fourth2__C));
    bufp->fullIData(oldp+10878,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData),17);
    bufp->fullBit(oldp+10879,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__FifSig) 
                                & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT____Vcellinp__sixth1__B) 
                                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                               | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0))));
    bufp->fullBit(oldp+10880,((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__FifSig)) 
                                & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                               | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__FifSig)) 
                                   & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT____Vcellinp__sixth1__C)) 
                                      & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT____Vcellinp__sixth1__B))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__FifSig) 
                                     & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                         & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                        | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0)))))));
    bufp->fullCData(oldp+10881,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT____Vcellinp__second4__A) 
                                  << 4U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT____Vcellinp__second4__B) 
                                             << 3U) 
                                            | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT____Vcellinp__second4__C) 
                                                << 2U) 
                                               | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT____Vcellinp__second3__A) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT____Vcellinp__second3__B)))))),5);
    bufp->fullCData(oldp+10882,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT____Vcellinp__third2__A) 
                                  << 3U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT____Vcellinp__third2__B) 
                                             << 2U) 
                                            | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT____Vcellinp__third2__C) 
                                                << 1U) 
                                               | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT____Vcellinp__third1__A))))),4);
    bufp->fullCData(oldp+10883,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT____Vcellinp__fourth2__A) 
                                  << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT____Vcellinp__fourth2__B))),2);
    bufp->fullCData(oldp+10884,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT____Vcellinp__fifth1__A) 
                                  << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT____Vcellinp__fifth1__B))),2);
    bufp->fullBit(oldp+10885,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__FifSig));
    bufp->fullBit(oldp+10886,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT____Vcellinp__fifth1__A));
    bufp->fullBit(oldp+10887,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT____Vcellinp__fifth1__B));
    bufp->fullBit(oldp+10888,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT____Vcellinp__sixth1__B));
    bufp->fullBit(oldp+10889,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0xcU] 
                                             >> 0x3cU)))));
    bufp->fullBit(oldp+10890,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0xdU] 
                                             >> 0x3cU)))));
    bufp->fullBit(oldp+10891,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0xeU] 
                                             >> 0x3cU)))));
    bufp->fullBit(oldp+10892,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT____Vcellinp__second1__C));
    bufp->fullBit(oldp+10893,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT____Vcellinp__second3__B));
    bufp->fullBit(oldp+10894,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [9U] >> 0x3cU)))));
    bufp->fullBit(oldp+10895,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0xaU] 
                                             >> 0x3cU)))));
    bufp->fullBit(oldp+10896,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0xbU] 
                                             >> 0x3cU)))));
    bufp->fullBit(oldp+10897,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT____Vcellinp__second1__B));
    bufp->fullBit(oldp+10898,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT____Vcellinp__second3__A));
    bufp->fullBit(oldp+10899,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [6U] >> 0x3cU)))));
    bufp->fullBit(oldp+10900,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [7U] >> 0x3cU)))));
    bufp->fullBit(oldp+10901,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [8U] >> 0x3cU)))));
    bufp->fullBit(oldp+10902,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT____Vcellinp__second1__A));
    bufp->fullBit(oldp+10903,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT____Vcellinp__second4__C));
    bufp->fullBit(oldp+10904,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [3U] >> 0x3cU)))));
    bufp->fullBit(oldp+10905,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [4U] >> 0x3cU)))));
    bufp->fullBit(oldp+10906,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [5U] >> 0x3cU)))));
    bufp->fullBit(oldp+10907,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT____Vcellinp__second2__C));
    bufp->fullBit(oldp+10908,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT____Vcellinp__second4__B));
    bufp->fullBit(oldp+10909,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0U] >> 0x3cU)))));
    bufp->fullBit(oldp+10910,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [1U] >> 0x3cU)))));
    bufp->fullBit(oldp+10911,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [2U] >> 0x3cU)))));
    bufp->fullBit(oldp+10912,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT____Vcellinp__second2__B));
    bufp->fullBit(oldp+10913,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT____Vcellinp__second4__A));
    bufp->fullBit(oldp+10914,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT____Vcellinp__fifth1__C));
    bufp->fullBit(oldp+10915,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT____Vcellinp__fourth2__A));
    bufp->fullBit(oldp+10916,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT____Vcellinp__fourth2__B));
    bufp->fullBit(oldp+10917,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT____Vcellinp__sixth1__C));
    bufp->fullBit(oldp+10918,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT____Vcellinp__third1__C));
    bufp->fullBit(oldp+10919,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT____Vcellinp__third1__A));
    bufp->fullBit(oldp+10920,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0x10U] 
                                             >> 0x3cU)))));
    bufp->fullBit(oldp+10921,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT____Vcellinp__third1__B));
    bufp->fullBit(oldp+10922,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT____Vcellinp__third2__C));
    bufp->fullBit(oldp+10923,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0xfU] 
                                             >> 0x3cU)))));
    bufp->fullBit(oldp+10924,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT____Vcellinp__fourth1__C));
    bufp->fullBit(oldp+10925,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT____Vcellinp__third2__B));
    bufp->fullBit(oldp+10926,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT____Vcellinp__fourth1__B));
    bufp->fullBit(oldp+10927,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT____Vcellinp__third2__A));
    bufp->fullBit(oldp+10928,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT____Vcellinp__fourth1__A));
    bufp->fullBit(oldp+10929,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT____Vcellinp__fourth2__C));
    bufp->fullIData(oldp+10930,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData),17);
    bufp->fullBit(oldp+10931,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__FifSig) 
                                & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT____Vcellinp__sixth1__B) 
                                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                               | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0))));
    bufp->fullBit(oldp+10932,((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__FifSig)) 
                                & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                               | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__FifSig)) 
                                   & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT____Vcellinp__sixth1__C)) 
                                      & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT____Vcellinp__sixth1__B))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__FifSig) 
                                     & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                         & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                        | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0)))))));
    bufp->fullCData(oldp+10933,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT____Vcellinp__second4__A) 
                                  << 4U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT____Vcellinp__second4__B) 
                                             << 3U) 
                                            | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT____Vcellinp__second4__C) 
                                                << 2U) 
                                               | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT____Vcellinp__second3__A) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT____Vcellinp__second3__B)))))),5);
    bufp->fullCData(oldp+10934,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT____Vcellinp__third2__A) 
                                  << 3U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT____Vcellinp__third2__B) 
                                             << 2U) 
                                            | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT____Vcellinp__third2__C) 
                                                << 1U) 
                                               | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT____Vcellinp__third1__A))))),4);
    bufp->fullCData(oldp+10935,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT____Vcellinp__fourth2__A) 
                                  << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT____Vcellinp__fourth2__B))),2);
    bufp->fullCData(oldp+10936,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT____Vcellinp__fifth1__A) 
                                  << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT____Vcellinp__fifth1__B))),2);
    bufp->fullBit(oldp+10937,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__FifSig));
    bufp->fullBit(oldp+10938,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT____Vcellinp__fifth1__A));
    bufp->fullBit(oldp+10939,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT____Vcellinp__fifth1__B));
    bufp->fullBit(oldp+10940,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT____Vcellinp__sixth1__B));
    bufp->fullBit(oldp+10941,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0xcU] 
                                             >> 0x3dU)))));
    bufp->fullBit(oldp+10942,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0xdU] 
                                             >> 0x3dU)))));
    bufp->fullBit(oldp+10943,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0xeU] 
                                             >> 0x3dU)))));
    bufp->fullBit(oldp+10944,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT____Vcellinp__second1__C));
    bufp->fullBit(oldp+10945,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT____Vcellinp__second3__B));
    bufp->fullBit(oldp+10946,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [9U] >> 0x3dU)))));
    bufp->fullBit(oldp+10947,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0xaU] 
                                             >> 0x3dU)))));
    bufp->fullBit(oldp+10948,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0xbU] 
                                             >> 0x3dU)))));
    bufp->fullBit(oldp+10949,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT____Vcellinp__second1__B));
    bufp->fullBit(oldp+10950,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT____Vcellinp__second3__A));
    bufp->fullBit(oldp+10951,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [6U] >> 0x3dU)))));
    bufp->fullBit(oldp+10952,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [7U] >> 0x3dU)))));
    bufp->fullBit(oldp+10953,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [8U] >> 0x3dU)))));
    bufp->fullBit(oldp+10954,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT____Vcellinp__second1__A));
    bufp->fullBit(oldp+10955,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT____Vcellinp__second4__C));
    bufp->fullBit(oldp+10956,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [3U] >> 0x3dU)))));
    bufp->fullBit(oldp+10957,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [4U] >> 0x3dU)))));
    bufp->fullBit(oldp+10958,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [5U] >> 0x3dU)))));
    bufp->fullBit(oldp+10959,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT____Vcellinp__second2__C));
    bufp->fullBit(oldp+10960,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT____Vcellinp__second4__B));
    bufp->fullBit(oldp+10961,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0U] >> 0x3dU)))));
    bufp->fullBit(oldp+10962,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [1U] >> 0x3dU)))));
    bufp->fullBit(oldp+10963,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [2U] >> 0x3dU)))));
    bufp->fullBit(oldp+10964,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT____Vcellinp__second2__B));
    bufp->fullBit(oldp+10965,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT____Vcellinp__second4__A));
    bufp->fullBit(oldp+10966,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT____Vcellinp__fifth1__C));
    bufp->fullBit(oldp+10967,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT____Vcellinp__fourth2__A));
    bufp->fullBit(oldp+10968,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT____Vcellinp__fourth2__B));
    bufp->fullBit(oldp+10969,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT____Vcellinp__sixth1__C));
    bufp->fullBit(oldp+10970,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT____Vcellinp__third1__C));
    bufp->fullBit(oldp+10971,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT____Vcellinp__third1__A));
    bufp->fullBit(oldp+10972,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0x10U] 
                                             >> 0x3dU)))));
    bufp->fullBit(oldp+10973,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT____Vcellinp__third1__B));
    bufp->fullBit(oldp+10974,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT____Vcellinp__third2__C));
    bufp->fullBit(oldp+10975,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0xfU] 
                                             >> 0x3dU)))));
    bufp->fullBit(oldp+10976,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT____Vcellinp__fourth1__C));
    bufp->fullBit(oldp+10977,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT____Vcellinp__third2__B));
    bufp->fullBit(oldp+10978,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT____Vcellinp__fourth1__B));
    bufp->fullBit(oldp+10979,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT____Vcellinp__third2__A));
    bufp->fullBit(oldp+10980,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT____Vcellinp__fourth1__A));
    bufp->fullBit(oldp+10981,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT____Vcellinp__fourth2__C));
    bufp->fullIData(oldp+10982,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData),17);
    bufp->fullBit(oldp+10983,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__FifSig) 
                                & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT____Vcellinp__sixth1__B) 
                                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                               | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0))));
    bufp->fullBit(oldp+10984,((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__FifSig)) 
                                & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                               | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__FifSig)) 
                                   & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT____Vcellinp__sixth1__C)) 
                                      & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT____Vcellinp__sixth1__B))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__FifSig) 
                                     & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                         & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                        | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0)))))));
    bufp->fullCData(oldp+10985,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT____Vcellinp__second4__A) 
                                  << 4U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT____Vcellinp__second4__B) 
                                             << 3U) 
                                            | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT____Vcellinp__second4__C) 
                                                << 2U) 
                                               | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT____Vcellinp__second3__A) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT____Vcellinp__second3__B)))))),5);
    bufp->fullCData(oldp+10986,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT____Vcellinp__third2__A) 
                                  << 3U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT____Vcellinp__third2__B) 
                                             << 2U) 
                                            | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT____Vcellinp__third2__C) 
                                                << 1U) 
                                               | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT____Vcellinp__third1__A))))),4);
    bufp->fullCData(oldp+10987,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT____Vcellinp__fourth2__A) 
                                  << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT____Vcellinp__fourth2__B))),2);
    bufp->fullCData(oldp+10988,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT____Vcellinp__fifth1__A) 
                                  << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT____Vcellinp__fifth1__B))),2);
    bufp->fullBit(oldp+10989,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__FifSig));
    bufp->fullBit(oldp+10990,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT____Vcellinp__fifth1__A));
    bufp->fullBit(oldp+10991,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT____Vcellinp__fifth1__B));
    bufp->fullBit(oldp+10992,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT____Vcellinp__sixth1__B));
    bufp->fullBit(oldp+10993,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0xcU] 
                                             >> 0x3eU)))));
    bufp->fullBit(oldp+10994,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0xdU] 
                                             >> 0x3eU)))));
    bufp->fullBit(oldp+10995,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0xeU] 
                                             >> 0x3eU)))));
    bufp->fullBit(oldp+10996,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT____Vcellinp__second1__C));
    bufp->fullBit(oldp+10997,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT____Vcellinp__second3__B));
    bufp->fullBit(oldp+10998,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [9U] >> 0x3eU)))));
    bufp->fullBit(oldp+10999,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0xaU] 
                                             >> 0x3eU)))));
    bufp->fullBit(oldp+11000,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0xbU] 
                                             >> 0x3eU)))));
    bufp->fullBit(oldp+11001,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT____Vcellinp__second1__B));
    bufp->fullBit(oldp+11002,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT____Vcellinp__second3__A));
    bufp->fullBit(oldp+11003,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [6U] >> 0x3eU)))));
    bufp->fullBit(oldp+11004,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [7U] >> 0x3eU)))));
    bufp->fullBit(oldp+11005,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [8U] >> 0x3eU)))));
    bufp->fullBit(oldp+11006,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT____Vcellinp__second1__A));
    bufp->fullBit(oldp+11007,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT____Vcellinp__second4__C));
    bufp->fullBit(oldp+11008,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [3U] >> 0x3eU)))));
    bufp->fullBit(oldp+11009,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [4U] >> 0x3eU)))));
    bufp->fullBit(oldp+11010,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [5U] >> 0x3eU)))));
    bufp->fullBit(oldp+11011,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT____Vcellinp__second2__C));
    bufp->fullBit(oldp+11012,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT____Vcellinp__second4__B));
    bufp->fullBit(oldp+11013,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0U] >> 0x3eU)))));
    bufp->fullBit(oldp+11014,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [1U] >> 0x3eU)))));
    bufp->fullBit(oldp+11015,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [2U] >> 0x3eU)))));
    bufp->fullBit(oldp+11016,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT____Vcellinp__second2__B));
    bufp->fullBit(oldp+11017,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT____Vcellinp__second4__A));
    bufp->fullBit(oldp+11018,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT____Vcellinp__fifth1__C));
    bufp->fullBit(oldp+11019,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT____Vcellinp__fourth2__A));
    bufp->fullBit(oldp+11020,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT____Vcellinp__fourth2__B));
    bufp->fullBit(oldp+11021,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT____Vcellinp__sixth1__C));
    bufp->fullBit(oldp+11022,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT____Vcellinp__third1__C));
    bufp->fullBit(oldp+11023,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT____Vcellinp__third1__A));
    bufp->fullBit(oldp+11024,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0x10U] 
                                             >> 0x3eU)))));
    bufp->fullBit(oldp+11025,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT____Vcellinp__third1__B));
    bufp->fullBit(oldp+11026,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT____Vcellinp__third2__C));
    bufp->fullBit(oldp+11027,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0xfU] 
                                             >> 0x3eU)))));
    bufp->fullBit(oldp+11028,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT____Vcellinp__fourth1__C));
    bufp->fullBit(oldp+11029,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT____Vcellinp__third2__B));
    bufp->fullBit(oldp+11030,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT____Vcellinp__fourth1__B));
    bufp->fullBit(oldp+11031,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT____Vcellinp__third2__A));
    bufp->fullBit(oldp+11032,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT____Vcellinp__fourth1__A));
    bufp->fullBit(oldp+11033,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT____Vcellinp__fourth2__C));
    bufp->fullIData(oldp+11034,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData),17);
    bufp->fullBit(oldp+11035,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__FifSig) 
                                & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT____Vcellinp__sixth1__B) 
                                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                               | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0))));
    bufp->fullBit(oldp+11036,((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__FifSig)) 
                                & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                               | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__FifSig)) 
                                   & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT____Vcellinp__sixth1__C)) 
                                      & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT____Vcellinp__sixth1__B))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__FifSig) 
                                     & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                         & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                        | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0)))))));
    bufp->fullCData(oldp+11037,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT____Vcellinp__second4__A) 
                                  << 4U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT____Vcellinp__second4__B) 
                                             << 3U) 
                                            | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT____Vcellinp__second4__C) 
                                                << 2U) 
                                               | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT____Vcellinp__second3__A) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT____Vcellinp__second3__B)))))),5);
    bufp->fullCData(oldp+11038,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT____Vcellinp__third2__A) 
                                  << 3U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT____Vcellinp__third2__B) 
                                             << 2U) 
                                            | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT____Vcellinp__third2__C) 
                                                << 1U) 
                                               | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT____Vcellinp__third1__A))))),4);
    bufp->fullCData(oldp+11039,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT____Vcellinp__fourth2__A) 
                                  << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT____Vcellinp__fourth2__B))),2);
    bufp->fullCData(oldp+11040,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT____Vcellinp__fifth1__A) 
                                  << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT____Vcellinp__fifth1__B))),2);
    bufp->fullBit(oldp+11041,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__FifSig));
    bufp->fullBit(oldp+11042,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT____Vcellinp__fifth1__A));
    bufp->fullBit(oldp+11043,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT____Vcellinp__fifth1__B));
    bufp->fullBit(oldp+11044,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT____Vcellinp__fifth1__A) 
                                & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT____Vcellinp__fifth1__B) 
                                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT____Vcellinp__fifth1__C))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT____Vcellinp__fifth1__B) 
                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT____Vcellinp__fifth1__C)))));
    bufp->fullBit(oldp+11045,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0xcU] 
                                             >> 0x3fU)))));
    bufp->fullBit(oldp+11046,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0xdU] 
                                             >> 0x3fU)))));
    bufp->fullBit(oldp+11047,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0xeU] 
                                             >> 0x3fU)))));
    bufp->fullBit(oldp+11048,((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xcU] 
                                               >> 0x3fU)) 
                                      & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                  [0xdU] 
                                                  >> 0x3fU)) 
                                         | (IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                    [0xeU] 
                                                    >> 0x3fU)))) 
                                     | ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                 [0xdU] 
                                                 >> 0x3fU)) 
                                        & (IData)((
                                                   vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                   [0xeU] 
                                                   >> 0x3fU)))))));
    bufp->fullBit(oldp+11049,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT____Vcellinp__second3__B));
    bufp->fullBit(oldp+11050,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [9U] >> 0x3fU)))));
    bufp->fullBit(oldp+11051,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0xaU] 
                                             >> 0x3fU)))));
    bufp->fullBit(oldp+11052,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0xbU] 
                                             >> 0x3fU)))));
    bufp->fullBit(oldp+11053,((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [9U] 
                                               >> 0x3fU)) 
                                      & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                  [0xaU] 
                                                  >> 0x3fU)) 
                                         | (IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                    [0xbU] 
                                                    >> 0x3fU)))) 
                                     | ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                 [0xaU] 
                                                 >> 0x3fU)) 
                                        & (IData)((
                                                   vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                   [0xbU] 
                                                   >> 0x3fU)))))));
    bufp->fullBit(oldp+11054,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT____Vcellinp__second3__A));
    bufp->fullBit(oldp+11055,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [6U] >> 0x3fU)))));
    bufp->fullBit(oldp+11056,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [7U] >> 0x3fU)))));
    bufp->fullBit(oldp+11057,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [8U] >> 0x3fU)))));
    bufp->fullBit(oldp+11058,((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [6U] 
                                               >> 0x3fU)) 
                                      & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                  [7U] 
                                                  >> 0x3fU)) 
                                         | (IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                    [8U] 
                                                    >> 0x3fU)))) 
                                     | ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                 [7U] 
                                                 >> 0x3fU)) 
                                        & (IData)((
                                                   vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                   [8U] 
                                                   >> 0x3fU)))))));
    bufp->fullBit(oldp+11059,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT____Vcellinp__second4__C));
    bufp->fullBit(oldp+11060,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [3U] >> 0x3fU)))));
    bufp->fullBit(oldp+11061,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [4U] >> 0x3fU)))));
    bufp->fullBit(oldp+11062,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [5U] >> 0x3fU)))));
    bufp->fullBit(oldp+11063,((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [3U] 
                                               >> 0x3fU)) 
                                      & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                  [4U] 
                                                  >> 0x3fU)) 
                                         | (IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                    [5U] 
                                                    >> 0x3fU)))) 
                                     | ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                 [4U] 
                                                 >> 0x3fU)) 
                                        & (IData)((
                                                   vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                   [5U] 
                                                   >> 0x3fU)))))));
    bufp->fullBit(oldp+11064,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT____Vcellinp__second4__B));
    bufp->fullBit(oldp+11065,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0U] >> 0x3fU)))));
    bufp->fullBit(oldp+11066,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [1U] >> 0x3fU)))));
    bufp->fullBit(oldp+11067,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [2U] >> 0x3fU)))));
    bufp->fullBit(oldp+11068,((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0U] 
                                               >> 0x3fU)) 
                                      & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                  [1U] 
                                                  >> 0x3fU)) 
                                         | (IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                    [2U] 
                                                    >> 0x3fU)))) 
                                     | ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                 [1U] 
                                                 >> 0x3fU)) 
                                        & (IData)((
                                                   vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                   [2U] 
                                                   >> 0x3fU)))))));
    bufp->fullBit(oldp+11069,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT____Vcellinp__second4__A));
    bufp->fullBit(oldp+11070,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT____Vcellinp__fourth1__A) 
                                & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT____Vcellinp__fourth1__B) 
                                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT____Vcellinp__fourth1__C))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT____Vcellinp__fourth1__B) 
                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT____Vcellinp__fourth1__C)))));
    bufp->fullBit(oldp+11071,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT____Vcellinp__fourth2__A));
    bufp->fullBit(oldp+11072,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT____Vcellinp__fourth2__B));
    bufp->fullBit(oldp+11073,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT____Vcellinp__fourth2__A) 
                                & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT____Vcellinp__fourth2__B) 
                                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT____Vcellinp__fourth2__C))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT____Vcellinp__fourth2__B) 
                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT____Vcellinp__fourth2__C)))));
    bufp->fullBit(oldp+11074,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT____Vcellinp__second1__A) 
                                & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT____Vcellinp__second1__B) 
                                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT____Vcellinp__second1__C))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT____Vcellinp__second1__B) 
                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT____Vcellinp__second1__C)))));
    bufp->fullBit(oldp+11075,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT____Vcellinp__third1__A));
    bufp->fullBit(oldp+11076,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0x10U] 
                                             >> 0x3fU)))));
    bufp->fullBit(oldp+11077,((((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                         [0x10U] >> 0x3fU)) 
                                & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT____Vcellinp__second2__B) 
                                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT____Vcellinp__second2__C))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT____Vcellinp__second2__B) 
                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT____Vcellinp__second2__C)))));
    bufp->fullBit(oldp+11078,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT____Vcellinp__third2__C));
    bufp->fullBit(oldp+11079,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0xfU] 
                                             >> 0x3fU)))));
    bufp->fullBit(oldp+11080,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT____Vcellinp__second3__A) 
                                & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT____Vcellinp__second3__B) 
                                   | (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                              [0xfU] 
                                              >> 0x3fU)))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT____Vcellinp__second3__B) 
                                  & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0xfU] 
                                             >> 0x3fU))))));
    bufp->fullBit(oldp+11081,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT____Vcellinp__third2__B));
    bufp->fullBit(oldp+11082,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT____Vcellinp__second4__A) 
                                & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT____Vcellinp__second4__B) 
                                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT____Vcellinp__second4__C))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT____Vcellinp__second4__B) 
                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT____Vcellinp__second4__C)))));
    bufp->fullBit(oldp+11083,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT____Vcellinp__third2__A));
    bufp->fullBit(oldp+11084,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT____Vcellinp__third1__A) 
                                & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT____Vcellinp__third1__B) 
                                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT____Vcellinp__third1__C))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT____Vcellinp__third1__B) 
                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT____Vcellinp__third1__C)))));
    bufp->fullBit(oldp+11085,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT____Vcellinp__third2__A) 
                                & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT____Vcellinp__third2__B) 
                                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT____Vcellinp__third2__C))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT____Vcellinp__third2__B) 
                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT____Vcellinp__third2__C)))));
    bufp->fullIData(oldp+11086,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData),17);
    bufp->fullBit(oldp+11087,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT__FifSig) 
                                & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT____Vcellinp__sixth1__B) 
                                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                               | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0))));
    bufp->fullBit(oldp+11088,((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT__FifSig)) 
                                & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                               | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT__FifSig)) 
                                   & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT____Vcellinp__sixth1__C)) 
                                      & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT____Vcellinp__sixth1__B))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT__FifSig) 
                                     & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                         & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                        | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0)))))));
    bufp->fullCData(oldp+11089,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT____Vcellinp__second4__A) 
                                  << 4U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT____Vcellinp__second4__B) 
                                             << 3U) 
                                            | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT____Vcellinp__second4__C) 
                                                << 2U) 
                                               | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT____Vcellinp__second3__A) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT____Vcellinp__second3__B)))))),5);
    bufp->fullCData(oldp+11090,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT____Vcellinp__third2__A) 
                                  << 3U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT____Vcellinp__third2__B) 
                                             << 2U) 
                                            | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT____Vcellinp__third2__C) 
                                                << 1U) 
                                               | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT____Vcellinp__third1__A))))),4);
    bufp->fullCData(oldp+11091,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT____Vcellinp__fourth2__A) 
                                  << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT____Vcellinp__fourth2__B))),2);
    bufp->fullCData(oldp+11092,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT____Vcellinp__fifth1__A) 
                                  << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT____Vcellinp__fifth1__B))),2);
    bufp->fullBit(oldp+11093,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT__FifSig));
    bufp->fullBit(oldp+11094,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT____Vcellinp__fifth1__A));
    bufp->fullBit(oldp+11095,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT____Vcellinp__fifth1__B));
    bufp->fullBit(oldp+11096,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT____Vcellinp__sixth1__B));
    bufp->fullBit(oldp+11097,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0xcU] 
                                             >> 6U)))));
    bufp->fullBit(oldp+11098,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0xdU] 
                                             >> 6U)))));
    bufp->fullBit(oldp+11099,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0xeU] 
                                             >> 6U)))));
    bufp->fullBit(oldp+11100,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT____Vcellinp__second1__C));
    bufp->fullBit(oldp+11101,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT____Vcellinp__second3__B));
    bufp->fullBit(oldp+11102,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [9U] >> 6U)))));
    bufp->fullBit(oldp+11103,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0xaU] 
                                             >> 6U)))));
    bufp->fullBit(oldp+11104,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0xbU] 
                                             >> 6U)))));
    bufp->fullBit(oldp+11105,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT____Vcellinp__second1__B));
    bufp->fullBit(oldp+11106,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT____Vcellinp__second3__A));
    bufp->fullBit(oldp+11107,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [6U] >> 6U)))));
    bufp->fullBit(oldp+11108,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [7U] >> 6U)))));
    bufp->fullBit(oldp+11109,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [8U] >> 6U)))));
    bufp->fullBit(oldp+11110,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT____Vcellinp__second1__A));
    bufp->fullBit(oldp+11111,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT____Vcellinp__second4__C));
    bufp->fullBit(oldp+11112,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [3U] >> 6U)))));
    bufp->fullBit(oldp+11113,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [4U] >> 6U)))));
    bufp->fullBit(oldp+11114,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [5U] >> 6U)))));
    bufp->fullBit(oldp+11115,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT____Vcellinp__second2__C));
    bufp->fullBit(oldp+11116,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT____Vcellinp__second4__B));
    bufp->fullBit(oldp+11117,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0U] >> 6U)))));
    bufp->fullBit(oldp+11118,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [1U] >> 6U)))));
    bufp->fullBit(oldp+11119,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [2U] >> 6U)))));
    bufp->fullBit(oldp+11120,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT____Vcellinp__second2__B));
    bufp->fullBit(oldp+11121,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT____Vcellinp__second4__A));
    bufp->fullBit(oldp+11122,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT____Vcellinp__fifth1__C));
    bufp->fullBit(oldp+11123,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT____Vcellinp__fourth2__A));
    bufp->fullBit(oldp+11124,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT____Vcellinp__fourth2__B));
    bufp->fullBit(oldp+11125,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT____Vcellinp__sixth1__C));
    bufp->fullBit(oldp+11126,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT____Vcellinp__third1__C));
    bufp->fullBit(oldp+11127,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT____Vcellinp__third1__A));
    bufp->fullBit(oldp+11128,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0x10U] 
                                             >> 6U)))));
    bufp->fullBit(oldp+11129,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT____Vcellinp__third1__B));
    bufp->fullBit(oldp+11130,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT____Vcellinp__third2__C));
    bufp->fullBit(oldp+11131,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0xfU] 
                                             >> 6U)))));
    bufp->fullBit(oldp+11132,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT____Vcellinp__fourth1__C));
    bufp->fullBit(oldp+11133,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT____Vcellinp__third2__B));
    bufp->fullBit(oldp+11134,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT____Vcellinp__fourth1__B));
    bufp->fullBit(oldp+11135,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT____Vcellinp__third2__A));
    bufp->fullBit(oldp+11136,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT____Vcellinp__fourth1__A));
    bufp->fullBit(oldp+11137,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT____Vcellinp__fourth2__C));
    bufp->fullIData(oldp+11138,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData),17);
    bufp->fullBit(oldp+11139,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT__FifSig) 
                                & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT____Vcellinp__sixth1__B) 
                                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                               | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0))));
    bufp->fullBit(oldp+11140,((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT__FifSig)) 
                                & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                               | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT__FifSig)) 
                                   & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT____Vcellinp__sixth1__C)) 
                                      & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT____Vcellinp__sixth1__B))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT__FifSig) 
                                     & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                         & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                        | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0)))))));
    bufp->fullCData(oldp+11141,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT____Vcellinp__second4__A) 
                                  << 4U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT____Vcellinp__second4__B) 
                                             << 3U) 
                                            | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT____Vcellinp__second4__C) 
                                                << 2U) 
                                               | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT____Vcellinp__second3__A) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT____Vcellinp__second3__B)))))),5);
    bufp->fullCData(oldp+11142,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT____Vcellinp__third2__A) 
                                  << 3U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT____Vcellinp__third2__B) 
                                             << 2U) 
                                            | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT____Vcellinp__third2__C) 
                                                << 1U) 
                                               | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT____Vcellinp__third1__A))))),4);
    bufp->fullCData(oldp+11143,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT____Vcellinp__fourth2__A) 
                                  << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT____Vcellinp__fourth2__B))),2);
    bufp->fullCData(oldp+11144,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT____Vcellinp__fifth1__A) 
                                  << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT____Vcellinp__fifth1__B))),2);
    bufp->fullBit(oldp+11145,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT__FifSig));
    bufp->fullBit(oldp+11146,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT____Vcellinp__fifth1__A));
    bufp->fullBit(oldp+11147,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT____Vcellinp__fifth1__B));
    bufp->fullBit(oldp+11148,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT____Vcellinp__sixth1__B));
    bufp->fullBit(oldp+11149,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0xcU] 
                                             >> 7U)))));
    bufp->fullBit(oldp+11150,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0xdU] 
                                             >> 7U)))));
    bufp->fullBit(oldp+11151,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0xeU] 
                                             >> 7U)))));
    bufp->fullBit(oldp+11152,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT____Vcellinp__second1__C));
    bufp->fullBit(oldp+11153,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT____Vcellinp__second3__B));
    bufp->fullBit(oldp+11154,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [9U] >> 7U)))));
    bufp->fullBit(oldp+11155,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0xaU] 
                                             >> 7U)))));
    bufp->fullBit(oldp+11156,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0xbU] 
                                             >> 7U)))));
    bufp->fullBit(oldp+11157,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT____Vcellinp__second1__B));
    bufp->fullBit(oldp+11158,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT____Vcellinp__second3__A));
    bufp->fullBit(oldp+11159,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [6U] >> 7U)))));
    bufp->fullBit(oldp+11160,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [7U] >> 7U)))));
    bufp->fullBit(oldp+11161,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [8U] >> 7U)))));
    bufp->fullBit(oldp+11162,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT____Vcellinp__second1__A));
    bufp->fullBit(oldp+11163,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT____Vcellinp__second4__C));
    bufp->fullBit(oldp+11164,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [3U] >> 7U)))));
    bufp->fullBit(oldp+11165,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [4U] >> 7U)))));
    bufp->fullBit(oldp+11166,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [5U] >> 7U)))));
    bufp->fullBit(oldp+11167,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT____Vcellinp__second2__C));
    bufp->fullBit(oldp+11168,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT____Vcellinp__second4__B));
    bufp->fullBit(oldp+11169,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0U] >> 7U)))));
    bufp->fullBit(oldp+11170,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [1U] >> 7U)))));
    bufp->fullBit(oldp+11171,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [2U] >> 7U)))));
    bufp->fullBit(oldp+11172,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT____Vcellinp__second2__B));
    bufp->fullBit(oldp+11173,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT____Vcellinp__second4__A));
    bufp->fullBit(oldp+11174,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT____Vcellinp__fifth1__C));
    bufp->fullBit(oldp+11175,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT____Vcellinp__fourth2__A));
    bufp->fullBit(oldp+11176,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT____Vcellinp__fourth2__B));
    bufp->fullBit(oldp+11177,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT____Vcellinp__sixth1__C));
    bufp->fullBit(oldp+11178,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT____Vcellinp__third1__C));
    bufp->fullBit(oldp+11179,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT____Vcellinp__third1__A));
    bufp->fullBit(oldp+11180,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0x10U] 
                                             >> 7U)))));
    bufp->fullBit(oldp+11181,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT____Vcellinp__third1__B));
    bufp->fullBit(oldp+11182,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT____Vcellinp__third2__C));
    bufp->fullBit(oldp+11183,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0xfU] 
                                             >> 7U)))));
    bufp->fullBit(oldp+11184,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT____Vcellinp__fourth1__C));
    bufp->fullBit(oldp+11185,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT____Vcellinp__third2__B));
    bufp->fullBit(oldp+11186,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT____Vcellinp__fourth1__B));
    bufp->fullBit(oldp+11187,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT____Vcellinp__third2__A));
    bufp->fullBit(oldp+11188,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT____Vcellinp__fourth1__A));
    bufp->fullBit(oldp+11189,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT____Vcellinp__fourth2__C));
    bufp->fullIData(oldp+11190,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData),17);
    bufp->fullBit(oldp+11191,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT__FifSig) 
                                & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT____Vcellinp__sixth1__B) 
                                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                               | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0))));
    bufp->fullBit(oldp+11192,((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT__FifSig)) 
                                & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                               | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT__FifSig)) 
                                   & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT____Vcellinp__sixth1__C)) 
                                      & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT____Vcellinp__sixth1__B))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT__FifSig) 
                                     & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                         & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                        | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0)))))));
    bufp->fullCData(oldp+11193,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT____Vcellinp__second4__A) 
                                  << 4U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT____Vcellinp__second4__B) 
                                             << 3U) 
                                            | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT____Vcellinp__second4__C) 
                                                << 2U) 
                                               | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT____Vcellinp__second3__A) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT____Vcellinp__second3__B)))))),5);
    bufp->fullCData(oldp+11194,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT____Vcellinp__third2__A) 
                                  << 3U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT____Vcellinp__third2__B) 
                                             << 2U) 
                                            | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT____Vcellinp__third2__C) 
                                                << 1U) 
                                               | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT____Vcellinp__third1__A))))),4);
    bufp->fullCData(oldp+11195,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT____Vcellinp__fourth2__A) 
                                  << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT____Vcellinp__fourth2__B))),2);
    bufp->fullCData(oldp+11196,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT____Vcellinp__fifth1__A) 
                                  << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT____Vcellinp__fifth1__B))),2);
    bufp->fullBit(oldp+11197,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT__FifSig));
    bufp->fullBit(oldp+11198,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT____Vcellinp__fifth1__A));
    bufp->fullBit(oldp+11199,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT____Vcellinp__fifth1__B));
    bufp->fullBit(oldp+11200,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT____Vcellinp__sixth1__B));
    bufp->fullBit(oldp+11201,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0xcU] 
                                             >> 8U)))));
    bufp->fullBit(oldp+11202,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0xdU] 
                                             >> 8U)))));
    bufp->fullBit(oldp+11203,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0xeU] 
                                             >> 8U)))));
    bufp->fullBit(oldp+11204,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT____Vcellinp__second1__C));
    bufp->fullBit(oldp+11205,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT____Vcellinp__second3__B));
    bufp->fullBit(oldp+11206,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [9U] >> 8U)))));
    bufp->fullBit(oldp+11207,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0xaU] 
                                             >> 8U)))));
    bufp->fullBit(oldp+11208,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0xbU] 
                                             >> 8U)))));
    bufp->fullBit(oldp+11209,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT____Vcellinp__second1__B));
    bufp->fullBit(oldp+11210,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT____Vcellinp__second3__A));
    bufp->fullBit(oldp+11211,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [6U] >> 8U)))));
    bufp->fullBit(oldp+11212,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [7U] >> 8U)))));
    bufp->fullBit(oldp+11213,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [8U] >> 8U)))));
    bufp->fullBit(oldp+11214,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT____Vcellinp__second1__A));
    bufp->fullBit(oldp+11215,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT____Vcellinp__second4__C));
    bufp->fullBit(oldp+11216,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [3U] >> 8U)))));
    bufp->fullBit(oldp+11217,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [4U] >> 8U)))));
    bufp->fullBit(oldp+11218,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [5U] >> 8U)))));
    bufp->fullBit(oldp+11219,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT____Vcellinp__second2__C));
    bufp->fullBit(oldp+11220,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT____Vcellinp__second4__B));
    bufp->fullBit(oldp+11221,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0U] >> 8U)))));
    bufp->fullBit(oldp+11222,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [1U] >> 8U)))));
    bufp->fullBit(oldp+11223,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [2U] >> 8U)))));
    bufp->fullBit(oldp+11224,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT____Vcellinp__second2__B));
    bufp->fullBit(oldp+11225,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT____Vcellinp__second4__A));
    bufp->fullBit(oldp+11226,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT____Vcellinp__fifth1__C));
    bufp->fullBit(oldp+11227,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT____Vcellinp__fourth2__A));
    bufp->fullBit(oldp+11228,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT____Vcellinp__fourth2__B));
    bufp->fullBit(oldp+11229,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT____Vcellinp__sixth1__C));
    bufp->fullBit(oldp+11230,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT____Vcellinp__third1__C));
    bufp->fullBit(oldp+11231,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT____Vcellinp__third1__A));
    bufp->fullBit(oldp+11232,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0x10U] 
                                             >> 8U)))));
    bufp->fullBit(oldp+11233,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT____Vcellinp__third1__B));
    bufp->fullBit(oldp+11234,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT____Vcellinp__third2__C));
    bufp->fullBit(oldp+11235,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0xfU] 
                                             >> 8U)))));
    bufp->fullBit(oldp+11236,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT____Vcellinp__fourth1__C));
    bufp->fullBit(oldp+11237,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT____Vcellinp__third2__B));
    bufp->fullBit(oldp+11238,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT____Vcellinp__fourth1__B));
    bufp->fullBit(oldp+11239,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT____Vcellinp__third2__A));
    bufp->fullBit(oldp+11240,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT____Vcellinp__fourth1__A));
    bufp->fullBit(oldp+11241,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT____Vcellinp__fourth2__C));
    bufp->fullIData(oldp+11242,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData),17);
    bufp->fullBit(oldp+11243,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT__FifSig) 
                                & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT____Vcellinp__sixth1__B) 
                                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                               | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0))));
    bufp->fullBit(oldp+11244,((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT__FifSig)) 
                                & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                               | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT__FifSig)) 
                                   & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT____Vcellinp__sixth1__C)) 
                                      & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT____Vcellinp__sixth1__B))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT__FifSig) 
                                     & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                         & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                        | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0)))))));
    bufp->fullCData(oldp+11245,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT____Vcellinp__second4__A) 
                                  << 4U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT____Vcellinp__second4__B) 
                                             << 3U) 
                                            | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT____Vcellinp__second4__C) 
                                                << 2U) 
                                               | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT____Vcellinp__second3__A) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT____Vcellinp__second3__B)))))),5);
    bufp->fullCData(oldp+11246,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT____Vcellinp__third2__A) 
                                  << 3U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT____Vcellinp__third2__B) 
                                             << 2U) 
                                            | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT____Vcellinp__third2__C) 
                                                << 1U) 
                                               | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT____Vcellinp__third1__A))))),4);
    bufp->fullCData(oldp+11247,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT____Vcellinp__fourth2__A) 
                                  << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT____Vcellinp__fourth2__B))),2);
    bufp->fullCData(oldp+11248,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT____Vcellinp__fifth1__A) 
                                  << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT____Vcellinp__fifth1__B))),2);
    bufp->fullBit(oldp+11249,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT__FifSig));
    bufp->fullBit(oldp+11250,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT____Vcellinp__fifth1__A));
    bufp->fullBit(oldp+11251,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT____Vcellinp__fifth1__B));
    bufp->fullBit(oldp+11252,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0xcU] 
                                             >> 9U)))));
    bufp->fullBit(oldp+11253,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0xdU] 
                                             >> 9U)))));
    bufp->fullBit(oldp+11254,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0xeU] 
                                             >> 9U)))));
    bufp->fullBit(oldp+11255,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT____Vcellinp__second3__B));
    bufp->fullBit(oldp+11256,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [9U] >> 9U)))));
    bufp->fullBit(oldp+11257,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0xaU] 
                                             >> 9U)))));
    bufp->fullBit(oldp+11258,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0xbU] 
                                             >> 9U)))));
    bufp->fullBit(oldp+11259,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT____Vcellinp__second3__A));
    bufp->fullBit(oldp+11260,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [6U] >> 9U)))));
    bufp->fullBit(oldp+11261,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [7U] >> 9U)))));
    bufp->fullBit(oldp+11262,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [8U] >> 9U)))));
    bufp->fullBit(oldp+11263,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT____Vcellinp__second4__C));
    bufp->fullBit(oldp+11264,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [3U] >> 9U)))));
    bufp->fullBit(oldp+11265,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [4U] >> 9U)))));
    bufp->fullBit(oldp+11266,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [5U] >> 9U)))));
    bufp->fullBit(oldp+11267,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT____Vcellinp__second4__B));
    bufp->fullBit(oldp+11268,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0U] >> 9U)))));
    bufp->fullBit(oldp+11269,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [1U] >> 9U)))));
    bufp->fullBit(oldp+11270,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [2U] >> 9U)))));
    bufp->fullBit(oldp+11271,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT____Vcellinp__second4__A));
    bufp->fullBit(oldp+11272,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT____Vcellinp__fourth2__A));
    bufp->fullBit(oldp+11273,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT____Vcellinp__fourth2__B));
    bufp->fullBit(oldp+11274,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT____Vcellinp__third1__A));
    bufp->fullBit(oldp+11275,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0x10U] 
                                             >> 9U)))));
    bufp->fullBit(oldp+11276,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT____Vcellinp__third2__C));
    bufp->fullBit(oldp+11277,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0xfU] 
                                             >> 9U)))));
    bufp->fullBit(oldp+11278,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT____Vcellinp__third2__B));
    bufp->fullBit(oldp+11279,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT____Vcellinp__third2__A));
    bufp->fullWData(oldp+11280,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r),218);
    bufp->fullBit(oldp+11287,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[2U] 
                                     >> 5U))));
    bufp->fullBit(oldp+11288,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[2U] 
                                     >> 6U))));
    bufp->fullSData(oldp+11289,((0xffffU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                             << 9U) 
                                            | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U] 
                                               >> 0x17U)))),16);
    bufp->fullBit(oldp+11290,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[2U] 
                                     >> 7U))));
    bufp->fullBit(oldp+11291,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U] 
                                     >> 0x16U))));
    bufp->fullBit(oldp+11292,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                     >> 8U))));
    bufp->fullIData(oldp+11293,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                  << 0x17U) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                               >> 9U))),32);
    bufp->fullBit(oldp+11294,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                     >> 9U))));
    bufp->fullBit(oldp+11295,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                     >> 0x11U))));
    bufp->fullBit(oldp+11296,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                     >> 0x10U))));
    bufp->fullBit(oldp+11297,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                     >> 0x13U))));
    bufp->fullBit(oldp+11298,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                     >> 0x12U))));
    bufp->fullBit(oldp+11299,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                     >> 0x14U))));
    bufp->fullBit(oldp+11300,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                     >> 0x12U))));
    bufp->fullBit(oldp+11301,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                     >> 0x13U))));
    bufp->fullBit(oldp+11302,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                     >> 0x14U))));
    bufp->fullBit(oldp+11303,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                     >> 0x15U))));
    bufp->fullBit(oldp+11304,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                     >> 0x16U))));
    bufp->fullBit(oldp+11305,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                     >> 0x17U))));
    bufp->fullBit(oldp+11306,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                     >> 0x18U))));
    bufp->fullBit(oldp+11307,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                     >> 0x19U))));
    bufp->fullBit(oldp+11308,((1U & (vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_random 
                                     | (IData)(vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_ar_disable)))));
    bufp->fullBit(oldp+11309,(vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_ar_disable));
    bufp->fullBit(oldp+11310,((1U & vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_random)));
    bufp->fullBit(oldp+11311,((1U & ((vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_random 
                                      >> 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_aw_disable)))));
    bufp->fullBit(oldp+11312,(vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_aw_disable));
    bufp->fullBit(oldp+11313,((1U & (vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_random 
                                     >> 1U))));
    bufp->fullBit(oldp+11314,((1U & (vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_random 
                                     >> 2U))));
    bufp->fullBit(oldp+11315,(vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_no_delay));
    bufp->fullBit(oldp+11316,((1U & (vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_random 
                                     >> 3U))));
    bufp->fullIData(oldp+11317,(vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_random),23);
    bufp->fullIData(oldp+11318,(((0x7ffffeU & (vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_random 
                                               << 1U)) 
                                 | (1U & VL_REDXOR_32(
                                                      (0x420000U 
                                                       & vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_random))))),23);
    bufp->fullBit(oldp+11319,(vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_short_delay));
    bufp->fullBit(oldp+11320,((1U & ((vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_random 
                                      >> 4U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_w_disable)))));
    bufp->fullBit(oldp+11321,(vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_w_disable));
    bufp->fullBit(oldp+11322,((1U & (vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_random 
                                     >> 4U))));
    bufp->fullQData(oldp+11323,((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arburst)) 
                                  << 0x2bU) | (((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arsize)) 
                                                << 0x28U) 
                                               | (((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arlen)) 
                                                   << 0x24U) 
                                                  | (((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr)) 
                                                      << 4U) 
                                                     | (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arid))))))),45);
    bufp->fullIData(oldp+11325,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr),32);
    bufp->fullIData(oldp+11326,(((((IData)(1U) + (vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr 
                                                  >> 2U)) 
                                  << 2U) | (3U & vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr))),32);
    bufp->fullIData(oldp+11327,((((- (IData)((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arburst)))) 
                                  & vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr) 
                                 | (((- (IData)((1U 
                                                 == (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arburst)))) 
                                     & ((((IData)(1U) 
                                          + (vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr 
                                             >> 2U)) 
                                         << 2U) | (3U 
                                                   & vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr))) 
                                    | ((- (IData)((2U 
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
    bufp->fullIData(oldp+11328,(((0xffffffc0U & vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr) 
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
    bufp->fullCData(oldp+11329,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arburst),2);
    bufp->fullBit(oldp+11330,((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arburst))));
    bufp->fullBit(oldp+11331,((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arburst))));
    bufp->fullBit(oldp+11332,((2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arburst))));
    bufp->fullCData(oldp+11333,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arid),4);
    bufp->fullCData(oldp+11334,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arlen),4);
    bufp->fullBit(oldp+11335,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arlen_last));
    bufp->fullCData(oldp+11336,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arsize),3);
    bufp->fullBit(oldp+11337,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_valid));
    bufp->fullQData(oldp+11338,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_datas),45);
    bufp->fullIData(oldp+11340,((IData)((vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_datas 
                                         >> 0xdU))),32);
    bufp->fullCData(oldp+11341,((3U & (IData)((vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_datas 
                                               >> 0xbU)))),2);
    bufp->fullCData(oldp+11342,((0xfU & (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_datas))),4);
    bufp->fullCData(oldp+11343,((0xfU & (IData)((vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_datas 
                                                 >> 4U)))),4);
    bufp->fullCData(oldp+11344,((7U & (IData)((vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_datas 
                                               >> 8U)))),3);
    bufp->fullBit(oldp+11345,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_valid));
    bufp->fullCData(oldp+11346,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_rcur),4);
    bufp->fullQData(oldp+11347,((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr)) 
                                  << 0xdU) | (QData)((IData)(
                                                             (((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awburst) 
                                                               << 0xbU) 
                                                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awsize) 
                                                                  << 8U) 
                                                                 | (((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awlen) 
                                                                     << 4U) 
                                                                    | (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awid)))))))),45);
    bufp->fullIData(oldp+11349,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr),32);
    bufp->fullIData(oldp+11350,(((((IData)(1U) + (vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr 
                                                  >> 2U)) 
                                  << 2U) | (3U & vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr))),32);
    bufp->fullIData(oldp+11351,((((- (IData)((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awburst)))) 
                                  & vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr) 
                                 | (((- (IData)((1U 
                                                 == (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awburst)))) 
                                     & ((((IData)(1U) 
                                          + (vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr 
                                             >> 2U)) 
                                         << 2U) | (3U 
                                                   & vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr))) 
                                    | ((- (IData)((2U 
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
    bufp->fullIData(oldp+11352,(((0xffffffc0U & vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr) 
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
    bufp->fullCData(oldp+11353,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awburst),2);
    bufp->fullBit(oldp+11354,((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awburst))));
    bufp->fullBit(oldp+11355,((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awburst))));
    bufp->fullBit(oldp+11356,((2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awburst))));
    bufp->fullCData(oldp+11357,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awid),4);
    bufp->fullCData(oldp+11358,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awlen),4);
    bufp->fullCData(oldp+11359,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awsize),3);
    bufp->fullBit(oldp+11360,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_valid));
    bufp->fullQData(oldp+11361,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_datas),45);
    bufp->fullIData(oldp+11363,((IData)((vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_datas 
                                         >> 0xdU))),32);
    bufp->fullCData(oldp+11364,((3U & (IData)((vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_datas 
                                               >> 0xbU)))),2);
    bufp->fullCData(oldp+11365,((0xfU & (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_datas))),4);
    bufp->fullCData(oldp+11366,((0xfU & (IData)((vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_datas 
                                                 >> 4U)))),4);
    bufp->fullCData(oldp+11367,((7U & (IData)((vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_datas 
                                               >> 8U)))),3);
    bufp->fullBit(oldp+11368,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_valid));
    bufp->fullBit(oldp+11369,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_allow_out));
    bufp->fullBit(oldp+11370,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_queue_valid));
    bufp->fullCData(oldp+11371,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_queue_datas),4);
    bufp->fullBit(oldp+11372,((1U & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_queue_valid)))));
    bufp->fullCData(oldp+11373,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_wstrb),4);
    bufp->fullIData(oldp+11374,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_wdata),32);
    bufp->fullBit(oldp+11375,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_wlast));
    bufp->fullBit(oldp+11376,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_wvalid));
    bufp->fullCData(oldp+11377,(vlSelf->simu_top__DOT__soc__DOT__m0_bid),4);
    bufp->fullCData(oldp+11378,(vlSelf->simu_top__DOT__soc__DOT__m0_bresp),2);
    bufp->fullCData(oldp+11379,(vlSelf->simu_top__DOT__soc__DOT__m0_rid),4);
    bufp->fullCData(oldp+11380,(vlSelf->simu_top__DOT__soc__DOT__m0_rresp),2);
    bufp->fullBit(oldp+11381,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_ret_last));
    bufp->fullBit(oldp+11382,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_ret_last));
    bufp->fullBit(oldp+11383,(vlSelf->aclk));
    bufp->fullBit(oldp+11384,(vlSelf->aresetn));
    bufp->fullBit(oldp+11385,(vlSelf->enable_delay));
    bufp->fullIData(oldp+11386,(vlSelf->random_seed),23);
    bufp->fullBit(oldp+11387,(vlSelf->ram_ren));
    bufp->fullIData(oldp+11388,(vlSelf->ram_raddr),32);
    bufp->fullIData(oldp+11389,(vlSelf->ram_rdata),32);
    bufp->fullCData(oldp+11390,(vlSelf->ram_wen),4);
    bufp->fullIData(oldp+11391,(vlSelf->ram_waddr),32);
    bufp->fullIData(oldp+11392,(vlSelf->ram_wdata),32);
    bufp->fullIData(oldp+11393,(vlSelf->debug0_wb_pc),32);
    bufp->fullBit(oldp+11394,(vlSelf->debug0_wb_rf_wen));
    bufp->fullCData(oldp+11395,(vlSelf->debug0_wb_rf_wnum),5);
    bufp->fullIData(oldp+11396,(vlSelf->debug0_wb_rf_wdata),32);
    bufp->fullIData(oldp+11397,(vlSelf->num_data),32);
    bufp->fullBit(oldp+11398,(vlSelf->open_trace));
    bufp->fullBit(oldp+11399,(vlSelf->num_monitor));
    bufp->fullCData(oldp+11400,(vlSelf->confreg_uart_data),8);
    bufp->fullBit(oldp+11401,(vlSelf->write_uart_valid));
    bufp->fullWData(oldp+11402,(vlSelf->uart_ctr_bus),128);
    bufp->fullBit(oldp+11406,(vlSelf->uart_rx));
    bufp->fullBit(oldp+11407,(vlSelf->uart_tx));
    bufp->fullSData(oldp+11408,(vlSelf->led),16);
    bufp->fullCData(oldp+11409,(vlSelf->led_rg0),2);
    bufp->fullCData(oldp+11410,(vlSelf->led_rg1),2);
    bufp->fullCData(oldp+11411,(vlSelf->num_csn),8);
    bufp->fullCData(oldp+11412,(vlSelf->num_a_g),7);
    bufp->fullCData(oldp+11413,(vlSelf->btn_key_col),4);
    bufp->fullCData(oldp+11414,(vlSelf->btn_key_row),4);
    bufp->fullCData(oldp+11415,(vlSelf->btn_step),2);
    bufp->fullCData(oldp+11416,(vlSelf->__SYM__switch),8);
    bufp->fullBit(oldp+11417,(vlSelf->simu_top__DOT__soc__DOT__m0_awready));
    bufp->fullBit(oldp+11418,(vlSelf->simu_top__DOT__soc__DOT__m0_arready));
    bufp->fullBit(oldp+11419,((1U & (~ (IData)(vlSelf->aresetn)))));
    bufp->fullBit(oldp+11420,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_valid_cpu));
    bufp->fullCData(oldp+11421,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__csr_rw_sm_nxt),4);
    bufp->fullBit(oldp+11422,((1U & ((IData)(vlSelf->uart_rx__en0)
                                      ? ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__rx_en)) 
                                         | (IData)(vlSelf->uart_tx))
                                      : (IData)(vlSelf->uart_rx)))));
    bufp->fullCData(oldp+11423,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_hit),5);
    bufp->fullCData(oldp+11424,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_hit),5);
    bufp->fullCData(oldp+11425,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_dir),3);
    bufp->fullIData(oldp+11426,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__w_addr_dir_int),32);
    bufp->fullCData(oldp+11427,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_dir),3);
    bufp->fullIData(oldp+11428,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_dir_int),32);
    bufp->fullBit(oldp+11429,((1U & ((~ (IData)(vlSelf->aresetn)) 
                                     | (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_pop)))));
    bufp->fullIData(oldp+11430,(vlSelf->__SYM__switch),32);
    bufp->fullIData(oldp+11431,(((0x8000U & ((IData)(vlSelf->__SYM__switch) 
                                             << 8U)) 
                                 | ((0x2000U & ((IData)(vlSelf->__SYM__switch) 
                                                << 7U)) 
                                    | ((0x800U & ((IData)(vlSelf->__SYM__switch) 
                                                  << 6U)) 
                                       | ((0x200U & 
                                           ((IData)(vlSelf->__SYM__switch) 
                                            << 5U)) 
                                          | ((0x80U 
                                              & ((IData)(vlSelf->__SYM__switch) 
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
    bufp->fullBit(oldp+11432,(((~ (IData)((0xfU == (IData)(vlSelf->btn_key_row)))) 
                               & (0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__state)))));
    bufp->fullBit(oldp+11433,(((7U == (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__state)) 
                               & (0xfU == (IData)(vlSelf->btn_key_row)))));
    bufp->fullBit(oldp+11434,(((~ (IData)(vlSelf->btn_step)) 
                               & (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__btn_step0_r))));
    bufp->fullBit(oldp+11435,((1U & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__btn_step0_r)) 
                                     & (IData)(vlSelf->btn_step)))));
    bufp->fullBit(oldp+11436,(((~ ((IData)(vlSelf->btn_step) 
                                   >> 1U)) & (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__btn_step1_r))));
    bufp->fullBit(oldp+11437,(((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__btn_step1_r)) 
                               & ((IData)(vlSelf->btn_step) 
                                  >> 1U))));
    bufp->fullCData(oldp+11438,((0xfU & (- (IData)((IData)(vlSelf->debug0_wb_rf_wen))))),4);
    bufp->fullQData(oldp+11439,((((QData)((IData)(vlSelf->debug0_wb_rf_wen)) 
                                  << 0x25U) | (0x1fffffffffULL 
                                               & (((QData)((IData)(
                                                                   vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[2U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[1U])))))),38);
    bufp->fullBit(oldp+11441,(((0x10U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__main_state)) 
                               & ((~ ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__request_buffer_icacop) 
                                      | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__request_buffer_uncache_en))) 
                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_ret_last)))));
    bufp->fullBit(oldp+11442,(((0x10U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_state)) 
                               & ((~ ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_uncache_en) 
                                      | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT____VdfgTmp_h63343402__0))) 
                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_ret_last)))));
    bufp->fullBit(oldp+11443,(((IData)(vlSelf->simu_top__DOT__soc__DOT__m0_arvalid) 
                               & (IData)(vlSelf->simu_top__DOT__soc__DOT__m0_arready))));
    bufp->fullBit(oldp+11444,(((IData)(vlSelf->simu_top__DOT__soc__DOT__m0_awvalid) 
                               & (IData)(vlSelf->simu_top__DOT__soc__DOT__m0_awready))));
    bufp->fullBit(oldp+11445,(((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arlen_last)) 
                               & (IData)(vlSelf->ram_ren))));
    bufp->fullBit(oldp+11446,((1U & ((~ (IData)(vlSelf->aresetn)) 
                                     | (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_pop)))));
    bufp->fullIData(oldp+11447,(0x20U),32);
    bufp->fullCData(oldp+11448,(1U),4);
    bufp->fullCData(oldp+11449,(1U),2);
    bufp->fullCData(oldp+11450,(0U),2);
    bufp->fullCData(oldp+11451,(0U),4);
    bufp->fullCData(oldp+11452,(0U),3);
    bufp->fullBit(oldp+11453,(0U));
    bufp->fullBit(oldp+11454,(vlSelf->simu_top__DOT__soc__DOT__UART_RI));
    bufp->fullIData(oldp+11455,(0x14U),32);
    bufp->fullIData(oldp+11456,(8U),32);
    bufp->fullIData(oldp+11457,(0x40U),32);
    bufp->fullIData(oldp+11458,(0x80U),32);
    bufp->fullIData(oldp+11459,(0x10U),32);
    bufp->fullBit(oldp+11460,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_rw_dma));
    bufp->fullBit(oldp+11461,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_psel_dma));
    bufp->fullBit(oldp+11462,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_enab_dma));
    bufp->fullIData(oldp+11463,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_addr_dma),20);
    bufp->fullIData(oldp+11464,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_wdata_dma),32);
    bufp->fullBit(oldp+11465,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_valid_dma));
    bufp->fullBit(oldp+11466,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__dma_ack_i));
    bufp->fullCData(oldp+11467,(0U),8);
    bufp->fullBit(oldp+11468,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_clk_dma));
    bufp->fullBit(oldp+11469,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_reset_n_dma));
    bufp->fullCData(oldp+11470,(2U),4);
    bufp->fullCData(oldp+11471,(8U),4);
    bufp->fullCData(oldp+11472,(0U),5);
    bufp->fullCData(oldp+11473,(1U),5);
    bufp->fullCData(oldp+11474,(2U),5);
    bufp->fullCData(oldp+11475,(0xaU),5);
    bufp->fullCData(oldp+11476,(3U),5);
    bufp->fullCData(oldp+11477,(4U),5);
    bufp->fullCData(oldp+11478,(6U),5);
    bufp->fullCData(oldp+11479,(7U),5);
    bufp->fullCData(oldp+11480,(0x10U),5);
    bufp->fullCData(oldp+11481,(0x11U),5);
    bufp->fullCData(oldp+11482,(0x12U),5);
    bufp->fullCData(oldp+11483,(0x13U),5);
    bufp->fullCData(oldp+11484,(0x14U),5);
    bufp->fullCData(oldp+11485,(0x15U),5);
    bufp->fullCData(oldp+11486,(0x16U),5);
    bufp->fullCData(oldp+11487,(0x17U),5);
    bufp->fullCData(oldp+11488,(0x18U),5);
    bufp->fullCData(oldp+11489,(0x19U),5);
    bufp->fullCData(oldp+11490,(0x1aU),5);
    bufp->fullCData(oldp+11491,(0x1bU),5);
    bufp->fullCData(oldp+11492,(((IData)(vlSelf->simu_top__DOT__soc__DOT__UART_RI) 
                                 << 1U)),4);
    bufp->fullBit(oldp+11493,(1U));
    bufp->fullBit(oldp+11494,((1U & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__UART_RI)))));
    bufp->fullIData(oldp+11495,(1U),32);
    bufp->fullBit(oldp+11496,(1U));
    bufp->fullCData(oldp+11497,(3U),4);
    bufp->fullCData(oldp+11498,(4U),4);
    bufp->fullCData(oldp+11499,(5U),4);
    bufp->fullCData(oldp+11500,(6U),4);
    bufp->fullCData(oldp+11501,(7U),4);
    bufp->fullCData(oldp+11502,(9U),4);
    bufp->fullCData(oldp+11503,(0xaU),4);
    bufp->fullIData(oldp+11504,(0xbU),32);
    bufp->fullIData(oldp+11505,(4U),32);
    bufp->fullIData(oldp+11506,(5U),32);
    bufp->fullCData(oldp+11507,(1U),3);
    bufp->fullCData(oldp+11508,(2U),3);
    bufp->fullCData(oldp+11509,(3U),3);
    bufp->fullCData(oldp+11510,(4U),3);
    bufp->fullCData(oldp+11511,(5U),3);
    bufp->fullCData(oldp+11512,(6U),3);
    bufp->fullBit(oldp+11513,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s1_awready));
    bufp->fullBit(oldp+11514,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s1_wready));
    bufp->fullCData(oldp+11515,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s1_bid),4);
    bufp->fullCData(oldp+11516,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s1_bresp),2);
    bufp->fullBit(oldp+11517,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s1_bvalid));
    bufp->fullBit(oldp+11518,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s1_arready));
    bufp->fullCData(oldp+11519,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s1_rid),4);
    bufp->fullIData(oldp+11520,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s1_rdata),32);
    bufp->fullCData(oldp+11521,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s1_rresp),2);
    bufp->fullBit(oldp+11522,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s1_rlast));
    bufp->fullBit(oldp+11523,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s1_rvalid));
    bufp->fullBit(oldp+11524,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s4_awready));
    bufp->fullBit(oldp+11525,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s4_wready));
    bufp->fullCData(oldp+11526,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s4_bid),4);
    bufp->fullCData(oldp+11527,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s4_bresp),2);
    bufp->fullBit(oldp+11528,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s4_bvalid));
    bufp->fullBit(oldp+11529,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s4_arready));
    bufp->fullCData(oldp+11530,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s4_rid),4);
    bufp->fullIData(oldp+11531,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s4_rdata),32);
    bufp->fullCData(oldp+11532,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s4_rresp),2);
    bufp->fullBit(oldp+11533,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s4_rlast));
    bufp->fullBit(oldp+11534,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s4_rvalid));
    bufp->fullCData(oldp+11535,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__BASE_ADDR[0]),5);
    bufp->fullCData(oldp+11536,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__BASE_ADDR[1]),5);
    bufp->fullCData(oldp+11537,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__BASE_ADDR[2]),5);
    bufp->fullCData(oldp+11538,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__BASE_ADDR[3]),5);
    bufp->fullCData(oldp+11539,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__BASE_ADDR[4]),5);
    bufp->fullCData(oldp+11540,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_sel_group_0),3);
    bufp->fullCData(oldp+11541,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_sel_group_1),3);
    bufp->fullIData(oldp+11542,(5U),32);
    bufp->fullIData(oldp+11543,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_hit_int),32);
    bufp->fullIData(oldp+11544,(3U),32);
    bufp->fullIData(oldp+11545,(2U),32);
    bufp->fullBit(oldp+11546,(0U));
    bufp->fullBit(oldp+11547,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache_unbusy));
    bufp->fullIData(oldp+11548,(0U),32);
    bufp->fullCData(oldp+11549,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_wr_type),3);
    bufp->fullIData(oldp+11550,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_wr_addr),32);
    bufp->fullCData(oldp+11551,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_wr_wstrb),4);
    bufp->fullWData(oldp+11552,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_wr_data),128);
    bufp->fullBit(oldp+11556,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__preld_st_en));
    bufp->fullBit(oldp+11557,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__preld_ld_en));
    bufp->fullBit(oldp+11558,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__preld_ld_st_en));
    bufp->fullCData(oldp+11559,(8U),5);
    bufp->fullIData(oldp+11560,(0x100U),32);
    bufp->fullIData(oldp+11561,(0x15U),32);
    bufp->fullBit(oldp+11562,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__br_jirl));
    bufp->fullSData(oldp+11563,(0U),14);
    bufp->fullSData(oldp+11564,(1U),14);
    bufp->fullSData(oldp+11565,(4U),14);
    bufp->fullSData(oldp+11566,(5U),14);
    bufp->fullSData(oldp+11567,(6U),14);
    bufp->fullSData(oldp+11568,(7U),14);
    bufp->fullSData(oldp+11569,(0xcU),14);
    bufp->fullSData(oldp+11570,(0x10U),14);
    bufp->fullSData(oldp+11571,(0x11U),14);
    bufp->fullSData(oldp+11572,(0x12U),14);
    bufp->fullSData(oldp+11573,(0x13U),14);
    bufp->fullSData(oldp+11574,(0x18U),14);
    bufp->fullSData(oldp+11575,(0x19U),14);
    bufp->fullSData(oldp+11576,(0x1aU),14);
    bufp->fullSData(oldp+11577,(0x1bU),14);
    bufp->fullSData(oldp+11578,(0x20U),14);
    bufp->fullSData(oldp+11579,(0x30U),14);
    bufp->fullSData(oldp+11580,(0x31U),14);
    bufp->fullSData(oldp+11581,(0x32U),14);
    bufp->fullSData(oldp+11582,(0x33U),14);
    bufp->fullSData(oldp+11583,(0x40U),14);
    bufp->fullSData(oldp+11584,(0x41U),14);
    bufp->fullSData(oldp+11585,(0x42U),14);
    bufp->fullSData(oldp+11586,(0x43U),14);
    bufp->fullSData(oldp+11587,(0x44U),14);
    bufp->fullSData(oldp+11588,(0x60U),14);
    bufp->fullSData(oldp+11589,(0x88U),14);
    bufp->fullSData(oldp+11590,(0x180U),14);
    bufp->fullSData(oldp+11591,(0x181U),14);
    bufp->fullSData(oldp+11592,(0x100U),14);
    bufp->fullSData(oldp+11593,(0x101U),14);
    bufp->fullSData(oldp+11594,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0280__029),14);
}
