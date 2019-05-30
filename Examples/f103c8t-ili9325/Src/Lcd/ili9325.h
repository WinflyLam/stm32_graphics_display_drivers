#ifndef __ILI9325_H
#define __ILI9325_H

#ifdef __cplusplus
 extern "C" {
#endif

/* T�bbsz�las vagy megszak�t�sb�l t�rt�n� haszn�lat miatt az Lcd �s a Touchscreen
   egyidej� haszn�lata �sszeakad�st tud okozni (mivel k�z�s I/O er�forr�sokat haszn�l)
   Ezzel a mutex-el ki lehet z�rni az �sszeakad�st.
   Az Lcd f�ggv�nyei kiv�rj�k a Touchscreen fefejezt�t,
   a touchscreen lek�rdez�s meg nem hajtodik v�gre, ha az Lcd �ppen foglalt.
   Figyelem: Ha az Lcd priorit�sa magasabb mint a Touchscreen-�, v�gtelen ciklusba ker�lhet!
   - 0: nincs v�delem az LCD �s a touchscreen egyidej�s�g�nek kiz�r�s�ra
   - 1: van v�delem az LCD �s a touchscreen egyidej�s�g�nek kiz�r�s�ra
*/
#define  ILI9325_MULTITASK_MUTEX   0

/* Orient�cio:
   - 0: 240x320 Reset gomb fel�l (portrait)
   - 1: 320x240 Reset gomb bal oldalt (landscape)
   - 2: 240x320 Reset gomb alul (portrait)
   - 3: 320x240 Reset gomb jobb oldalt (landscape)
*/
#define  ILI9325_ORIENTATION       1

/* Color mode
   - 0: RGB565
   - 1: BRG565
*/
#define  ILI9325_COLORMODE         0

// ILI9325 Size (fizikai felbont�s, az alap�rtelmezett orient�ciora vonatkoztatva)
#define  ILI9325_LCD_PIXEL_WIDTH   240
#define  ILI9325_LCD_PIXEL_HEIGHT  320

/* LCD driver structure */
extern   LCD_DrvTypeDef   *lcd_drv;
extern   TS_DrvTypeDef    *ts_drv;

#ifdef __cplusplus
}
#endif

#endif /* __ILI9325_H */