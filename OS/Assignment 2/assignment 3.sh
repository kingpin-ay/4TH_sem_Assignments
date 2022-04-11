echo "Enter 6 numbers : "
read num1 num2 num3 num4 num5 num6

result=`expr $num1 + $num2 + $num3 + $num4 + $num5 + $num6`
avg=`expr $result / 6`


echo "The avarage is $avg"

