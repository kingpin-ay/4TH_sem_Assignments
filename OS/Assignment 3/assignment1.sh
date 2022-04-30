echo "Enter Two numbers : " 
read a
read b
echo "Enter Choice :" 
echo "1. Addition" 
echo "2. Subtraction" 
echo "3. Multiplication" 
echo "4. Division" 
read choice 
if [ $choice -eq 1 ] 
then 
result=`expr $a + $b | bc` 
echo "Result :"$result 
elif [ $choice -eq 2 ] 
then 
result=`expr $a - $b | bc` 
echo "Result :"$result 
elif [ $choice -eq 3 ] 
then 
result=`expr $a \* $b | bc` 
echo "Result :"$result 
elif [ $choice -eq 4 ] 
then 
result=`expr "scale=2; $a / $b" | bc` 
echo "Result :"$result 
else 
echo Invalid choice... 
fi
