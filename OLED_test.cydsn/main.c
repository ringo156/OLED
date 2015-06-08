/* ========================================
 *
 * Copyright YOUR COMPANY, THE YEAR
 * All Rights Reserved
 * UNPUBLISHED, LICENSED SOFTWARE.
 *
 * CONFIDENTIAL AND PROPRIETARY INFORMATION
 * WHICH IS THE PROPERTY OF your company.
 *
 * ========================================
*/
#include <project.h>


void Write(void){
    E_Write(1);
    CyDelay(1);
    E_Write(0);
    CyDelay(1);
    return;
}
void Char_Write(uint8 a){
    OLED_1_Write(a);
    Write();
    return;
}

int main()
{
    /* Place your initialization/startup code here (e.g. MyInst_Start()) */
    uint8 i;
    i=0;
    
    
    CyGlobalIntEnable;
    /* Uncomment this line to enable global interrupts. */
    CyDelay(500);
    //display OFF
    OLED_1_Write(0x04);
    Write();
    //DC/DCコンバータ OFF
    OLED_1_Write(0x13);
    Write();
    //Function Set
    OLED_1_Write(0x38);
    Write();
    //Display OFF
    OLED_1_Write(0x04);
    Write();
    //Entry Mode Set
    OLED_1_Write(0x06);
    Write();
    //Clear Display
    OLED_1_Write(0x01);
    Write();
    //Retrun Home
    OLED_1_Write(0x02);
    Write();
    //DC/DCコンバータ ON
    OLED_1_Write(0x17);
    Write();
    //Display ON
    OLED_1_Write(0x0F);
    Write();
    
    //Write Mode
    RS_Write(1);
    Char_Write('H');
    Char_Write('e');
    Char_Write('l');
    Char_Write('l');
    Char_Write('o');
    Char_Write(' ');
    Char_Write('W');
    Char_Write('o');
    Char_Write('r');
    Char_Write('l');
    Char_Write('d');
    Char_Write('!');
    
    //制御
    RS_Write(0);
    CyDelay(1);
    //位置決め
    OLED_1_Write(0xC4);
    Write();
    //Write Mode
    RS_Write(1);
    Char_Write('A');
    
    /*
    Char_Write('H');
    Char_Write('e');
    Char_Write('l');
    Char_Write('l');
    Char_Write('o');
    Char_Write(' ');
    Char_Write('W');
    Char_Write('o');
    Char_Write('r');
    Char_Write('l');
    Char_Write('d');
    Char_Write('!');
    for(i=0;i<8;i++){
        Char_Write(' ');
    }
    Char_Write('H');
    Char_Write('e');
    Char_Write('l');
    Char_Write('l');
    Char_Write('o');
    Char_Write(' ');
    Char_Write('W');
    Char_Write('o');
    Char_Write('r');
    Char_Write('l');
    Char_Write('d');
    Char_Write('!');    
    */

    
    for(;;)
    {
        /* Place your application code here. */
     
        
        
    }
}

/* [] END OF FILE */
