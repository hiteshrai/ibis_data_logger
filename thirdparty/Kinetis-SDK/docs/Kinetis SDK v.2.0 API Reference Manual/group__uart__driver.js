var group__uart__driver =
[
    [ "UART DMA Driver", "group__uart__dma__driver.html", "group__uart__dma__driver" ],
    [ "UART eDMA Driver", "group__uart__edma__driver.html", "group__uart__edma__driver" ],
    [ "uart_config_t", "group__uart__driver.html#structuart__config__t", [
      [ "baudRate_Bps", "group__uart__driver.html#acc123668836f3432c54ee6a2f6f318f1", null ],
      [ "parityMode", "group__uart__driver.html#a1a3abcf4f0f5d0a3893df14f2991aa39", null ],
      [ "enableTx", "group__uart__driver.html#a91d575902455699a312c64b564133a8d", null ],
      [ "enableRx", "group__uart__driver.html#aa045acd340fc86d70a497f49e0a95bdd", null ]
    ] ],
    [ "uart_transfer_t", "group__uart__driver.html#structuart__transfer__t", [
      [ "data", "group__uart__driver.html#af91f05b0f951836e3002f60f0575f369", null ],
      [ "dataSize", "group__uart__driver.html#a21820f8294de0d75d863b72512a7c12f", null ]
    ] ],
    [ "uart_handle_t", "group__uart__driver.html#struct__uart__handle", [
      [ "txData", "group__uart__driver.html#a046372eac11f58a16f519c0ee264ea9e", null ],
      [ "txDataSize", "group__uart__driver.html#a1e67a92b463ad328646834ea0de4d70d", null ],
      [ "txDataSizeAll", "group__uart__driver.html#a80361474eb03b3aa30d02bda82adce65", null ],
      [ "rxData", "group__uart__driver.html#a5c87354702502998d3ccca9d9bfd3069", null ],
      [ "rxDataSize", "group__uart__driver.html#a46bd84d885004806f89744ad79edd81e", null ],
      [ "rxDataSizeAll", "group__uart__driver.html#a800a05d5ea3c6240daad46f466a8fea4", null ],
      [ "rxRingBuffer", "group__uart__driver.html#afeba8b549facc329937046e734681963", null ],
      [ "rxRingBufferSize", "group__uart__driver.html#a8d6afed4b64233c959a180b66686c14c", null ],
      [ "rxRingBufferHead", "group__uart__driver.html#a85d061606b31401fb4a9d0e22e77056c", null ],
      [ "rxRingBufferTail", "group__uart__driver.html#a9f4482059188bea2603b1c07cf9cc084", null ],
      [ "callback", "group__uart__driver.html#a2ef9706e8203ba72fa1e04c48581fb0f", null ],
      [ "userData", "group__uart__driver.html#a69ce1fdb7a2f60c0ecc94c4d1b2ed6ff", null ],
      [ "txState", "group__uart__driver.html#a9fa8f119b6e0e3a7805fb25edafb1498", null ],
      [ "rxState", "group__uart__driver.html#a5aa95f3d2cb81a8bb01a11ab2cf66234", null ]
    ] ],
    [ "FSL_UART_DRIVER_VERSION", "group__uart__driver.html#ga89f9649bfe350eb7b1e53146f35d3de5", null ],
    [ "uart_transfer_callback_t", "group__uart__driver.html#gaf164fa4e12ff8a3e3f3997512001e007", null ],
    [ "_uart_status", "group__uart__driver.html#gacef40dc8e8ac174bfe40ebcbc980f84b", [
      [ "kStatus_UART_TxBusy", "group__uart__driver.html#ggacef40dc8e8ac174bfe40ebcbc980f84ba19ddee4fe5963467600028b78fb468e7", null ],
      [ "kStatus_UART_RxBusy", "group__uart__driver.html#ggacef40dc8e8ac174bfe40ebcbc980f84ba68cf23f981c4b85f82291163fbb2a5e6", null ],
      [ "kStatus_UART_TxIdle", "group__uart__driver.html#ggacef40dc8e8ac174bfe40ebcbc980f84baf36c829b1b889517bf775c0d7ce29fa6", null ],
      [ "kStatus_UART_RxIdle", "group__uart__driver.html#ggacef40dc8e8ac174bfe40ebcbc980f84bae0877b14627ed2aa8ddb2bf5b033f407", null ],
      [ "kStatus_UART_TxWatermarkTooLarge", "group__uart__driver.html#ggacef40dc8e8ac174bfe40ebcbc980f84ba765913f003819ed87b861d187bf79ab8", null ],
      [ "kStatus_UART_RxWatermarkTooLarge", "group__uart__driver.html#ggacef40dc8e8ac174bfe40ebcbc980f84ba720cefde05389830f35f6e6df6f6ac67", null ],
      [ "kStatus_UART_FlagCannotClearManually", "group__uart__driver.html#ggacef40dc8e8ac174bfe40ebcbc980f84ba5ee8e23fc9ab20cf366942751b895f54", null ],
      [ "kStatus_UART_Error", "group__uart__driver.html#ggacef40dc8e8ac174bfe40ebcbc980f84ba950972a9e2ebbaa13c92e8f5a51f785d", null ],
      [ "kStatus_UART_RxRingBufferOverrun", "group__uart__driver.html#ggacef40dc8e8ac174bfe40ebcbc980f84ba2e5b644b1e10c426af818bc78657e992", null ],
      [ "kStatus_UART_RxHardwareOverrun", "group__uart__driver.html#ggacef40dc8e8ac174bfe40ebcbc980f84bab6b1fd6c2deec25992449f5b12303a26", null ],
      [ "kStatus_UART_NoiseError", "group__uart__driver.html#ggacef40dc8e8ac174bfe40ebcbc980f84bae4ef4df9a5f756ccf1b4bf08292ec2fb", null ],
      [ "kStatus_UART_FramingError", "group__uart__driver.html#ggacef40dc8e8ac174bfe40ebcbc980f84baa7aa134f85df3d5863ca962ce1ea7ee0", null ],
      [ "kStatus_UART_ParityError", "group__uart__driver.html#ggacef40dc8e8ac174bfe40ebcbc980f84baea20b2588c38f259f1412aa7132c9ef8", null ]
    ] ],
    [ "uart_parity_mode_t", "group__uart__driver.html#ga436e5a7bdb5f24decb5bfb0c87a83ff4", [
      [ "kUART_ParityDisabled", "group__uart__driver.html#gga436e5a7bdb5f24decb5bfb0c87a83ff4a97e2feae6671a6de1126ebc2edf4606b", null ],
      [ "kUART_ParityEven", "group__uart__driver.html#gga436e5a7bdb5f24decb5bfb0c87a83ff4a9e68fe3aba46e045bee5433ed098bff0", null ],
      [ "kUART_ParityOdd", "group__uart__driver.html#gga436e5a7bdb5f24decb5bfb0c87a83ff4ae48c7fabc9babf1be626ebeb2627a54c", null ]
    ] ],
    [ "uart_stop_bit_count_t", "group__uart__driver.html#gaca4f14d23735c6afefb76cbee18e1db6", [
      [ "kUART_OneStopBit", "group__uart__driver.html#ggaca4f14d23735c6afefb76cbee18e1db6a5a8829a108d8a46abb097a36cde051a7", null ],
      [ "kUART_TwoStopBit", "group__uart__driver.html#ggaca4f14d23735c6afefb76cbee18e1db6a9704b3ae3ee851acf324eb357f75ab56", null ]
    ] ],
    [ "_uart_interrupt_enable", "group__uart__driver.html#ga700f3cd8e3800273a1591307cab6311c", [
      [ "kUART_RxActiveEdgeInterruptEnable", "group__uart__driver.html#gga700f3cd8e3800273a1591307cab6311ca71755319c216d0bdf79729c18c24cf64", null ],
      [ "kUART_TxDataRegEmptyInterruptEnable", "group__uart__driver.html#gga700f3cd8e3800273a1591307cab6311ca5a0870233f2ffa8f5ca60d80f1e3ed14", null ],
      [ "kUART_TransmissionCompleteInterruptEnable", "group__uart__driver.html#gga700f3cd8e3800273a1591307cab6311cafd337213dae85b532dfaf9a90e2e5d7b", null ],
      [ "kUART_RxDataRegFullInterruptEnable", "group__uart__driver.html#gga700f3cd8e3800273a1591307cab6311cac8a751a334e172413ab833cb0ccb01c3", null ],
      [ "kUART_IdleLineInterruptEnable", "group__uart__driver.html#gga700f3cd8e3800273a1591307cab6311ca078ea32d8587f92337a3dee495a1ceed", null ],
      [ "kUART_RxOverrunInterruptEnable", "group__uart__driver.html#gga700f3cd8e3800273a1591307cab6311ca3e85b14c1b64dbfef1d0b4b7bc39c19d", null ],
      [ "kUART_NoiseErrorInterruptEnable", "group__uart__driver.html#gga700f3cd8e3800273a1591307cab6311ca53d0fe2bb0cd90198c632f08488af4b3", null ],
      [ "kUART_FramingErrorInterruptEnable", "group__uart__driver.html#gga700f3cd8e3800273a1591307cab6311ca00a387446d0ca7fd843968eca8af22a5", null ],
      [ "kUART_ParityErrorInterruptEnable", "group__uart__driver.html#gga700f3cd8e3800273a1591307cab6311cadc2475fa65313c6f1d13b36f0443b20a", null ]
    ] ],
    [ "_uart_flags", "group__uart__driver.html#ga259a53f363288115306a45d08fc66eb8", [
      [ "kUART_TxDataRegEmptyFlag", "group__uart__driver.html#gga259a53f363288115306a45d08fc66eb8a5209c671b2f2f064dc512655387e9e1a", null ],
      [ "kUART_TransmissionCompleteFlag", "group__uart__driver.html#gga259a53f363288115306a45d08fc66eb8a4468b60b2d78c34b93c9199df9e95d3a", null ],
      [ "kUART_RxDataRegFullFlag", "group__uart__driver.html#gga259a53f363288115306a45d08fc66eb8aa86a34b2ea609eeeb63f98fea498e540", null ],
      [ "kUART_IdleLineFlag", "group__uart__driver.html#gga259a53f363288115306a45d08fc66eb8ab2fc4e1b1164ed3e3fe7e19a39029b2c", null ],
      [ "kUART_RxOverrunFlag", "group__uart__driver.html#gga259a53f363288115306a45d08fc66eb8a93d3c56466b4656dcce08d9323d7afd8", null ],
      [ "kUART_NoiseErrorFlag", "group__uart__driver.html#gga259a53f363288115306a45d08fc66eb8abd56419f102fb01c7bbc2c38f81ab360", null ],
      [ "kUART_FramingErrorFlag", "group__uart__driver.html#gga259a53f363288115306a45d08fc66eb8aade5071fa56646adcda3562051443868", null ],
      [ "kUART_ParityErrorFlag", "group__uart__driver.html#gga259a53f363288115306a45d08fc66eb8a0c92973ab1d527115fa01934c62a053d", null ],
      [ "kUART_RxActiveEdgeFlag", "group__uart__driver.html#gga259a53f363288115306a45d08fc66eb8adcfe89feb164ff5b1720312922006a7a", null ],
      [ "kUART_RxActiveFlag", "group__uart__driver.html#gga259a53f363288115306a45d08fc66eb8a7a4521cd44a3272a94784670d1bf5a0c", null ]
    ] ],
    [ "UART_Init", "group__uart__driver.html#gaa6162686a1aced16ff39c7d54d81fe5b", null ],
    [ "UART_Deinit", "group__uart__driver.html#ga3ff48bc211831be33e6fe5c50eb671a0", null ],
    [ "UART_GetDefaultConfig", "group__uart__driver.html#ga47c7c09e04a0497f4530d553e27d96c5", null ],
    [ "UART_SetBaudRate", "group__uart__driver.html#gae0482730b0d5f6b7f8d12aba1e4044e5", null ],
    [ "UART_GetStatusFlags", "group__uart__driver.html#ga28bf715678c0d3c8c3902e79455ee923", null ],
    [ "UART_ClearStatusFlags", "group__uart__driver.html#gacc4cb85534361f836edca9454a6426c6", null ],
    [ "UART_EnableInterrupts", "group__uart__driver.html#ga49ecd761481a22956e3f46285038719c", null ],
    [ "UART_DisableInterrupts", "group__uart__driver.html#ga3f24b6b9b730046a9a81918f9abe7d99", null ],
    [ "UART_GetEnabledInterrupts", "group__uart__driver.html#ga79bc0b880286ec0dc0543606fc772912", null ],
    [ "UART_EnableTx", "group__uart__driver.html#gaf2ed68f3dd6ee8a272e9afd8ebd84f93", null ],
    [ "UART_EnableRx", "group__uart__driver.html#gaa503e36c8ce82f1042ce186b9863871f", null ],
    [ "UART_WriteByte", "group__uart__driver.html#ga371d2ceda535de3a74beba5a3465fab0", null ],
    [ "UART_ReadByte", "group__uart__driver.html#ga3728011ac7906f3e03bb677b0f9cf7b4", null ],
    [ "UART_WriteBlocking", "group__uart__driver.html#gad67794d80b7ee2d3292b41af6ff1e100", null ],
    [ "UART_ReadBlocking", "group__uart__driver.html#ga39d59e8a94f1af451a0db81888596639", null ],
    [ "UART_TransferCreateHandle", "group__uart__driver.html#ga63db308c32019b7dd6c0647d618e5247", null ],
    [ "UART_TransferStartRingBuffer", "group__uart__driver.html#ga223fba584bfabd599629d5ce92f929ac", null ],
    [ "UART_TransferStopRingBuffer", "group__uart__driver.html#ga0c0bc73df49cb31dff0e903630314f5b", null ],
    [ "UART_TransferSendNonBlocking", "group__uart__driver.html#gad89afd7db1656c5aef404bb285d0dc05", null ],
    [ "UART_TransferAbortSend", "group__uart__driver.html#gaa64f9f89d8286fd3ef0736a8c40be2c2", null ],
    [ "UART_TransferGetSendCount", "group__uart__driver.html#ga071727ba05b2937ef5ad641ca7faf9c7", null ],
    [ "UART_TransferReceiveNonBlocking", "group__uart__driver.html#gaf804acde5d73ce0a5bf54b06195e1218", null ],
    [ "UART_TransferAbortReceive", "group__uart__driver.html#gacc35671622b2401545cc55cc6ae572d4", null ],
    [ "UART_TransferGetReceiveCount", "group__uart__driver.html#ga05df10f570cdca4ac2dff63b069d254e", null ],
    [ "UART_TransferHandleIRQ", "group__uart__driver.html#gadb0c4f1e5b59db3aa2261df4f5ddb48d", null ],
    [ "UART_TransferHandleErrorIRQ", "group__uart__driver.html#gafc364352e879f53138ee1107e3da0a7d", null ]
];