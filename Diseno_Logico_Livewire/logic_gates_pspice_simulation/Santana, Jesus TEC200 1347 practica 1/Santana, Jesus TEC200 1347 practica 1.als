* Schematics Aliases *

.ALIASES
X_U3A           U3A(A=A Y=NOT PWR=$G_DPWR GND=$G_DGND )
X_U4A           U4A(A=A B=B Y=AND PWR=$G_DPWR GND=$G_DGND )
X_U1A           U1A(A=A B=B Y=NAND PWR=$G_DPWR GND=$G_DGND )
X_U5A           U5A(A=A B=B Y=OR PWR=$G_DPWR GND=$G_DGND )
X_U6A           U6A(A=A B=B Y=NOR PWR=$G_DPWR GND=$G_DGND )
X_U8A           U8A(A=XOR Y=XNOR PWR=$G_DPWR GND=$G_DGND )
X_U7A           U7A(A=A B=B Y=XOR PWR=$G_DPWR GND=$G_DGND )
U_DSTM1          DSTM1(PWR=$G_DPWR GND=$G_DGND 1=A 2=B )
R_R1            R1(1=NOR 2=$N_0001 )
V_V1            V1(+=$N_0001 -=0 )
_    _(A=A)
_    _(NOT=NOT)
_    _(B=B)
_    _(AND=AND)
_    _(NAND=NAND)
_    _(OR=OR)
_    _(NOR=NOR)
_    _(XOR=XOR)
_    _(XNOR=XNOR)
_    _($G_DPWR=$G_DPWR)
_    _($G_DGND=$G_DGND)
.ENDALIASES

