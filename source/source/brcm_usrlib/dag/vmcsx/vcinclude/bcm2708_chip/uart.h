// This file was generated by the create_regs script
#define UART_BASE                                                0x7e201000
#define UART_RBRTHRDLL                                           HW_REGISTER_RW( 0x7e201000 ) 
#define UART_IERDLM                                              HW_REGISTER_RW( 0x7e201004 ) 
#define UART_IIR_FCR                                             HW_REGISTER_RW( 0x7e201008 ) 
#define UART_LCR                                                 HW_REGISTER_RW( 0x7e20100c ) 
   #define UART_LCR_MASK                                         0x000000ff
   #define UART_LCR_WIDTH                                        8
   #define UART_LCR_RESET                                        0000000000
      #define UART_LCR_DLAB_BITS                                 7:7
      #define UART_LCR_DLAB_SET                                  0x00000080
      #define UART_LCR_DLAB_CLR                                  0xffffff7f
      #define UART_LCR_DLAB_MSB                                  7
      #define UART_LCR_DLAB_LSB                                  7
      #define UART_LCR_SBC_BITS                                  6:6
      #define UART_LCR_SBC_SET                                   0x00000040
      #define UART_LCR_SBC_CLR                                   0xffffffbf
      #define UART_LCR_SBC_MSB                                   6
      #define UART_LCR_SBC_LSB                                   6
      #define UART_LCR_SP_BITS                                   5:5
      #define UART_LCR_SP_SET                                    0x00000020
      #define UART_LCR_SP_CLR                                    0xffffffdf
      #define UART_LCR_SP_MSB                                    5
      #define UART_LCR_SP_LSB                                    5
      #define UART_LCR_EPS_BITS                                  4:4
      #define UART_LCR_EPS_SET                                   0x00000010
      #define UART_LCR_EPS_CLR                                   0xffffffef
      #define UART_LCR_EPS_MSB                                   4
      #define UART_LCR_EPS_LSB                                   4
      #define UART_LCR_PEN_BITS                                  3:3
      #define UART_LCR_PEN_SET                                   0x00000008
      #define UART_LCR_PEN_CLR                                   0xfffffff7
      #define UART_LCR_PEN_MSB                                   3
      #define UART_LCR_PEN_LSB                                   3
      #define UART_LCR_STB_BITS                                  2:2
      #define UART_LCR_STB_SET                                   0x00000004
      #define UART_LCR_STB_CLR                                   0xfffffffb
      #define UART_LCR_STB_MSB                                   2
      #define UART_LCR_STB_LSB                                   2
      #define UART_LCR_WLS_BITS                                  1:0
      #define UART_LCR_WLS_SET                                   0x00000003
      #define UART_LCR_WLS_CLR                                   0xfffffffc
      #define UART_LCR_WLS_MSB                                   1
      #define UART_LCR_WLS_LSB                                   0
      #define UART_LCR_LOOP_BITS                                 4:4
      #define UART_LCR_LOOP_SET                                  0x00000010
      #define UART_LCR_LOOP_CLR                                  0xffffffef
      #define UART_LCR_LOOP_MSB                                  4
      #define UART_LCR_LOOP_LSB                                  4
      #define UART_LCR_OUT2_BITS                                 3:3
      #define UART_LCR_OUT2_SET                                  0x00000008
      #define UART_LCR_OUT2_CLR                                  0xfffffff7
      #define UART_LCR_OUT2_MSB                                  3
      #define UART_LCR_OUT2_LSB                                  3
      #define UART_LCR_OUT1_BITS                                 2:2
      #define UART_LCR_OUT1_SET                                  0x00000004
      #define UART_LCR_OUT1_CLR                                  0xfffffffb
      #define UART_LCR_OUT1_MSB                                  2
      #define UART_LCR_OUT1_LSB                                  2
      #define UART_LCR_RTS_BITS                                  1:1
      #define UART_LCR_RTS_SET                                   0x00000002
      #define UART_LCR_RTS_CLR                                   0xfffffffd
      #define UART_LCR_RTS_MSB                                   1
      #define UART_LCR_RTS_LSB                                   1
      #define UART_LCR_DTR_BITS                                  0:0
      #define UART_LCR_DTR_SET                                   0x00000001
      #define UART_LCR_DTR_CLR                                   0xfffffffe
      #define UART_LCR_DTR_MSB                                   0
      #define UART_LCR_DTR_LSB                                   0
#define UART_MCR                                                 HW_REGISTER_RW( 0x7e201010 ) 
   #define UART_MCR_MASK                                         0x0000001f
   #define UART_MCR_WIDTH                                        5
   #define UART_MCR_RESET                                        0000000000
#define UART_LSR                                                 HW_REGISTER_RW( 0x7e201014 ) 
   #define UART_LSR_MASK                                         0x000000ff
   #define UART_LSR_WIDTH                                        8
   #define UART_LSR_RESET                                        0000000000
      #define UART_LSR_RFE_BITS                                  7:7
      #define UART_LSR_RFE_SET                                   0x00000080
      #define UART_LSR_RFE_CLR                                   0xffffff7f
      #define UART_LSR_RFE_MSB                                   7
      #define UART_LSR_RFE_LSB                                   7
      #define UART_LSR_TEMT_BITS                                 6:6
      #define UART_LSR_TEMT_SET                                  0x00000040
      #define UART_LSR_TEMT_CLR                                  0xffffffbf
      #define UART_LSR_TEMT_MSB                                  6
      #define UART_LSR_TEMT_LSB                                  6
      #define UART_LSR_THRE_BITS                                 5:5
      #define UART_LSR_THRE_SET                                  0x00000020
      #define UART_LSR_THRE_CLR                                  0xffffffdf
      #define UART_LSR_THRE_MSB                                  5
      #define UART_LSR_THRE_LSB                                  5
      #define UART_LSR_BI_BITS                                   4:4
      #define UART_LSR_BI_SET                                    0x00000010
      #define UART_LSR_BI_CLR                                    0xffffffef
      #define UART_LSR_BI_MSB                                    4
      #define UART_LSR_BI_LSB                                    4
      #define UART_LSR_FE_BITS                                   3:3
      #define UART_LSR_FE_SET                                    0x00000008
      #define UART_LSR_FE_CLR                                    0xfffffff7
      #define UART_LSR_FE_MSB                                    3
      #define UART_LSR_FE_LSB                                    3
      #define UART_LSR_PE_BITS                                   2:2
      #define UART_LSR_PE_SET                                    0x00000004
      #define UART_LSR_PE_CLR                                    0xfffffffb
      #define UART_LSR_PE_MSB                                    2
      #define UART_LSR_PE_LSB                                    2
      #define UART_LSR_OE_BITS                                   1:1
      #define UART_LSR_OE_SET                                    0x00000002
      #define UART_LSR_OE_CLR                                    0xfffffffd
      #define UART_LSR_OE_MSB                                    1
      #define UART_LSR_OE_LSB                                    1
      #define UART_LSR_DR_BITS                                   0:0
      #define UART_LSR_DR_SET                                    0x00000001
      #define UART_LSR_DR_CLR                                    0xfffffffe
      #define UART_LSR_DR_MSB                                    0
      #define UART_LSR_DR_LSB                                    0
#define UART_MSR                                                 HW_REGISTER_RW( 0x7e201018 ) 
   #define UART_MSR_MASK                                         0x000000ff
   #define UART_MSR_WIDTH                                        8
   #define UART_MSR_RESET                                        0000000000
      #define UART_MSR_DCD_BITS                                  7:7
      #define UART_MSR_DCD_SET                                   0x00000080
      #define UART_MSR_DCD_CLR                                   0xffffff7f
      #define UART_MSR_DCD_MSB                                   7
      #define UART_MSR_DCD_LSB                                   7
      #define UART_MSR_RI_BITS                                   6:6
      #define UART_MSR_RI_SET                                    0x00000040
      #define UART_MSR_RI_CLR                                    0xffffffbf
      #define UART_MSR_RI_MSB                                    6
      #define UART_MSR_RI_LSB                                    6
      #define UART_MSR_DSR_BITS                                  5:5
      #define UART_MSR_DSR_SET                                   0x00000020
      #define UART_MSR_DSR_CLR                                   0xffffffdf
      #define UART_MSR_DSR_MSB                                   5
      #define UART_MSR_DSR_LSB                                   5
      #define UART_MSR_CTS_BITS                                  4:4
      #define UART_MSR_CTS_SET                                   0x00000010
      #define UART_MSR_CTS_CLR                                   0xffffffef
      #define UART_MSR_CTS_MSB                                   4
      #define UART_MSR_CTS_LSB                                   4
      #define UART_MSR_DDCD_BITS                                 3:3
      #define UART_MSR_DDCD_SET                                  0x00000008
      #define UART_MSR_DDCD_CLR                                  0xfffffff7
      #define UART_MSR_DDCD_MSB                                  3
      #define UART_MSR_DDCD_LSB                                  3
      #define UART_MSR_TERI_BITS                                 2:2
      #define UART_MSR_TERI_SET                                  0x00000004
      #define UART_MSR_TERI_CLR                                  0xfffffffb
      #define UART_MSR_TERI_MSB                                  2
      #define UART_MSR_TERI_LSB                                  2
      #define UART_MSR_DDSR_BITS                                 1:1
      #define UART_MSR_DDSR_SET                                  0x00000002
      #define UART_MSR_DDSR_CLR                                  0xfffffffd
      #define UART_MSR_DDSR_MSB                                  1
      #define UART_MSR_DDSR_LSB                                  1
      #define UART_MSR_DCTS_BITS                                 0:0
      #define UART_MSR_DCTS_SET                                  0x00000001
      #define UART_MSR_DCTS_CLR                                  0xfffffffe
      #define UART_MSR_DCTS_MSB                                  0
      #define UART_MSR_DCTS_LSB                                  0
#define UART_SCR                                                 HW_REGISTER_RW( 0x7e20101c ) 
   #define UART_SCR_MASK                                         0x000000ff
   #define UART_SCR_WIDTH                                        8
   #define UART_SCR_RESET                                        0000000000
#define UART_EN                                                  HW_REGISTER_RW( 0x7e201020 ) 
   #define UART_EN_MASK                                          0x00000002
   #define UART_EN_WIDTH                                         2
   #define UART_EN_RESET                                         0000000000
