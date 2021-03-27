void setup() {
  // put your setup code here, to run once:
  DDRB = DDRB | B10000000;
}

void loop() {
  // put your main code here, to run repeatedly:
  asm (
    "inicio: \n\t"
    "sbi 0x05,0x07 \n\t"
    "call tiempo \n\t"
    "cbi 0x05,0x07 \n\t"
    "call tiempo \n\t"
    "jmp inicio \n\t"

    "tiempo: \n\t"
    "LDI R22, 45 \n\t"
    "LOOP_3: \n\t"
    "LDI R21, 255 \n\t"
    "LOOP_2: \n\t"
    "LDI R20, 255 \n\t"
    "LOOP_1: \n\t"
    "DEC R20 \n\t"
    "BRNE LOOP_1 \n\t"
    "DEC R21 \n\t"
    "BRNE LOOP_2 \n\t"
    "DEC R22 \n\t"
    "BRNE LOOP_3 \n\t"
    "RET \n\t"
    );
}
