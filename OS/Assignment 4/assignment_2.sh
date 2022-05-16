for (( i=0; i < $1; i++ ))
do
    echo -n "Enter a value: "
    read arr[$i]
done
for (( i=1; i < $1; i++ ))
do
    for (( j=0; j < $1-i; j++ ))
    do
        if [ ${arr[$j]} -gt ${arr[`expr $j + 1`]} ]
        then
            t=${arr[$j]}
            arr[$j]=${arr[`expr $j + 1`]}
            arr[`expr $j + 1`]=$t

        fi  
    
    done
done
echo "The third largest value is:" ${arr[`expr $1 - 3`]} 