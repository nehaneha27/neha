BEGIN{
FS="|"  
printf"------------------EMPLOYEE DETAILS---------------------"
printf"\nSl.no\tEId\tEname\t\t\tDesign\t\tBsal\tDA\tHRA\tGsal"

}

{
SN++
if($4<10000){
da=0.45*$4
hra=0.15*$4
}
else{
da=0.50*$4
hra=0.20*$4
}
gs=s=$4+da+hra
printf("\n%3d\t%4d\t%-21s\t%-12s\t%5d\%5d\t%5d\t%5d",SN,$1,$2,$3,$4,da,hra,gs);
tbs+=$4
thra+=hra
tda+=da
tgs+=gs
}

END{
printf("\nTotalBsal:%d\nTotalDA:%d\nTotalHRA:%d\nTotalGsal:%d",tbs,tda,thra,tgs);
}

