/**
  * @brief  Copy an input RGB888 buffer to output RGB888 with output offset
  * @param  pSrc: Pointer to source buffer
  * @param  pDst: Output color
  * @param  x: Start x position
  * @param  y: Start y position
  * @param  xsize: width
  * @param  ysize: height
  * @param  ColorMode: Input color mode
  * @retval None
  */

static DMA2D_HandleTypeDef hdma2d_discovery;

void CopyBuffer(uint32_t *pSrc, uint32_t *pDst, uint16_t x, uint16_t y, uint16_t xsize, uint16_t ysize)
{
  uint32_t destination = (uint32_t)pDst + (y * 768 + x) * 4;
  uint32_t source      = (uint32_t)pSrc;

  hdma2d_discovery.Instance = DMA2D;

  /*##-1- Configure the DMA2D Mode, Color Mode and output offset #############*/
  hdma2d_discovery.Init.Mode           = DMA2D_M2M;
  hdma2d_discovery.Init.ColorMode      = DMA2D_OUTPUT_ARGB8888;
  hdma2d_discovery.Init.OutputOffset   = 768 - xsize; //// CHANGE FROM 1024 TO 768 TO FIX THE HORIZONTAL STRIBE
  hdma2d_discovery.Init.AlphaInverted  = DMA2D_REGULAR_ALPHA;  /* No Output Alpha Inversion */
  hdma2d_discovery.Init.RedBlueSwap    = DMA2D_RB_REGULAR;     /* No Output Red & Blue swap */
  hdma2d_discovery.Init.BytesSwap      = DMA2D_BYTES_REGULAR;  /* Regular output byte order */
  hdma2d_discovery.Init.LineOffsetMode = DMA2D_LOM_PIXELS;     /* Pixel mode                */

  /*##-2- Foreground Configuration ###########################################*/
  hdma2d_discovery.LayerCfg[1].InputColorMode = DMA2D_INPUT_ARGB8888;
  hdma2d_discovery.LayerCfg[1].InputOffset    = 0;
  hdma2d_discovery.LayerCfg[1].AlphaMode      = DMA2D_NO_MODIF_ALPHA;
  hdma2d_discovery.LayerCfg[1].InputAlpha     = 0xFF;                /* Not used */
  hdma2d_discovery.LayerCfg[1].RedBlueSwap    = DMA2D_RB_SWAP; //DMA2D_RB_REGULAR;    /* No ForeGround Red/Blue swap */
  hdma2d_discovery.LayerCfg[1].AlphaInverted  = DMA2D_REGULAR_ALPHA; /* No ForeGround Alpha inversion */

  /* DMA2D Initialization */
  if(HAL_DMA2D_Init(&hdma2d_discovery) == HAL_OK)
  {
    if(HAL_DMA2D_ConfigLayer(&hdma2d_discovery, 1) == HAL_OK)
    {
      if (HAL_DMA2D_Start(&hdma2d_discovery, source, destination, xsize, ysize) == HAL_OK)
      {
        /* Polling For DMA transfer */
        HAL_DMA2D_PollForTransfer(&hdma2d_discovery, 10);
      }
    }
  }
}
