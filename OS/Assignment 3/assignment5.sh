echo "Enter the two number to Find GCD" 
echo "Enter the 1st number:" 
read num1 
echo "Enter the 2nd number:" 
read num2 
while [ $num2 -ne 0 ] 
do 
rem=$(( num1%num2 )) num1=$num2 num2=$rem 
done 
echo "The GCD of two numbers is:"$num1  
