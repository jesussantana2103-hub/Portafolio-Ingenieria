* Schematics Aliases *

.ALIASES
X_U1            U1(A=X B=Y Y=$N_0001 PWR=$G_DPWR GND=$G_DGND )
X_U5            U5(A=X B=Y Y=$N_0002 PWR=$G_DPWR GND=$G_DGND )
X_U3            U3(A=X B=Y Y=$N_0003 PWR=$G_DPWR GND=$G_DGND )
X_U4            U4(A=$N_0002 B=Cin Y=$N_0004 PWR=$G_DPWR GND=$G_DGND )
X_U2            U2(A=$N_0001 B=Cin Y=S PWR=$G_DPWR GND=$G_DGND )
X_U6            U6(A=$N_0003 B=$N_0004 Y=Cout PWR=$G_DPWR GND=$G_DGND )
U_DSTM1          DSTM1(PWR=$G_DPWR GND=$G_DGND 1=Cin 2=X 3=Y )
_    _(X=X)
_    _(Y=Y)
_    _(Cin=Cin)
_    _(S=S)
_    _(Cout=Cout)
_    _($G_DPWR=$G_DPWR)
_    _($G_DGND=$G_DGND)
.ENDALIASES

