echo “ Enter three number : ”
read num1 num2 num3


if(( $num1 > $num2 && $num1 > $num3))
then
	echo "$num1 is gretest number"
fi


if(($num2 > $num1 && $num2 > $num3))
then
	echo "$num2 is gretest number"
fi



if(($num3 > $num1 && $num3 > $num2))
then
	echo "$num3 is gretest number"
fi

