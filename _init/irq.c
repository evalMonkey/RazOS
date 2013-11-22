
//-------------------------------------------------------------------------
//-------------------------------------------------------------------------

// IRQ should handle all of the hardware interrupts other than timer


//------------------------------------------------------------------------
volatile unsigned int irq_counter;
//-------------------------------------------------------------------------

void c_irq_handler ( void )
{
    irq_counter++;
    PUT32(CS,2);
}

